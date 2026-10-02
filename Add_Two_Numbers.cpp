#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int val = 0, ListNode* next = nullptr) {
        this->val = val;
        this->next = next;
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;

        while (l1 || l2 || carry) {
            int s = (l1 ? l1->val : 0) +
                    (l2 ? l2->val : 0) +
                    carry;

            curr->next = new ListNode(s % 10);
            curr = curr->next;

            carry = s / 10;

            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }

        return dummy->next;
    }
};

// Function to create a linked list
ListNode* makeList(int arr[], int n) {
    ListNode* dummy = new ListNode(0);
    ListNode* curr = dummy;

    for (int i = 0; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }

    return dummy->next;
}

// Main function
int main() {
    int arr1[] = {2, 4, 3};  // 342
    int arr2[] = {5, 6, 4};  // 465

    ListNode* l1 = makeList(arr1, 3);
    ListNode* l2 = makeList(arr2, 3);

    Solution obj;
    ListNode* ans = obj.addTwoNumbers(l1, l2);

    while (ans) {
        cout << ans->val << " ";
        ans = ans->next;
    }

    // Output: 7 0 8

    return 0;
}