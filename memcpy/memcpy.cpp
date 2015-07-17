#include<stdio.h>
#include<string.h>

void memcpy(void *dest, void *src, size_t n)
{
	//typecast the source and the destination to char* for copying byte by byte
	char *csrc = (char *) src;
	char *cdest= (char *) dest;
	//make a temporary array to avoid overlap
	char *temp = new char[n];
	//copy from csrc to temp byte by byte
	for( int i=0; i<n; i++)
	{
		temp[i]=csrc[i];
	}
	//copy data from temp to dest
	for(int i=0;i<n ; i++)
	{
		cdest[i]= temp[i];
	}
}

//main program
int main()
{
	char csrc[] = "tw3rp rules";
	char cdest[100];
	memcpy(cdest,csrc,strlen(csrc)+1);
	printf("copied string is %s",cdest);
	//copy an array of numbers
	int isrc[]={10,20,30,40,50};
	int n=sizeof(isrc);///sizeof(isrc[0]);
	int idest[n],i;
	memcpy(idest,isrc,sizeof(isrc)+1);
	printf("\nThe copied array is ");
	for (i=0;i<n;i++)
	{
		printf("%d ",idest[i]);
		return 0;
	}
	
}
