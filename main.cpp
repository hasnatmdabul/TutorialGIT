#include <iostream>

using namespace std;

class Rectangle{
    int height, width;
public:
    Rectangle(int h, int w): height(h), width(w) {}
    int area(){return height*width;}
};

int main(){
    Rectangle rect(1,2);
    Rectangle rect1(3,4);
    Rectangle *foo, *bar, *baz;
    bar = new Rectangle(5,6);
    baz = new Rectangle[2] { {7,8},{9,10} };

    foo = &rect;

    cout<< "rect" <<rect.area()<<endl;
    cout<< "rect1-" <<rect1.area()<<endl;
    cout<< "foo" <<foo->area()<<endl;
    cout<< "bar" <<bar->area()<<endl;
    cout<< "baz1-" <<baz[0].area()<<endl;
    cout<< "baz2-" <<baz[1].area()<<endl;

    return 0;

}
