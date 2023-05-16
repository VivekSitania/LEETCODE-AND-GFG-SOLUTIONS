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
    // User-defined ftn
    ListNode* swap(ListNode* node1, ListNode* node2)
    {
        node1->next = NULL;
        node2->next = node1;
        return node2;
    }
    ListNode* swapPairs(ListNode* head) {
        // Base Case
        if(head==NULL || head->next == NULL)
        {
            return head;
        }
        
        ListNode* new_Head = head->next;
        ListNode* prev_Node = NULL;
        
        while(head != NULL && head->next!=NULL)
        {
            ListNode* node3 = head->next->next;
            ListNode* ans_Node = swap(head, head->next);
            if(prev_Node != NULL)
            {
                prev_Node ->next->next = ans_Node;
            }
            prev_Node = ans_Node;
            ans_Node->next->next = node3;
            head = head->next;
        } 
        
        return new_Head;
    }
};