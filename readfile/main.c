#include<stdio.h>
int main()
{
    int n[10],i,j,a;
    FILE *fr;
    FILE *fw;
    fr = fopen("//Users//a20161104616//Desktop//readfile//readfile//sort1.txt","r");
    fw = fopen("//Users//a20161104616//Desktop//readfile//readfile//sort2.txt","w");
    if(fr == NULL)
        {
            printf("error");
            return 0;
        }
    else
        {
            for(i=0;i<10;i++)
                fscanf(fr,"%d",&n[i]);
            for(i=0;i<10;i++)
            {
                for(j=0;j<9-i;j++)
                {
                    if(n[j]>n[j+1])
                    {
                        a=n[j];
                        n[j]=n[j+1];
                        n[j+1]=a;
                    }
                }
            }
        }
    for (i=0; i<10; i++)
    {
        printf("%d",n[i]);
    }
    printf("\n");
    fprintf(fw,"%d",n[i]);
    return 0;
}
