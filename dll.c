#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * prev,*next;
	struct node*left,*right;
};
struct node *head=NULL,*temp,*nn;
void insert_at_beg();
void insert_at_end();
void delete_at_beg();
void delete_at_end();
void display();
void main()
{
	int ch;
	while(1)
	{
		printf("1.insertatbeg\n2.insert at end\n3.deleteatbeg\n4.deleteatend\n5.display\n6.exit\n");
		printf("enter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert_at_beg();
			       break;
			case 2:insert_at_end();
			       break;
			case 3:delete_at_beg();
			       break;
			case 4:delete_at_end();
			       break;
			case 5:display();
			       break;
			case 6:exit(1);
			       break;
			default:
 				printf("enter the correct choice");
				
		}
		
	}
}
void insert_at_beg()
{
	nn=(struct node*)malloc(sizeof(struct node));
	printf("enter the data\n=");
	scanf("%d",&nn->data);
	nn->left=NULL;
	nn->right=NULL;
	if(head==NULL)
	{
		head=nn;
		nn->next=head;
	}
	else
	{
		nn->next=head;
		head->prev=nn;
		head=nn;
	}

}
void insert_at_end()
{
	if(head==NULL)
	{
		head=nn;
		nn->next=head;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		nn->next=temp->next;
		temp->next=nn;
	}
}
void delete_at_beg()
{
	if(head==NULL)
	{
		printf("DLL is empty");
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
		printf("node deleted\n");
	}
	else
	{
		head=nn;
		head=head->next;
		head->prev=NULL;
		free(nn);
		printf("node deleted\n");
	}

}
void delete_at_end()
{
	 if(head==NULL)
        {
                printf("DLL is empty");
        }
        else if(head->next==NULL)
        {
                head=NULL;
                free(head);
                printf("node deleted\n");
        }
        else
        {
                head=nn;
                if(nn->next!=NULL)
		{
			nn=nn->next;
		}
		nn->prev->next=NULL;
		free(nn);
                printf("node deleted\n");
        }


}
void display()
{
	if(head==NULL)
	{
		printf("DLL is empty");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{	
			printf("%d->",temp->data);
			break;
		}
		temp=temp->next;	
	}
}

