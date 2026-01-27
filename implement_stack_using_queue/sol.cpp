#include <iostream>
#include <queue>

class MyStack {

    std::queue<int> q;

public:

    MyStack() {
        
    }
    
    void push(int x) {
        
        q.push(x);
        for(int i = 0; i < q.size() - 1; i++) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }
    
    int pop() {
        
        int temp = q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main(){
    int x = 10;
    MyStack* obj = new MyStack();
    obj->push(x);
    int param_2 = obj->pop();
    int param_3 = obj->top();
    bool param_4 = obj->empty();

    return 0;
}
