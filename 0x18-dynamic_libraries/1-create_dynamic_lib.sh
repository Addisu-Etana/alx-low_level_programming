#!/bin/bash
gcc gcc -Wall -pedantic -Werror -pedantic -c -fpic *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
