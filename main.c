#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int Top;
    int Size;
    int *s;
};
void push(struct stack *st, int x)
{
    if(st->Top==st->Size-1)
    {
        printf("Sorry more element Can't be push; Stack Overflow");
    }
    else
    {
        st->Top++;
        st->s[st->Top]=x;
    }
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->Top==-1)
    {
        printf("Stack Underflow");
    }
    else
    {
        x=st->Top;
        st->Top--;
    }
    return x;
}
int peek(struct stack stt, int pos)
{
    if((stt.Top-pos+1)<0)
    {
        printf("Invalid index");
        return -1;
    }
    else
    {
        return stt.s[(stt.Top)-pos+1];
    }
}
void isEmpfull(struct stack st)
{
    if(st.Top==-1)
    {
        printf("stack is empty");
    }
    else if(st.Top==st.Size-1)
    {
        printf("Stack is full");
    }
    else
    {
        printf("Stack is neither Empty Nor full");
    }
}
void display(struct stack st)
{
    for(int j=st.Top;j>=0;j--)
    {
        printf("%d\n", st.s[j]);
    }
}

int main()
{
    struct stack ori;
    ori.Size=5;
    ori.Top=-1;
    ori.s=(struct stack*)malloc(sizeof(struct stack));
    push(&ori,2);
    push(&ori,3);
    push(&ori,6);
    display(ori);
    pop(&ori);
    display(ori);
    printf("%d", peek(ori,1));
    return 0;
}
