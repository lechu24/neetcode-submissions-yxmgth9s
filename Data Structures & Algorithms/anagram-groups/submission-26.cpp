class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mapper;
        for(const auto& str: strs){
            vector<int>charac(26,0);
            for(const char c: str){
                charac[c - 'a']++;
            }
            string key = to_string(charac[0]);
            for(int i = 1;i<26;i++){
                key += ',' + to_string(charac[i]);
            }
            mapper[key].push_back(str);
        }
        for(const auto& t: mapper){
                ans.push_back(t.second);
        }
        return ans;
    }
};
