#/bin/bash

g++ -o ./EMBRYO ./6936_HELIX_HW*.cpp && ./EMBRYO && make && ./6936HW_exec
rm -f ./6936HW* ./*.o  ./Makefile ./EMBRYO ./*.HELIX > /dev/null
