class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && abs(st.top()-s[i])==32){
                st.pop();
            }else{
            st.push(s[i]);
            }
        }
        string str="";  //new string to store
        while(!st.empty()){  //reverse str
            str=str+st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};