class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        
        int sayi=0;
        
        for(int i=0;i<items.size();i++){
            if (ruleKey == "type")
                if(ruleValue==items[i][0]) 
                    sayi++;

            if (ruleKey == "color")
                if(ruleValue==items[i][1]) 
                    sayi++;

            if (ruleKey == "name")
                if(ruleValue==items[i][2]) 
                    sayi++;
        }
        return sayi;
    }
};
