/***
	Problem:
	Find the kth to last element of a singly linked list.
***/

// Approach 1: Have one pointer iterate list until the end, keeping track of length.
//  		   Then have another pointer start at the beginning of the list, and 
//  		   iterate length-k times to get to kth to last node.
//		       O(n) time, O(1) space

Node* kthToLast(Node *head, int k) {
	Node* runner = head;
	int lengthOfList = 0;
	while (runner) {
		lengthOfList += 1;
		runner = runner->next;
	}
	
	if (k >= lengthOfList) {
		return runner;
	}
	
	runner = head;
	for (int i = 0; i < lengthOfList-k; ++i) {
		runner = runner->next;
	}
	
	return runner;
}


// Approach 2: Create two runner nodes, maintain a k-length "stick" between the two.
//  	       When front runner reaches end of list, return back runner. 
// 	       O(n) time, O(1) memory

Node* kthToLast(Node *head, int k) {
	Node* frontRunner = head, backRunner = head;
	int stick = 0;
	while (frontRunner) {
		frontRunner = frontRunner->next;
		if (stick == k) {
			backRunner = backRunner->next;
		}
		else {
			stick += 1;
		}
	}
	
	return backRunner;
}


// Approach 3: Recursively get to end of list. When coming back up the stack from, keep
//   	       returning length-kth node.
//	       O(n) time, O(n) stack frame memory

Node* kthToLast(Node *head, int k, int &i) {     // <--- notice pass by reference i!
	if (!head) {return head;}
	
	Node *newHead = kthToLast(head->next, k, i);
	
	// Will start incrementing i once we hit last node in list
	i += 1;
	
	// If this node is the kth to last, start returning it up the stack frames
	if (i == k) {
		return head;
	}
	return newHead;
}
