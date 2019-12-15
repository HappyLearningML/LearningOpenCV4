#include <iostream>
#include <opencv2/opencv.hpp>
#include "tool.hpp"

int main(int argc, char** argv)
{
    cv::Mat src = cv::imread(argv[1]);
    if (src.empty())
    {
        std::cout << "no image data ..." << std::endl;
        return -1;
    }
    
    cv::Mat gray, dst;

    cv::applyColorMap(src, dst, cv::COLORMAP_SUMMER);
    cv::namedWindow("colorMap", cv::WINDOW_NORMAL);
    cv::imshow("colorMap", dst);

    cv::cvtColor(src, gray, cv::COLOR_BGR2GRAY);
    cv::imshow("gray", gray);
    
    customColorMap(gray);

    cv::waitKey();
    return 0;
}
