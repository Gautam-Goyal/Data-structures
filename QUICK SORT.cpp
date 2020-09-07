#include <iostream>
#define SIZE 10
using namespace std;

// int SIZE=10;
class QuickSort{
  private:
    int TOP=-1;
    int LOWER[SIZE],UPPER[SIZE];
    int A[SIZE];
    int BEG,END;

  public:
    QuickSort(){
      int LOC;
      cout<<"Enter elements one by one ";
      for(int i=0;i<SIZE;i++){
        cin>>A[i];
      }
      if(SIZE>0){
        TOP++;
        LOWER[0]=0;
        UPPER[0]=SIZE-1;
      }

      while(TOP!=-1){
        BEG=LOWER[TOP];
        END=UPPER[TOP];
        TOP-=1;
        LOC=Quick(A,BEG,END,LOC);
        if(BEG<LOC-1){
          TOP+=1;
          LOWER[TOP]=BEG;
          UPPER[TOP]=LOC-1;
        }
        if(LOC+1<END){
          TOP+=1;
          LOWER[TOP]=LOC+1;
          UPPER[TOP]=END;
        }
      }
    }

    int Quick(int a[],int BEG,int END,int LOC=0){
      int LEFT=BEG;
      int RIGHT=END;
      LOC=BEG;

      /************Right to left**************/
      R_to_L:
      while(a[LOC]<=a[RIGHT] && LOC!=RIGHT){
        RIGHT-=1;
      }
      if(LOC==RIGHT){return LOC;}
      if(a[LOC]>a[RIGHT]){
        swap(&a[LOC],&a[RIGHT]);
        LOC=RIGHT;
        goto L_to_R;
      }

      /*************Left to Right*************/
      L_to_R:
      while(a[LEFT]<=a[LOC] && LOC!=LEFT){
        LEFT+=1;
      }
      if(LOC==LEFT){return LOC;}
      if(a[LEFT]>a[LOC]){
        swap(&a[LOC],&a[LEFT]);
        LOC=LEFT;
        goto R_to_L;
      }
      return LOC;
    }

    void swap(int *loc,int *other){
      int t=*loc;
      *loc=*other;
      *other=t;
    }

    void display(){
      for(int i=0;i<SIZE;i++){
        cout<<A[i]<<" ";
      }
      cout<<endl;
    }

};
//   55 33 11 22 44 58 69 30 38 10
//   44 33 11 55 77 90 40 60 99 22
int main() {
  QuickSort q1;
  q1.display();
}
