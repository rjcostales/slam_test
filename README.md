C Code for testing

intops  - test integer operation
fpops   - test floating point operation

mathops - test <math.h> functions

pi_archemides
semi_cir_arc
sine_area


TEST RESULTS

Raspberry Pi, Model B
gcc -Ofast -Wall -std=c11

IO Test

real	0m1.949s
user	0m1.840s
sys	0m0.100s
write null test

real	0m40.738s
user	0m1.970s
sys	0m7.500s
write test

real	0m49.395s
user	0m4.180s
sys	0m4.150s
read test

real	1m27.218s
user	0m0.080s
sys	0m12.600s
copy test

real	0m0.632s
user	0m0.000s
sys	0m0.620s
remove test

Dhrystone(1.1) time for 5000000 passes = 5
This machine benchmarks at 927643 dhrystones/second

Loops: 10000, Iterations: 1, Duration: 5 sec.
C Converted Double Precision Whetstones: 200.0 MIPS

Ops Test

./int_ops	100 - 100x100
nop	0.023776
add	0.032623
sub	0.032620
mul	0.033726
div	0.061673
mod	0.073903
and	0.032636
or	0.032631
xor	0.032614

./fp_ops	100 - 100x100
nop	0.028278
add	0.042648
sub	0.042635
mul	0.045951
div	0.073862
add sub mul	100x100X100
all	0.063765

./fibonacci(40)=102,334,155 in 331,160,281
execution time: 13.815858 secs.

./primes	found 78,498 primes less than 1,000,000
execution time: 3.543020 secs.

Math Test

./math_ops	1,000 - 1,000
nop	0.033478
sqrt	0.343197
sin	0.273564
cos	0.271130
tan	0.411035
atan	0.318679
exp	0.302731
log	0.373698
log10	0.431475

./pi_archimedes	100x10,000	3.14159265358979356009
s = 8.260932e-31
n = 3,802,951,800,684,688,204,490,109,616,128
execution time: 0.700688 secs.

./semi_cir_arc	1,000,000	3.14159265275825871910
execution time: 0.746925 secs.

./sine_area	1,000,000	2.00000000000084243723
execution time: 0.310882 secs.

Sort Test
./bubble 10000 records
execution time: 4.758148 secs.

./selection 10000 records
execution time: 4.528090 secs.

./insertion 10000 records
execution time: 1.542270 secs.

./merge 10000 records
execution time: 0.012882 secs.

./quicksort 10000 records
execution time: 0.012458 secs.
