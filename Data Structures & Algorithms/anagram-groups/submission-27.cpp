class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto& x: strs){
            vector<int> s(26,0);
            for(char c : x){
                s[c - 'a']++;
            }
            string t = to_string(s[0]);
            for(int i = 1;i<26;i++){
                t += ',' + to_string(s[i]);
            }
            res[t].push_back(x);
        }
        vector<vector<string>> ans;
        for(const auto& arr : res){
                ans.push_back(arr.second);
        }
        return ans;
    }
};
