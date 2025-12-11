class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        while(start<end)
        {
            swap(nums[start],nums[end]);
            start++;
            end--;
        }
        k = k % n;
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

    }
};

