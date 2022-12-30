#include <windows.h>

/* This is where all the input to the window goes to */
class Sin {
private:
    int a, b;
public:
    auto sin() {
        return b / a;
    }
};

class Cos {
    Sin s;
private:
    int a;
protected:
    auto cos() {
        return a / s.sin();
    }
};