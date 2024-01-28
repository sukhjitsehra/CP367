# Compiling the C program to create a.out
gcc print_input.c -o print_input

# The use of << HERE directs everything until the next occurrence of HERE as 
# input to ./print_input. The program print_input read the standard input, processes it, 
# and  then we redirect its standard output to out1.txt

./print_input > out1.txt << HERE
first line of data
second line of data
...
last line of data
HERE
