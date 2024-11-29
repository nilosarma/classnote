#include<stdio.h>

int main(int argc, char *argv[]) /*command line argument*/
{
int i;
for(i=0;i<argc;i++)
sum+=atoi(argv[i]);
printf("Required sum=%d", sum);
return 0;
}