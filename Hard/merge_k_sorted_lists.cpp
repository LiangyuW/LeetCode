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
typedef pair<int, ListNode*> il;

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<il, vector<il>, greater<il>>q;
        
        for(auto e: lists){
            if(e) q.push({e->val, e});
        }
        
        ListNode*p;
        ListNode*k;
        p=k=new ListNode();

        while(!q.empty()){
                auto [value, node]=q.top();
                q.pop();
                 
                ListNode*n=node->next;
                
                if(n) q.push({n->val, n});
                k->next=node;
                k=k->next;
                
        }
        return p->next;
    }
};
