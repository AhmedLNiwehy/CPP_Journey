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

int findDuplicate(vector<int>& nums) {
    int repeated_number = 0;
    unordered_set<int> set;

    for(auto i: nums)
    {
        if(set.count(i))
        {
            repeated_number =  i;
            break;
        }
        set.insert(i);
    }
    return repeated_number; 
}

int main()
{
    vector<int> nums = {1,3,4,2,2};
    cout << findDuplicate(nums) << endl; // Output: 2 

    nums = {3,1,3,4,2};
    cout << findDuplicate(nums) << endl; // Output: 3

    return 0;
}

/*
    * Time Complexity: O(n) - where n is the number of elements in the array.
    * Space Complexity: O(n) - for the unordered_set to store unique elements.
*/