#include <stdio.h>
#include <string.h>

bool judge(char a, char b)
{
	if((a-b == 32) || (b-a == 32))
		return true;
	else
		return false;
}

int main (void)
{
printf("input string:");	
int sum=0;
char input[200];
int len;
scanf("%s", input);
len = strlen(input);
for (int i=0; i<len/2; i++)
	if(input[i] == input[len-1-i] || judge(input[i],input[len-1-i]))
	sum = sum + 1;
if(sum == len/2)
	printf("Palindrome");
return 0;

}
