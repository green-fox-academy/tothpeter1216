// Changing-the-contrast.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
using namespace std;

int main()
{

	String imageName("C:/Users/Peti/Desktop/foto/foto.jpg");
	Mat image;
	image = imread(samples::findFile(imageName), IMREAD_COLOR);   // Read the file

	Mat new_image = Mat::zeros(image.size(), image.type());

	double alpha = 0.1; //contrast 0.1 - 10.0
	//int beta = 0; //brightness

	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			for (int c = 0; c < image.channels(); c++) {
				new_image.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(alpha*image.at<Vec3b>(y, x)[c] );
			}
		}
	}

		
	


	imshow("Original Image", image);
	imshow("New Image", new_image);
	waitKey();
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
