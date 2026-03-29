class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string,vector<pair<int,string>>> keyStore;
    void set(string key, string value, int timestamp) {
        keyStore[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        auto& value = keyStore[key];
        int l=0, r = value.size()-1, mid = 0;
        string res = "";
        while(l<=r){
             mid = (r-l)/2 + l;
            if(value[mid].first <= timestamp){
                res = value[mid].second;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return res;
    }
};
