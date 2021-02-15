void sort012(int a[], int n)
{
    int c0=0,c1=0,c2=0,i;
    for(i=0;i<n;i++){
        if(a[i]==0)
        ++c0;
        else if(a[i]==1)
        ++c1;
        else
        ++c2;
    }
    for(i=0;i<c0;i++)
    a[i]=0;
    for(i=c0;i<c0+c1;i++)
    a[i]=1;
    for(i=c0+c1;i<c0+c1+c2;i++)
    a[i]=2;
    
}
