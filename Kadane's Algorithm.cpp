int maxSubarraySum(int arr[], int n){
    
    int a[n],i,maxi=arr[0];
    a[0]=arr[0];
    for(i=1;i<n;i++)
    {
        a[i]=max(arr[i]+a[i-1], arr[i]);
        if(a[i]>maxi)
        maxi=a[i];
    }
    return maxi;
    
}
