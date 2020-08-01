#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[0;33m'
NC='\033[0m' # No Color

if [ $1 ]
then 
    g++ $1.cpp -o $1.out &&
    printf "${RED}run${NC} ${YELLOW}$1${NC}.cpp\n" &&
    echo "-----------------------"
    ./$1.out &&
    printf "\n${GREEN}over${NC}\n"
fi