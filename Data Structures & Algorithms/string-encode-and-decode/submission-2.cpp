class Solution {
public:

    string encode(vector<string>& strs) {
       string ans;
       for(int i =0 ;i<strs.size();i++){
        ans+= strs[i] + '\n';
       }
       return ans;
    }

    vector<string> decode(string s) {
     vector<string> final_list;
        string ans;
     for(int i =0;i<s.size();i++){
        if(s[i]!= '\n'){
            ans+=s[i];
        }
        else{
            final_list.push_back(ans);
             ans="";
        }
     }
     return final_list;
    }
};
