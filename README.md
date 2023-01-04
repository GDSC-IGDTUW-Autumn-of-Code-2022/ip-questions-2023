# TRAPPING RAIN WATER

## Problem Statement:
Given an array of N non-negative integers arr[] representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

## Approach:
* To find water stored, we iterate over the given array.
* Water can be stored if there are higher bars on the left and right of the given index.
* The amount of water stored can be calculated by finding the maximum height of bar on the left and right of the given position.
* Total amount of water stored is the sum of water at each position.

## Step 1: Enter the size of array and input the array.

    int n;
    cin >> n;

    int height[n];

    for (int j=0; j<n; j++){
        cin >> height[j];
    }
    
## Step 2: Find stored water for each index.
    
    int stored_water = 0;
    for (int j=1; j<n-1; j++){
        int left_max = height[j];
        int right_max = height[j];

### Finding maximum bar height at the left of the index i. 
        
        for (int k=0; k<j; k++){
            left_max = max(left_max,height[k]);
        }
        
### Finding maximum bar height at the right of the index i.
        
        for (int k=j+1; k<=n-1; k++){
            right_max = max(right_max,height[k]);
        }
        
### Adding stored water of the index i to the total stored water.
        
        stored_water += min(left_max,right_max) - height[j];
    }
    
## Step 3: Printing the total stored water.

    cout << "Stored water = " << stored_water << endl;
    
## Complexity:
* Time complexity : Since there ate two nested loops, TC = O(N) 
* Space complexity : Since no extra space is required, SC = O(1)
