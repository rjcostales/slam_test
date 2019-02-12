cd io/
make clean
make
./test_io.sh
./test_write.sh
make clean

cd ../math
make clean
make
./test_ops.sh
./primes
./test_math.sh
./dhrystone
./whetstone
make clean

cd fibonacci/
make clean
make
./test_fib.sh
make clean

cd ../../sorts
make clean
make
./test_sorts.sh
./test_merge.sh
make clean

cd ..
