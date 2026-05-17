class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;

        for(int num : nums){
            mp[num]++;
        }

        vector<pair<int , int>> freqArr;

        for(auto &p : mp){
            freqArr.push_back({p.second, p.first}); // {freq, ele}
        }

        sort(freqArr.rbegin(), freqArr.rend()); // sorting according to highest freq first

        for(int i = 0; i < k; i++){
            res.push_back(freqArr[i].second);
        }
        
        return res;
    }
};
