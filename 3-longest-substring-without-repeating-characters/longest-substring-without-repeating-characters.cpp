class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        if(s.length()==1){
            return 1;
        }
        unordered_map<char,int> m;
        int ans =1;

        for(auto x:s){
            m[x]=-1;
        }

        m[s[0]]=0;
        int j=0;
        int i=1;
        for(i=1;i<s.length();i++){

            if(m[s[i]]>=j){
                ans=max(ans,i-j);
                j=m[s[i]]+1;
                
            }
            m[s[i]]=i;
        }

        return max(ans,i-j);
    }
};