class Solution {
public:
    string removeDuplicates(string s, int k) {
        
         stack<pair<char,int>> st;
        
        for(int i=0;i<s.length();i++)
        {
            // if our stack is empty or stack top mathces with previous one than just push it into the stack with occurance 1
            if(st.empty() or st.top().first != s[i])
            {
                st.push({s[i],1});
            }
            
            // else pop top one and again push that char with increasing cnt by one
            else
            {
                auto prev = st.top();
                st.pop();
                st.push({s[i],prev.second+1});
            }
            
            // if anytime we got any char occurance equal to the K then pop that one according to our question need
            if(st.top().second == k)
            {
                st.pop();
            }
        }
        
        // now we will just take out the remaining char from the stack
        string str = "";
        while(!st.empty())
        {
            // taking out the top most element
            auto curr = st.top();
            st.pop();
            
            // adding all the char occurance into our string
            while(curr.second--)
            {
                str += curr.first;
            }
        }
        
        // as we know we use the stack so we need to reverse the order for getting our final ans
        reverse(str.begin(), str.end());
        return str;
        
    }
};