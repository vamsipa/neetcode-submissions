class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res=0, len=0, el=0;
        std::unordered_set<int> st_el;

        for(int i=0; i<nums.size(); i++) {
            st_el.insert(nums[i]);
        }

        for(int i=0; i<nums.size(); i++) {

            if(st_el.find(nums[i]+1) == st_el.end())  {
                el = nums[i]-1;
                while(st_el.find(el) != st_el.end()) {
                    len++;
                    el-=1;                    
                }
                if((len+1) > res) {
                    res = len+1;                
                }
                len=0;
            }
        }
        
        return res;
    }
};
