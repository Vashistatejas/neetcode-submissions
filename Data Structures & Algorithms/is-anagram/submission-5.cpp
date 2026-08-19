class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){
            return false;
        }
        else{
        unordered_map<char,int> x;
        unordered_map<char,int> y;
        

        for( int i = 0; i < s.size(); i++){
            x[s[i]]++;
            y[t[i]]++;
            
        }
        if (x == y){
            return true;
        }
        else{
            return false;
        }
        
    }
    }
};
