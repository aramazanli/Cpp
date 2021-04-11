class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> customer;
        int max=0;
        
        for(int i=0;i<accounts.size();i++){
            int wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth=wealth+accounts[i][j];
            }
            customer.push_back(wealth);
        }
        for (auto sira :customer )
            if (sira > max)
                max = sira;

        return max;
    }
};
