// Basic_drawings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"


#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;
using namespace std;



int main()
{
	String imageName("C:/Users/Peti/Desktop/foto/blank.jpg");
	Mat image;
	image = imread(samples::findFile(imageName), IMREAD_COLOR);   // Read the file

	line(image, Point(1, 1), Point(100, 100), Scalar(0, 0, 0));

	circle(image, Point(90, 90), 20, Scalar(0, 0, 255));

	ellipse(image, Point(60, 70), Size(70, 20), 25, 10, 300, Scalar(255, 0, 0), 2, 8);

	rectangle(image, Rect(100, 100, 100, 100), Scalar(200, 200, 200), 1, 8);

	/*The ellipse is displayed in the image image
		The ellipse center is located in the point60, 70) and is enclosed in a box of size(70, 70)
		The ellipse is rotated angle degrees
		The ellipse extends an arc between 0 and 360 degrees
		The color of the figure will be(255, 0, 0) which means blue in BGR value.
		The ellipse's thickness is 2.*/

	//Point pt = Point(4, 5);

	//MyLine(image, Point(0, 15 * w / 16), Point(w, 15 * w / 16));




	imshow("Original Image", image);
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
