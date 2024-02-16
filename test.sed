#!/bin/sed -f

# Enclose the whole input line between < and >
s/^.*/<&>/
# Replace "William" with "Fei Bird"
s/William/Fei Bird/
# Replace "Fei" with "Ken"
s/Fei/Ken/