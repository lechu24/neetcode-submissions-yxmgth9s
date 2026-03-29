class Solution {
public:

    string encode(vector<string>& strs) {
       string encoded_value;
       for(const auto& x: strs){
        int length = x.size();
        encoded_value += to_string(length);
        encoded_value += '#' + x;
       }
       return encoded_value;
    }

    vector<string> decode(string s) {
      vector<string> result;
      int i = 0, j=0;
      while(i<s.size()){
        j=i;
        while(s[j] != '#'){
            j++;
        }
        int length = stoi(s.substr(i,j-i));
        i = j+1;
        result.push_back(s.substr(i,length));
        i = i + length;
      }
      return result;
    }
};
