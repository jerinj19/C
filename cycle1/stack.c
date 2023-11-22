#include <stdio.h>
int main()
{
int a[20],top=-1,ch,el;
printf("\n SELECT YOUR CHOICES");
do
{
printf("\n 1.INSERTION \n 2.DELETION \n 3.EXIT \n 4.DISPLAY");
scanf("%d",&ch);
if(ch==1)
{
if(top!=20)
{
printf("\n ENTER THE ELEMENT");
scanf("%d",&el);
top++;
a[top]=el;
}
else
printf("\n STACK UNDERFLOW");
}
else if(ch==el)
{
if(top!=-1)
{
printf("\n REMOVING THE LAST ELEMENTS");
top--;
}
else
printf("\n STACK OVERFLOW");
}
else if(ch==4)
{
printf("\n DISPLAYING ELEMENTS");
for(int i=0;i<=top;i++)
printf("\t %d",a[i]);
}
}
while(ch!=3);
printf("\n EXITED");
return 0;
}
