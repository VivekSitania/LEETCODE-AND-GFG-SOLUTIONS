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
    ListNode* middleNode(ListNode* head) {
       
        // ******solve this questions by slow fast method also*******
       
        int length=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
       
        int mid_node=length/2;
        temp=head;
       
        for(int i=0;i<mid_node;i++)
        {
            temp=temp->next;
        }
       
        //head=temp;
       
        return temp;    
    }
};