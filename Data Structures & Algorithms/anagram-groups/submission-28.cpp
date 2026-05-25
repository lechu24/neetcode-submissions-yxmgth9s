class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> mapper;
        for(const auto& s: strs){
            vector<char> c(26,0);
            for(char ch : s){
                c[ch - 'a']++;
            }
            string key = to_string(c[0]);
            for(int i = 1;i<26;i++){
                key+= ',' + to_string(c[i]);
            }
            mapper[key].push_back(s);
        }
        for(const auto& t : mapper){
                result.push_back(t.second);
            
        }
        return result;
    }
};
