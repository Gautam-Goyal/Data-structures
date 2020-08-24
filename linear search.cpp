#include <iostream>

using namespace std;
int main() {
  int n,a[10],item,k=0,loc;

  cout<<"Enter no. of elements ";
  cin>>n;

  cout<<"Enter elements by one by one ";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  cout<<"Enter element to be found ";
  cin>>item;

  while(loc==0 && k<=n){
    if(item==a[k])
      loc=k;
    k=k+1;
  }

  if(loc==0){
    cout<<"Item not found ";
  }
  else{
    cout<<"element found at loc="<<loc+1;
  }
}
