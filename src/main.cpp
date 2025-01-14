#include "mesFonctions.h"

int main(int argc, char** argv) {
int test = 0;
   
    while(1)
    {
        
        std::cout << "Enter option 1 or 2" << std::endl;
        std::cin >> test;

        switch(test) 
        {
            case 1:
                afficherImage(argc, argv);
                break;
            case 2:
                screenShotIPCam();
                break;

            default:
                std::cout << "Enter either 1 or 2";
                break;
        }
    }
    return 0;
}

