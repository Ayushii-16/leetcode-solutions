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
    int pairSum(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        while(slow != NULL){
            ListNode* curr = slow->next;
            slow->next = prev;
            prev = slow;
            slow = curr;
        }
        int ans = INT_MIN;
        ListNode* a = prev;
        ListNode* b = head;
        while(a != NULL && b != NULL){
            ans = max(ans,(a->val+b->val));
            a = a->next;
            b = b->next;
        }
        return ans;
    }
};