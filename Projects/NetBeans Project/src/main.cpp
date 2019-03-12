#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include "mstn_clk.h"

using namespace std;

int main()
{

char str[] = "Hello";
char str2[] = " World!";

scanf("%s",str); scanf("%s",str2);
	
int sizestr = sizeof(str) / sizeof(char) + sizeof(str2) / sizeof(char);

char *str3 = new char[sizestr];
	
for (int i = 0; i < (sizeof(str) / sizeof(char)-1); ++i)
{
    str3[i] = str[i];
}

for (int i = 0; i < (sizeof(str2) / sizeof(char)); ++i)
{
    str3[i + (sizeof(str) / sizeof(char))-1] = str2[i];
}

while(1)
{
    printf("%s\n", str3);
    Delay(2000);
}
return 0;
}
