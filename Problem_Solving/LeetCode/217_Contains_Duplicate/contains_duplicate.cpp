#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
/**
 * Function to check if there are any duplicate elements in the array.
 * 
 * @param nums A vector of integers
 * @return     true if duplicates are found, false otherwise
 */

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> set;

    for(auto i: nums)
    {
        if(set.count(i))
        {
            return true;
        }
        set.insert(i);
    }
    
    return false;
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    cout << containsDuplicate(nums) << endl; // Output: 0 (false)

    nums = {1,2,3,4,5,6,7,8,9,10,1};
    cout << containsDuplicate(nums) << endl; // Output: 1 (true)

    return 0;
}

/*
    * Time Complexity: O(n) - where n is the number of elements in the array.
    * Space Complexity: O(n) - for the unordered_set to store unique elements.
*/