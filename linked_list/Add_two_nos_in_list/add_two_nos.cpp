// Add Two Numbes as Linked List
#include<bits/stdc++.h>
using namespace std;


//Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
 
ListNode* addTwoNumbers(ListNode* A, ListNode* B) 
{
    ListNode *C = new ListNode(0);
    ListNode *temp = C;
    int carry = 0;
    while(A != NULL && B != NULL) 
    {
        temp->val = (A->val + B->val + carry) % 10;
        carry = (A->val + B->val + carry) / 10;
        if(carry != 0 || A->next != NULL || B->next != NULL)
        {
            temp->next = new ListNode(0);
            temp = temp->next;
        }
        A = A->next;
        B = B->next;
    }
    while(A != NULL) // when List A is longer
    {
        temp->val = (A->val + carry) % 10;
        carry = (A->val + carry) / 10;
        if(carry != 0 || A->next != NULL )
        {
            temp->next = new ListNode(0);
            temp = temp->next;
        }
        A = A->next;
    }
    while(B != NULL) // when List B is longer
    {
        temp->val = (B->val + carry) % 10;
        carry = (B->val + carry) / 10;
        if(carry != 0 || B->next != NULL )
        {
            temp->next = new ListNode(0);
            temp = temp->next;
        }
        B = B->next;
    }
    if( carry == 1) // When there is an extra carry which will form as a seperate number in the list.
        temp->val = 1;
    return C;
}

int main()
{
	ListNode *A = new ListNode(0);
	int i = 0, length = 0;
	cin>>length;
	ListNode *temp = A;
	for(i = 0; i < length-1; i++ )
	{
		cin>>temp->val;
		temp->next = new ListNode(0);
		temp = temp->next;
	}
	cin>>temp->val;
	ListNode *B = new ListNode(0);
	length = 0;
	cin>>length;
	temp = B;
	for(i = 0; i < length-1; i++ )
	{
		cin>>temp->val;
		temp->next = new ListNode(0);
		temp = temp->next;
	}
	cin>>temp->val;
	ListNode *C = addTwoNumbers(A,B);
	temp = C;
	while(temp->next)
	{
		cout<< temp->val << " -> ";
		temp = temp->next;
	}
	cout<< temp->val << endl;
}