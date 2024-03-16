#!/bin/bash

array1=("apple" "banana" "orange")

array2=("grape" "pineapple" "watermelon" "kiwi")
sum=$((${#array1[*]} + ${#array2[*]}))
echo "Sum of the lengths of the arrays: $sum"
