class Solution {
public:
//tc=o(n^2)
//sc=o(1)
    vector<int> runningSum(vector<int>& arr) {
        int n=arr.size();
        vector<int>psum(n);
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<=i;j++)
            {
                sum+=arr[j];
            }
            psum[i]=sum;
        }
        return psum;
    }
};