#include <stdio.h>
int main(int argc, const char * argv[])
{
	char a[100];
	while(scanf("%100[^\n]s", a) != -1)
	{
		getchar();
		printf("%s\n",a);
	}
	return 0;
}
