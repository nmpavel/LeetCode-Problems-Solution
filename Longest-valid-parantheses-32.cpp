class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>stk;
        int count = 0;
        stk.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                stk.pop();
                if(stk.empty()){
                    stk.push(i);
                }else{
                    count = max(count,(i-stk.top()));
                }
            }else{
                stk.push(i);
            }
        }
       
        return count;
    }
};
