#!/bin/bash
function main(){
while read sub;do
    if host "$sub.$target" &> /dev/null;then
        echo "$sub.$target : Alive"
    fi
done < $wordlist
}
function help(){
    echo "-d DOMAIN: Provide domain"
    echo "-h : Print help"
}
while true;do
    case $1 in
        -d)
            target=$2
            shift
            ;;
        -f)
            wordlist=$2
            shift
            break
            ;;
        "-h"|"--help")
            help
            exit ;;
        *)  echo "Error: $1 invalid arg, use -h for help"
		    exit 127
		    ;;
    esac
shift
done
if [[ -z $target ]];then
    echo "Error: Domain required, use help"
    exit 127
fi
if [[ -z $wordlist ]];then
    echo "Error: Wordlist required, use help"
    exit 127
fi
main
