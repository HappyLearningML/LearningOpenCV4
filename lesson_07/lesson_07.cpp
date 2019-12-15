#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    // create first image
    cv::Mat src1 = cv::Mat::zeros(cv::Size(400, 400), CV_8UC3);
    cv::Rect rect(100, 100,100,100);
    src1(rect) = cv::Scalar(0,0,255);
    cv::namedWindow("src1", cv::WINDOW_NORMAL);
    cv::imshow("src1", src1);
    std::cout<<"finish to create first image ...."<<std::endl;

    //create second image
    cv::Mat src2 = cv::Mat::zeros(cv::Size(400, 400), CV_8UC3);
    rect.x = 150;
    rect.y = 150;
    src2(rect) = cv::Scalar(0,255, 0);
    cv::namedWindow("src2", cv::WINDOW_NORMAL);
    cv::imshow("src2", src2);
    std::cout<<"finish to create second image .... " << std::endl;

    // and xor or
    cv::Mat res1,res2,res3;
    cv::bitwise_and(src1,src2,res1);
    cv::bitwise_xor(src1, src2, res2);
    cv::bitwise_or(src1, src2, res3);

    //show
    cv::imshow("res1", res1);
    cv::imshow("res2", res2);
    cv::imshow("res3", res3);
    
    // reverse
    cv::Mat src = cv::imread(argv[1]);
    cv::namedWindow("src", cv::WINDOW_NORMAL);
    cv::imshow("src", src);

    cv::Mat res;
    cv::bitwise_not(src, res);
    cv::imshow("res", res);

    cv::waitKey();
    return 0;

}
