#!/bin/bash

# Check if the number of arguments is less than 1
if [ "$#" -lt 1 ]; then
    echo "Usage: $0 <number> [args...]"
    exit 1
fi

# Get the first argument
first_arg=$1

# Calculate the result
result=$((first_arg * $#))

# Print the result
echo "Result: $result"
