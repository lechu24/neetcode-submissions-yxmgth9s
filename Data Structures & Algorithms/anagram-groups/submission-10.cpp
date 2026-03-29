class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapper;
        for(const auto&x : strs){
           vector<int> count(26,0);
            for(char a : x){
                count[a - 'a']++;
            }
            string key = to_string(count[0]);
               for(int i =0;i<26;i++){
                key+=","+to_string(count[i]);
            }
           mapper[key].push_back(x);
        }

        vector<vector<string>> ans;
        for(auto &t : mapper){
            ans.push_back(t.second);
        }
        return ans;
    }
     
};
