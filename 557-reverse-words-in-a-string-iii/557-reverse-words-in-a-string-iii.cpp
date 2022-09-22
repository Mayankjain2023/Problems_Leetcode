class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string str;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                st.push(s[i]);
            }
            if(s[i]==' '){
                while(!st.empty()){
                    char c=st.top();
                    st.pop();
                    str+=c;
                }
              str+=" ";  
            }
            if(i==s.size()-1){
                while(!st.empty()){
                    char c=st.top();
                    st.pop();
                    str+=c;
                }
              
            }
            
        }
        return str;
    }
};