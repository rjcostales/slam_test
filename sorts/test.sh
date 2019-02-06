clear
echo "bubble"
time bubble < data.txt > /dev/null

echo "selection"
time selection < data.txt > /dev/null

echo "insertion"
time insertion < data.txt > /dev/null

echo "merge"
time merge < data.txt > /dev/null

echo "quicksort"
time quicksort < data.txt > /dev/null
