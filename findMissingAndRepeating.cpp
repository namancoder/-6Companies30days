 pair<int,int> helper(int* arr, int n){
        int repeating=0;
        int missing=0;
        for(int i=0;i<n;i++){
            int index=abs(arr[i])-1;
            if(arr[index]>0){
                arr[index]=-1*arr[index];
            }
            else{
                repeating=abs(arr[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                missing=i+1;
            }
        }
        return {repeating,missing};
}
    int *findTwoElement(int *arr, int n) {
        int* res=new int[2];
        pair<int,int> ans=helper(arr,n);
        res[0]=ans.first;
        res[1]=ans.second;
        return res;
}