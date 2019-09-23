// Converting_RGB_picture_to_Gray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/imgproc/imgproc.hpp>

//using namespace cv;
//using namespace std;

int main()
{

	cv::String imageName("C:/Users/Peti/Desktop/foto/foto.jpg");
	cv::Mat image;
	image = cv::imread(cv::samples::findFile(imageName), cv::IMREAD_COLOR);   // Read the file

	cv::Mat grey_image;

	cvtColor(image, grey_image, cv::COLOR_RGB2GRAY);



	imshow("Original Image", image);
	imshow("Grey Image", grey_image);
	cv::waitKey();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file