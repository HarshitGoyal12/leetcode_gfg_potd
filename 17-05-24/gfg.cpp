#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
        code here
         sort(arr.begin(),arr.end());
        int l = 0,r=1;
        while(r < n){
            int diff = arr[r] - arr[l];
            if (diff == x && l != r) return 1; // Ensure l != r
            else if (diff < x) r++;
            else l++;
            if (l == r) r++;
        }
        return -1;
    }
};
