#include<stdio.h>
#include<string.h>
char ch[100];
int main()
{
    int b;
   krish: printf("1:sender sms\t\t2.reciever sms box\n");
    scanf("%d",&b);
  
	switch(b)
	    {
		case(1):
		{
	
		printf("enter the message:\n");
		scanf(" %[^\n]s",ch);
		goto krish;
		}
		break;
		case(2):
		{
		printf("message from 9199******77:");
		printf("%s",ch);
		}
		break;
	    
	    }
    
return 0;
}
