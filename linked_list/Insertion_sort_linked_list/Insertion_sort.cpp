// Insertion Sort On the Linked List

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
// finds the position of the node where the element is to be inserted
ListNode* insert_at(ListNode* sorted_head, ListNode* newnode, ListNode *sorted_tail)
{
    ListNode *insertpos = sorted_head;
    while(insertpos != sorted_tail)
    {
        if(insertpos->next->val > newnode->val)
            break;
        else 
            insertpos = insertpos->next;
    }
    return insertpos;
}
// function for insertion sort in the linked list
ListNode* insertionSortList(ListNode* A) 
{
    if(A == NULL || A->next == NULL)
        return A;
    
    ListNode *sorted_head = A, *sorted_tail = A, *insert_pos = A ;
    ListNode *temp, *newnode = A->next ;
    
    while(newnode)
    {
        insert_pos = sorted_head;
        // when the element is to be inserted before the head
        if(insert_pos->val > newnode->val && insert_pos == sorted_head)
        {
            sorted_tail->next = newnode->next;
            newnode->next = insert_pos;
            sorted_head = newnode;
            insert_pos = sorted_head;
            newnode = sorted_tail->next;
        }
        // when the element is to be inserted anywhere inside the sorted part of the list
        else 
        {
            insert_pos = insert_at(sorted_head, newnode, sorted_tail);
            if(insert_pos == sorted_tail)
            {
                sorted_tail = newnode;
                newnode = sorted_tail->next;
            }
            else
            {
                sorted_tail->next = newnode->next;
                newnode->next = insert_pos->next;
                insert_pos->next = newnode;
                newnode = sorted_tail->next;
            }
        }
    }
    return sorted_head;
    
}
int main()
{
    ListNode *head = new ListNode(0);
    int i = 0, length = 0;
    cin>>length;
    ListNode *temp = head;
    for(i = 0; i < length-1; i++ )
    {
        cin>>temp->val;
        temp->next = new ListNode(0);
        temp = temp->next;
    }
    cin>>temp->val;
    temp = insertionSortList(head);
    for(i = 0; i < length-1; i++ )
    {
        cout<<temp->val<<" "<<"->"<<" ";
        temp = temp->next;
    }
    cout<< temp->val << endl;
}
