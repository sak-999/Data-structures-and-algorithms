#include<stdio.h>
#include<conio.h>

int stack[100];
int top=-1;

void push(int value){
    if(top==5){
        printf("overflow \n");
    }
    else {
        stack[++top]=value;
    }
}

void pop(){
    
    if(top==-1){
        printf("underflow\n");
    }
      else {
        printf("popped element : %d\n",stack[top]);
        top--;
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