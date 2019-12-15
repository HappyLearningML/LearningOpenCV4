#include "tool.hpp"

void customColorMap(cv::Mat& gray_image)
{
    int lut[256];
    for (int i = 0; i < 256; i++)
    {
        if (i < 127)
        {
            lut[i] = 0;
        } 
        else
        {
            lut[i] = 255;
        }
    }

    int h = gray_image.rows;
    int w = gray_image.cols;
    for (int row = 0; row < h; row++)\
    {
        for (int col = 0; col < w; col++)
        {
            int index = gray_image.at<uchar>(row, col);
            gray_image.at<uchar>(row, col) = lut[index];
        }
    }

    cv::namedWindow("lut_image", cv::WINDOW_NORMAL);
    imshow("lut_image", gray_image);

}
