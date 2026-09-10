class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(std::vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            res = res ^ *it;
        }

        return res;
    }
};
