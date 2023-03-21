class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>st;
        for (int i=0; i<x.size(); i++){
            if (st.empty()){
               st.push(x[i]);
                
            }
            else if(x[i]==')'){
                if(st.top()=='(') st.pop();
                else return false;
            }
            else if(x[i]=='}'){
                if(st.top()=='{') st.pop();
                else return false;
            }
            else if(x[i]==']'){
                if(st.top()=='[') st.pop();
                else return false;
            }
            else st.push(x[i]);
           
        }
         return st.empty();
    }

};