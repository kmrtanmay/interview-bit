// To find whether the linked list is palindrome or not.
#include<bits/stdc++.h>
using namespace std;

 // Definition for singly-linked list.
  struct ListNode 
 {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 // Reverses the linked List eg from 1->2->3->4->5 to 5->4->3->2->1
 ListNode* reverseList(ListNode *head)
 {
     ListNode *temp1, *temp2;
     temp1 = head;
     temp2 = head->next;
     while( temp2 )
     {
         temp1->next = temp2->next;
         temp2->next = head;
         head = temp2;
         temp2 = temp1->next;
     }
     return head;
 }
 // Checks whether the given linked list is palindrome or not
int lPalin(ListNode* A) 
{
    int len = 0, c = 1;
    ListNode *temp = A, *temphead = A;
    while(temp)
    {
        len++;
        temp = temp->next;
    }
    if(len == 1)
        return 1;
    temp = A;
    while(c <= len/2)
    {
        temp = temp->next;
        c++;
    }
    if(len % 2 == 1)
        temp = temp->next;
    
    temp = reverseList(temp);  // reverses the linked list after the middle element
    while( temp )                    
    {
        if(temphead->val == temp->val)
        {
            temphead = temphead->next;
            temp = temp->next;
        }
        else
            return 0;
    }
    return 1;
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
	cout<< lPalin(head)<<endl;
}
