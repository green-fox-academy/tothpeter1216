// Blending_two_images.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
//using namespace std;

int main()
{
	double alpha = 0.5; double beta; double input;
	Mat src1, src2, dst;
	std::cout << " Simple Linear Blender " << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << "* Enter alpha [0.0-1.0]: ";
	std::cin >> input;
	// We use the alpha provided by the user if it is between 0 and 1
	if (input >= 0 && input <= 1)
	{
		alpha = input;
	}

	// --Warning
	// --Since we are adding src1 and src2, they both have to be of the same size(width and height) and type.


	src1 = imread(samples::findFile("C:/Users/Peti/Desktop/foto/LinuxLogo.jpg"));
	src2 = imread(samples::findFile("C:/Users/Peti/Desktop/foto/WindowsLogo.jpg"));
	if (src1.empty()) { std::cout << "Error loading src1" << std::endl; return EXIT_FAILURE; }
	if (src2.empty()) { std::cout << "Error loading src2" << std::endl; return EXIT_FAILURE; }
	beta = (1.0 - alpha);
	addWeighted(src1, alpha, src2, beta, 0.0, dst);
	imshow("Linear Blend", dst);
	waitKey(0);
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
