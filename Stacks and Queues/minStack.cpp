/*** 
    Problem:
    Design a stack that has O(1) push and pop, and also
    returns the minimum element in the stack in O(1) time
***/

/***
    Approach 1: 
    Surface level this seems easy enough: every time an element is pushed
    into the stack, see if it is a new minimum, return the minimum.
    However, a problem arises if the current minimum is popped off of the stack,
    in which case we have to find the next lowest minimum in the stack.
    
    We can solve this by using two stacks in our class, one for all elements,
    and one for just the new minimums we've seen. The top of the minimums stack will
    always be the lowest element we've seen. If pop is called and the element popped
    is our current lowest element, then we can pop from the minimums stack as well
    and the top of minimums will now just be the next-most-minimum we've seen thus far.
    All in O(1) time.
***/

class minStack {
private:
    stack<int> elements;
    stack<int> minimums;
    
public:
    void push(int datum) {
        elements.push(datum);
        if (datum < minimums.top()) {
            minimums.push(datum);
        }
    }
    
    void pop() {
        int top = elements.top();
        elements.pop();
        if (top == minimums.top()) {
            minimums.pop();
        }
    }
    
    int min() {
        return minimums.top();
    }
};


/***
    Approach 2: 
    Instead of just pushing the element on the stack itself, every time we push we can push a
    pair of elements onto the stack, where the first element of the pair is the actual value, and the
    second value is the current minimum. Whenever min() is called, just return the second element in the 
    pair at the top of the stack.
***/

class minStack {
private:
    stack< pair<int,int> > elementsAndMins;
    int min;
    
public:
    minStack() : min(INT_MAX) {}

    void push(int datum) {
        if (datum < minimum) {
            minimum = datum;
        }
        
        pair<int, int> newInsert = make_pair(datum, minimum);
        elementsAndMins.push(newInsert);
    }
    
    void pop() {
        elementsAndMins.pop();
    }
    
    int min() {
        return elementsAndMins.top().second;
    }
};

