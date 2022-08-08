struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    // now head is { val(0), next: nullptr }
    ListNode* head = new ListNode();
    ListNode* editing_head = head;
    // saving num var for sums >= 10
    int carry = 0;
    while (l1 || l2 || carry != 0) {
      int n1 = l1 ? l1->val : 0;
      int n2 = l2 ? l2->val : 0;
      int sum = carry + n1 + n2;
      carry = sum / 10;
      editing_head->next = new ListNode(sum % 10);
      editing_head = editing_head->next;
      l1 = l1 ? l1->next : nullptr;
      l2 = l2 ? l2->next : nullptr;
    }
    // returning next, because now head->val is 0
    return head->next;
  }
};
