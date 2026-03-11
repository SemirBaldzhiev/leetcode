#include <iostream>

class MyLinkedList {
public:
    MyLinkedList() {
        head = nullptr;
        count = 0;
    }
    
    int get(int index) {
        
        if (head == nullptr) {
            return -1;
        }

        Node *curr = head;

        for (int i = 0; i < index; ++i) {
            
            curr = curr->next;
            if (curr == nullptr) {
                return -1;
            }
        }

        return curr->data;
    }
    
    void addAtHead(int val) {
        head = new Node {val, head};
        ++count;
    }
    
    void addAtTail(int val) {
        
        if (head == nullptr) {
            head = new Node  {val, nullptr};
            ++count;
            return;
        }

        Node *curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }

        Node *newNode = new Node {val, nullptr};
        curr->next = newNode;
        ++count;
    }
    
    void addAtIndex(int index, int val) {
        
        if (index < 0) {
            return;
        }
        if (index > count){
            return;
        }
        if (index == 0) {
            addAtHead(val);
            ++count;
            return;
        }

        Node *curr = head;
        for (int i = 0; i < index - 1; ++i) {
           
            curr = curr->next;
            if (curr == nullptr) {
                return;
            }
        }

        Node *newNode = new Node {val, curr->next}; // 1 2 3
        curr->next = newNode;
        ++count;
    }
    
    void deleteAtIndex(int index) {
        
        if (index < 0) {
            return;
        }

        if (index >= count) {
            return;
        }

        Node *curr = head;

        if (index == 0) {
            head = curr->next;
            delete curr;
            --count;
            return;
        }

        for (int i = 0; i < index - 1; ++i) {
            curr = curr->next;

            if (curr == nullptr) {
                return;
            }
        }

        if (curr->next == nullptr) {  // 6 3 1 7 4
            delete curr;
            --count;
            return;
        }

        Node *del = curr->next;
        curr->next = curr->next->next;
        delete del;
        --count;
    }

    private:
    struct Node {
        int data;
        Node *next;
    };

    Node *head;
    int count;

};


/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */