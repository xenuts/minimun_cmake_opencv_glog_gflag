/* 
 * Copyright (C) 2017 by Xiangzeng Zhou
 * 
 * Author: Xiangzeng Zhou <xenuts@gmail.com>
 * Created: 30 Nov 2017
 * Time-stamp: <2017-12-01 10:56:12 by xiangzeng.zxz>
 */

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <glog/logging.h>
#include <gflags/gflags.h>

using namespace std;
using namespace cv;

//DEFINE_bool(big_menu, true, "Include 'advanced' options in the menu listing");
//DEFINE_string(languages, "english,french,german", "comma-separated list of languages to offer in the 'lang' menu");

int main(int argc, char *argv[]) {
    // Print output to stderr (while still logging).
    FLAGS_alsologtostderr = 1;
/*    gflags::SetUsageMessage("command line brew\n"
              "usage: caffe <command> <args>\n\n"
              "commands:\n"
              "  train           train or finetune a model\n"
              "  test            score a model\n"
              "  device_query    show GPU diagnostic information\n"
              "  time            benchmark model execution time");    
*/
    gflags::ParseCommandLineFlags(&argc, &argv, true);
    google::InitGoogleLogging(argv[0]);
    // Provide a backtrace on segfault.
    google::InstallFailureSignalHandler();
    
    LOG(INFO) << "Found cookies";
    
    Mat qim = imread("../qimg.png");
    Mat qim_gray, qim_rgb;
    cvtColor(qim, qim_gray, CV_BGR2GRAY);
    cvtColor(qim, qim_rgb, CV_BGR2RGB);
    
    return 0;
}
    
