class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        //vector<int> bitwises;
        
        
        
        //nums oluþturma
        for(int i=0;i<n;i++){
            nums.push_back(start+2*i);  
        }
        
        //Tamamen tesadüfle helletdim, normalda if i=0 sayi=nums[i] else yapýsýyla elemiþdim
        int sayi;
        sayi=nums[0];
        for(int i=1;i<n;i++){
            sayi=sayi^nums[i];  
        }
        
        
        
        return sayi;
    }
};
