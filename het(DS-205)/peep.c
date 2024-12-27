#include<stdio.h>
#define max 5
int stack [max];
int top = -1;
void push(data)
{
    if (top==max-1){
        printf("stack is full");
    }
    else{
        top++;
        printf("enter the data");
        scanf("%d",&stack[top]);
    }
}
 // pop
int pop(){
    if (top==-1){
        printf("stack is empty");
    }
    else{
        printf("the poped element is %d",stack[top]);
        top--;
    }
}
// display
int display(){
    int i;
    if (top==-1){
        printf("stack is empty");
    }
    else{
        for (i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int peep(){
    if (top==-1){
        printf("stack is empty");
    }
    else{
        printf("the top element is %d",stack[top]);
    }
}
int change(){
    int i;
    if (top==-1){
        printf("stack is empty");
    }
    else{
        printf("enter the new element");
        scanf("%d",&stack[top]);
    }
}
int main(){
    int choice;
    while(1){
        printf("1.push\n2.pop\n3.display\n4.peep\n5.change\n6.exit\n");
        printf("enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
            peep();
                break;
            case 5:
                change();
                break;
            case 6:
                exit(0);
        }
    }
}