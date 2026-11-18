class MinStack {
    std::stack<std::pair<int, int>> minstk;
public:
    MinStack() {
        //minstk.;        
    }
    
    std::pair<int, int> toppair() {
        return minstk.top();        
    }

    void push(int val) {
        if(!minstk.empty()) {
            int min = toppair().second;
            if(val < min)
                min = val;
            minstk.push(std::make_pair(val, min));
        } else {
            minstk.push(std::make_pair(val, val));
        }
        
    }
    
    void pop() {        
        minstk.pop();        
    }
    

    int top() {
        return toppair().first;        
    }
    
    int getMin() {
        return toppair().second;
    }
};
