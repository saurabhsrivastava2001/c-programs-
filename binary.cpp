#include <iostream>
using namespace std;

class vector{
    public:
    int x;
    int y;
    vector(int a,int b):x(a),y(b){}
    vector(){
    }
    vector operator-(vector &obj){
        vector temp;
        temp.x=x+obj.x;
        temp.y=y+obj.y;
        return temp;
    }
    void dispaly(){
        cout<<this->x<<" "<<this->y<<endl;
    }

};

int main(){
    int a ,b;
    cin>>a>>b;

    vector v(a,b);
    vector v2(a,b);
    v.dispaly();
    vector v3;
    v3=v-v2;
    v3.dispaly();
}