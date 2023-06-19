#!/bin/bash
for file in *.c; do
    gcc -c "$file" -fpic
done
gcc *.o -shared -o liball.so
