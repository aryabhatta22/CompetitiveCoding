/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
      if (head == nullptr) return nullptr;
		Node *curr = head;
		while (curr->next != nullptr && curr->child == nullptr) {	
			curr = curr->next;
		}
		Node *pNext = curr->next;
		pNext = flatten(pNext);
		Node *pChild = curr->child;
		pChild = flatten(pChild);
		curr->next = pChild;
		curr->child = nullptr;
		if (pChild != nullptr) pChild->prev = curr;
		while (curr->next != nullptr) {
			curr = curr->next;
		}
		curr->next = pNext;
		if (pNext != nullptr) pNext->prev = curr;
		return head;  
    }
};