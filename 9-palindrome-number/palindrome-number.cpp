class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0)
            return 0;
       long long int mid, r =0, n = x;
  
        while(n > 0){
            mid = n % 10;
            r = (r * 10 ) + mid ;
            n /= 10;
        }
        if( r == x)
            return 1;
        return 0;
        
    }
};