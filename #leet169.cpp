class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;

        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] == candidate) {
                ++count;  
            } else {
                --count;   
                if (count == 0) {
                    candidate = nums[i]; 
                    count = 1;
                }
            }
        }
        return candidate;
    }
};
