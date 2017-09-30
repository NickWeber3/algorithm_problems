# Given an array of integers, every element appears twice except for one. Find that single one.
# Example:    Input: [1 2 2 3 1] -----> Output: 3

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

int singleNumber(const vector<int> &A) {
    int answer = 0;
    for (int i = 0; i < int(A.size()); ++i) {
        answer ^= A[i];
    }
    return answer;
}

# Explanation: keep track of a running sum of the bit-wise XORs of the elements in the array. This will identify the 
# one unique number inside. In other words, for any integer A, A^A will always be 0, because each bit place will of the
# result will be 0. Only one element in the array will not have its bit places cancelled, and that is the unique one.
# Note: this only works because all duplicates only appear TWICE!
