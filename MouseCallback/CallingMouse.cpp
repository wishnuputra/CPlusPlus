#include <iostream>
#include <opencv2/opencv.hpp>

#define NEIGHBORHOOD_Y 9
#define NEIGHBORHOOD_X 9
#define MAX_B_CHANNEL 70
#define MAX_G_CHANNEL 100
#define MAX_R_CHANNEL 70

int main(int argc, char** argv)
{
    cv::Mat input_img = cv::imread("robocup.jpg");
    cv::resize(input_img, input_img, cv::Size(input_img.cols/2.0, input_img.rows/2.0));
    cv::imshow("img", input_img);
    cv::setMouseCallback("img", onMouse(), (void*)&input_img);

    cv::waitKey(0);

    return 0;
}