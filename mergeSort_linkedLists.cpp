#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void push(node* &head,int data){
    node* newNode=new node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    node* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newNode;
}
node* middle(node* head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
node* merge(node* left,node* right){
    if(left==NULL){
        return left;
    }
    if (right==NULL)
    {
        return right;
    }
    node* newNode=new node(-1);
    while(left!=NULL or right!=NULL){
        if(left!=NULL and left->data<right->data){
            newNode->next=left;
            left=left->next;
        }else if(right!=NULL and right->data<left->data){
            newNode->next=right;
            right=right->next;
        }
        newNode=newNode->next;
    }
    while(left!=NULL){
        newNode->next=left;
        left=left->next;
        newNode=newNode->next;
    }
    
    while(right!=NULL){
        newNode->next=right;
        right=right->next;
        newNode=newNode->next;
    }
    return newNode->next;
}
node* mergeSort(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* current=head;
    node* midd=middle(current);
    node* left=head;
    node* right=midd->next;
    midd->next=NULL;
    left=mergeSort(left);
    right=mergeSort(right);
    node* result=merge(left,right);
    return result;
}
void display(node* head){
    node* current=head;
    while(current!=NULL){
        cout<<current->data<<"->";
        current=current->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    push(head,1);
    push(head,3);
    push(head,2);
    push(head,5);
    push(head,4);
    display(head);
    node* newnode=mergeSort(head);
    display(newnode);

    return 0;
}