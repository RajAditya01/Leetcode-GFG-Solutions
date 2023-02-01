
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
         vector<int> ans;

        stack <int> st;

        int max = INT_MIN;

        for(int i=n-1;i>=0;i--){

            if(a[i]>=max){

            st.push(a[i]);

            max = a[i];

            }

        }

        

        while(!st.empty()){

            ans.push_back(st.top());

            st.pop();

        }

 

        return ans;

        

    }
        
};