class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int num : nums) {
            // Agar number pehle se set mein hai, toh duplicate mil gaya
            if (seen.count(num) > 0) {
                return true;
            }
            // Warna usko set mein daal do
            seen.insert(num);
        }
        
        return false;
    }
};
