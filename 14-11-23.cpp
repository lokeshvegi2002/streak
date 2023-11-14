int lowerbound(vector<int> arr,int m,int x){
    int low=0;
    int high=m-1;
    int ans=m;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int ind=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        int c=m-lowerbound(matrix[i],m,1);
        if(c>ans){
            ans=c;
            ind=i;
        }
    }
    return ind;

}