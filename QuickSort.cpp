# Nick Weber - Quick Sort

# QUICK SORT
# Explanation: Divide-and-conquer recursive sort. 
#              Base case: arrays of length 0 and 1 are trivially sorted. 
#              Inductive step:    - Guess an element to partition array
#                                 - Form array of [LHS]element[RHS] (divide)
#                                 - Recursively sort [LHS] and [RHS] (conquer)
#
# Analysis:    O(nlog(n)) best/average-case time, O(n) worst-case time, O(1) memory   
#              Efficiency based on selection of pivot, ideally it is one that partitions equally
#              Although O(1) overhead memory, O(log(n)) stack frames
               


#include <iostream>
#include <vector>

using namespace std;

void quick_sort(vector<int> &v, int left, int right);
int partition(vector<int> &v, int left, int right);
void print(vector<int> &v, int left, int right);

int main(int argc, const char * argv[]) {
    vector<int> v = {4,5,2,1,3};
    quick_sort(v, 0, int(v.size()));
    cout << endl << "FINAL SORTED ARRAY: "; print(v, 0, int(v.size())); cout << endl;
    return 0;
}

void quick_sort(vector<int> &v, int left, int right) {
    if (left + 1 >= right) {return;}
    int pivot = partition(v, left, right);
    quick_sort(v, left, pivot);
    quick_sort(v, pivot+1, right);
}

int partition(vector<int> &v, int left, int right) {
    int pivot = --right;
    while (true) {
        while (v[left] < v[pivot]) {++left;}
        while (left < right and v[right-1] >= v[pivot]) {--right;}
        if (left >= right) {break;}
        swap(v[left], v[right-1]);
    }
    swap(v[left], v[pivot]);
    return left;
}

void print(vector<int> &v, int left, int right) {
    for (int k = left; k < right; ++k) {
        cout << v[k] << " ";
    }
    cout << endl;
}
