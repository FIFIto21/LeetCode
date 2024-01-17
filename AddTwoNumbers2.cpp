/*
    - Problem
        You are given two non-empty linked lists representing two non-negative integers. 
        The digits are stored in reverse order, and each of their nodes 
        contains a single digit. Add the two numbers and return the sum as a linked list.

        You may assume the two numbers do not contain any leading zero, 
        except the number 0 itself.
*/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0);
        ListNode *ptr = result;

        int carry = 0; // set default carry

        while (l1 != NULL || l2 != NULL) { // loop until both nodes aren't null
            int sum = 0 + carry; // initialize sum

            if (l1 != NULL) { // use number from first list
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL) { // use number from second list
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10; // get sum and carry
            sum = sum % 10;

            ptr->next = new ListNode(sum); // add a new value to the result
            ptr = ptr->next; // move to the next ptr
        }
        if (carry == 1) ptr->next = new ListNode(1); // check if theres a reamaning in carry, and if so, add it to the result
        
        return result->next;
    }
};