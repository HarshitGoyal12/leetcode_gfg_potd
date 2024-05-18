// Find the Highest number

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
          int maxi = *max_element(a.begin(),a.end());
        return maxi;
    }
};