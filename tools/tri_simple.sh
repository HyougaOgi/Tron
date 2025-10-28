#!/usr/bin/env bash
set -e

OBJ="./assets/models/bike1/bike.obj"
OUT="./assets/models/bike1/bike_triangulated.obj"

python3 ./tools/tri_obj.py "$OBJ" "$OUT"

echo "before:"
awk '/^f /{print NF-1}' "$OBJ" | sort -n | tail -1
echo "after:"
awk '/^f /{print NF-1}' "$OUT" | sort -n | tail -1

mv -f "$OUT" "$OBJ"

echo "done."
