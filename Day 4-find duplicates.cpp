int Solution::repeatedNumber(const vector<int> &A) {
 vector<bool>mp((int)A.size(), false);
    for(int i=0;i<A.size();i++)
    {
        if(mp[A[i]-1]==true)
        {
           return A[i];
        }
        mp[A[i]-1]=true;
    }
    return -1;
}
