class Solution {
public:
    int getDecimalValue(ListNode* head) {
        // binary num: 10
        // linked-list representation: 1 -> 0
        // idea:
        // 0 * 2 + 1 = 1
        // 1 * 2 + 0 = 2
        // 10 = 2
        int sum = 0;
        while (head != NULL) {
            sum = sum * 2 + head -> val;
            head = head -> next;
        }
        return sum;
    }
};