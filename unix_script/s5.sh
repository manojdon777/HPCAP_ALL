#!/bin/bash
read -p "File name : " FILE
if [[ -f $FILE ]]
then
	if [[ -r $FILE ]]
	then
		echo "$FILE is readable"
	fi
fi
