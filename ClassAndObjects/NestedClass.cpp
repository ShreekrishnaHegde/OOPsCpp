/*

*/

#include <iostream>
using namespace std;

class Outer{
    private:
        class Inner{
            public:
                Inner(int data){
                    cout << "Inner class data: " << data << endl;
                }
        };
    public:
        Outer(int data){
            Inner(data);
        }
};
int main(){

    return 0;
    
}