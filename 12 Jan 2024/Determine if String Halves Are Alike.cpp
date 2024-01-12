class Solution {
public:
    
    bool isVowel(char &ch){
        return (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'
               || ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U');
        
    }
    
    bool halvesAreAlike(string s) {
        int cntleft=0,cntright=0,n=s.length();
        int i=0,j=n>>1;
        while(i<(n>>1) && j<n ){
            if(isVowel(s[i])) cntleft++;
            if(isVowel(s[j])) cntright++;
            
            i++,j++;
        }
        
        return cntleft==cntright;
        
    }
};
