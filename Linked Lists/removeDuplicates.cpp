/***
  Problem:
  Remove all duplicate values in a singly-linked list. 
***/


// Approach 1: Use unordered set to keep track of values already seen. If value has
//             been seen, set the previous node's next pointer ahead of it.
//             O(n) time, O(n) worst case memory

void removeDups(Node *head) {
	 Node *previous = nullptr;
	 unordered_set<int> nodesWithNoDups;
	 
	 while (head) {
	 	if (nodesWithNoDups.find(currentNode->data) ==
			nodesWithNoDups.end()) {
			nodesWithNoDups.insert(currentNode->data);
			previous = head;
		}
		else {
			previous->next = head->next;
		}
		head = head->next;			
	}
}




// Approach 2: For every node in list, iterate over rest of list to see if any other
//             node's contain current node's value, adjust next pointer if so.
//             O(n^2) time, O(1) memory
               
void removeDups(Node* head) {
	if (!head) {return;}

	while (head) {
		Node *runner = head;
		int currData = head->data;
		while (runner->next) {
			if (runner->next->data == currData) {
				runner->next = runner->next->next;
			}
			else {
				runner = runner->next;
			}
		}
		head = head->next;
	}
}
     
