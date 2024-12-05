#include <stdio.h>
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"  // Make sure to include the imgcodecs module

int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <image_path>\n");
        return -1;
    }
 
    printf("Image path: %s\n", argv[1]);

    cv::Mat image;
    image = cv::imread( argv[1], cv::IMREAD_COLOR );
 
    if ( image.empty() )
    {
        printf("No image data\n");
        return -1;
    }

    cv::namedWindow("Deeznuts", cv::WINDOW_AUTOSIZE );
    imshow("Deeznuts", image);
 
    cv::waitKey(0);
 
    return 0;
}
