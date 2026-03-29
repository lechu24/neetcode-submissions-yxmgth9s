class Solution {
public:

    string encode(vector<string>& strs) {
       string ans;
       for(int i =0 ;i<strs.size();i++){
        ans+= to_string(strs[i].size()) + '#' + strs[i];
       }
       return ans;
    }

    vector<string> decode(string s) {
     vector<string> final_list;
     int i = 0;
     while(i<s.size()){
        int j = i;
        while(s[j]!= '#') {
            j++;
        }
        int length = stoi(s.substr(i,j-i));
        i = j+1;
        final_list.push_back(s.substr(i,length));
        i = i + length;
     }
     return final_list;
    }
};
