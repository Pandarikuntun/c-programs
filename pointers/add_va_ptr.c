//printing of address and value
#include<stdio.h>
int main()
{
char x=5,y=20,z=30;
char *p=&x;
printf("%u %u %u\n",&x,&y,&z);
printf("%u %d\n",p,*p);
p=p+2;
printf("%u %d\n",p,*p);
p=p-1;
printf("%u %d\n",p,*p);
return 0;
}
