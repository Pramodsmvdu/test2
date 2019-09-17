#include<stdio.h>

struct Node 
{
 int data;
 struct Node* Next;

}

printhead(struct Node* n)
{

while(n !=NULL)
{

printf("head is %d ",n->data);
n = n->Next;
}



}

int main()
{
struct Node* head=NULL;
struct Node* second=NULL;;
struct Node* third=NULL;

head = (struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));
third= (struct Node*)malloc(sizeof(struct Node));

head->data=1;
head->Next=second;

second->data=2;
second->Next=third;

third->data =3;
third->Next =head;


printhead(head);


}
