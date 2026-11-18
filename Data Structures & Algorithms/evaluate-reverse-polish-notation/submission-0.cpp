class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        std::stack<int> values;

        for (const std::string& token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {
                int right = values.top();
                values.pop();

                int left = values.top();
                values.pop();

                if (token == "+") {
                    values.push(left + right);
                } else if (token == "-") {
                    values.push(left - right);
                } else if (token == "*") {
                    values.push(left * right);
                } else {
                    values.push(left / right); // C++ integer division truncates toward zero
                }
            } else {
                values.push(std::stoi(token));
            }
        }

        return values.top();        
    }
};
