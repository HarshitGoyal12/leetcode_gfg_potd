#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int swapNibbles(int n) {
        // code here
         int fn=n>>4;

        int sn=n&15;

        return (sn<<4) | fn;
    }
};