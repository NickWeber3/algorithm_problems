// Given a list, rotate the list to the right by k places, where k is non-negative.
// Example:
// Given 1 -> 2 -> 3 -> 4 -> 5 -> NULL and k = 2,
//           Return 4 -> 5 -> 1 -> 2 -> 3 -> NULL. 

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

/**
 * Definition for singly-linked list in C++
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
void rotate (Node* head, int k) {
     if (k == 0) {return;}
 
    Node* current = *head;
    int count = 1;
    while (count < k and current != nullptr) {
        current = current->next;
        ++count;
    }
    if (current == NULL) {return;}
  
    Node* kthNode = current;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = *head;
    *head = kthNode->next;
    kthNode->next = nullptr;
}

Explanation: (update)
