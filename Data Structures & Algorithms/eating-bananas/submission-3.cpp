class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // sort(piles.begin(),piles.end());
        // if(h == piles.size()){
        //     return piles[piles.size()-1];
        // }
        for(int i = 1 ;;i++){
            long long count = 0;
            for(int j = 0 ;j<piles.size();j++){
                count += (piles[j] + i - 1) / i;
            }
               if(count <= h){
                return i;
               } 
            
        }
    }
};
