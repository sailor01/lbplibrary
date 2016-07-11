#include <iostream>
#include <math.h>
#include <opencv2/opencv.hpp>

#include "../LBP.h"

namespace lbplibrary
{
  class OCLBP : public LBP
  {
  private:
    int rows;
    int cols;
    int nComb;
    int isEfficient;
    int cfgSnailMatIndex;
    int filtDimsX;
    int filtDimsY;

  public:
    OCLBP();
    ~OCLBP();

    void run(const cv::Mat &img_input, std::vector<cv::Mat> &vec_output);
  };
}