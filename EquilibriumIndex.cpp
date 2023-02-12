#include <bits/stdc++.h> 
using namespace std;
int findEquilibriumIndex(vector<int> &arr) {
     
    int n = arr.size();
    int left =0;
    int right =0, sum = 0;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    right=sum;
    
    for(int i=0;i<n;i++)
    {
        left+=arr[i];
        
        if(right==left) return i;
        
        right-=arr[i];
    }
    return -1;
    
}