/*
    - Problem
        Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
            Symbol       Value
            I             1
            V             5
            X             10
            L             50
            C             100
            D             500
            M             1000
            
            For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. 
            The number 27 is written as XXVII, which is XX + V + II.

            Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, 
            the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to 
            the number nine, which is written as IX. There are six instances where subtraction is used:

                I can be placed before V (5) and X (10) to make 4 and 9. 
                X can be placed before L (50) and C (100) to make 40 and 90. 
                C can be placed before D (500) and M (1000) to make 400 and 900.

            Given a roman numeral, convert it to an integer.


*/

class Solution {
public:
    int romanToInt(string s) {
        int length = s.length(); // get the length of the string
        int result = 0; // set the result
        int currentN, pastN = 0; // set the variable thats going to store the current value, and the one before it

        for (int i = 0; i < length; i++) { // loop through the string
            switch (s[i]) { // check every case for the s[i] character
                case 'M':
                    result += 1000; // add the respective value to the result
                    currentN = 1000; // set the current value
                    if (currentN > pastN && pastN > 0) { // check if current is greater than past and if past is greater than zero, to make sure this wont execute on the first iteration when past is going to be zero
                        result -= (currentN + pastN); // subtract what was add it 
                        result += (currentN - pastN); // then add the real addition, this because in cases like "IV" the real addition to result should be += 4 and not 6
                    }
                    pastN = currentN; // set the past value equals to the current
                    break;
                case 'D': // repeat the same process with all the letters
                    result += 500;
                    currentN = 500;
                    if (currentN > pastN && pastN > 0) {
                        result -= (currentN + pastN);
                        result += (currentN - pastN);
                    }
                    pastN = currentN;
                    break;
                case 'C':
                    result += 100;
                    currentN = 100;
                    if (currentN > pastN && pastN > 0) {
                        result -= (currentN + pastN);
                        result += (currentN - pastN);
                    }
                    pastN = currentN;
                    break;
                case 'L':
                    result += 50;
                    currentN = 50;
                    if (currentN > pastN && pastN > 0) {
                        result -= (currentN + pastN);
                        result += (currentN - pastN);
                    }
                    pastN = currentN;
                    break;
                case 'X':
                    result += 10;
                    currentN = 10;
                    if (currentN > pastN && pastN > 0) {
                        result -= (currentN + pastN);
                        result += (currentN - pastN);
                    }
                    pastN = currentN;
                    break;
                case 'V':
                    result += 5;
                    currentN = 5;
                    if (currentN > pastN && pastN > 0) {
                        result -= (currentN + pastN);
                        result += (currentN - pastN);
                    }
                    pastN = currentN;
                    break;
                case 'I':
                    result += 1;
                    currentN = 1;
                    if (currentN > pastN && pastN > 0) {
                        result -= (currentN + pastN);
                        result += (currentN - pastN);
                    }
                    pastN = currentN;
                    break;
            }
        }
        return result; // return the result
    }
};



