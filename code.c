#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void ptrl(int,int);
int main()
{
	int a,b;
	printf("Enter limit: ");
	scanf("%d %d",&a,&b);
	ptrl(a,b);
	return 0;
}
void ptrl(int a,int b)
{
	float i = a;
	printf("NO\t\tSIN\t\tCOS\n--\t\t---\t\t---\n");
	for(i = a;i < b+0.1;i += 0.1)
	{
		printf("%f\t%lf\t%lf\n",i,sin(i),cos(i));
		
	}
	
}
