// A C++ program to find a peak element
#include <bits/stdc++.h>
using namespace std;

// Find the peak element in the array
int findPeak(vector<int>& nums)
{
        int lb=0,ub=nums.size()-1;
        while(lb<ub)
        {
            int mid=lb+(ub-lb)/2;
            if(nums[mid]<nums[mid+1])
                lb=mid+1;
            else
                ub=mid;
            
        }
        return lb;
}

// Driver Code
int main()
{
  	int n,elem;
  	cout<<"Enter the size of array  :";
  	cin>>n;
  	cout<<"\nEnter the elements of the array :";
	vector<int> arr;
  	for(int i=0;i<n;i++)
  	{
  		cin>>elem;
      	arr.push_back(elem);
	}
	cout << "Index of a peak point is " << findPeak(arr);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
