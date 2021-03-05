class Solution {
public:
    int reverse(int n) {
        int rev = 0;
         if(n==0)
         {
             return 0;
         }
        while(n!=0)
        {
            if(rev > INT_MAX / 10)
            {
                return 0;
            }
            if(rev < INT_MIN / 10)
            {
                return 0; 
            }
            int ld = n%10;
            rev= (rev*10) + ld;
            n= n/10;
        }
         return rev;
    }
};
