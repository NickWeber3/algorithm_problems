int Solution::majorityElement(const vector<int> &A) {
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
