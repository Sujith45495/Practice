#include<iostream>
using namespace std;
class stack
{
	int st[5],top;
	public:
	stack()
	{
		top=-1;
	};
	void push()
	{
		int num;
		if(top==4)
		{
			cout<<"stack is full"<<endl;
		}
		else
		{
			cout<<"enter element"<<endl;
			cin>>num;
			top++;
			st[top]=num;
		}
		cout<<"element successfully inserted"<<endl;
	}
}
void pop()
{
	if(top==-1)
	{
	cout<<"stack is empty"<<endl;
	}
	else
		top--;
	{
		cout<<"element is deleted"<<endl;
	}
}
void peep()
{
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		cout<<"display top element"<<"st[top]"<<endl;
	}
}
void display()
{
	if(top==-1)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		cout<<"the elements are:";
		for(int i=top;i>=0;i--)
			cout<<"st[i]"<<" ";
	}
	cout<<endl;
}
}
int main()
{
	int choice;
	stack st1;
	while(1)
	{
		cout<<"enter  1.push\t 2.pop\t3.peep\t4.display\t5.exit";
		cin>>choice;
		switch(choice)
		{
			case1:
			st1.push();
			break;
case2:
			st1.pop();
			break;
case3:
			st1.peep();
			break;
case4:
			st1.display();
			break;
case5:
			exit(0);
			default:
			cout<<"invalid choice"<<endl;
		}
	}
		return 0;

}
