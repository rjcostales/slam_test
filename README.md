# C Code for Small Linux Arm Machine (SLAM) Testing

* int_ops  - test integer operation
* fp_ops   - test floating point operation
* math_ops - test <math.h> functions

* fibonacci   - recursive fibonacci sequence test
* primes      - count primes between 1 - 1,000,000

* pi_archemides   - estimate pi using Archemides algorithm
* semi_cir_arc    - estimate arc of a semi cicle
* sine_area       - estimate area under a sine curve

* dhrystone       - Integer Test. See source code for notes.
* whetstone       - Floating Point Test. See source code for notes.

## TEST RESULTS
Raspberry Pi 2 w/16GB Sandisk, Class 10.

Linux mate 4.4.38-v7+ #938 SMP Thu Dec 15 15:22:21 GMT 2016 armv7l armv7l armv7l GNU/Linux

Dhrystone(1.1) time for 5000000 passes = 5
This machine benchmarks at 917431 dhrystones/second

Loops: 10000, Iterations: 1, Duration: 4 sec.
C Converted Double Precision Whetstones: 250.0 MIPS

Ops Test

./int_ops	100 - 100x100
nop	0.023736
add	0.032641
sub	0.032638
mul	0.033751
div	0.061695
mod	0.074004
and	0.032608
or	0.032641
xor	0.032634

./fp_ops	100 - 100x100
nop	0.028245
add	0.042627
sub	0.042651
mul	0.046001
div	0.073770
add sub mul	100x100X100
all	0.063795

execution time: 13.815065 secs.	./fibonacci(40)=102,334,155 in 331,160,281

execution time: 3.572736 secs.	./primes found 78,498 primes less than 1,000,000

Math Test

./math_ops	1,000 - 1,000
nop	0.033483
sqrt	0.343229
sin	0.273377
cos	0.271152
tan	0.411062
atan	0.318541
exp	0.337305
log	0.373696
log10	0.431392

execution time: 0.727838 secs.	./pi_archimedes	100x10,000	3.14159265358979356009
s = 8.260932e-31
n = 3,802,951,800,684,688,204,490,109,616,128

execution time: 0.755983 secs.	./semi_cir_arc	1,000,000	3.14159265275825871910

execution time: 0.318260 secs.	./sine_area	1,000,000	2.00000000000084243723

Sort Test
execution time: 4.821237 secs.	./bubble 10000 records

execution time: 4.125710 secs.	./selection 10000 records

execution time: 1.454559 secs.	./insertion 10000 records

execution time: 0.012970 secs.	./merge 10000 records

execution time: 0.013426 secs.	./quicksort 10000 records

IO Test

real	0m1.916s
user	0m1.750s
sys	0m0.160s
write null test

real	0m40.452s
user	0m2.180s
sys	0m7.070s
write test

real	0m48.867s
user	0m4.290s
sys	0m4.410s
read test

real	1m24.830s
user	0m0.060s
sys	0m12.590s
copy test

real	0m0.620s
user	0m0.010s
sys	0m0.600s
remove test
