//Question link - https://leetcode.com/problems/palindrome-linked-list/submissions/1140201395/
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
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL){
            fast = fast->next;
            if(fast->next !=NULL){
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* temp = curr;
        while(curr != NULL){
            temp = temp->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* head2 = middleNode(head);
        ListNode* curr = head2;
        head2 = head2->next;
        curr->next = NULL;
        head2 = reverseList(head2);
        while(head2 != NULL){
            if(head->val != head2->val){
                return false;
            }
            else{
                head = head->next;
                head2 = head2->next;
            }
        }
        return true;
    }
};
