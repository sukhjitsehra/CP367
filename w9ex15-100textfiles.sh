#!/bin/bash

# cd /path/to/directory

# echo "Creating 100 files..."

# touch file{001..100}.txt

# echo "Removing 100 files..."

# rm file{001..100}.txt

for code in $(ls)
do
    echo "$code is a bash script"
done