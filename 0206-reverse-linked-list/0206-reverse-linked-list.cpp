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
        
        if(head==NULL)
        {
            return NULL;
        }
        
        ListNode* new_head=NULL;
        while(head!=NULL)
        {
           ListNode* temp = head->next;
           head->next = new_head;
           new_head = head;
           head = temp;
           //cout << new_head->val << endl;
        }
        return new_head;
    }
};