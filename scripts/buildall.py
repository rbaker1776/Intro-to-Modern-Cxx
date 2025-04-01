import os 
import sys
import subprocess
from backup import create_backup
from fileutils import *
from pathlib import Path


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

def build_all():
    n_jobs: int = len(os.listdir(rootdir + "/chapters"))
    print()
    print("=================================================================")
    print("  Job  Chapter                     Status                        ")
    print("-----------------------------------------------------------------")

    for i, chapter in enumerate(os.listdir(rootdir + "/chapters")):
        chapter_path = os.path.join(rootdir, "chapters", chapter)
        assert(os.path.isdir(chapter_path))
        try:
            print(f"  {i:>3}  {chapter:<26}  ", end='')
            result = subprocess.run(build_command(chapter), shell=True, cwd=chapter_path, capture_output=True, text=True)
            if (result.returncode == 0):
                #clean_build_dir(os.path.join(chapter_path, "build"))
                print("✅ TeX compiled successfully")
            else:
                print("❌ TeX compilation failed")
        except Exception as e:
            print(e) 
            sys.exit(1)

    print("-----------------------------------------------------------------")


if __name__ == "__main__":
    create_backup()
    build_all()
    print()
    print(f"➜ Total directory size: \x1b[34m{get_directory_size(rootdir) / 1024 / 1024:.2f}MB\x1b[0m")
    print()

