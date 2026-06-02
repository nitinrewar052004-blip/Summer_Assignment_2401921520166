class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int num : nums) {
            if (seen.count(num) > 0) {
                return true;
            }
            // Warna usko set mein daal do
            seen.insert(num);
        }
        
        return false;
    }
};
