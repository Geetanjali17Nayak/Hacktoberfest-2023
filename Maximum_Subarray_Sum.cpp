/*
Problem Statement:- Given an integer array nums, find the subarray with the largest sum, and return its sum. (Maximum subarray)

Time Complexity:-O(n)
Space Complexity:-O(1)

Approach:-  KADANE'S ALGORITHM
1)Let n be the size of given array or vector(nums here).
2)initialize a variable sum=0 and 2nd variable ans with first element of array.
3)Traverse through whole array and update sum=sum+nums[index] and ans as the maximum of sum and ans.
4)If in any case sum is negative after updating then update sum as 0.
5) After array traversal, we get maximum subarray sum in ans variable.
6)Return ans.
  */





class Solution {
public:
//kadane's algorithm
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        long int sum=0;
        long int ans=nums[0];
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
            ans=max(ans,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return ans;
        
    }
};
