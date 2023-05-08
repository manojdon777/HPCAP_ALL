#!/bin/bash
read -p "Enter no : " a
read -p "Enter no : " b
read -p "Enter operator : " op
if [[ $op == "+" ]];then
	expr $a + $b
fi
