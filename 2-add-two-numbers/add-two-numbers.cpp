class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode(-1);
        ListNode* dummyNode=head;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int val=0;
            if(l1!=NULL){
                val+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                val+=l2->val;
                l2=l2->next;
            }
            val+=carry;
            if(val>=10){
                carry=1;
                val=val-10;
            }
            else carry=0;
            ListNode* newnode=new ListNode(val);
            dummyNode->next=newnode;
            dummyNode=newnode;
        }
        if(carry==1){
            ListNode* newnode=new ListNode(carry);
            dummyNode->next=newnode;
            dummyNode=newnode;
        }
        return head->next;
    }
};