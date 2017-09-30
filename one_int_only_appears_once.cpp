Given an array of integers, every element appears twice except for one. Find that single one.
Example:    Input: [1 2 2 3 1] -----> Output: 3

                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          |
                                          V
Solution:

int singleNumber(const vector<int> &A) {
    int answer = 0;
    for (int i = 0; i < int(A.size()); ++i) {
        answer ^= A[i];
    }
    return answer;
}
