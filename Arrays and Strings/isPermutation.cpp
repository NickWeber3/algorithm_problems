/***
    Problem:
    Given two strings, write a method to decide if one is a permutation of the other.
***/


/***
    Clarifications:
        • Could the strings have whitespace?  Yes
        • Could the strings be empty/blank?   Yes
        • Should I return a boolean?          Yes
        • Should it account for a substring of A being a permutation of B?  No
***/


/***
    Approaches:
    1. Sort each string, then use one for loop to compare each letter.
        - O(nlog(n)) time, O(1) space (if in-place sort)
        
    2. Use unordered map to keep track of first strings chars and their counts,
       compare against second string chars and counts
        - O(n) time, O(n) worst case memory
        
    Let's do approach 2. This also allows for us to pass input strings by reference.
***/


// I used an unordered map, but a pre-sized vector would work too, maybe even better.
// You would just need to know the size of the character set
bool isPermutation(string &a, string &b) {
    // cannot be permutation if not the same size
    if (a.length() != b.length()) {
        return false;
    }
    
    // char:count pairs
    unordered_map<char,int> charCounts;
    int strLen = a.length();
    
    for (int aIndex = 0; aIndex < strLen; ++aIndex) {
        // this is a new character
        if (charCounts.find(a[aIndex]) == charCounts.end()) {
            charCounts[a[aIndex]] = 1;
        }
        
        // we've seen this character before
        else {
            charCounts[a[aIndex]] += 1;
        }
    }
    
    for (int bIndex = 0, bIndex < strLen; ++bIndex) {
        // string a did not have this character or
        // current string has this character more times than string a
        if (charCounts.find(b[bIndex]) == charCounts.end() ||
            charCounts[b[bIndex]] == 0) {
            return false;
        }
        
        // 
        else {
            charCounts[b[bIndex] -= 1;
        }
    }
    return true;
}
