#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char** argv)
{
    cv::Mat src = cv::imread(argv[1]);
    if (src.empty())
    {
        std::cout << "no image data ... " << std::endl;
        return -1;
    }
    
    cv::namedWindow("src",cv::WINDOW_AUTOSIZE);
    cv::imshow("src", src);
    
    int height = src.rows;
    int width = src.cols;
    int channel = src.channels();
    
    for (int c = 0; c < channel; c++)
    {
        for (int row = 0; row < height; row++)
        {
            for (int col = 0; col < width; col++)
            {
                if (channel == 3)
                {
                    cv::Vec3b bgr = src.at<cv::Vec3b>(row, col);
                    bgr[0] = 255 - bgr[0];
                    bgr[1] = 255 - bgr[1];
                    bgr[2] = 255 - bgr[2];
                    src.at<cv::Vec3b>(row, col) = bgr;
                } else if (channel == 1) {
                        uchar gray = src.at<uchar>(row, col);
                        src.at<uchar>(row, col) = 255 - gray;
                }
           }
        }
    }
 
    cv::imshow("reverse image", src);
    
    cv::Mat res = cv::Mat::zeros(src.size(), src.type());
    int blue = 0, green = 0, red = 0;
    int gray;
    for (int c = 0; c < channel; c++)
    {
        for (int row = 0; row < height; row++)
        {
            uchar* current_row = src.ptr<uchar>(row);
            uchar* res_row = res.ptr<uchar>(row);
            for (int col = 0; col <width; col++)
            {
                if (channel == 3)
                {
                    blue = *current_row++;
                    green = *current_row++;
                    red = *current_row++;

                    *res_row++ = blue;
                    *res_row++ = green;
                    *res_row++ = red;
                } else if (channel == 1) {
                       gray = *current_row++;
                       *res_row++ = gray;
                }
            }
        }
    }

    cv::imshow("res", res);
    cv::waitKey();
    cv::destroyAllWindows();
    return 0;   
                   
}
