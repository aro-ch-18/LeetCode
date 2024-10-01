/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode * reverse(ListNode* head){
    ListNode* curr=NULL;
    ListNode* prev=NULL;
    while(head!=NULL){
        curr=head;
        head=head->next;
        curr->next=prev;
        prev=curr;
    }
    return curr;
}
    ListNode* addTwoNumbers(ListNode* num1, ListNode* num2) {
    ListNode* tail1=num1;
    ListNode* tail2=num2;
    int carry =0;
    ListNode* ans=new ListNode(-1);
    ListNode* keeper=ans;
    while(tail1!=NULL&&tail2!=NULL)
    {
        int sum=tail1->val+tail2->val+carry;
        
        carry=sum/10;
        sum=sum%10;
        ListNode* temp=new ListNode(sum);
        keeper->next=temp;
        keeper=temp;
        tail1=tail1->next;
        tail2=tail2->next;
        
    }
    while(tail1!=NULL){
        int sum=tail1->val+carry;
        carry=sum/10;
        sum=sum%10;
        ListNode* temp=new ListNode(sum);
        keeper->next=temp;
        keeper=temp;
        tail1=tail1->next;
     }
     while(tail2!=NULL){
        int sum=tail2->val+carry;
        carry=sum/10;
        sum=sum%10;
        ListNode* temp=new ListNode(sum);
        keeper->next=temp;
        keeper=temp;
        tail2=tail2->next;
     }
     if(carry){
         ListNode* temp=new ListNode(carry);
         keeper->next=temp;
         keeper=temp;
     }
    //  ListNode* headAnswer=reverse(ans->next);
     return ans->next;
        
    }
};


