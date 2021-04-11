class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> v;
        int r=0;
        for(int i=0;i<nums.size();i++){
            r+=nums[i]; 
            v.push_back(r);
        }  
        return v;
    }
};
