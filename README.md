# C Code for Small Linux Arm Machine (SLAM) Testing

intops  - test integer operation
fpops   - test floating point operation

mathops - test <math.h> functions

pi_archemides
semi_cir_arc
sine_area


TEST RESULTS
Pogo Plug E02 1.2GHz, 256MB RAM, 160GB WD 2.5 HDD.
Linux pinky 4.4.169-1-ARCH #1 PREEMPT Fri Dec 28 09:00:53 UTC 2018 armv5tel GNU/Linux

Dhrystone(1.1) time for 5000000 passes = 5
This machine benchmarks at 844594 dhrystones/second

Loops: 10000, Iterations: 1, Duration: 22 sec.
C Converted Double Precision Whetstones: 45.5 MIPS

Ops Test

./int_ops	100 - 100x100
nop	0.017097
add	0.025745
sub	0.025529
mul	0.025524
div	0.054827
mod	0.070805
and	0.025512
or	0.025527
xor	0.025505

./fp_ops	100 - 100x100
nop	0.022232
add	0.107801
sub	0.117521
mul	0.100212
div	0.561797
add sub mul	100x100X100
all	0.278676

execution time: 14.252603 secs.	./fibonacci(40)=102,334,155 in 331,160,281

execution time: 3.996019 secs.	./primes found 78,498 primes less than 1,000,000

Math Test

./math_ops	1,000 - 1,000
nop	0.037859
sqrt	3.435126
sin	2.278320
cos	2.397239
tan	4.081879
atan	3.393975
exp	2.017880
log	3.196767
log10	3.493918

execution time: 6.456412 secs.	./pi_archimedes	100x10,000	3.14159265358979356009
s = 8.260932e-31
n = 3,802,951,800,684,688,204,490,109,616,128

execution time: 8.100620 secs.	./semi_cir_arc	1,000,000	3.14159265275825871910

execution time: 2.666122 secs.	./sine_area	1,000,000	2.00000000000084243723

Sort Test
execution time: 5.903675 secs.	./bubble 10000 records

execution time: 4.768779 secs.	./selection 10000 records

execution time: 3.359116 secs.	./insertion 10000 records

execution time: 0.015048 secs.	./merge 10000 records

execution time: 0.013043 secs.	./quicksort 10000 records

IO Test

real	0m3.830s
user	0m3.580s
sys	0m0.230s
write null test

real	0m34.760s
user	0m3.720s
sys	0m13.510s
write test

real	0m34.401s
user	0m5.470s
sys	0m5.670s
read test

real	1m20.714s
user	0m0.030s
sys	0m20.320s
copy test

real	0m0.964s
user	0m0.000s
sys	0m0.290s
remove test
