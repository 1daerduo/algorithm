#!/bin/bash

DIR=$1

if [ "$DIR" == "" ]; then
    echo "please input dir name"
else
    mkdir "/home/apical-sw/share/algorithm/220628/$DIR"
    cp -rn /home/apical-sw/share/algorithm/220628/bubblesort/* /home/apical-sw/share/algorithm/220628/$DIR
fi
