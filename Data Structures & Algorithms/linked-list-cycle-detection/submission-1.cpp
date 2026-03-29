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
     bool hasCycle(ListNode* head) {
        if (!head || !head->next) {
            return false; // If the list is empty or has only one node, no cycle is possible
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) { // Ensure fast and fast->next are not null
            slow = slow->next;       // Move slow pointer by one step
            fast = fast->next->next; // Move fast pointer by two steps

            if (slow == fast) {      // If slow and fast meet, there is a cycle
                return true;
            }
        }

        return false; // If the loop exits, no cycle was found
    }
};
