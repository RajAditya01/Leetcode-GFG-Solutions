#include<iostream>
using namespace std;

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<string>st;
        int n=S.size();
        int i=0;
        while(i<n){
            int j=i;
            string str="";
            while(j<n&&S[j]!='.'){
                str+=S[j];
                j++;
            }
            st.push(str);
            i=j+1;
            
        }
        string res="";
        while(st.size()){
            if(st.size()!=1){
                res+=st.top()+'.';
            }
            else{
                res+=st.top();
            }
            st.pop();
        }
        return res;        
    } 
};