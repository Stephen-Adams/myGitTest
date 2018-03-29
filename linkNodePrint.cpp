/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/

//use nullptr to judge a pointer is null
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        int length=0,i;
        ListNode* p=head;
        while(p!=nullptr){
            p=p->next;
            length++;
        }
        vector<int> ans(length);
        for(i=0,p=head;p!=nullptr;p=p->next,i++){
            ans[length-1-i]=p->val;
        }
        return ans;
    }
};
