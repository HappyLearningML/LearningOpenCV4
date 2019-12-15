#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
	cv::Mat src = cv::imread(argv[1]);
    if(src.empty())
    {
        std::cout<<"no image data ...."<<std::endl;
        return -1;
    }
    cv::namedWindow("src", cv::WINDOW_NORMAL);
    cv::imshow("src", src);
    // RGB to HSV
    cv::Mat hsv;
    cv::cvtColor(src, hsv, cv::COLOR_BGR2HSV);
    cv::namedWindow("hsv", cv::WINDOW_NORMAL);
    cv::imshow("hsv", hsv);

    //RGB to YUV
    cv::Mat yuv;
    cv::cvtColor(src, yuv, cv::COLOR_BGR2YUV);
    cv::namedWindow("yuv", cv::WINDOW_NORMAL);
    cv::imshow("yuv", yuv);
             
    // RGB to YUV
    cv::Mat ycrcb;
    cv::cvtColor(src, ycrcb, cv::COLOR_BGR2YCrCb);
    cv::namedWindow("ycrcb", cv::WINDOW_NORMAL);
    cv::imshow("ycrcb", ycrcb);
                        
  
    cv::Mat src2 = cv::imread(argv[2]);
    cv::namedWindow("src2", cv::WINDOW_NORMAL);
    cv::imshow("src2", src2);

    cv::cvtColor(src2, hsv, cv::COLOR_BGR2HSV);
    cv::Mat mask;
    cv::inRange(hsv, cv::Scalar(35, 43,46), cv::Scalar(99, 255, 255), mask);
    cv::namedWindow("mask", cv::WINDOW_NORMAL);
    cv::imshow("mask",mask);

    cv::waitKey();
    return 0;
}

