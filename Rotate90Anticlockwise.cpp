class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        
        //Transpose
        for(int i=0; i<n; i++){
            for(int j= i+1; j<n; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //swaping -->two pointer approach
        for(int i=0; i<n; i++){
            int low=0,high=n-1;
            while(low<high){
                swap(matrix[low++][i],matrix[high--][i]);
            }
        } 
    }
};