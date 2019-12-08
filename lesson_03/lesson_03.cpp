#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat src = cv::imread(argv[1]);
    if (src.empty())
    {
        std::cout << "no image data ..." << std::endl;
        return -1;
    }

    cv::Mat mat1 = src.clone();
    
    cv::Mat mat2;
    src.copyTo(mat2);
    
    cv::Mat mat3 = src;
    
    cv::Mat mat4 = cv::Mat::zeros(src.size(), src.type());
    cv::Mat mat5 = cv::Mat::zeros(cv::Size(256,256), CV_8UC3);
    cv::Mat mat6 = cv::Mat::ones(cv::Size(256,256), CV_8UC3);

    cv::Mat kernel = (cv::Mat_<char>(3, 3) << 0, -1, 0, 
                                              -1, 5, -1,
                                               0, -1, 0);
    return 0;
}
