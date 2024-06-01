#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string oddEven(string s) {
            unordered_map<char, int> mp;
        // code here  unordered_map<char, int> mp;
        
        // Count the occurrences of each character
        for (char ch : s) {
            mp[ch]++;
        }
        
        int cnt = 0;
        
        // Iterate through the map to count characters based on the conditions
        for (auto& itr : mp) {
            char ch = itr.first;
            int frequency = itr.second;
            
            // Check if the character is odd indexed (1-based index)
            if ((ch - 'a' + 1) % 2 == 1) {
                // Check if the frequency is odd
                if (frequency % 2 == 1) {
                    cnt++;
                }
            } else { // Even indexed characters
                // Check if the frequency is even
                if (frequency % 2 == 0) {
                    cnt++;
                }
            }
        }
        
        // Return "ODD" or "EVEN" based on the count
        return (cnt % 2) ? "ODD" : "EVEN";
    }
};