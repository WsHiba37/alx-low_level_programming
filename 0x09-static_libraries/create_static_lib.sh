#!/bin/bash
gcc -c *.c $(basename *.c .c).o
ar rc liball.a *.o 
