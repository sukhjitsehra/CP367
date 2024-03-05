#!/bin/bash
echo "Hello $USER! Welcome to the process monitor script."
# Count the number of running processes
num_processes=$(ps -e | wc -l)
echo "Currently, there are $num_processes processes running."
echo "Running processes List:"
ps

