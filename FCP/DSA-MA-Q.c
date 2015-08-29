#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct heap 
{
    char first[100];
    char last[100];
	int arrpos;
};
void percolateDown(int );
void percolateUp(int );
int comparestring(char [],char [], char [], char []);
void interchange(int ,int );
void DeleteMin();
void print();
int deletepos(int );
int find(char [],char []);

int hsize;
struct heap h[1000000];

//===============================================================================================
void percolateUp(int arrpos) 
{

    if (arrpos > 1) 
    {
        if ( comparestring(h[arrpos/2].first,h[arrpos].first,h[arrpos/2].last,h[arrpos].last) > 0) 
        {
            interchange(arrpos, arrpos/2);
            percolateUp(arrpos/2);
        }
    }
}
void DeleteMin() 
{   
    if (hsize > 0) 
    {
        strcpy(h[1].first, h[hsize].first);
        strcpy(h[1].last, h[hsize].last);       
        hsize--;
        percolateDown(1);
    }
    
    else
        return;

}
void percolateDown(int arrpos) {

    int min;
    if ((2*arrpos+1) <= hsize) 
    {
        if( comparestring( h[2*arrpos].first,h[2*arrpos+1].first,h[2*arrpos].last,h[2*arrpos+1].last) < 0 )
        min = 2*arrpos;
        else
        min = 2*arrpos+1;
        
        if (comparestring( h[arrpos].first,h[min].first,h[arrpos].last,h[min].last) > 0) 
        {
            interchange(arrpos, min);
            percolateDown(min);
        }
    }
    
    else if (hsize == 2*arrpos) 
    {
         
        if (comparestring(h[arrpos].first,h[2*arrpos].first,h[arrpos].last,h[2*arrpos].last) > 0) 
            interchange(arrpos, 2*arrpos);
    }
}

int comparestring(char a[],char b[],char c[],char d[])
{	
	if(strcmp(a,b)==0)
		return strcmp(c,d);
	else
		return (strcmp(a,b));
}

void interchange(int arrpos1, int arrpos2) 
{
    char temp[100];
    strcpy(temp,h[arrpos1].first);
    strcpy(h[arrpos1].first,h[arrpos2].first);
    strcpy(h[arrpos2].first,temp);
    strcpy(temp,h[arrpos1].last);
    strcpy(h[arrpos1].last,h[arrpos2].last);
    strcpy(h[arrpos2].last,temp);
}
void print()
{
	int k;
	for(k=1;k<=hsize;k++)
	{
		printf("\nk=%d %s %s",k,h[k].first,h[k].last);
	}
}
int deletepos(int k)
{
	strcpy(h[k].first, h[hsize].first);
	strcpy(h[k].last, h[hsize].last);
	hsize--;
	percolateDown(k);
}
int find(char a[],char b[])
{
	int k,j=1;
	for(k=1;k<=hsize;k++)
	{
		if((strcmp(a,h[k].first)==0) && (strcmp(b,h[k].last)==0))
			return j;
		else
			j++;
	}
}

int main()
{
	int t,l;
	int k;
	char a[100],b[100];
	char c[100];
	scanf("%lld",&t);
	
	while(t--)
	{
		scanf("%s",c);
		if(strcmp("InitHeap",c)==0)
		{
			hsize++;
			scanf("%s",a);
			scanf("%s",b);
			strcpy(h[hsize].first,a);
			strcpy(h[hsize].last,b);
			h[hsize].arrpos=hsize;
			percolateUp(hsize);
			}
		else if(strcmp("Insert",c)==0)
		{
			hsize++;
			scanf("%s",a);
			scanf("%s",b);
			strcpy(h[hsize].first,a);
			strcpy(h[hsize].last,b);
			h[hsize].arrpos=hsize;
			percolateUp(hsize);
			k=find(a,b);
			printf("%d\n",k);
		}
		else if(strcmp("FindMin",c)==0)
		{	
			if(hsize>=1)
			printf("%s %s\n",h[1].first,h[1].last);
			else
			printf("-1\n");		
		}
		else if(strcmp("DeleteMin",c)==0)
		{
			if(hsize<1)
				printf("-1\n");
			else
			{
				printf("%s %s\n",h[1].first,h[1].last);
				DeleteMin();
			}
		}
		else if(strcmp("Delete",c)==0)
		{
			scanf("%lld",&l);
			if(l==0)
			printf("-1\n");
			else if(hsize<l)  
			printf("-1\n");
			else
			{	
				printf("%s %s\n",h[l].first,h[l].last);
				deletepos(l);
			}
		}
	}
	return 0;
}

