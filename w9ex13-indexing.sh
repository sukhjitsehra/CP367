#!/bin/bash

my_array=("apple" "banana" "orange" "grape" "pineapple")

if [ $# -eq 0 ]; then
    echo "Usage: $0 <index>"
    exit 1
fi

index=$1

if [ $index -ge ${#my_array[*]} ] || [ $index -lt 0 ]; then
    echo "Invalid index. Please provide a valid index within the range [0, ${#my_array[*]}-1]."
    exit 1
fi

echo "Element at index $index: ${my_array[$index]}"
