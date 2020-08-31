#include <iostream>
#define SIZE 5
using namespace std;

class Queue{
  private:
    int R,F;
    int a[SIZE];

  public:
    Queue(){
      F=-1;
      R=-1;
    }

    void insert(int item){
      if (R==(SIZE-1)){
        cout<<"Overflow\n";
        return;
      }
      else if(F==-1){
        F=0;R=0;
      }
      else{
        R=R+1;
      }
      a[R]=item;
    };

    int deletion(){
      if (F==-1){
        cout<<"Underflow"<<endl;
      }

      int item=a[F];
      if(F==R){
        F=-1;R=-1;
      }
      else{
        return ++F;
      }
      return 0;
    }

    void display(){
      for(int i=F;i<=R;i++){
        cout<<a[i]<<endl;
      }
    }
};

int main() {
  int e,i=SIZE;
  Queue q;

  // while(i>0){
  //   cin>>e;
  //   q.insert(e);
  //   i--;
  // }
  q.insert(4);
  q.insert(5);
  q.insert(6);
  q.insert(7);
  q.insert(8);
  q.deletion();
  q.deletion();
  q.deletion();
  q.deletion();
  q.deletion();
  q.display();
}
