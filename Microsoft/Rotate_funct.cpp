//******ques.
//https://leetcode.com/problems/rotate-function/

#include<bits/stdc++.h>
using namespace std;

int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        int max_sum=INT_MIN;
        int sum=0;
        int f=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            f+=i*nums[i];
        }
         max_sum=f;
        for(int i=n-1;i>=1;i--)
        {
            f=f+sum-(n*nums[i]);
            max_sum=max(max_sum,f);
        }
        return max_sum;
        
    }
int main()
{
    vector<int>nums={4,3,2,6};
    cout<<maxRotateFunction(nums);
}