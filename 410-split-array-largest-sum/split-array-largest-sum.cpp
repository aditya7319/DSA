class Solution {
public:
    
        bool isvalid(vector<int>& nums ,int k, int maxallowedpages ,int n){
    int student = 1;
    int pages = 0;
    for( int i=0 ; i<n ;i++){
        if(nums[i] > maxallowedpages){
        return false;
        }
        if(pages + nums[i] <= maxallowedpages){
            pages+= nums[i];
        }
        else{
            student++;
            pages = nums[i];
        }
    }
    return student > k ? false :true;
 }
    int splitArray(vector<int>& nums, int k ) {
        int n = nums.size();
        if(k >n){
          return -1;
        }
        int sum = 0;
       
       for(int i =0; i < n ;i++){
        sum += nums[i];
       }
       int st = 0;
       int end = sum;
       int ans = -1;
       while(st <= end){
        int mid = st +(end - st)/2;
        if(isvalid(nums ,k ,mid ,n)){
            ans = mid;
            end = mid -1;
        }
        else{
            st = mid +1;
        }
       }
       return ans;
    }
};