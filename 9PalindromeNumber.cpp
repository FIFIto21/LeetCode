/*
    - Problem
        Given an integer x, return true if x is a palindrome, 
        and false otherwise.
*/

class Solution {
public:
    bool isPalindrome(int x) {
      int k = x; // set a copy of the number
      long long ans = 0; // set the answer to zero
      while (k>0){ /// loop as long as the number is positive
          int lst = k%10; // get the last digit
          ans = ans*10+lst; 
          k = k/10; // eliminate the last digit
      }
      if (ans == x) return 1; // if the answer is equals to the number, the number is a palindrome
      else return 0;
    }
};
