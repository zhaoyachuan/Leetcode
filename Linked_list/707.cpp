
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
//检索第index个节点的值
int get(ListNode* head, int n)
{
    n--;
    while (n--)
    {
        head=head->next;
    }
    return head->val;
    
}
//前插
ListNode* add_head(ListNode* head,int val)
{
    ListNode* dummy_head=new ListNode;
    dummy_head->val=val;
    dummy_head->next=head;
    return dummy_head;
}
int main()
{
    ListNode* l=create_Linked_list(5);

    l=add_head(l,6);

    show_Linked_list(l);
    return 0;
}