/*
520. Detect Capital
Easy

509

259

Add to List

Share
Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
 

Example 1:

Input: "USA"
Output: True
 

Example 2:

Input: "FlaG"
Output: False
 

Note: The input will be a non-empty word consisting of uppercase and lowercase latin letters.

Accepted
121,702
Submissions
225,747
*/

class Solution {
public:
    bool detectCapitalUse(string word) {
        
        cout<<isupper('A');
        int n=word.size();
        
        //All small
        if(isupper(word[0])==0){
           for(int i=1;i<n;i++){
            //if(stoi(word[i])>=65 && (int)word[i]<=90)
            if(isupper(word[i])>0)
                return false;
        } 
        }
        
        //All capital
       else if(isupper(word[0])!=0 && isupper(word[1])!=0){
            for(int i=2;i<n;i++){
            //if(stoi(word[i])>=65 && (int)word[i]<=90)
            if(isupper(word[i])==0)
                return false;
        }
        }
        
        
       else if(isupper(word[0])!=0){
            for(int i=1;i<n;i++){
            //if(stoi(word[i])>=65 && (int)word[i]<=90)
            if(isupper(word[i])!=0)
                return false;
        }
        }
        
        return true;
    }
};
