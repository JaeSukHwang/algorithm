int main (void)
{
	int num1, num2, i , j;
	scanf("%d", &num1);
	scanf("%d", &num2);
	if(num1 < num2)
	{
		for(i=num1;i<num2+1;i++)
			for(j=1;j<10;j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
	}
	
	else
	{
		for(i=num2;i<num1+1;i++)
			for(j=1;j<10;j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
		
	}
}
