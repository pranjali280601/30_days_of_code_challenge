void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i,j=0,k,size;
	    for(i=n-1;i>=0;i--){
	        
	   
	            if(arr1[i]>=arr2[j]){
	            swap(&arr1[i],&arr2[j]);
	            ++j;
	            }
	            else
	            break;
	            if(j==m)
	            break;
	        
	        
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	}
