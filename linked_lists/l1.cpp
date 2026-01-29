#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Link {
public:
    Node* head;
    Node* tail;

    Link() {
        head = tail = nullptr;
    }

    void add_head(int val) {
        Node* node = new Node(val);

        if (head == nullptr) {
            head = tail = node;
        } else {
            node->next = head;
            head = node;
        }
    }

    void add_node(int val) {
        if (head == nullptr) {
            add_head(val);
            return;
        }
        Node* node = new Node(val);
        tail->next = node;
        tail = node;
    }
    
    void show_ll() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void remove_index_by_index(int  index){
        if (head==nullptr) return ;

        int idx= 0;
        Node* temp = head;
        while ((temp->next) && (idx+1)<index)
        {
            temp = temp->next;
            idx++;
        }
        if (temp->next == nullptr) return ; 

        Node* to_remove =  temp->next;
        temp->next =  to_remove->next;
        delete to_remove;
        return;
    }
    void reverse_ll(){
        if (head==nullptr)return;
        Node* prev = nullptr;
        Node* curr =  head;
        tail = head;
        Node* temp = nullptr;
        bool flag =true ; 
        while (curr)
        { 
          // operations  
         

          curr = curr ->next;
          temp->next = prev;
          prev = temp ; 
        }
        head = prev;
        return ;
        
    }   


};

int main() {
    Link l1;          // create linked list object

    l1.add_head(10);
    l1.add_node(20);
    l1.add_node(30);
    l1.add_head(45);
    l1.add_head(5);
    cout <<"before => ";
    l1.show_ll();     // output: 5 10 20 30
    // cout <<"after\n";
    // l1.remove_index_by_index(2);
    cout << "after rev => ";
    l1.reverse_ll();
    l1.show_ll();
    return 0;
}
