#include <stdio.h>

void Select(int *a,int size){
	int t,i,j,k;
	for (i=0;i<size-1;i++)
	{
		printf("%d:",i+1);
		for (j=i+1;j<size;j++)
		{
			if (a[j]>a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
		for (k=0;k<size;k++)
		{
			printf("%d ",a[k]);
		}
		putchar('\n');
	}
}

int main()
{
	int array[10],i;
	printf("����Ҫ���������(�Կո����,����10����)��\n");
	for (i=0;i<sizeof(array)/4;i++)
	{
		scanf("%d",&array[i]);
	}
	Select(array,sizeof(array)/4);
	return 0;
}

