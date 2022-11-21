#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int height[n];
    int stored_water = 0;

    for (int j=0; j<n; j++){
        cin >> height[j];
    }

    for (int j=1; j<n-1; j++){
        int left_max = height[j];
        int right_max = height[j];

        for (int k=0; k<j; k++){
            left_max = max(left_max,height[k]);
        }

        for (int k=j+1; k<=n-1; k++){
            right_max = max(right_max,height[k]);
        }

        stored_water += min(left_max,right_max) - height[j];
    }

    cout << "Stored water = " << stored_water << endl;

    return 0;
}
