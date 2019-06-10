#include<iostream>
#include"l1.cpp"

using namespace std;

class queue{
           public:
           node * front;
           node * end;
           linkedlist l1;
          
           //constructor
           queue(){
                   front = l1.head;
                    end = l1.getPos();
           }
            
void enqueue(int val){
           l1.insert(val);
           front = l1.head;
}
int count(){
          return l1.numberofItems(();
}
void dequeue(){
          l1.deleteatnumberofItems(());
          end = l1.getPos();
}
void display(){
          l1.display();
}

};
int main(){
         queue q1;

         for(int i=1; i<6; i++){
         q1.enqueue(i);
         }
         q1.display();
         q1.dequeue();
         q1.display();
         q1.enqueue(6);
         q1.display();
         q1.dequeue();
         q1.display();
}
