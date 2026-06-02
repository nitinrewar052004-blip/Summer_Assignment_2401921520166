class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
      
        long long s = 0;
        for(int i = 0; i < k; i++) {
            s += nums[i];
        }
        
        long long mx = s;
        
        //using Sliding window
        for(int i = k; i < n; i++) {
            s += nums[i] - nums[i - k];
            if(s > mx) {
                mx = s;
            }
        }
      
        return (double)mx / k;
    }
};
