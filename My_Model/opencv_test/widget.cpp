#include "widget.h"
#include "ui_widget.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
using namespace cv;
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    cv::Mat image = cv::imread("C:/Users/ASUS/Pictures/1.jpg",1);
    cv::namedWindow("My Image");
    cv::imshow("My Image",image);
}

Widget::~Widget()
{
    delete ui;
}
