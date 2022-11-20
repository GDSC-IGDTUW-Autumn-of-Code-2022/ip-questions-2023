for(int i=1;i<n;i++)
        {
            left_max[i]=max(left_max[i-1],arr[i]);
        }