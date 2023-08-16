#include<iostream>
using namespace std;

struct stackNode {
  int data;
  stackNode* next;
  int size ; 

stackNode(d)
{
  data = d;
  next = NULL;
}
};

struct Stack{

stackNode* top ;
int size ;

stack()
{
  top = NULL;
  size = 0;
}

///------------------------------------- push ------------------------------
void push(int x)
{
  stackNode* element = new stackNode(x);
  element->next = top;
  top = element;
}

///------------------------------------------  pop --------------------------
int pop()
{
  if(top==NULL)
    return -1;
  
  int x = top->data;
  stackNode* temp = top;
  top = top->next;
  delete(temp);
  return x;
}

bool isempty()
{
  return top==NULL; 
}

//------------------------------------ top ---------------------------
int peek()
{
  if(top==NULL)
    return -1;

  return top->data;
}

///------------------------------- print stack -------------------------
void printStack()
{
  stackNode* temp = top ;

  while(temp!=NULL)
    {
      cout<<temp->data ; 
      temp = temp->next;
    }
  
}

};

int main()
{
  stack st;
  st.push(10);

  st.push();
  st.pop();
  st.peek();

  
}


