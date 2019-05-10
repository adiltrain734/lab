//Exception handling
#include<iostream>
using namespace std;
void div(double d1,double d2){
        try{
                if(!d2)
                        throw 1;
                cout<<d1<<" / "<<d2<<" = "<<d1/d2<<endl;
        }
        catch(int x){
                cout<<"Second number must not be 0\n";
        }
}
void read(){
        double d1,d2;
        try{
                cout<<"Enter 2 double values\n";
                cin>>d1;
                if(cin.fail())
                        throw 1;
                cin>>d2;
                if(cin.fail())
                        throw 1;
                div(d1,d2);
        }
        catch(int x){
                cout<<"Enter double values only\n";
        }
}
int main(){
        read();
        return 0;
}