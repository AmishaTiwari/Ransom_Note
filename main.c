#include<stdio.h>
#include<string.h>
#include<strings.h>
void main()
{

    int i,j,flag,r,u,s,h,k;
    char msg[100]="drop the price on new thermopanes now or else",
    news[1000]="Rain Users Guide While rain was intended to be a general purpose tool, at the time of writing the primary goal was to study one particular software system. As a result, some steps that are only done once (such as extracting information from the program under study) are done using cumbersome ad-hoc techniques that require significant manual intervention. While rain can be used on arbitrary programs,more development work needs to be done before this is a convenient process."
    ;
    char msg1[100],msg2[100],len;
    //char msg[100],news[1000];
   // printf("enter news : ");
    //gets(news);
    //printf("enter message : ");
    //gets(msg);
    int m = strlen(msg);
    int m1=m;
    int n = strlen(news);

    for(i=0;i<m;i++)
    {
        msg1[i]=msg[i];
    }
    msg1[m]='\0';
while(m >= 1)
{
    k=0;
    for (i = 0; i <= n - m; i++)
    {
        flag=0;
        for (j = 0; j < m; j++)
        {
            if (news[i + j] != msg1[j])
            {

                flag=1;
                break;
             }
        }
        if (flag!=1)
        {
            printf("%s\n",msg1);
            s=0;
            if (msg[m]!=' ')
            {
             for(u=m;u<m1;u++)
            {
                msg2[s]=msg[u];
                s++;
            }
            }
            else
            {
              for(u=m+1;u<m1;u++)
            {
                msg2[s]=msg[u];
                s++;
            }
            }
            msg2[m1]='\0';
            k=1;
            break;
        }

    }
    if(k!=1)
    {
m=m-1;
     for(h=0;h<m;h++)
     {
         msg1[h]=msg[h];
     }
      msg1[m]='\0';
     }

    if(k==1)
    {
        m=strlen(msg2);
        m1=m;
        for(r=0;r<m;r++)
        {
            msg1[r]=msg2[r];
            }
        msg1[m]='\0';
          for(r=0;r<m;r++)
           {
            msg[r]=msg2[r];
            }
        msg[m]='\0';
    }
    }
    getch();
}










