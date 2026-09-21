class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      unordered_map<string,vector<string>> mapper;
      for(const auto& s: strs){
          vector<int> chArr(26,0);
          for(const auto& ch : s){
            chArr[ch - 'a']++;
          }
          string key = to_string(chArr[0]);
          for(int i = 1; i<26;i++){
            key += "," + to_string(chArr[i]);
          }
          mapper[key].push_back(s);
      }
      vector<vector<string>> ans;
      for(const auto& t : mapper){
            ans.push_back(t.second);
      }
      return ans;
    }
};
