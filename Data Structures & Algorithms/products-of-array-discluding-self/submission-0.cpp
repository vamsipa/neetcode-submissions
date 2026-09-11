class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int len = nums.size();
        std::vector<int> res(len,0);
        std::vector<int> preprod(len,0);
        std::vector<int> pstprod(len,0);
        int prod=1;
        for(int i=0; i<len; i++) {
            prod = prod*nums[i];
            preprod[i] = prod;
        }

        prod=1;
        for(int i=len-1; i>=0; i--) {
            prod = prod*nums[i];
            pstprod[i] = prod;
        }

        for(int i=0; i<len; i++) {
            int rs=1;
            if((i-1) >=0) {
                rs = rs*preprod[i-1];
            }

            if((i+1) <=(len-1)) {
                rs = rs*pstprod[i+1];
            }
            res[i] = rs;
        }

        return res;
    }
};
