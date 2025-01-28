#include "mesFonctions.h"

int  compteur = 0;

int main(int argc, char** argv) {
    int test = 0;

    const char* env_dir = std::getenv("SCREENSHOT_DIR");
    const char* dir = env_dir ? env_dir : "/home/anibal/Rover_cam_dev/Screenshots"; //changer "anibal" par le bon user 

     if (env_dir) {
        // La variable est définie
        std::cout << "SCREENSHOT_DIR is set to: " << env_dir << std::endl;
        } else {
        // La variable n'est pas définie
        std::cerr << "SCREENSHOT_DIR is not defined. Using the default directory." << std::endl;
    }

    //Checks user
    const char* user = std::getenv("USER");  // or "LOGNAME" on some systems
    if (user) {
        std::cout << "The program is running as user: " << user << std::endl;
    } else {
        std::cout << "Could not determine the user." << std::endl;
    }

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
                    if(screenshotIPCam(compteur, dir) == 0 )
                    {
                        ++compteur;
                    }
                break;

            case 3:
                break;
            default:
                std::cout << "Enter either 1, 2 or 3" << std::endl;
                break;
        }

    }
    return 0;
}

