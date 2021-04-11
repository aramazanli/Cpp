class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> yeni;
            for(int i=0;i<nums.size()/2;i++){
                yeni.push_back(nums[i]);
                yeni.push_back(nums[i+n]);
            }
        return yeni;
    }
};
