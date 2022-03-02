#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *link;
};
void printt(struct node *head){

struct node *ptr;
ptr=head;

    while(ptr!=NULL){
            printf("patient! %d  ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
       }

struct node * addlast(struct node *head){
struct node *p;
struct node *tail=head;

p=(struct node *)malloc(sizeof(struct node));
p->data=333;
p->link=NULL;
    while(tail->link!=NULL){
    tail=tail->link;
      }
        tail->link=p;
        printf("add last\n");

        printt(head);
        return head;
       }


struct node * addrandom(struct node *head,int pos){
        struct node *ps;
        struct node *ptr=head;

ps=(struct node *)malloc(sizeof(struct node));
ps->data=999;
ps->link=NULL;
pos--;
while(pos!=1){
        ptr=ptr->link;
    pos--;
}
  ps->link=ptr->link;
  ptr->link=ps;
  printf("^^RANDOM **\n");
    printt(head);
    return head;

     }


       struct node * addbeg(struct node *head){
       struct node *ps;
ps=(struct node *)malloc(sizeof(struct node));
ps->data=777;
ps->link=head;
head=ps;
printf("add beginning \n");
printt(head);
return head;


       }

struct node *delfir(struct node *head){
       struct node *u=head;
       head=head->link;
       free(u);
       u->link=NULL;
       printf("We deleted first node\n");
       printt(head);
       return head;

       }

struct node *delast(struct node *head){
struct node *starks=head; //last
struct node *prv=head; //prelast
while(starks->link!=NULL){
   prv=starks;
   starks=starks->link;
}
prv->link=NULL;
free(starks);
starks=NULL;
        printf("Delete Last\n");
        printt(head);
        return head;

       }

struct node *delrandom(struct node *head,int pos){
struct node *prev=head;
struct node *current;
int x=1;
while(x<pos-1){
    prev=prev->link;
    x++;
}
current=prev->link;
prev->link=current->link;
free(current);
current=NULL;
printf("Delete Random\n");
printt(head);
return head;
       }

       int main()
{
    struct node *head=NULL;
    struct node *y=(struct node*)malloc(sizeof(struct node));
    y->data=40;
    y->link=NULL;
    head=y;

        struct node *current=(struct node*)malloc(sizeof(struct node));
        current->data=30;
        current->link=NULL;
        y->link=current;
            struct node *k=(struct node*)malloc(sizeof(struct node));
            k->data=50;
           k->link=NULL;
        current->link=k;

struct node *d=addlast(head);
struct node *t=addbeg(d);
struct node *r=addrandom(t,3);
struct node *m=delfir(r);
struct node *w=delast(m);
struct node *q=delrandom(w,3);

    return 0;
}

