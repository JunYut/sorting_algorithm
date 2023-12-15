options=$1

cc -g -Wall -Wpedantic -Werror -Wextra *.c

if [ "$#" -eq 0 ]; then
	./a.out
fi

case $options in
	# check memory leaks
	"m")
		valgrind ./a.out
		;;
	"M")
		valgrind --leak-check=full --show-leak-kinds=all ./a.out
		;;
	"l")
		leaks -atExit -- ./a.out
		;;
	# run gdb
	"d")
		gdb ./a.out
		;;
	# remove executable
	"r")
		rm a.out
		;;
esac