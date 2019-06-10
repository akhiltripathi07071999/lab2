#include <iostream>
#include"l1.cpp"
using namespace std;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
class stack{
         public:
         node * top;
         linkedlist l1;

         //constructor
         stack(){
                 top = l1.head;
         }

//function to insert
void push(int val){
        l1.insert(val);
        top = l1.head;
        }

//function to delete
void pop(){
        if ( top == NULL){
        cout<< "there is nothing in the stack to remove."<<endl;
        }
        else{
        l1.delet();
        top = l1.head;
        }
}
//function to display
void display(){
        l1.display();
        }
};

int main(){
        stack s1;

        for( int i =1; i<6; i++){
        s1.push(i);
        }
        /*s1.push(1);
        s1.push(2);
        s1.push(3);
        s1.push(4);
        s1.push(5);*/
        s1.display();
        s1.pop();
        s1.display();
        s1.pop();
        s1.display();
        s1.pop();
        s1.display();
        s1.pop();
        s1.display();
        s1.pop();
        s1.display();
        s1.pop();
        s1.display();

    
}
