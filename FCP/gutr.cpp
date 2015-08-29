#include <iostream>
using namespace std;
int main()
{
    long t,s,f;
    cin>>t;
    char s1,s2,s3,s4,s5,s6;
    while(t--)
    {






        cin>>s>>f;
        if(s==1)
        {
           s1='E';
           while(f--)
        {
            if(s1=='G')
                s1='A';
            else
                s1+=1;

        }
        cout<<s1<<endl;
        }
        else if(s==2)
        {
            s2='B';
             while(f--)
        {
            if(s2=='G')
                s2='A';
            else
                s2+=1;

        }
        cout<<s2<<endl;
        }

        else if(s==3)
        {
             s3='G';
             while(f--)
        {
            if(s3=='G')
                s3='A';
            else
                s3+=1;

        }
        cout<<s3<<endl;
        }

        else if(s==4)
        {
            s4='D';
             while(f--)
        {
            if(s4=='G')
                s4='A';
            else
                s4+=1;

        }
        cout<<s4<<endl;
        }

        else if(s==5)
        {
            s5='A';
             while(f--)
        {
            if(s5=='G')
                s5='A';
            else
                s5+=1;

        }
        cout<<s5<<endl;
        }

        else
        {
               s6='E';
             while(f--)
        {
            if(s6=='G')
                s6='A';
            else
                s6+=1;

        }
        cout<<s6<<endl;
        }

    }
    return 0;
}
