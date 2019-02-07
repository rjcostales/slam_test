clear

generate 5000 > data.txt
time merge < data.txt > /dev/null
echo "5K"

generate 10000 > data.txt
time merge < data.txt > /dev/null
echo "10K"

generate 15000 > data.txt
time merge < data.txt > /dev/null
echo "15K"

generate 20000 > data.txt
time merge < data.txt > /dev/null
echo "20K"

generate 25000 > data.txt
time merge < data.txt > /dev/null
echo "25K"

generate 30000 > data.txt
time merge < data.txt > /dev/null
echo "30K"

generate 35000 > data.txt
time merge < data.txt > /dev/null
echo "35K"

generate 40000 > data.txt
time merge < data.txt > /dev/null
echo "40K"

generate 45000 > data.txt
time merge < data.txt > /dev/null
echo "45K"

generate 49999 > data.txt
time merge < data.txt > /dev/null
echo "50K"
