class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() -1;
        int maxwater = 0;
        while(lp< rp){
             int wt = rp -lp;
            int ht = min(height[lp] ,height[rp]);
           
            int currwater = wt * ht ;
            maxwater = max(maxwater , currwater);
            height[lp] < height [rp] ? lp++ : rp-- ;

        }
        return maxwater;

        
    }
};