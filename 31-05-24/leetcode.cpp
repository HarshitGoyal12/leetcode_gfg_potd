#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> singleNumber(vector<int>& nums) {
//         unordered_map<int, int> frequencyMap;
        
//         for (int num : nums) {
//             frequencyMap[num]++;
//         }
        
//         vector<int> result;
//         for (const auto& entry : frequencyMap) {
//             if (entry.second == 1) {
//                 result.push_back(entry.first);
//             }
//         }
        
//         return result;

        //solution 2

        class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xor2no = 0;
        for (int num : nums) {
            xor2no ^= num;
        }

        unsigned int lowestBit = xor2no & -(unsigned int)xor2no;

        vector<int> result(2, 0);
        for (int num : nums) {
            if ((lowestBit & num) == 0) {
                result[0] ^= num;
            } else {
                result[1] ^= num;
            }
        }

        return result;
    }
};
   