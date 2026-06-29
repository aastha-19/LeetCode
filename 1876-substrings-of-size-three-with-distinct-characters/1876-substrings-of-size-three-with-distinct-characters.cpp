class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int>m;
        int count=0;
        int i;
        for(i=0; i<3; i++){
            m[s[i]]++;
        }
        if(m.size()==3){
            count++;
        }
        for(int j=i; j<s.size(); j++){
            m[s[j-3]]--;
            if(m[s[j-3]]==0){
                m.erase(s[j-3]);
            }
            m[s[j]]++;
            if(m.size()==3){
            count++;
        }
        }
        return count;
    }
};