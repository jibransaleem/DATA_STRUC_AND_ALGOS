#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* right;
    Node* left;

    Node(int val) {
        data = val;
        left = right = nullptr;
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
            return;
        }
        node->right = head;
        head->left = node;
        head = node;
    }

    void add_node(int val) {
        if (head == nullptr) {
            add_head(val);
            return;
        }
        Node* node = new Node(val);
        tail->right = node;
        node->left = tail;
        tail = node;
    }

    void show_ll() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <=>";
            temp = temp->right;
        }
        cout << "nullptr";
    }
    void remove_ele_by_index(int index){
        if (index <0) return;

        if (index==0){
            Node* to_remove= head;
            head= head->right;
            head->left = nullptr;
            delete to_remove;
            return;
        }
        if(head==nullptr) return;
        Node* curr = head;
        int idx= 0;
        while (curr->right && (idx+1)<index)
        {   curr = curr->right;
            idx=1;
        }
        if (curr->right==nullptr) return;
        Node* dummy  = curr->right;
        curr->right =  dummy->right;
        dummy->right->left =  dummy->left;
        delete dummy;
    }
    void reverse_ll(){
        if (head==nullptr) return;
        
    }
};

int main() {
    Link l;
    l.add_node(10);
    l.add_node(20);
    l.add_node(30);
    l.add_head(49);
    cout <<"before|||   :  ";
    l.show_ll();
    cout <<"    after|||   :  ";
    l.remove_ele_by_index(0);
    l.show_ll();   // ✅ this was likely missing
}
