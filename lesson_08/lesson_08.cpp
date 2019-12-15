#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat src = cv::imread(argv[1]);
    if(src.empty())
    {
        std::cout << "no image data ...." << std::endl;
        return -1;
    }

    cv::namedWindow("src", cv::WINDOW_NORMAL);
    cv::imshow("src", src);

    std::vector<cv::Mat> mat_vec;
    cv::Mat res1, res2,res3;
    cv::split(src, mat_vec);
    mat_vec[0] = cv::Scalar(0);
    cv::merge(mat_vec, res1);
    cv::namedWindow("res1", cv::WINDOW_NORMAL);
    cv::imshow("res1", res1);

    cv::split(src, mat_vec);
    mat_vec[1] = cv::Scalar(0);
    cv::merge(mat_vec, res2);
    cv::namedWindow("res2", cv::WINDOW_NORMAL);
    cv::imshow("res2", res2);

    cv::split(src, mat_vec);
    mat_vec[2] = cv::Scalar(0);
    cv::merge(mat_vec, res3);
    cv::namedWindow("res3", cv::WINDOW_NORMAL);
    cv::imshow("res3", res3);

    cv::waitKey();
    return 0;
}
