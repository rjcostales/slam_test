clear

echo 'write null test'
time ./write > /dev/null
echo ''

echo 'write test'
time ./write > test.txt
echo ''

echo 'read null test'
time ./read < /dev/null
echo ''

echo 'read test'
time ./read < test.txt
echo ''

echo 'copy test'
time cp test.txt copy.txt
echo ''

echo 'remove test'
time rm test.txt copy.txt
