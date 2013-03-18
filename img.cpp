#include <CImg.h>
#include<iostream>
using namespace std;
using namespace cimg_library;
int main () {
int n;
    CImg<unsigned char> img("angel.bmp");
    img.display("Hello,Ashi");
   
cout<<"Enter angle to rotate";
cin>>n;
img.rotate(n).display("Rotated Image");

    return 0;
}
