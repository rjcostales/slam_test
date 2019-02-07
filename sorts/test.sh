clear

echo "generate"
generate 25000 > data.txt

time bubble < data.txt > /dev/null
echo "bubble"

time selection < data.txt > /dev/null
echo "selection"

time insertion < data.txt > /dev/null
echo "insertion"

time merge < data.txt > /dev/null
echo "merge"

time quicksort < data.txt > /dev/null
echo "quicksort"
