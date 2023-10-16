// 206

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
    ListNode* reverseList(ListNode* head) {
          if(head==NULL || head->next==NULL)return head;
        
        ListNode *ans=new ListNode(),*prev=NULL;
        ans->next=NULL;
        while(head!=NULL)
        {
           
            ans->val = head ->val;
            head= head->next;
            prev = ans;
            ans = new ListNode();
            ans->next=prev;
            
        }
        ans=ans->next;
        return ans;


        
    }
};
