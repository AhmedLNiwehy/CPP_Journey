#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * Optimized solution to find two indices i and j such that:
 * nums[i] + nums[j] == target.
 * This solution uses a hash map to store the indices of the elements.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(n)
 * 
 * @param nums   A vector of integers
 * @param target The target sum to find
 * @return       A vector containing the two indices that sum to target
 */

 class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
    
            unordered_map<int, int> mp;
    
            for(int i=0; i<nums.size(); i++)
            {
                int complement = target - nums[i];
                if(mp.count(complement))
                {
                    return {mp[complement] , i};
                }
                mp[nums[i]] = i;
            }
    
            return {};  // Return an empty vector if no solution is found
        }
};

int main()
{
    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 9;


    vector<int> result = sol.twoSum(nums , target);

    for(auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}