#include <iostream>

using namespace std;
void selection(int b[],int n){
  int temp,original;
  for (int i=0;i<n-1;i++){
    original=i;
    for(int j=i+1;j<n;j++){
      if(b[original]>b[j]){
        original=j;
      }
    }
    temp=b[original];
    b[original]=b[i];
    b[i]=temp;
  }
}
int main() {
  int n,a[10];

  cout<<"Enter the no. of elements ";
  cin>>n;
  cout<<"Enter elements one by one \n";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  selection(a,n);
  for(int k=0;k<n;k++){
    cout<<a[k]<<'\t';
  }
}
