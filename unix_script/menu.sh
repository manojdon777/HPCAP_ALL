#!/bin/bash
while true
do
	echo -e "\tEnter choice"
	echo -e "\t1. Make a file"
	echo -e "\t2. Display"
	echo -e "\t3. Copy"
	echo -e "\t4. Rename"
	echo -e "\t5. Delete"
	echo -e "\t6. List current directory"
	echo -e "\t7. Exit"
	read -p "Choose Option : " choice
	if [[ $choice == 1 ]];then
		read -p "Enter file name : " FILE
		if [[ -e $FILE ]]
		then
			echo -e "\tFile exists"
		else
			$(cat > $FILE)
		fi
	elif [[ $choice == 2 ]];then
		read -p "Enter file name : " FILE
		if [[ -e $FILE  ]];then
			cat $FILE
		else
			echo -e "\tFile does not exists"
		fi
	elif [[ $choice == 3 ]];then
		read -p "ENter source file name to copy : " SOURCE
		if [[ -e $SOURCE ]];then
			if [[ -r $SOURCE ]];then
				read -p "Enter target file name : " TARGET
				if [[ ! -e $TARGET ]];then
					cp $SOURCE $TARGET	
					echo "File copied successfully"
				else
					echo "Target file already exists"
				fi
			fi
		else
			echo "Source file doesnt exists"
		fi
	elif [[ $choice == 4 ]];then
		read -p "Enter source file name to copy : " SOURCE
		if [[ -e $SOURCE ]];then
			if [[ -r $SOURCE ]];then
				read -p "Enter target file name : " TARGET
				if [[ ! -e $TARGET ]];then
					mv $SOURCE $TARGET	
					echo "File renamed successfully"
				else
					echo "Target file already exists"
				fi
			fi
		else
			echo "Source file doesnt exists"
		fi
	elif [[ $choice == 5 ]];then
		read -p "Enter filename to delete : " FILE
		if [[ -e $FILE  ]];then
			if [[ -w $FILE ]];then
				read -p "Are you sure to delete file?(y/n):" CONFIRM
				if [[ $CONFIRM == "y" ]];then
					rm -f $FILE
				fi
			fi
		fi
	elif [[ $choice == 6 ]];then
		ls
	elif [[ $choice == 7 ]];then
		break
	fi
done
