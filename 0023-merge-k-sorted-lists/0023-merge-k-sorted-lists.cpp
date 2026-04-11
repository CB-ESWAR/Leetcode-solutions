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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>arr;
        for(auto list:lists){
          while(list!=NULL){
            arr.push_back(list->val);
            list=list->next;
          }
        }
        sort(arr.begin(),arr.end());
        if(arr.size()==0)return NULL;
        ListNode* hi=new ListNode(arr[0]);
        ListNode* curr=hi;
        for(int i=1;i<arr.size();i++){
            curr->next=new ListNode(arr[i]);
            curr=curr->next;
        }
        return hi;
    }
};