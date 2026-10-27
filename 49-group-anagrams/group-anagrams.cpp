class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> m;
        for(auto x:strs){

            string original = x;
            sort(x.begin(),x.end());
            m[x].push_back(original);
        }

        vector<vector<string>> ans;

        for(auto [x,y]:m){
            ans.push_back(y);
        }

        return ans;
    }
};