import os
from pathlib import Path

has_error = False

for i in Path(".").rglob("*.cpp"):
    with i.open() as f:
        for lineindex,v in enumerate(f.read().splitlines()):
            if len(v.strip()) > 5:
                if "//" not in v and "/*" not in v and "*/" not in v:
                    print(str(i) + ":" + str(lineindex + 1) + " - Missing comment")
                    has_error = True

if has_error:
    exit(1)