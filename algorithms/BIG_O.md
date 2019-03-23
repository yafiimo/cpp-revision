
# Big-O Notation

Big-O notation can give an estimate of the asymptotic run time performance of an 
algorithm when the number of items grows. Asymptotic complexity referring to large
values of n. Does not measure exact run times, rather, shows the trend.

### Constant Run Time O(1)
Independent of data size

### Linear O(n)
Proportional to data size

## Linear Search
Linear search asymptotic run time of O(n), hence is dependent on the size of
the data input.

## Binary Search
Binary search has an asymptotic run time of O(log(n)). This is due to the fact
that it's search space is halved on each iteration.

## Selecting algorithm
For some large value of n, if you have to choose between linear or constant
run time algorithm, you should choose the constant run time algorithm, as it
performs better for large n.

For large data inputs which are sorted, the binary search algorithm performs better
than the linear search algorithm.