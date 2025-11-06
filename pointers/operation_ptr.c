// operations on pointers
#include<stdio.h>
int main()
{
int x=5,y=20,z=30;
int *p=&x;
printf("%u %u %u\n",&x,&y,&z);
printf("%u %d\n",p,*p);
p=p+2;
printf("%u %d\n",p,*p);
p=p-1;
printf("%u %d\n",p,*p);
return 0;
}
