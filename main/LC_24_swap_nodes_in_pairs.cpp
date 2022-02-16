ListNode* swapPairs(ListNode* head) {
    if (head == NULL){
        return NULL;
    }
    ListNode* temp = head;
    for (int i=0; i<2 && temp!= NULL; i++){
        temp = temp->next;
    }
    if (temp == NULL){
        if (head->next == NULL){
            return head;
        }
    }
    ListNode* smallAns = swapPairs(temp);
    ListNode* temp1 = head->next;
    head->next = smallAns;
    temp1->next = head;
    head = temp1;
    return head;
}