# check_mus_duplicates.py
import re
from collections import Counter

songs_file = "include/constants/songs.h"

with open(songs_file) as f:
    data = f.read()

mus_lines = re.findall(r"#define\s+(MUS_\w+)\s+(\d+)", data)
mus_names = [name for name, val in mus_lines]
mus_vals = [int(val) for name, val in mus_lines]

counter = Counter(mus_vals)
dupes = [val for val, count in counter.items() if count > 1]

if dupes:
    print("Duplicate numeric values found for MUS_ constants:")
    for val in dupes:
        names = [name for name, v in mus_lines if int(v) == val]
        print(f"{val}: {', '.join(names)}")
else:
    print("No numeric duplicates found!")
