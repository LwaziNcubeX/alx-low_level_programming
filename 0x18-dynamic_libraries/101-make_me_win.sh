#!/bin/bash
wget -P /tmp https://github.com/LwaziNcubeX/alx-low_level_programming/blob/main/0x18-dynamic_libraries/sixcalls.so
export LD_PRELOAD=/tmp/sixcalls.so
