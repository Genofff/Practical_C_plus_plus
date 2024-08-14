#include <iostream>
using namespace std;
class drawMethod {
public:
    virtual void draw(){
        cout << " /\\" << endl;
    }
};
class drawMethod1: public drawMethod {
public:
    void draw() {
    cout << "//\\\\" << endl;;
    }
};

class drawMethod2: public drawMethod {
public:
    void draw() {
        cout << "/**\\" << endl;;
    }
};
class drawMethod3: public drawMethod {
public:
    void draw() {
        cout << "/++\\" << endl;;
    }
};
int main(){
    drawMethod* draw[4];
    draw[0] = new drawMethod();
    draw[1] = new drawMethod1();
    draw[2] = new drawMethod2();
    draw[3] = new drawMethod3();
    for (int i = 1; i <= 3; ++i) {
        cout << "Drawing " << i << ":" << endl;
        draw[0] ->draw();
        draw[i] ->draw();
    }
    return 0;
}