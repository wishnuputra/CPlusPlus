//Sample hello world for Computer Vision course labs - P.Zanuttigh

//include openCV
#include <opencv2/opencv.hpp>



// starting point for the application
int main(int argc, char** argv)
{
	// simple print message, for 1st test you can comment openCV part and keep only this line
	std::cout << "hello world with images" << std::endl;

	// load an image and place it in the img variable
	cv::Mat img = cv::imread("robocup.jpeg");

	// scale the image of a factor of 2
	cv::resize(img, img, cv::Size(), 0.5, 0.5);

	// Visualize the image
	cv::imshow("img", img);

	// wait for a key to be pressed and then close all
	cv::waitKey(0);
	cv::destroyAllWindows();

	return 0;
}
