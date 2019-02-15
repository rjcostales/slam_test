# Using linux time to measure execution time since write useses stdout to write to disk,
# time outputs to stderr.

echo "IO Test 100MB write, read, copy & remove"

time ./write 100 > /dev/null
echo 'write null test'

time ./write 100 > test.txt
echo 'write test'

time ./read < test.txt
echo 'read test'

time cp test.txt copy.txt
echo 'copy test'

time rm test.txt copy.txt
echo 'remove test'
echo ''
