#include <iostream>

using namespace std;
void bubble(int b[],int n){
  int ;
  for (int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
      if(b[j]>b[j+1]){
        temp=b[j];
        b[j]=b[j+1];
        b[j+1]=temp;
      }
    }
    
  }
  for(int k=0;k<n;k++){
    cout<<b[k]<<'\t';
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

  bubble(a,n);
}
