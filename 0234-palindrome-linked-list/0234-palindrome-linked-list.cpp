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
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        
       ListNode* slow = head;
       ListNode* fast = head->next;
       while(fast != NULL &&  fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
       }
       ListNode* prev = NULL;
       ListNode* curr = slow;
       while(curr != NULL){
         ListNode* temp = curr->next;
         curr->next = prev;
         prev = curr;
         curr = temp;
       }
       ListNode* a = head;
        while(a != NULL && prev != NULL){
            if(a->val != prev->val) return false;
            prev = prev->next;
            a = a->next;
        }
        return true;

    }
};