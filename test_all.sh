cd io/
make --silent clean
make
./test_io.sh
make --silent clean

cd ../math
make --silent clean
make
./dhrystone
./whetstone
./test_ops.sh
./test_math.sh
make --silent clean

cd ../sorts
make --silent clean
make
./test_sorts.sh
make --silent clean

cd ..
