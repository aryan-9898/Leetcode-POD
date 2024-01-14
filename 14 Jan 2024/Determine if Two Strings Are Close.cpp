class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m=word1.length(),n=word2.length();
        
        if(m!=n){
            return false;
        }
        
        vector<int> f1(26);
        vector<int> f2(26);
        
        for(int i=0;i<m;i++){
            char ch1=word1[i];
            char ch2=word2[i];
            
            int idx1=ch1-'a';
            int idx2=ch2-'a';
            
            
            f1[idx1]++;
            f2[idx2]++;
            
        }
        
        //1st point
        
        for(int i=0;i<26;i++){
            if(f1[i]!=0 && f2[i]!=0){
                continue;
            }
            if(f1[i]==0 && f2[i]==0){
                continue;
            }
            
            return false;
        }
        
        
        //2nd point
        sort(begin(f1),end(f1));
        sort(begin(f2),end(f2));
        
        return f1==f2;
        
        
    }
};
