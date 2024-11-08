#include <iostream>
using namespace std;

class vector{
    public:
    int x;
    int y;
    vector(int a,int b):x(a),y(b){}
    void operator-(){
        this->x=-this->x;
        this->y=-this->y;
    }
    void dispaly(){
        cout<<x<<" "<<y<<endl;
    }

};

int main(){
    int a ,b;
    cin>>a>>b;

    vector v(a,b);
    v.dispaly();
    -v;
    v.dispaly();
}