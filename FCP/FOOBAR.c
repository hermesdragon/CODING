#include<stdio.h>
void main()
{
    int t,f,o,b,a,r,i,min[5],tram;
    char word[10000];
    scanf("%d",&t);
    while(t--)
    {   f=o=b=a=r=0;
        tram=10000;
        scanf("%s",word);
        for(i=0;word[i];i++)
        {
            if(word[i]=='f')
                f++;
            else if(word[i]=='o')
                o++;
            else if(word[i]=='b')
                b++;
            else if(word[i]=='a')
                a++;
            else if(word[i]=='r')
                r++;

        }
        o=o/2;
        min[0]=f;
        min[1]=o;
        min[2]=b;
        min[3]=a;
        min[4]=r;
        for(i=0;i<5;i++)
        {
            if(tram>=min[i])
                tram=min[i];
        }
        printf("%d\n",tram);
    }
}
