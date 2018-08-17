cat "$1" | grep -i "^nicolas.bauer" | grep "...-.*" | sed 's/.*	\(.*-.*\)	.*/\1/'
