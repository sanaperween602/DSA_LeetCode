class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int, int> nextGreater;
        stack<int> st;

       
        for (int i = 0; i < nums2.size(); i++) {
            while (!st.empty() && nums2[i] > st.top()) {
                nextGreater[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }

       
        while (!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }

       
        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(nextGreater[x]);
        }

        return ans;
    }
};