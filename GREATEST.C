#include<stdio.h>
int main()
{
int input1,input2,input3;
scanf("%d%d%d",&input1,&input2,&input3);
if(input1>input2)
{
 if(input1>input3)
 printf("%d",input1);
 else
 printf("%d",input3);
}
else if(input2>input3)
printf("%d",input2);
else
printf("%d",input3);
return 0;
}