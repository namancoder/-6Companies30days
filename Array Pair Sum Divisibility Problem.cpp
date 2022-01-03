 bool canPair(vector<int> a, int k) {
        // Code here.
        
        // for(int i=0;i<nums.size();i++)
        // {
        //     int x = nums[i];
        //     bool flag = false;
        //     for(int j =i+1;j<nums.size();j++)
        //     {
                
        //         if((nums[j]+x)%k==0)
        //         {
        //         flag=true;
        //         vector<int>::iterator it;
        //         it = nums.begin()+j;
        //         nums.erase(it);
        //         break;
        //         }
                
        //     }
        //     if(flag==false)
        //     return false;
        // }
        // return true;
        
         map<int,int>m;
       int n=a.size();
       for(int i=0;i<n;i++){
           m[a[i]%k]++;
       }
       for(int i=0;i<n;i++){
           int r=a[i]%k;
           if(r==0){
               if(m[0]&1)return 0;
           }
           else if(m[r]!=m[k-r])return 0;
       }
       return 1;
    }