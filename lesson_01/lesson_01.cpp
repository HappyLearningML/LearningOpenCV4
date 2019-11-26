#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;

int main(int argc, char** argv)
{
    cv::Mat image = cv::imread(argv[1]);
    
    if(image.data==nullptr)
    {
        cerr<<"file"<<argv[1]<<" does't exist ..."<<endl;
        return 0;
    }

    cout << "width of image: "<<image.cols<<", heigh of image is : "<<image.rows<<endl;
    cv::imshow("image", image);
    cv::waitKey();
    cv::destroyAllWindows();
    return 0;
}
