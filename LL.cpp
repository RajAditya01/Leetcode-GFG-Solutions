#include <iostream>

using namespace std;

/* Definition for singly-linked list. */
struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

int getNthFromLast(Node* head, int n) {
    Node *slow = head, *fast = head;
    
    // Move the fast pointer n nodes ahead of the slow pointer
    for (int i = 0; i < n; i++) {
        if (fast == NULL) {
            // n is greater than the number of nodes in the linked list
            return -1;
        }
        fast = fast->next;
    }
    
    // Move both pointers until the fast pointer reaches the end of the linked list
    while (fast != NULL) {
        slow = slow->next;
        fast = fast->next;
    }
    
    // The slow pointer will now be pointing to the Nth node from the end of the linked list
    if (slow == NULL) {
        // n is equal to the number of nodes in the linked list
        return -1;
    }
    else {
        return slow->data;
    }
}

int main() {
    // Create a linked list: 1->2->3->4->5->6->7->8->9
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next->next->next = new Node(9);
    
    int n = 2;
    int result = getNthFromLast(head, n);
    
    if (result == -1) {
        cout << "N is greater than the number of nodes in the linked list" << endl;
    }
    else {
        cout << "The " << n << "th node from the end of the linked list is: " << result << endl;
    }
    
    return 0;
}
