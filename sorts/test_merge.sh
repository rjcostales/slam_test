clear

echo "5K"
generate 5000 > data.txt
time merge < data.txt > /dev/null

echo "10K"
generate 10000 > data.txt
time merge < data.txt > /dev/null

echo "15K"
generate 15000 > data.txt
time merge < data.txt > /dev/null

echo "20K"
generate 20000 > data.txt
time merge < data.txt > /dev/null
