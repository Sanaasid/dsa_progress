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
    ListNode* reverseList(ListNode* head){
        ListNode* prev= NULL;
        ListNode* curr=head;
        while(curr){
            ListNode* nextNode= curr->next;
            curr->next= prev;
            prev = curr;
            curr= nextNode;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow= slow->next;
            fast = fast->next->next;
        }
        ListNode* secondHalf= reverseList(slow);
        int maxi=0;
        ListNode* first = head;
        ListNode* second = secondHalf;
        while(second){
            maxi = max(maxi, first->val+second->val);
            first= first->next;
            second = second->next;
        }
        return maxi;
    }
};