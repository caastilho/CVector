#!/bin/bash

cd build
cmake ..
make

cd ..
./test
