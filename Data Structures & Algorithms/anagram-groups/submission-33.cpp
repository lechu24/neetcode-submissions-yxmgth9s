class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> bucket;
        for(auto& s: strs){
            vector<char> ch(26,0);
            for(auto& c: s){
                ch[c - 'a']++;
            }
            string key = to_string(ch[0]);
            for(int i = 1;i < 26 ;i++){
                key += ',' + to_string(ch[i]);
            }
            bucket[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(auto& t : bucket){
            ans.push_back(t.second);
        }
        return ans;
    }
};
