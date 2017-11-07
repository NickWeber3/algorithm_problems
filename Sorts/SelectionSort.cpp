/*
Nick Weber - Selection Sort

SELECTION SORT
O(n^2) time, O(1) memory
Advantages:
    - Minimal copying of items
    - In practice, hard to beat for small arrays
*/

#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int> &v);
void print(vector<int> &v);

int main(int argc, const char * argv[]) {
    vector<int> v = {4,2,5,1,3};
    selection_sort(v);
    cout << endl << "FINAL SORTED ARRAY: "; print(v); cout << endl;
    return 0;
}

void selection_sort(vector<int> &v) {
    int end = int(v.size()) - 1;
    for (int i = 0; i < end; ++i) {
        int min = i;
        for (int j = i+1; j < end+1; ++j) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        if (min != i) {swap(v[min], v[i]);}
        cout << "After iteration #" << i+1 << ": "; print(v);
    }
}

void print(vector<int> &v) {
    for (int k = 0; k < int(v.size()); ++k) {
        cout << v[k] << " ";
    }
    cout << endl;
}
