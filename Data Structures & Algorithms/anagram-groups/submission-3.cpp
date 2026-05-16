class Solution {
   public:
    string getKey(string& s) {
        vector<int> count(26, 0);
        string res = "";

        for (char c : s) {
            count[c - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            res += to_string(count[i]) + '#';
        }

        return res;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;

        for (string s : strs) {
            string key = getKey(s);
            mp[key].push_back(s);
        }

        for (auto& p : mp) {
            result.push_back(p.second);
        }

        return result;
    }
};
