#!/bin/bash
wget -P .. https://raw.githubusercontent.com/montybasquiart/alx-low_level_programming/master/0x18-dynamic_libraries/lib_gigamillions.so 
export LD_PRELOAD="$PWD/../lib_gigamillions.so"
