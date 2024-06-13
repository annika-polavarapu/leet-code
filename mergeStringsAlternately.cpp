#include <string>;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newWord = "";
        int i = 0;
        while(i < word1.length() || i < word2.length()) {
            if(i < word1.length()) {
                newWord+=word1[i];
            }
            if (i < word2.length()) {
                newWord+=word2[i];
            }
            i++;
        }
        return newWord;
    }
};