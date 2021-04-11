class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smallers;
        for(int i=0;i<nums.size();i++){
            int sayi=0;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                   if(nums[i]>nums[j]){
                      sayi++;
                    }
                }
            }
            smallers.push_back(sayi);
            //int sayi=0 buraya yazdýðým zaman kabul etmir, köhne sayidan devam edir????
        }
        return smallers;
    }
};
