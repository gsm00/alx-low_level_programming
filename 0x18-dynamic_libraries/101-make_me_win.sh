#!/bin/bash
wget -p /tmp https://github.com/gsm00/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
