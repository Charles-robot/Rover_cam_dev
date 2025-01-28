#include <stdio.h>
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"  // Make sure to include the imgcodecs module
#include <iostream>
#include <unistd.h>
#include <cstdlib>

extern int compteur;

int afficherImage(int argc, char** directory );
int screenshotIPCam(int Compteur, const char* dir);
