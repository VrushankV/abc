int raincheck(int a[],int n);
int checkorder(int a[],int n);
int main()
{
    int t,n,i,j,f,a[100];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[j]);
        }
        f= raincheck(a,n);
        if(f==0)
        {
            printf("no");
        }
        else
        {
            printf("yes");
        }
    }
    return 0;
}
int raincheck(int a[],int n)
{
    int mid,g,i;
    mid=n/2;
    for(i=0;i<mid;i++)
    {
        if(a[i]!=a[n-i-1])
        {
            return 0;
        } 
    }
    g=checkorder(a,n);
    return g;
}
int checkorder(int a[],int n)
{
    int mid,x=0,i;
    mid=n/2;
    if(a[mid]!=7)
        return 0;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1] || a[i+1]==(a[i]+1) || a[i+1]==(a[i]-1))
        {
            x= 1;
        }
        else
        {
            return 0;
        }
    }
    return x;
}   
