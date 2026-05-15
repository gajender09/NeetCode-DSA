class Solution {
   public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz = nums.size();
        int n = sz;
        nums.resize(2 * n);

        for (int i = 0; i < sz; i++) {
            nums[n++] = nums[i];
        }

        return nums;
    }
};