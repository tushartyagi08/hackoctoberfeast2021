#include<stdio.h>
#define MAXSIZE 100

struct stack{
    int stack[MAXSIZE];
    int top;
};
struct stack* s;

void push(){
    //check if stack is full
    int data;
    if(s->top==MAXSIZE-1){
        printf("Stack Overflow!");
    }
    else{
        printf("Enter data: ");
        scanf("%d",&data);
        s->stack[++s->top]=data;
    }
}

void pop(){
    //check if stack is empty
    int data;
    if(s->top==-1){
        printf("Stack Undeflow!");
    }
    else{
        data=s->stack[s->top];
        s->top--;
        printf("The deleted element is:%d\n",data);
    }
}

void traverse(){
    //check if stack is empty
    if(s->top==-1){
        printf("Stack is Empty!");
    }
    else{
        for(int i=0;i<=s->top;i++){
            printf("%d ",s->stack[i]);
        }
        printf("\n");
    }
}

int main(){
    int user_choice;//,data;
    char choice;
    s->top=-1;
    do{
        printf("1)Push\n2)pop\n3)traverse\nEnter your choice: ");
        scanf("%d",&user_choice);
        switch(user_choice){
            case 1:
                push();
                break;
            case 2:;
                pop();
                break;
            case 3:
                traverse();
                break;
            default:
                printf("Wrong input!\n");
        }
        printf("Do you want to continue(y/Y): ");
        scanf("%c",&choice);
    }while(choice=='y' || choice=='Y');
    return 0;
}