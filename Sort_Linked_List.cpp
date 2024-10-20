#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
    Node(int data, Node* next1) {
        this->data = data;
        next = next1;
    }
};

Node* findMiddle(Node* head) {
    if (!head || !head->next) return head;
    Node* slow = head;
    Node* fast = head->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* mergeSortedLL(Node* l1, Node* l2) {
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    while (l1 && l2) {
        if (l1->data <= l2->data) {
            temp->next = l1;
            l1 = l1->next;
        } else {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }
    if (l1) temp->next = l1;
    else temp->next = l2;
    Node* result = dummyNode->next;
    delete dummyNode; 
    return result;
}

Node* sortLL(Node* head) {
    if (!head || !head->next) return head;
    // dividing the LL into two parts with left as header for 1st half LL, and right as 2nd half LL header 
    Node* middleNode = findMiddle(head);
    Node* right = middleNode->next;
    middleNode->next = nullptr;
    Node* left = head;
    left = sortLL(left);
    right = sortLL(right);
    return mergeSortedLL(left, right);
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(5);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(1);
    cout << "Initial LL: ";
    printLL(head);
    head = sortLL(head);
    cout << "After Sorting LL: ";
    printLL(head);
    return 0;
}
