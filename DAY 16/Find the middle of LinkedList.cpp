Node *findMiddle(Node *head) {
     Node* slow = head;
       Node* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
}