// Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times.
// You may assume that the array is non-empty and the majority element always exist in the array.
// Example:
//               Input:      [2, 1, 2]
//               Return:     2 which occurs 2 times which is greater than 3/2.

/*                                        |
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
*/

int majorityElement(const vector<int> &A) {
    int majority_elem = A[0], net_majority_occurances = 1;
    for (int i = 1; i < int(A.size()); ++i) {
        (A[i] == majority_elem) ? ++net_majority_occurances : --net_majority_occurances;
        if (net_majority_occurances == 0) {
            majority_elem = A[i];
            net_majority_occurances = 1;
        }
    }
    return majority_elem;
}

# O(n) time, O(1) memory
# Explanation: (update this) this is the coolest problem
