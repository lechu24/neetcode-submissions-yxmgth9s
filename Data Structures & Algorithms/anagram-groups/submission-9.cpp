class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mapper;
        for(auto &x : strs){
            unordered_map<char,int> charmap;
            //  vector<int>count(26,0);
            for(char &a: x){
                charmap[a - 'a']++;
            }
            string key = to_string(charmap[0]);
            // for(int i =0;i<x.size();i++){
               for(int i =0;i<26;i++){
                // key = to_string(charmap[0]);
                key+=","+to_string(charmap[i]);
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
