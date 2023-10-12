#!/bin/bash
gcc -c ./*.c
ar cr liball.a
ranlib liball.a
