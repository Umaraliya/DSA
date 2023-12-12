#include<stdio.h>
int a[5],f=-1,r=-1,n=5;


int insertend()
{
    if(f==r)
    {
        if(f==-1)
        {
            f++;
            r++;
            printf("Enter a value :");
            scanf("%d",&a[r]);
            goto end;
        }
    }
    if(f!=r+1)
    {
        r=(r+1)%n;
        printf("Enter a value :");
        scanf("%d",&a[r]);
    }
    else if(f==r+1)
    {
        printf("Queue is already full\n");
    }
    
    end:
        printf("");
}

int deletefirst()
{
    if(f==r)
    {
        if(f==-1)
        {
            printf("Queue is already empyty");
            goto end;
        }
        else if(f!=-1)
        {
            f==-1;
            r==-1;
            goto end;
        }
    }
    else if(f!=r)
    {
        f=(f+1)%n;
    }


    end :

        printf("");
}


int display()
{
    int i,s=f,k;

    do
    {
        printf("%d ",a[s]);
        s=(s+1)%n;
    }while(s!=r+1);
}


  int main()
  {
    int i,s;

printf("1)inseretend\n2)deletefirst\n3)exit\n");

for(i=0;i<50;i++)
{
    printf("Enter your choice :");
    scanf("%d",&s);

    switch(s)
    {
    case 1:
    {
        insertend();
        break;
    }

    case 2:
    {
        deletefirst();
        break;
    }

    case 3:
    {
        goto end;
    }

    default :
    {
        goto end;
    }
    }
}
end :
    display();

    return 0;
}