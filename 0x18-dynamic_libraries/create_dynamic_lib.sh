#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc -o liball.so -fpic -shared *.o
