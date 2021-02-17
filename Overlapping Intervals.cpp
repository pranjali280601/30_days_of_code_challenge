vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> intervals, int n) {
    //code here
    int i,j=0;
    vector<pair<int,int>>ans;
    sort(intervals.begin(),intervals.end());
    ans.push_back(make_pair(intervals[0].first,intervals[0].second));
    for(i=1;i<n;i++)
    {
        if(ans[j].second>=intervals[i].first)
         ans[j].second=max(intervals[i].second,ans[j].second);
    else
    {
        ans.push_back(make_pair(intervals[i].first,intervals[i].second));
        j++;
    }
    }
    return ans;
    
}
