# Using linux time to measure execution time since write useses stdout to write to disk,
# time outputs to stderr.

echo "IO Test"

time ./write > /dev/null
echo 'write null test'

time ./write > test.txt
echo 'write test'

time ./read < test.txt
echo 'read test'

time cp test.txt copy.txt
echo 'copy test'

time rm test.txt copy.txt
echo 'remove test'
echo ''
