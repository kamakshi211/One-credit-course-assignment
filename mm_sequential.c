#include<stdio.h>
#include<sys/time.h>
int main()
{
	int m,n,i,j,k;
	struct timeval t1,t2;
	printf("Enter number of rows and columns of first matrix");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],p[m][n];
	printf("Enter the first matrix");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	
	printf("Enter the second matrix");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&b[i][j]);
			 
	gettimeofday(&t1,0);		 
	printf("The product matrix is");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			p[i][j]=0;
			for(k=0;k<n;k++)
			{
				p[i][j]+=a[i][k]*b[k][j];
			}
			printf("%d\t",p[i][j]);
			
		}
		printf("\n");
	}
gettimeofday(&t2,0);
double elapsed = (double)(t2.tv_sec-t1.tv_sec)+(double)(t2.tv_usec-t1.tv_usec)*1.e-6;
printf("elapsed time =%f seconds.\n",elapsed);	
return 0;
	
}
