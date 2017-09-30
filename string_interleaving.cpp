# Given s1, s2, s3, find whether s3 is formed by the interleaving of s1 and s2.
# Example: Given:
#                   s1 = "aabcc"
#                   s2 = "dbbca"
#          Return:
#                   True if s3 = "aadbbcbcac"
#                   False if s3 = "aadbbbaccc"

#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          |
#                                          V
# Solution:

int isInterleave(string A, string B, string C) {
    int len_a = int(A.size()), len_b = int(B.size()), len_c = int(C.size());
    int a_increment = 0, b_increment = 0;
    for (int i = 0; i < len_c; ++i) {
        if (a_increment < len_a and C[i] == A[a_increment]) {++a_increment;}
        else if (b_increment < len_b and C[i] == B[b_increment]) {++b_increment;}
        else {return false;}
    }
    return true;
}

# Explanation: As we iterate through the interleaved string C, each letter we hit could be one from string A or string B.
# We know that string C has been created by sequentially inserting letters from A and B. Thus, we must keep track of what 
# the next letter is in both A and B, so we can create variables to keep track of which increment we are on in both A and B.
# If the current letter in C is neither the current letter in A or in B, this string could not have been created by the
# interleaving of A and B.
