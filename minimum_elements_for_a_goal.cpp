/*You are given an integer array nums and two integers limit and goal. The array nums has an interesting property that abs(nums[i]) <= limit.

Return the minimum number of elements you need to add to make the sum of the array equal to goal. The array must maintain its property that abs(nums[i]) <= limit.

Note that abs(x) equals x if x >= 0, and -x otherwise.

 

Example 1:

Input: nums = [1,-1,1], limit = 3, goal = -4
Output: 2
Explanation: You can add -2 and -3, then the sum of the array will be 1 - 1 + 1 - 2 - 3 = -4.

  
Example 2:

Input: nums = [1,-10,9,1], limit = 100, goal = 0
Output: 1
*/
  
  
  
class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long s=0;
        for(int v: nums)
            s+= v;
        long need= abs(s-goal);
        return int((need+ limit-1)/limit);
    }
};
