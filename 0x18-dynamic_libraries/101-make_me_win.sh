#!/bin/bash
wget -P .. https://raw.githubusercontent.com/montybasquiart/alx-low_level_programming/master/0x18-dynamic_libraries/libgigamillions.so 
export LD_PRELOAD="$PWD/../libgigamillions.so"
