/***
    Problem:
    Implement a function to check if a binary tree is balanced.
    (A balanced tree is defined to be a tree such that the heights of the
    two subtrees of any node never differ by more than one)
***/


/***
    Initial Thoughts:
    If one of two things happen, this tree cannot be balanced:
    1. We encounter more than three different depths
    2. The disparity between two depths is > 2
    
    We want to check depths as quickly as possible, so DFS, not BFS
***/


/***
    Approach 1:
    Recursive. Cleaner, but uses much more memory than iterative (on the stack)
    I also really dislike recursion, so.....
***/


int findHeight(Node *root) {
     if (!root) {return 0;}
     
     int leftHeight = findHeight(root->left);
     if (leftHeight == -1) {
        return -1;
     }
     
     int rightHeight = findHeight(root->right);
     if (rightHeight == -1) {
        return -1;
     }
     
     int difference = abs(leftHeight - rightHeight);
     if (difference > 1) {return -1;}
     return max(leftHeight, rightHeight) + 1;
}

bool isBalanced(Node* root) {
    int balanced = findHeight(root);
    if (balanced == -1) {return false;}
    return true;
}



/***
    Approach 2:
    Iterative. Less clean/perhaps intuitive, but far less memory on stack (O(1))
***/

// COME BACK TO THIS

