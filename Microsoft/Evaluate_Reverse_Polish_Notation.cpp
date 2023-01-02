class Solution {
public:
        int evalRPN(vector<string>& tokens) {
        stack<long long int>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&&tokens[i]!="-"&&tokens[i]!="*"&&tokens[i]!="/")
                st.push(stoi(tokens[i]));
            else{
                long long int a=st.top();
                st.pop();
                if(tokens[i]=="+")
                    st.top()+=a;
                else if(tokens[i]=="-")
                    st.top()-=a;
                else if(tokens[i]=="*")
                    st.top()*=a;
                else if(tokens[i]=="/")
                    st.top()/=a;
            }
        }
        return st.top();
    }
};
