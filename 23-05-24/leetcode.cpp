#include<bits/stdc++.h>
using namespace std;

// 2597. The Number of Beautiful Subsets
class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        count = 0;
        explore(nums, k, 0);
        return count - 1;
    }

private:
    int count;
    unordered_map<int, int> visited;

    void explore(vector<int>& nums, int k, int index) {
        if (index == nums.size()) {
            count++;
            return;
        }

        int num = nums[index];
        //not found
        if (visited.find(num - k) == visited.end() &&
            visited.find(num + k) == visited.end()) {
            visited[num]++;
            explore(nums, k, index + 1);
            visited[num]--;
            if (visited[num] == 0) {
                visited.erase(num);
            }
        }
        //found
        explore(nums, k, index + 1);
    }
};