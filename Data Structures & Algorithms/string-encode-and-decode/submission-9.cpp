class Solution {
public:

    string encode(vector<string>& strs) {
      string ans;
      for(int i =0;i<strs.size();i++){
        int len = strs[i].size();
        ans += to_string(len) + "#" + strs[i];       
      }
      return ans;
    }

    vector<string> decode(string s) {
      int i= 0,j = 0;
      int len = s.size();
      vector<string> ans;
      while(i<len){
        j=i;
        while(s[j] != '#'){
            j++;
        }
        int leng = stoi(s.substr(i,j-i));
        i = j+1;
        ans.push_back(s.substr(i,leng));
        i = i + leng;  
      }
      return ans;
    }
};
