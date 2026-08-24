class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapper;
        for(int i =0; i<strs.size() ; i++){
            vector<int> c(26,0);
            for(const auto& ch: strs[i]){
                c[ch - 'a']++;
            }
            string key = to_string(c[0]);

            for(int j =1;j<26;j++){
                key += "," + to_string(c[j]);
            }
            mapper[key].push_back(strs[i]);
        }
       vector<vector<string>> ans;
        for(const auto& t : mapper){
           ans.push_back(t.second);
        }
        return ans;
    }
};
