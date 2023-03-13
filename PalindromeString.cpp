class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string str=S;
	    reverse(S.begin(), S.end());
	    if(str==S){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	}

};