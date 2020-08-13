// Reversing the linked list betwwen the two given nodes.
#include<bits/stdc++.h>
using namespace std;


//Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// function for reversing the linked list between two positions 
ListNode* reverseBetween(ListNode* A, int B, int C) 
{
    if (A == NULL || A->next == NULL) // Incase the linked list has no or only one element then reversing is not required
        return A;
    int c = 0;

    if(B == 1) // When reversing is from the beginning, then add an extra node and make it as a head, now we have to reverse the list between 2 and C+1 postions and at last return the next pointer to the head. 
    {
        B = 2;
        C++; 
        ListNode *temp = new ListNode(0);
        temp->next = A;
        A = temp;
        c = 1;
    }
    
    ListNode *temp1, *temp2, *temp3 = A, *temp4 = A, *temp5 = A, *temp6;
    int B1 = B - 1; // variable for the position of the pointer previous to the node where the reversing is going to be performed
    
    while(--B1)
        temp5 = temp5->next;
    while(--B)
        temp3 = temp3->next;
    while(--C)
        temp4 = temp4->next;
    temp1 = temp3;
    temp2 = temp3->next;
    temp6 = temp4->next; 
    while( temp2 != temp6)
    {
        temp1->next = temp2->next;
        temp2->next = temp3;
        temp5->next = temp2;
        temp3 = temp2;
        temp2 = temp1->next;
    }
    if (c == 1)
        return A->next;
    return A;
 
}
int main()
{
    ListNode *head = new ListNode(0);
    int i = 0, length = 0, B, C;
    cin>>length;
    ListNode *temp = head;
    for(i = 0; i < length-1; i++ )
    {
        cin>>temp->val;
        temp->next = new ListNode(0);
        temp = temp->next;
    }
    cin>>temp->val;
    cin>>B>>C;
    temp = reverseBetween(head, B, C);
    for(i = 0; i < length-1; i++ )
    {
        cout<<temp->val<<" "<<"->"<<" ";
        temp = temp->next;
    }
    cout<< temp->val << endl;
}