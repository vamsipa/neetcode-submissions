class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;

        if(prices.size() <=1) {
            return 0;
        }

        int lp = 0;
        int hp = 0;
/*
        while(hp <prices.size()) {
            if(prices[hp] > prices[lp]) {
                maxp = std::max(maxp, prices[hp] - prices[lp]);
            } else {
                lp = hp;
            }
            hp++;
        }
*/
        while(hp < prices.size()) {
            if(prices[hp] > prices[lp]) {
                maxp = std::max(maxp, prices[hp]-prices[lp]);                
            } else {
                lp=hp;
            }
            hp++;
        }

        return maxp;
    }
};
