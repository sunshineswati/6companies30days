class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> s;
        for(int i = 0; i<tokens.size(); i++)
        {
            if(tokens[i] == "+")
            {
                long a = s.top();
                s.pop();
                long b = s.top();
                s.pop();
                s.push(a+b);
            }
            else if(tokens[i] == "-")
            {
                long b = s.top();
                s.pop();
                long a = s.top();
                s.pop();
                s.push(a-b);
            }
            else if(tokens[i] == "*")
            {
                long a = s.top();
                s.pop();
                long b = s.top();
                s.pop();
                s.push(a*b);
            }
            else if(tokens[i] == "/")
            {
                long b = s.top();
                s.pop();
                long a = s.top();
                s.pop();
                s.push(a/b);
            }
            else
                s.push(stoi(tokens[i]));
        }
        return s.top();
    }
};
