
#include<stdio.h>
#include<stdlib.h>
struct Test

{

int data;
struct Test * Next;

}

printinfo(struct Test* N)
{

while (N !=NULL)
{
printf("data value is %d\n",N->data);
N=N->Next;

}

}


int main()
{

struct Test* Head;
struct Test* first;
struct Test* second;

Head = (struct Test*)malloc(sizeof(struct Test));
first = (struct Test*)malloc(sizeof(struct Test));
second = (struct Test*)malloc(sizeof(struct Test));

Head->data=0;
Head->Next=first;

first->data=1;
first->Next=second;

second->data =2;
second->Next=Head;
printinfo(Head);

return 0;

}
