class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.size()==t.size()){
            int i,j;
            for(i=0;i<s.size();i++){
                for(j=0;j<s.size();j++){

                    if(s[i]==t[j]){
                        t[j] = 0;
                        break;
                    }
                    
                    if (j == (t.size()-1)){
                        return false;
                    }
                    
                }
                
            }
            return true;
        }
        return false;
        
    }
};
