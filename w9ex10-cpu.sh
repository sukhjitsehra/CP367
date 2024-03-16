MAX=95

USE=$(grep 'cpu ' /proc/stat | awk '{usage=(($2+$4)/($2+$4+$5))*100} END {print usage}')
# The proc/stat returns the following columns:
# The meanings of the columns are as follows, from left to right:
# 2nd user: normal processes executing in user mode
# nice: niced processes executing in user mode
# 4th system: processes executing in kernel mode
# 5th idle: twiddling thumbs
# iowait: waiting for I/O to complete
# irq: servicing interrupts
# softirq: servicing softirqs

if [ {$USE} -gt "$MAX" ]; then
	echo "Percent used: $USE" | echo "Running out of CPU power"
fi
