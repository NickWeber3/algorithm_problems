# Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
# Example: 
#          Input:            ______
#                           |     |
#                           \/    |
#                 1 -> 2 -> 3 -> 4
#                                       Return the node corresponding to node 3. 

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

/*
 * Definition for singly-linked list in C++:
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* detectCycle(ListNode* A) {
    ListNode *skip_one = A, *skip_two = A;
    bool isCycle = false;
    while (skip_one and skip_two and skip_two->next) {
        skip_one = skip_one->next;
        skip_two = skip_two->next->next;
        if (skip_one == skip_two) {isCycle = true; break;}
    }
    if (isCycle == false) {return nullptr;}
    
    skip_one = A;
    while (skip_one != skip_two) {
        skip_one = skip_one->next;
        skip_two = skip_two->next;
    }
}

# O(N) time, O(1) space
# Explanation: (update this)
