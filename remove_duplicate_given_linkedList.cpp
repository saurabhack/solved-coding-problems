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
void push(node* head,int data){
      node* current=head;
      node* newNode=new node(data);
      if(head!=NULL){
        head=newNode;
        return ;
      }
      while(current->next!=NULL){
        current=current->next;
      }  
      current->next=newNode;

}
int main(){
    return 0;
}