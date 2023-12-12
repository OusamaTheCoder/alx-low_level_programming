#!/bin/bash
wget -P /tmp https://github.com/OusamaTheCoder/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lib_giga.so
export LD_PRELOAD="$PWD/../lib_giga.so"
