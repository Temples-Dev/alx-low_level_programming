#!/bin/bash

SRC_FILES="./*.c"
LIB_NAME="liball.so"

gcc -c -fPIC $SRC_FILES
gcc -shared -o $LIB_NAME *.o

