import subprocess
import sys
from backup import create_backup


rootdir = "/Users/ryanbaker/cxxsaturdays"


if __name__ == "__main__":
    if input("Would you like to create a local backup? [y/n] ") in "yY":
        create_backup()

    try:
        if len(sys.argv) >= 2:
            commit_message = sys.argv[1]
        else:
            commit_message = input("Enter a commit message: ") 

        subprocess.run(["git", "-C", rootdir, "add", "--all", ":!*.mp4"], check=True)
        subprocess.run(["git", "-C", rootdir, "commit", "-m", commit_message], check=True)
        subprocess.run(["git", "-C", rootdir, "push"], check=True)

        print()
        print("✅ Changes committed and pushed successfully")
    except Exception as e:
        print(f"❌ Error: {e}")
