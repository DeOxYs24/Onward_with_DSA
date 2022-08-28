#include<bits/stdc++.h>
using namespace std;

class Stack {
    //properties
    public:
        int *arr;
        int top;
        int size;

        //behaviour
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top = -1;
        }

        //push
        void push (int element){
            if((size - top) >1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack Overflow"<<endl;
            }
        }

        //pop
        void pop (){
            if(top >= 0){
                top--;
            }
            else{
                cout<<"Stack Underflow"<<endl;
            }
        }

        //peek
        int peek (){
            if(top >= 0 ){
                return arr[top];
            }
            else{
                cout<<"Stack is empty"<<endl;
                return -1;
            }
        }

        //empty
        bool isEmpty (){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }

        
};

int main(){

    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<< st.peek() <<endl;
    
    st.pop();

    cout<< st.peek() <<endl;

    st.pop();

    cout<< st.peek() <<endl;

    st.pop();

    cout<< st.peek() <<endl;

    if(st.isEmpty()){
        cout<< "Stack is Empty"<<endl;
    }
    else{
        cout<< "Stack is not empty"<<endl;
    }


    /*

    //creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);
    s.push(4);

    //pop operation
    s.pop();

    //peak element
    cout<<"Print top element: "<<s.top()<<endl;

    //empty check
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }

    //size check
    cout<<"size of stack is: "<<s.size(); 

    */


    return 0;
}