class Solution {
public:

    string encode(vector<string>& strs) {
   string s;
   for(int i =0;i<strs.size();i++){
    s+=to_string(strs[i].size()) + "#" + strs[i];
   }
   return s;
    }

    vector<string> decode(string s) {
     vector<string> ans;
     int i = 0;
     int j;
     while(i<s.size()){
        j = i;
        while(s[j] != '#'){
            j++;
        }
        int len = stoi(s.substr(i,j-i));
        i = j + 1;
        string sub = s.substr(i,len);
        i = i + len;
        ans.push_back(sub);
     }
     return ans;
    }
};
