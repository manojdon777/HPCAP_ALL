#!/bin/bash
function help(){
	echo "-d DOMAIN : Provide domain name"
	echo "-h        : help"
}
function main(){
	while read sub;do
		if host "$sub.$target" &> /dev/null;then
			echo "$sub.$target : Alive"
		fi
	done < $sublist
}

case $1 in
	"-d")
		target=$2
		if [[ $3 == "-f" ]];then
			sublist=$4
		fi
		;;
	"-h")
		help
		exit
		;;
	*)
		echo "Error : $1 invalid arg, use -h for help"
		exit 127
		;;
esac
if [[ -z $target ]];then
	echo "Error: Domain required, use help"
	exit 127
fi
if [[ -z $sublist ]];then
	echo "Error: Wordlist required"
	exit 127
main
