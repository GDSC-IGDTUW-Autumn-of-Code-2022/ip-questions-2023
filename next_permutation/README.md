# Problem Statement: 
Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

# Example:-

Input format: Arr[] = {1,3,2}

Output: Arr[] = {2,1,3}

Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. 
So, the next permutation just after {1,3,2} is {2,1,3}.

# Approach:-
Step 1: Traverse in an array from backward such that ith index element of the array is less than (i+1)th index element.
Store that index in some variable.

Step 2: If the index value received from step 1 is less than 0. This means the given input array is the largest lexicographical permutation.
Hence, we will reverse the input array .

Step 3:Linearly traverse array from backward. Find an index that has a value greater than the previously found index.
Store index is another variable.

Step 4: Swap values present in indices found in the above two steps.

Step 5: Reverse array from index+1 where the index is found at step 1 till the end of the array.
we will get desired array .

# Time complexity=O(N)
