//brute force solution in c++

//Method 1

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        // Brute force
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==t){
                    return {i,j};
                }
            }
        }
        return{-1,-1};
    }
        
};

//method 2 onorder set

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();

        unordered_map<int,int> m;

        for(int i=0; i<n; i++){
            int x=nums[i];
            int y=t-x;
            if(m.find9(y)!=m.end()){
                return {i. m[y]};
            }
            m[num[i]]=i;
        }
        return{-1,-1};
    }
        
};

//In java using hasmap
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map  = new HashMap();
        //Fill HM
        for(int i=0;i<nums.length;i++){
            map.put(nums[i],i);
        }
        //Searching
         for(int i=0;i<nums.length;i++){ //2 7 11 15  target = 4
            int num = nums[i]; 
            int rem = target - num; 
            if(map.containsKey(rem)){
                int index = map.get(rem);
                if(index==i)continue;
                return new int[]{i,index}; 
            }  
        }
        return new int[]{};
    }
}