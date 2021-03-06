class Solution {
public:
    int strStr(string haystack, string needle) {
        int res= haystack.find(needle);
        return res;
    }
};

// or with the brute-force approach shown below

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle =="") return 0;
        if(needle.size()> haystack.size())return -1;
        
        for(int i=0 ;i< haystack.size() ;i++)
        {
            int j=0, ind= i;
            while(j< needle .size() && haystack[i]==needle[j])
            {
                i++;j++;
            }
            if(j== needle .size())
                return ind;
            i= ind;
        }
        return -1;
    }
};
