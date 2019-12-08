#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat src = cv::imread(argv[1]);
    if(src.empty())
    {
        std::cout << "cannot load image ..." << std::endl;
        return -1;
    }

    cv::namedWindow("src image",cv::WINDOW_AUTOSIZE);
    cv::imshow("src image", src);
    cv::waitKey();

    cv::Mat gray_img;
    cv::cvtColor(src, gray_img, cv::COLOR_BGR2GRAY);
    
    cv::namedWindow("gray image",cv::WINDOW_AUTOSIZE);
    cv::imshow("gray image", gray_img);
    cv::waitKey();

    cv::destroyAllWindows();

    return 0;
}

    


