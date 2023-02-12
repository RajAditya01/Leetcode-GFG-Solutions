#include <bits/stdc++.h> 
using namespace std;

vector<int> completeSum(vector<int> &a, int n) {
    // Write your code here.
    vector<int>ans;
    int sum=0;

    for(int i=0; i<n; i++){
        sum = sum+a[i];
        ans.push_back(sum);
    }
    return ans;
}


