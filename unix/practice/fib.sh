first=0
second=1
echo -n "$first $second "
for i in {3..4}
do
	third=$((first + second))
	echo -n "$third "
	first=$second
	second=$third
done
echo ""