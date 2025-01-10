#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

template<class t>
class Queue{
    private:
            t a[100];
            int rear;
    public: 
            Queue(){
                rear=0;
            }
            void add(t);
            void del();
            void display();
};

template<class t>
void Queue<t>::add(t ele){
    a[++rear]=ele;
}

template <class t>
void Queue<t>::del(){
    if(rear==0)
        cout<<"\nQueue is Empty!";
    else{
        t ele=a[1];
        for(int i=1;i<=rear;i++)
            a[i]=a[i+1];
        rear--;
        cout<<"The element deleted from the queue is: "<<ele;
    }
}
template <class t>
void Queue<t>::display(){
    cout<<"\nContents of the queue are: ";
    if(rear==0)
        cout<<"\nQueue is Empty";
    for(int i=1;i<=rear;i++)
        cout<<"\t"<<a[i];
}

int main(){
    Queue <int> iq;
    Queue <double> dq;
    double eleI;
    int choice,ch,eleD;
    char c;
    cout<<"\n\t1.Integer\n\t2.Doubles\n";
    cin>>ch;
    cout<<"\n\t1.Add\n\t2.Delete\n\t3.Exit";
    do{
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1: cout<<"\nEnter the element to be added: ";
                    if(ch==1){
                        cin>>eleI;
                        iq.add(eleI);
                        iq.display();
                        break;
                    }
                    else{
                        cin>>eleD;
                        dq.add(eleD);
                        dq.display();
                        break;
                    }
            case 2: 
                    if(ch==1){
                        iq.del();
                        iq.display();
                        break;
                    }
                    else{
                        dq.del();
                        dq.display();
                    }
            default: exit(0);
        }
    }
    while(ch!=3);
    return 0;
}

