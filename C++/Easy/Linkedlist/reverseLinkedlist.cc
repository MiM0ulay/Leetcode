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
        
        if ( head == NULL || head->next==NULL) {return head;} 
        
        stack <int> s;
        
        while(head->next != NULL )
        {
            s.push(head->val);
            head= head->next;
        }
        
        ListNode* start = new ListNode(s.top());
        start->next=head;
        //s.pop();
        
        while(!s.empty() )
        {
            ListNode* current = new ListNode(s.top());   
            s.pop();
            head->next= current;
            head=head->next;
                
        }
        
        
        return start->next;
            
    }
};
