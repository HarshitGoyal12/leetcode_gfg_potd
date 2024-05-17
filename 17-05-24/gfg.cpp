#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        // code here
        //  sort(arr.begin(),arr.end());
        // int l = 0,r=1;
        // while(r < n){
        //     int diff = arr[r] - arr[l];
        //     if (diff == x && l != r) return 1; // Ensure l != r
        //     else if (diff < x) r++;
        //     else l++;
        //     if (l == r) r++;
        // }
        // return -1;

        //method 2
         unordered_set<int>s(arr.begin(),arr.end());
        if(x==0 )
            if(s.size()==arr.size())
                return -1;
            else
                return 1;
        for(int i=0;i<n;i++)
            if(s.find(x+arr[i])!=s.end())
                return 1;
        return -1;
    }
};
