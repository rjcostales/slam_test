clear
echo 'write test'
time ./write > test.txt

echo ''
echo 'write1 test'
time ./write1 > test1.txt

echo ''
echo 'write2 test'
time ./write2 > test2.txt

echo ''
echo 'write3 test'
time ./write3 > test3.txt

rm test1.txt test2.txt test3.txt
