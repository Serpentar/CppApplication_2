#include "stdafx.h"
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
#include <cv.h> 
#include <highgui.h> 
 
using namespace std; 
using namespace cv; 

void Convolution(Mat img);

int main(int argc, char *argv[]) 
{ 
int h[3][3];
long x;
// load an image 
IplImage* img1=cvLoadImage("/Users/serpentar/Desktop/traitement_image/K/lena.png",CV_LOAD_IMAGE_UNCHANGED); 
Mat img=imread("/Users/serpentar/Desktop/traitement_image/K/lena.png ",CV_LOAD_IMAGE_UNCHANGED); 
if(img.empty()){ 
printf("Could not load image file\n"); 
exit(0); 
}
}