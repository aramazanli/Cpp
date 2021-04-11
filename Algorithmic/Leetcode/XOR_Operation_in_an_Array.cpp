class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector <bool> kiyas;
        int max=0;
        
        for (auto candy :candies )
            if (candy > max)
                max = candy;
        /*
        for(int i=1; i<candies.size(); i++){
            if(candies[i-1]>=candies[i] && candies[i-1]>=max)    max = candies[i-1];
            else if(candies[i-1]<candies[i] && candies[i]>=max )    max = candies[i];
        }
        */
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max){
                kiyas.push_back(true);
            }
            else {
                kiyas.push_back(false);
            }
        }
        return kiyas;
    }
};
