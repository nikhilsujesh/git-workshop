#include<iostream>
using namespace std;
int stack[100],n=100,top=n-1;
void push(int val)
{
if(top>=-1)
cout<<"stack is overflow\n";
else
{
top++;
stack[top]=val;
}
}
void pop()
if(top=-1){
cout<<"stack is empty\n";
}
else
{
cout<<"the popped element is:<<stack(top);
top--1
}
void display
if(top>=0)
{
cout<<"the elements in stack are:\n";
for(int i=top;i>=0;i--
cout<<"stack[i]<<"\n";
}
else
{
cout<<"stack is empty :(\n";
}
}
int main()
cin>>ch,val;
{
cout<<"stack operation....\n";
cout<<"1 push in stack\n";
cout<<"2 pop from stack\n";
cout<<"3 display stack\n";
cout<<"4 exit<<endl;
}
switch(ch)
do
{
case 1:
cout<<"enter the value to be pushed:\n";
cin>>val;
push(val);
break;
case 2:
pop()
break;
case 3:
display()
break;
case 4:
cout<<"exit\n";
break;
default:
cout<<"invalid operation\n";
}
}
while(ch!=-1)
}
