import shutil
import os
import sys
from datetime import datetime
from fileutils import *


rootdir: str = "/Users/ryanbaker/cxxsaturdays"
backupdir: str = f"/Users/ryanbaker/.cxxbackup-{datetime.now().strftime('%Y%m%d-%H%M%S')}"
parentdir: str = "/Users/ryanbaker"

n_backups: int = 2


def create_backup():
    try:
        shutil.copytree(rootdir, backupdir, dirs_exist_ok=True)
        print(f"✅ Backup completed successfully: {backupdir}")
    except Exception as e:
        print(f"❌ Backup failed: {e}")
        sys.exit(1)

    backups = sorted([d for d in os.listdir(parentdir) if d.startswith(".cxxbackup")], reverse=True)
    for old_backup in backups[n_backups:]:
        old_backup_path: str = os.path.join(parentdir, old_backup)
        try:
            shutil.rmtree(old_backup_path)
            print(f"🗑️ Removed old backup: {old_backup_path}")
        except Exception as e:
            print(f"❌ Failed to remove old backup: {e}")


if __name__ == "__main__":
    print()
    print(f"➜ Total directory size: \x1b[34m{get_directory_size(rootdir) / 1024 / 1024:.2f}MB\x1b[0m")
    print()
    create_backup()
