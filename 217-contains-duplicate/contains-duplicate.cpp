class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,bool> m ;

        for(auto x:nums){
            if(m[x]==1){
                return true;
            }
            m[x]=1;
        }
        return false;
    }
};