cd io/
make --silent clean
make --silent
./test_io.sh
# ./test_write.sh
make --silent clean

cd ../math
make --silent clean
make --silent
./test_ops.sh
./test_math.sh
./dhrystone
./whetstone
make --silent clean

cd fibonacci/
make --silent clean
make --silent
./test_fib.sh
make --silent clean

cd ../../sorts
make --silent clean
make --silent
./test_sorts.sh
# ./test_merge.sh
make --silent clean

cd ..
