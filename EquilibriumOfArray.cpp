   int equilibriumPoint(long long a[], int n) {
    
        int sr=0;
        int sl=0;
        if(n==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            sr += a[i];
        }
        for(int i=0; i<n-1; i++){
            if(sl==sr){
                return i+1;
            }
            sl+=a[i];
            sr-=a[i+1];
        }
        return -1;
    }

};