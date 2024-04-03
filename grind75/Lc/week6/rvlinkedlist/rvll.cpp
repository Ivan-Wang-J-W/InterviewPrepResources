class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //check if head and head->next is null. if null return head.
        if(head==NULL || head->next==NULL){
            return head;
        }
        //create three pointers 
        ListNode * curr = head;
        ListNode * prev = NULL;
        ListNode * nxt = head->next; //why? as we break the link when we set the new current, we will lose the data if we do not store the data somewhere.
        while(curr !=NULL){
            curr->next = prev;
            prev = curr;
            curr=nxt;
            if(nxt != NULL){
                nxt=nxt->next;
            }

        }
            return prev;

    }
};
