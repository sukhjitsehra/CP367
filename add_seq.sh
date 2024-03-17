#!/bin/bash

function add_seq {
	local sum=0
	for element in $@
	do
	let sum=sum+$element
	done
	echo $sum
}

add_seq 1 2 4 5 6 7 8 9 10 11 12 13 14 15
