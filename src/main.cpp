#include <stdio.h>
#include "opencv2/highgui.hpp"
 
 
int main(int argc, char** argv )
{
     cv Mat image;
    image = cv.imread( "chatgpt.png", cv::IMREAD_COLOR );
 
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }
    cv::namedWindow("Display Image", WINDOW_AUTOSIZE );
    cv::imshow("Display Image", image);
 
    cv::waitKey(0);
 
    return 0;
}
