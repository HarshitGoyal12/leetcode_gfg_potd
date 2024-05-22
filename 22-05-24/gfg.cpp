#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        double low=0,high=stations[n-1],ans=1e9;
        while(high-low>0.00001){
            double mid = low + (high-low)/2;
            int count=k;
            for(int i=1;i<stations.size();i++)
                count-=max(0,(int)(ceil)(((double)(stations[i]-stations[i-1])/mid))-1);
            if(count>=0){
                ans=mid;
                high=mid;
            }
            else
                low=mid;
        }
        return ans;

    }
};