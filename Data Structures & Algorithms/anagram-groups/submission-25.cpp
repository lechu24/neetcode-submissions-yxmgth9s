class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> mapper;
    for(int i =0;i<strs.size();i++){
    vector<int> val(26,0);
    for(auto& x: strs[i]){
        val[x - 'a']++;
    }
        string key = to_string(val[0]);
        for(int j = 1;j<26;j++){
            key += ',' + to_string(val[j]);
        } 
        mapper[key].push_back(strs[i]);
    }

    vector<vector<string>> res;
    for(auto& t : mapper){
        res.push_back(t.second);
    }
    return res;
    }
     
};

