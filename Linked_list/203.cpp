
#include <iostream>
#include <vector>
using namespace std;

struct ListNode
{
    int val; 
    ListNode *next;
};
//创建单链表
ListNode* create_Linked_list(int n)
{
    ListNode* head=new ListNode;
    head->next=NULL;
    ListNode* cur=head;
    int x=1;
    while (x<=n)
    {
        ListNode* temp=new ListNode;
        temp->val=x;
        cur->next=temp;
        cur=temp;
        x++;
    }
    head=head->next;
    cur->next=NULL;
    return head;
}
//展示链表
void show_Linked_list(ListNode* head)
{
    while (head!=NULL)  
    {
        cout<<head->val<<endl;
        head=head->next;
    }   
}

//移除元素
ListNode* remove_elements(ListNode* head,int val)
{
    ListNode* dummy_head=new ListNode();
    dummy_head->next=head;
    ListNode* cur=dummy_head;
    while (cur->next->val!=NULL)
    {
        if(cur->next->val==val)
        {
            ListNode* temp=cur->next;
            cur->next=temp->next;
            delete temp;
        }
        else
        {
            cur=cur->next;
        }
        head=dummy_head->next;
        delete dummy_head;
        return head;
    }
    
}
int main()
{
    ListNode* l=create_Linked_list(5);
    l=remove_elements(l,4);
    show_Linked_list(l);

    return 0;
}