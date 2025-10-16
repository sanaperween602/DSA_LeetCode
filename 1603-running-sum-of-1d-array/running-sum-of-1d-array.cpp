class Solution {
public:
//tc=o(n)
//sc=o(1)
    vector<int> runningSum(vector<int>& arr) {
        int n=arr.size();
        vector<int>psum(n);
        psum[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            psum[i]=psum[i-1]+arr[i];
        }
        return psum;
    }
};