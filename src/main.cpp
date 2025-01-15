#include "mesFonctions.h"

int main(int argc, char** argv) {
    int test = 0;

    // Check if directory is writable
    const char* user = std::getenv("USER");  // or "LOGNAME" on some systems
    if (user) {
        std::cout << "The program is running as user: " << user << std::endl;
    } else {
        std::cout << "Could not determine the user." << std::endl;
    }

    const char* dir = "Screenshots";

    // Check if directory is writable
    if (access(dir, W_OK) == 0) {
        std::cout << "Write permission is granted." << std::endl;
    } else {
        std::cerr << "Write permission denied." << std::endl;
    }
   
    while(test != 3)
    {
        
        std::cout << "Enter option 1, 2 or 3 (exit)" << std::endl;
        std::cin >> test;

        switch(test) 
        {
            case 1:
                afficherImage(argc, argv);
                break;

            case 2:
                screenShotIPCam();
                break;

            case 3:
                break;
            default:
                std::cout << "Enter either 1, 2 or 3";
                break;
        }

    }
    return 0;
}

