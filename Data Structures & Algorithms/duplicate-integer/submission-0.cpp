class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        std::unordered_set<int> val;
        for(int i=0; i<nums.size(); i++) {
            val.insert(nums[i]);

            if(val.size() != i+1)
                return 1;
        }

        return 0;
    }
};
