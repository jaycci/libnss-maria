#!/bin/sh
rm -rf Debug
mkdir Debug
cd Debug
cmake -D CMAKE_BUILD_TYPE=Debug ..
make && ctest --verbose
cd ..
