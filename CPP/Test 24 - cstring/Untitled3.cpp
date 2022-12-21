#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>
using namespace std;
double distance(char *xa, char *xb, char *ya, char *yb){
    int x1, x2, y1, y2, h;
    x1 = atoi(xa);
    x2 = atoi(xb);
    y1 = atoi(ya);
    y2 = atoi(yb);
    h = pow(x2-x1,2) + pow(y2-y1,2);
    return sqrt(h);
}
int main() {
    char x1[3] = "3";
    char x2[3] = "7";
    char y1[3] = "2";
    char y2[3] = "8";
    cout<<distance(x1, x2, y1, y2);
}
