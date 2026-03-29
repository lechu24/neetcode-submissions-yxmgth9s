class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto&x : strs){
            vector<int>count(26,0);
            for(char c: x){
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i = 1;i<26;i++){
                key+=','+to_string(count[i]);
            }
            res[key].push_back(x);
        }
        vector<vector<string>> ans;
        for(const auto&t : res){
            ans.push_back(t.second);
        }
        return ans;
    }
};
