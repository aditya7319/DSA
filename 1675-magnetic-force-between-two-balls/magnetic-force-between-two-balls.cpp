class Solution {
public:
bool isvalid(vector<int>& position, int n, int minpossibledistance, int m){
    int lastbucpos = position[0];
    int buc = 1;
    for(int i =0; i<n ; i++){
        if(position[i] - lastbucpos >= minpossibledistance){
            buc++;
            lastbucpos = position[i];
        }
        if(m == buc){
            return true;
        }
        
    }
    return false;
}
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin() ,position.end());
        int st =1;
        int ans = -1;
        int end =(  position[n-1] - position[0]);
        while(st <= end){
          int mid = st + (end - st)/2;
          if(isvalid(position ,n ,mid , m)){
            ans = mid;
            st = mid +1;

          }else{
            end = mid -1;

          }
        }
        return ans;
        
    }
};