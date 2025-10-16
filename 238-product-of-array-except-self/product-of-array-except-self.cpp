class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        int nonzero=1;
        int product=1;
        int zero=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            zero++;
            if(nums[i]!=0)
            nonzero*=nums[i];
           product*=nums[i];
            
        }
        vector<int>ans(n);
      for(int i=0;i<n;i++)
      {
        if(nums[i]==0)
        {
            if(zero>1)
            {
            ans[i]=0;
            }
            else
            {
            ans[i]=nonzero;
            }
        }
        else if(nums[i]!=0)
        ans[i]=product/nums[i];
     
      }
      return ans;
    }
};