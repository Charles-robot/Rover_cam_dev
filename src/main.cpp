#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // IP camera URL (adjust according to your setup)
    std::string camera_url = "rtsp://username:password@192.168.1.100:554/stream1";

    // Open a connection to the IP camera
    cv::VideoCapture cap(camera_url);

    // Check if the connection was successful
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not connect to the IP camera." << std::endl;
        return -1;
    }

    // Capture a single frame
    cv::Mat frame;
    bool ret = cap.read(frame);

    if (ret) {
        // Display the frame in a window
        cv::imshow("IP Camera Frame", frame);

        // Save the frame as a screenshot
        cv::imwrite("screenshot.jpg", frame);
        std::cout << "Screenshot saved as screenshot.jpg" << std::endl;

        // Wait for a key press
        cv::waitKey(0);
    } else {
        std::cerr << "Error: Could not read frame." << std::endl;
    }

    // Release the camera and close OpenCV windows
    cap.release();
    cv::destroyAllWindows();

    return 0;
}
