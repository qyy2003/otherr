#!/bin/bash
i=1
while true; do
    echo -e  -n "\033[33m Example $i... \033[0m"
    if diff endpoint.out my.out; then
        echo -e "\033[32m PASSED \033[0m"
    else
        echo -e "\033[31m FAILED\033[0m"
        exit 0
    fi
    i=$(($i+1))
done

