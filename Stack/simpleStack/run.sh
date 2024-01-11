#!/usr/bin/bash

# default
if [ "$#" -eq 0 ]; then
    gcc -Wall -Wextra -Werror -Wpedantic *.c
    ./a.out
fi

# compile & run with options
case "$1" in
"m1")
    gcc -g -Wall -Wextra -Werror -Wpedantic *.c
    leaks -atExit -- ./a.out
    ;;
"m2")
    gcc -g -Wall -Wextra -Werror -Wpedantic *.c
    valgrind ./a.out
    ;;
"t")
    gcc -Wall -Wextra -Werror -Wpedantic *.c
    time ./a.out
    ;;
esac
