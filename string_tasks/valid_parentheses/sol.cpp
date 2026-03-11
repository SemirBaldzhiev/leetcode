#include <iostream>
#include <string>
#include <stack>

bool isValid(std::string s) {
    
    std::stack<char> stack;
    
    bool isValid = false;
    
    int len = s.length();
    int type = 0;
    
    for (int i = 0; i < len; i++){
        
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            stack.push(s[i]);
        }
        else{
            
            char topElement = ' ';
            
            if(!stack.empty()){
                topElement = stack.top();
            }
            
            if (topElement == '(' && s[i] == ')'){
                stack.pop();
            }
            else if (topElement == '[' && s[i] == ']'){
                stack.pop();
            }
            else if (topElement == '{' && s[i] == '}'){
                stack.pop();
            }
            else{
                return false;
            }
        }
    }
    
    if(stack.empty()){
        isValid = true;;
    }
    
    return isValid;
}

int main() {
    return 0;
}