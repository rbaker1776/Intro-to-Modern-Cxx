import os 
import sys
import subprocess
from backup import create_backup
from fileutils import *
from pathlib import Path
import time
from concurrent.futures import ProcessPoolExecutor, as_completed


rootdir = "/Users/ryanbaker/cxxsaturdays"


def build_command(chapter: str) -> str:
    return f"lualatex -interaction=nonstopmode --output-dir=build {chapter}.tex"

def clean_build_dir(builddir: str) -> None:
    try:
        path = Path(builddir)
        assert(path.exists() and path.is_dir())
        for file in path.iterdir():
            if file.is_file() and file.suffix.lower() not in [".pdf", ".toc"]:
                file.unlink()
    except Exception as e:
        print(e) 

def build_chapter(i: int, chapter: str) -> str:
    chapter_path = os.path.join(rootdir, "chapters", chapter)
    if not os.path.isdir(chapter_path):
        return f"  {i:>3}  {chapter:<26}  ❌ Invalid directory"

    try:
        start = time.time()
        result = subprocess.run(build_command(chapter), shell=True, cwd=chapter_path, capture_output=True, text=True)
        end = time.time()

        if (result.returncode == 0):
            return f"  {i:>3}  {chapter:<26}  ✅ TeX compiled successfully  {end - start:.2f}s"
        else:
            return f"  {i:>3}  {chapter:<26}  ❌ TeX compilation failed     {end - start:.2f}s"
    except Exception as e:
        return f"  {i:>3}  {chapter:<26}  ❌ Error: {str(e)}" 


def build_all():
    print("\n========================================================================")
    print("  Job  Chapter                     Status                        Time   ")
    print("------------------------------------------------------------------------")

    with ProcessPoolExecutor() as executor:
        future_to_chapter = {executor.submit(build_chapter, i, chapter): chapter for i, chapter in enumerate(os.listdir(rootdir + "/chapters"))}
        for future in as_completed(future_to_chapter):
            print(future.result())

    print("------------------------------------------------------------------------")


if __name__ == "__main__":
    create_backup()
    build_all()
    print()
    print(f"➜ Total directory size: \x1b[34m{get_directory_size(rootdir) / 1024 / 1024:.2f}MB\x1b[0m")
    print()

