#include<bits/stdc++.h>
using namespace std;

class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int left_max[n],right_max[n];
        long long temp,trapped=0;
        left_max[0]=arr[0];
        right_max[n-1]=arr[n-1];
        for(int i=1;i<n;i++)
        {
            left_max[i]=max(left_max[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right_max[i]=max(right_max[i+1],arr[i]);
        }
        
        for(int i=1;i<n-1;i++)
        {
            temp=min(left_max[i],right_max[i]);
            if(temp>arr[i])
            trapped+=temp-arr[i];
        }
        return trapped;
    }
};


int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
