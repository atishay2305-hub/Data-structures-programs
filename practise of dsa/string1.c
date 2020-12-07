#include <stdio.h>

int main()
{
char name[10] = {'d', 'a', 'v', 'i', 'd' };
printf("%s", name);
char namea[2][30] = {"john", "deer", "\0"};
printf("\n%s", namea);
return 0;
}