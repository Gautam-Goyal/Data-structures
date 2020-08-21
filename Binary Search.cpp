#include <iostream>

using namespace std;

int main(){
  int n,item,beg=0,mid,loc,a[100];
  cout<<"Enter no. of elements u want in array ";
  cin>>n;
  
  int end=n-1;
  
  cout<<"Enter elements one by one \n";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  cout<<"Enter element u want to search \n";
  cin>>item;

  mid=int((beg+end)/2);

  while(beg<=end && a[mid]!=item){
    if (item<a[mid]){
      end=mid-1;
    }
    else{
      beg=mid+1;
    }
    mid=int((beg+end)/2);
  }

  if(a[mid]==item){
    cout<<"element found at location "<<mid+1;
  }
  else{
    cout<<"element not found";
  }
}
