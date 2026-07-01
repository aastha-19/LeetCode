class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        unordered_map<char, int>m;
        m['a']=1;
        m['e']=1;
        m['i']=1;
        m['o']=1;
        m['u']=1;
        int i;

        for(i=0; i<k; i++){
            if(m.find(s[i])!=m.end()){
                count++;
            }
        }
        int maxcount=count;

        for(int j=i; j<s.size(); j++){
            if(m.find(s[j-k])!=m.end()){
                count--;//exclude
            }
           if(m.find(s[j])!=m.end()){
            count++;//include
           }
           maxcount=max(maxcount,count);
        }
        return maxcount;  
    }
};