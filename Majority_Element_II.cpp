/*229. Majority Element II  (5-OCT-2023)
Solved
Medium
Topics
Companies
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
 

Constraints:

1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109*/

/*Intuition
The code you've provided is intended to find the majority elements in an array, where majority elements are defined as elements that appear more than n/3 times in the given array (n is the length of the array). Your code uses a hash map to count the occurrences of each element and then checks if the count is greater than n/3 for each element.

Approach
1-Initialize two unordered maps: map to count the occurrences of each element in the array, and occurred to keep track of which elements have been processed.

2-Iterate through the input array nums and update the count of each element in the map.

3-Iterate through the elements in the map, where it represents a key-value pair (element-count) in the map.

4-For each element in the map, check if the count is greater than
n/3. If it is, add the element to the ans vector.

5-Return the ans vector containing all the elements that meet the majority condition.

Complexity
Time complexity:
O(N)
Space complexity:
O(N)*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
        int n =nums.size();
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        //using iterator helps us to save space as not using iterators will result in using 
        //another hashmap just to keep check that the value we are using has not already 
        //came in ans vector
        for(auto it :  map){
        int val =  it.first;
        int count = it.second;    
            if(count>(n/3) ){
                ans.push_back(val);
                
            }
        }
        return ans;
    }
};
