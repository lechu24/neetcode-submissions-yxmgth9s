class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> keyMap;
        for(const auto& x: strs){
            vector<int> ch(26,0);
            for(char c: x){
                ch[c - 'a']++;
            }
            string key = to_string(ch[0]);
            for(int i =1;i<26;i++){
                key += ',' + to_string(ch[i]);
            }
            keyMap[key].push_back(x);
        }

        vector<vector<string>> ans;
        for(const auto& t: keyMap){
           ans.push_back(t.second);
        }
        return ans;
    }
};
