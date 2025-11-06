/*
x=*ptr++
here address changes
*/
#include<stdio.h>
int main()
{
char x=5,y=20;;
char *p=&x;
printf("%u %u\n",&x,&y);
int z=*p++; //  z=5  y address
printf("%d %u %d\n",z,p,*p);// 5 &y 20

return 0;
}
