while true;do
   read -p "input : " var
   case $var in
      1)
         echo "one"
         ;;
      2)
         echo "two"
         ;;
      3)
         echo "three"
         ;;
      4)
         echo "break"
         break
         ;;
      *)
         echo "Default"
      esac
done