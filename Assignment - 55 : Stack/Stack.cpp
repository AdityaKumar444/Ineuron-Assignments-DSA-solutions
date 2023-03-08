#include<bits/stdc++.h>
using namespace std ;
struct node
{
    int data ;
    node *next ;
};
class Stack
{
    private:
        node *top ;
    public:
        Stack() { top = NULL ;}
        void push(int);
        int peek();
        void pop();
        bool isEmpty();
        int size();
        void setTop(node *);
        node * getTop();
        ~Stack()
        {
            while(top)
                pop();
        }
};
void Stack::push(int item)
{
    node *x = new node ;
    x->data = item ;
    x->next = top ;
    top = x ;
}
int Stack::peek()
{
    if(top)
        return top->data ;
    return INT_MIN ;
}
void Stack::pop()
{
    if(top)
    {
        node *temp = top ;
        top = top->next ;
        delete temp ;   
    }
}
bool Stack::isEmpty()
{
    if(top==NULL)
        return true ;
    return false ;
}
int Stack::size()
{
    node *t = top ;
    int count = 0 ;
    while(t!=NULL)
    {
        count++;
        t = t->next ;
    }
    return count ;
}
void Stack::setTop(node *x)
{
    top = x ;
}
node * Stack::getTop()
{
    return top ;
}