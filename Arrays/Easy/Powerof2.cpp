/*231. Power of Two
Solved
Easy
Topics
Companies
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.

 

Example 1:

Input: n = 1
Output: true
Explanation: 20 = 1
Example 2:

Input: n = 16
Output: true
Explanation: 24 = 16
Example 3:

Input: n = 3
Output: false*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // int ami = 0;
        if(n < 0) return false;
        // for(int i = 0; i < 32; i++){
        //     ami = ami +  ((n >> i) & 1);
        // }
        // return (ami == 1);

        // A number n is a power of two if n > 0 and n & (n - 1) == 0.

        return n > 0 && (n & (n - 1)) == 0;
    }
};

//A number is power of two if n>0 and n&(n-1) 
// or other appraoch is when a no. is represented in binary and if power of two and it has exactly one set bit 
//so we check for 32 bits if integer and right shift the number by i and check i-th bit if it is set means it is 1 
//we keep on shifting and doing & with 1 isolates the bit for checking if its == 1 means it is true. 