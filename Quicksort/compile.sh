options=$1

if [ "$#" -eq 0 ]; then
	cc -Wall -Wpedantic -Werror -Wextra *.c
	./a.out
fi

case $options in
	# check memory leaks
	"m")
		cc -g -Wall -Wpedantic -Werror -Wextra *.c
		valgrind ./a.out
		;;
	"M")
		cc -g -Wall -Wpedantic -Werror -Wextra *.c
		valgrind --leak-check=full --show-leak-kinds=all ./a.out
		;;
	# run gdb
	"d")
		cc -g -Wall -Wpedantic -Werror -Wextra *.c
		gdb ./a.out
		;;
	# remove executable
	"c")
		rm a.out
		;;
esac