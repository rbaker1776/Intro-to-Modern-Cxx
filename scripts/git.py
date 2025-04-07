import subprocess
import sys
from backup import create_backup


rootdir = "/Users/ryanbaker/cxxsaturdays"


if __name__ == "__main__":
    create_backup()
    try:
        if len(sys.argv) >= 2:
            commit_message = sys.argv[1]
        else:
            commit_message = "automated commit"
        subprocess.run(["git", "-C", rootdir, "add", "--all", ":!*.mp4"], check=True)
        subprocess.run(["git", "-C", rootdir, "commit", "-m", commit_message], check=True)
        subprocess.run(["git", "-C", rootdir, "push"], check=True)
        print()
        print("✅ Changes committed and pushed successfully")
    except Exception as e:
        print(f"❌ Error: {e}")
