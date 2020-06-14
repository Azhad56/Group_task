#include<iostream>
using namespace std;
  class Mergesort
     {
       public:
       void merge(int L[],int R[],int A[])
         {
          int i=0,j=0,k=0;
           int nL=sizeof(L);
           int nR=sizeof(R);
             while((i<nL)&&(j<nR))
             {
                 if(L[i]<=R[j])
                 {
                  A[k]=L[i];
                    k++;
                    i++;
                 }
                 else
                 {
                  A[k]=R[j];
                    k++;
                    j++;
                 }
             }
             while(i<nL)
               {
                  A[k]=L[i];
                  i++;
                  k++;
               }
              while(j<nR)
               {
                 A[k]=R[j];
                  j++;
                  k++;
               }
          cout<<"Your Array has been sorted with merge sort"<<endl;
            for(int s=0;s<(sizeof(A));s++)
                 {
                    cout<<A[s]<<" ";
                 }
              cout<<endl;
         }
       void mergesort(int A[])
        {
            int i,mid,n;
            n=sizeof(A);
            if(n>=2)
           {
             mid=n/2;
           int left[mid];
           int right[n-mid];
            for(i=0;i<mid;i++) 
              {
                left[i]=A[i];
              }
              for(i=mid;i<n;i++) 
              {
                right[i]=A[i];
              }
            mergesort(left);
            mergesort(right);
            merge(left,right,A);
        }
       }
     };
  int main()
   {
        Mergesort ob;
      int a[] = {10,9,87,6,5,4,31,100};
      ob.mergesort(a);
     return 0;
   }
