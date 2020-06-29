class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*p1=head;
        ListNode*p2=head;
        
        while(n--){
            p1=p1->next;
        }
        
        if(p1==NULL){
            return p2->next;
        }
    
        while(p1->next!=NULL){
            p1=p1->next;
            p2=p2->next;
        }
        
        ListNode* tmp=p2->next->next;
        p2->next=tmp;
    
        return head;
        
    }
};
