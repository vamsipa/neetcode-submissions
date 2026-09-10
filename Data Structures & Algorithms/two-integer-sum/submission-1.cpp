class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> res;
        std::unordered_map<int,int> seen_map;

        for(int i=0; i<nums.size(); i++) {
            if(seen_map.find(target - nums[i]) != seen_map.end()) {
                res.push_back(seen_map[target-nums[i]]);
                res.push_back(i);
                return res;
            } else {
                seen_map[nums[i]] = i;
            }
        }

        return res;
    }
};
