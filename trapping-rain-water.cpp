class Solution {
public:
    int trap(vector<int>& height) {
        // Optimal Approach
        
        int ans=0;
        int n = height.size();
        int low=0, high = n-1;
        int l_max=0, h_max=0;
        
        while(low<=high) {
            if(height[low]<=height[high]) {
                
               if(height[low]>=l_max)
                    l_max = height[low];
                else 
                    ans+= l_max - height[low];
                    low++;             
            }
            else {
                if(height[high]>=h_max) 
                    h_max = height[high];
                else 
                    ans+= h_max - height[high];
                    high--;
                } 
        }        
        return ans;     
    }
};
