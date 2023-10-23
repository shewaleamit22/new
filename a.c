#include <stdio.h>
#include<string.h>
int main() {
 
char str[100], str2[100];
int i,v=0;
gets(str);
for(i=0;str[i]!='\0';i++)
{
	if(str[i] == 'a'|| str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u' || str[i] == 'A'|| str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U')
	{
		v++;
	}
	
}
	printf("Vowels are %d", v);
  return 0;
}
