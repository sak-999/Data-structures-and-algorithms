#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* head=NULL;

void push(int value){
    
    if(head==NULL){
        head=(struct node*)malloc(sizeof(struct node));
        head->next=NULL;
        head->data=value;
    }else{
        struct node* t=(struct node*)malloc(sizeof(struct node));
        t->data=value;
        t->next=head;
        head=t;
    }

}

void pop(){

if(head==NULL){
    printf("underflow\n");
}else{
    printf("popped value : %d\n",head->data);
  struct node* temp=head;
  head=head->next;  
  free(temp); 
}

}

int main(){

while(1){

printf(" 1. insert \n 2. delete \n 3. exit \n");
int a;
scanf("%d",&a);


if(a==1){
    int d;
    printf("enter number : ");
    scanf("%d",&d);
    push(d);
}else if(a==2){
    pop();
}else {
    break;
}

}

return 0;
}