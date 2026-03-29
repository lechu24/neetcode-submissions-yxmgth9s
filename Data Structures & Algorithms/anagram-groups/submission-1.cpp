class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,int> map;
        for(int k = 0 ; k<strs.size();k++){
            map[strs[k]]+=1;
        }
        for(int i=0;i<strs.size();i++){
            vector<string> initial;
            if(map[strs[i]] > 0){
            initial.push_back(strs[i]);
            map[strs[i]] -= 1;
            }
            for(int j=i+1;j<strs.size();j++){
                if(strs[i].size() == strs[j].size()){
                    string x = strs[i];
                    string y = strs[j];
                    sort(x.begin(),x.end());
                    sort(y.begin(),y.end());
                    if(x == y && map[strs[j]] > 0){
                        map[strs[j]] -= 1;
                        initial.push_back(strs[j]);
                    }
                }
        
            }
            if(initial.size()>0){
            ans.push_back(initial);
            }
        }
        return ans;
    }
};
