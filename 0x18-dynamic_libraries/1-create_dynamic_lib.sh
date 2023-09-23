#!/bin/bash
gcc -fpIc -c *.c
gcc -shared *.o -o liball.so
