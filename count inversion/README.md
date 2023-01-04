### Problem Statement: 
Given an array of N integers, count the inversion of the array (using merge-sort).
What is an inversion of an array? Definition: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].

### Examples

1.Input Format: N = 5, array[] = {1,2,3,4,5}

Output: 0

Explanation: we have a sorted array and the sorted array 
has 0 inversions as for i < j you will never find a pair 
such that A[j] < A[i]. More clear example: 2 has index 1 
and 5 has index 4 now 1 < 5 but 2 < 5 so this is not an 
inversion.

2.Input Format: N = 5, array[] = {5,4,3,2,1}

Output: 10

Explanation: we have a reverse sorted array and we will 
get the maximum inversions as for i < j we will always 
find a pair such that A[j] < A[i]. 
Example: 5 has index 0 and 3 has index 2 now (5,3) pair 
is inversion as 0 < 2 and 5 > 3 which will satisfy out 
conditions and for reverse sorted array we will get 
maximum inversions and that is (n)*(n-1) / 2.

For above given array there is 4 + 3 + 2 + 1 = 10 inversions.

## Approach
![pasted image 0](https://user-images.githubusercontent.com/100759293/203136409-626f5271-7d1f-497f-b6e1-3e83a4e69f06.png)

The single element is always sorted after slicing to the bottom and getting them on an element as an array. 
Before returning the merged array with sorted numbers, we will count the inversion from there.

1st condition i < j above in the image, you can see that the right element’s index is always greater, so while computing the inversion, we should take care only 2nd condition, which is if i < j then A[j] < A[i] to make a pair and add one to the count.

In the above example i < j as i is the 5’s index and j is 3’s index and (A[i] == 5) > (A[j] == 3) so we got our first inversion pair (5,3) after that merge then into one array [3,5] and return it for further computations now lets take another example:

[2,3,5] and [1,4] and count = 3. How to calculate it further? 

Compare elements in 1st array with the 2nd array’s all elements if 1’s array’s element is greater than 2’s array then we will count it as inversion pair as 1st condition for inversion will always satisfy with right arrays. 2 > [1], 3 > [1], 5 > [1,4] so we will get 4 inversion pairs from this. and total inversion pair from [5,3,2,1,4] is 7.


