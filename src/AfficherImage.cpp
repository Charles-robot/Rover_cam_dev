#include "mesFonctions.h"

int afficherImage(int argc, char** directory )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <image_path>\n");
        return -1;
    }
 
    printf("Image path: %s\n", directory[1]);

    cv::Mat image;
    image = cv::imread( directory[1], cv::IMREAD_COLOR );
 
    if ( image.empty() )
    {
        printf("No image data\n");
        return -1;
    }

    cv::namedWindow("Deeznuts", cv::WINDOW_AUTOSIZE );
    imshow("Deeznuts", image);
 
    int k = cv::waitKey(0);

    if( k == 's')
    {
        cv::imwrite("test.png", image);
    }
 
    return 0;
}
