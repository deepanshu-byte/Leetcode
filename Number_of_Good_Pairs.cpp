/*3 october 2023
Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.

 

Example 1:

Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
Example 2:

Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.
Example 3:

Input: nums = [1,2,3]
Output: 0

Intuition
Use hashmaps for the better time complexity or use nested loops for easy approach

Approach
Used hashmap to store the value of the array and if the value occures more than 2 time in the array increase the value of ans by key of map -1 time and in values occur only twice so increase the value only one time and return the value.

Complexity
Time complexity:
O(N)
Space complexity:
O(1)*/


class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int num = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]>2){
                num+=mp[nums[i]]-1;
                mp[nums[i]]--;
            }
            else if(mp[nums[i]]==2){
                num++;
                mp[nums[i]]--;
            }
        }
    return num;
    }
};
