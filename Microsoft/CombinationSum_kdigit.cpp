//Combination Sum with a twist.---https://leetcode.com/problems/combination-sum-iii/

#include<bits/stdc++.h>
using namespace std;
 void helper(int ind,int sum,int k,int n,vector<int>&ans,vector<vector<int>>&f_ans)
    {
        if(sum==n && k==0)
        {
            f_ans.push_back(ans);
            return;
        }
        if(sum>n || k<0 )
        {
            return;
        }
        for(int i=ind;i<=9;i++)
        {
            if(i>n)
            {break;}
           ans.push_back(i); 
           helper(i+1,sum+i,k-1,n,ans,f_ans);
           ans.pop_back();

        }
        
    }
    void combinationSum3(int k, int n) {
        vector<vector<int>>f_ans;
        vector<int>ans;
        helper(1,0,k,n,ans,f_ans);
        for(int i=0;i<f_ans.size();i++)
        {
            for(int j=0;j<f_ans[i].size();j++)
            {
                cout<<f_ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
int main()
{
    combinationSum3(3,9);
}
