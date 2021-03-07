class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int i=1 ;i<s.size();i++)
        {
            if(s[i] =='1' && s[i-1]=='0')
                return false;
        }
        return true;
    }
};


// or with the regex method 

class Solution {
    public boolean checkOnesSegment(String S) {
        return S.matches("0*1+0*");
    }
}
