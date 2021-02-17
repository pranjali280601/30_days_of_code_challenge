vector<int> duplicates(int a[], int n) {
    // code here
    int i,s[n]={0};
    vector<int>ans;
    for(i=0;i<n;i++)
    ++s[a[i]];
    for(i=0;i<n;i++)
    if(s[i]>1)
    ans.push_back(i);
    if(ans.empty())
    ans.push_back(-1);
    return ans;
}
