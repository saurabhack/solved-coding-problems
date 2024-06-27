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
        return ;
    }
    node* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newNode;
}
void display(node* head){
    node* current=head;
    
    while(current!=NULL){
        cout<<current->data<<"->";
        current=current->next;
    }
    cout<<"NULL"<<endl;
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
   if(left == NULL)
        return right;
    
    if(right == NULL)
        return left;
    
    node* ans = new node(-1);
    node* temp = ans;
    
    //merge 2 sorted Linked List
    while(left != NULL && right != NULL) {
        if(left -> data < right -> data ) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else
        {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    
    while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    
    ans = ans -> next;
    return ans;
}
node* mergeSort(node* head){
     if( head == NULL || head -> next == NULL ) {
        return head;
    }
    
    // break linked list into 2 halvs, after finding mid
    node* mid = middle(head);
    
    node* left = head;
    node* right = mid->next;
    mid -> next = NULL;
    
    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    
    //merge both left and right halves
    node* result = merge(left, right);
    
    return result;
}

int main(){
    node* head=NULL;
    push(head,1);
    push(head,3);
    push(head,2);
    push(head,5);
    push(head,4);
    node* mid=mergeSort(head);
    display(mid);
    return 0;
}