class Solution {
public:
    bool isValid(string s) {
        int slen = s.size();

        if(slen %2)
            return 0;

        std::stack<char> stk;
        char c = ' ';

        for(int i=0; i<slen; i++) {
            if(s[i] == '(' || 
                s[i] == '{' ||
                s[i] == '[' ) {
                    stk.push(s[i]);
            } else {
                if(!stk.empty()) {
                    c = stk.top();
                    stk.pop();
                }
                

                if( (s[i] == ')' && c != '(' ) ||
                    (s[i] == '}' && c != '{' ) ||
                    (s[i] == ']' && c != '[' ) ) {
                    return 0;
                }
            }
        }

        if(!stk.empty())
            return 0;
        else 
            return 1;
    }
};
