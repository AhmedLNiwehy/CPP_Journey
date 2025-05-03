#include <iostream>
#include <vector>

using namespace std;

/**
 * Brute-force solution to find two indices i and j such that:
 * nums[i] + nums[j] == target.
 * This solution uses a nested loop to check all pairs of indices.
 * 
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * 
 * @param nums   A vector of integers
 * @param target The target sum to find
 * @return       A vector containing the two indices that sum to target
 */

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
    
            vector<int> result;
    
            for(int i=0; i<nums.size(); i++)
            {
                for(int y=i+1; y<nums.size(); y++)
                {
                    if(nums[i] + nums[y] == target)
                    {
                        result.push_back(i);
                        result.push_back(y);
                        break;
                    }
                }
            }
            return result;    
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