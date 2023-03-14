class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        if(a.length() != b.length()){
            return 0;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for(int i =0; i<b.size() && a.size(); i++){
            if(b[i]!=a[i]){
                return 0;
            }
            else{
                i++;;
            }
        }
        return 1;
        
    }

};