class Solution {
public:
    int reverse(int x) {
        
        int res=x;
        int dig=0;
        int weit =0;
        std::deque<int> dig_que(0,0);
        
        while(res/10) {
            dig_que.push_back(res%10);
            res = res/10;
        }
        dig_que.push_back(res);

        res = 0;
        int dq_len = dig_que.size();
        
        while(dq_len>0) {
            
            dig = dig_que.front();
            dig_que.pop_front();

            if((res > INT_MAX/10) || (res == INT_MAX/10 && (dig > INT_MAX %10)))
                return 0;
            
            if((res < INT_MIN/10) || (res == INT_MIN/10 && (dig < INT_MIN %10)) )
                return 0;

            res = res*10 + dig;
                        
            dq_len--;
        }

        return res;
    }
};
