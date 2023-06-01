class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto ch:tokens){
            if(ch=="+" || ch=="-" || ch=="*" || ch=="/"){
                if(ch=="+"){
                    int a = st.top();
                    st.pop();
                    int b= st.top();
                    st.pop();
                    st.push(a+b);
                } else if(ch=="*"){
                    int a = st.top();
                    st.pop(); 
                    int b= st.top();
                    st.pop();
                    st.push(a*b);
                } else if (ch=="-"){
                    int a = st.top();
                    st.pop();
                    int b= st.top();
                    st.pop();
                    st.push(b-a);
                } else if (ch=="/"){
                    int a = st.top();
                    st.pop();
                    int b= st.top();
                    st.pop();
                    st.push(floor(b/a));
                }
            }else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
