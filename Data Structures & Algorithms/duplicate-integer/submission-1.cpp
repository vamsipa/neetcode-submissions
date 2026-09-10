class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> seen_set;
        for(int i=0; i<nums.size(); i++ ) {
            if(seen_set.count(nums[i]))
                return 1;
            else
                seen_set.insert(nums[i]);
        }

        return 0;
    }
};