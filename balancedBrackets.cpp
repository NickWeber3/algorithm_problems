// Make sure that the parentheses, braces,and brackets of a string are balanced
// Example:
//          "{ [ ] ( ) }" should return true
//          "{ [ ( ] ) }" should return false
//          "{ [ }"       should return false

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

bool bracketValidator(string &s) {
    
    stack<char> openers;
    
    for (char c : s) {
        
        if (c == '(' ||
            c == '{' ||
            c == '[') {
            openers.push(c);
        }
        
        else if (c == ')' &&
                 openers.top() == '(') {
            openers.pop();
        }
        
        else if (c == '}' &&
                 openers.top() == '{') {
            openers.pop();
        }
        
        else if (c == ']' &&
                 openers.top() == '[') {
            openers.pop();
        }
        
    }
    
    return openers.empty();
}
