#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code herelong long int ans = 1;
		     long long int ans = 1;
         x = x % M;
        while (n) {
            if (n & 1) {
                ans = (ans * x) % M;
            }
            x = (x * x) % M;
            n = n >> 1;
        }
        return ans;
		}
};