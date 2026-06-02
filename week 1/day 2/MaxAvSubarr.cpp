class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            // Dono lines ke beech ka distance (width)
            int width = right - left;
            
            // Paani ka level dono me se choti line decide karegi
            int h = min(height[left], height[right]);
            
            // Area calculate karke max update karo
            int current_area = width * h;
            max_water = max(max_water, current_area);
            
            // Jo line choti hai, usko aage badhao kyunki hume bada container chahiye
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }
};
