#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat src1 = cv::imread("img1.jpg");
    cv::Mat src2 = cv::imread("img2.jpg");
    if(src1.empty())
    {
        std::cout<<"no image data ..." << std::endl;
        return -1;
    }

    cv::namedWindow("src",1);
    cv::imshow("src1", src1);
    cv::imshow("src2", src2);
    int heigth = src1.rows;
    int width  = src1.cols;

    int b1 = 0, g1 = 0, r1 = 0;
    int b2 = 0, g2 = 0, r2 = 0;
    int b = 0, g = 0, r = 0;

    cv::Mat res = cv::Mat::zeros(src1.size(), src1.type());
    for (int row = 0; row < heigth; row++)
    {
        for(int col = 0;col < width; col++)
        {
            b1 = src1.at<cv::Vec3b>(row, col)[0];
            g1 = src1.at<cv::Vec3b>(row, col)[1];
            r1 = src1.at<cv::Vec3b>(row, col)[2];
            

            b2 = src2.at<cv::Vec3b>(row, col)[0];
            g2 = src2.at<cv::Vec3b>(row, col)[1];
            r2 = src2.at<cv::Vec3b>(row, col)[2];

            res.at<cv::Vec3b>(row, col)[0] = cv::saturate_cast<uchar>(b1 + b2);
            res.at<cv::Vec3b>(row, col)[1] = cv::saturate_cast<uchar>(g1 + g2);
            res.at<cv::Vec3b>(row, col)[2] = cv::saturate_cast<uchar>(r1 + r2);

        }

    }
    cv::imshow("output", res);

    cv::Mat add_res = cv::Mat::zeros(src1.size(), src1.type());
    cv::add(src1, src2, add_res);
    cv::imshow("add_res", add_res);

    cv::Mat sub_res = cv::Mat::zeros(src1.size(), src1.type());
    cv::subtract(src1, src2, sub_res);
    imshow("sub_res", sub_res);
    
    cv::Mat mul_res = cv::Mat::zeros(src1.size(), src1.type());
    cv::multiply(src1, src2, mul_res);
    cv::imshow("mul_res", mul_res);

    cv::Mat div_res = cv::Mat::zeros(src1.size(), src1.type());
    cv::divide(src1, src2, div_res);
    cv::imshow("div_res", div_res);

    cv::waitKey();
    return 0;
}


