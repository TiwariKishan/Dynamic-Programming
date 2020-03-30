vector<int> maxSubarray(vector<int> arr) {
    int y=0,z=-1000000;
    for(int i=0;i<arr.size();i++)
    {
         if(arr[i]>0)
         {
             y+=arr[i];
         }
         if(z<arr[i])
         z=arr[i];
    }
    if(y==0)
    {
        y=z;
    }
    int mi=z,mie=0;
for(int i=0;i<arr.size();i++)
{
     mie+=arr[i];
     if(mie<0)
       mie=0;
    else if(mi<mie)
     mi=mie;
}
vector<int> v;
v.push_back(mi); //mi is sum of max subarray
v.push_back(y);  // y is sum of max subsequence
return v;
}
