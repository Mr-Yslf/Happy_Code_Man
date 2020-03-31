#include "glwidget.h"

GLWidget::GLWidget(QWidget* parent) : QGLWidget(parent)
{

}
void GLWidget::initializeGL()
{
    //设置widget的坐标和尺寸
    setGeometry(300, 150, 500, 500);
    //设置清除时颜色(设置底色)
    glClearColor(0.0, 0.0, 0.0, 0);
}
/***************************************************************

        glColor3f(0.0, 0.0, 0.0);  --> 黑色
        glColor3f(0.0, 0.0, 1.0);  --> 蓝色
        glColor3f(0.0, 1.0, 0.0);  --> 绿色
        glColor3f(0.0, 1.0, 1.0);  --> 青色
        glColor3f(1.0, 0.0, 0.0);  --> 红色
        glColor3f(1.0, 0.0, 1.0);  --> 品红色
        glColor3f(1.0, 1.0, 0.0);  --> 黄色
        glColor3f(1.0, 1.0, 1.0);  --> 白色

        0.0 – > 不使用颜色成分；
        1.0 – > 使用颜色的最大值
 ****************************************************************/
void GLWidget::paintGL()
{
    //清屏
    glClear(GL_COLOR_BUFFER_BIT);
    //绘制七彩三角形
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-2,0,0);
    glColor3f(0.0,1.0,0.0);
    glVertex3f(0,4,0);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(2,0,0);
    glEnd();
    glFlush();
}
void GLWidget::resizeGL(int width, int height)
{
    //视口变换
    glViewport(0,0,(GLsizei)width,(GLsizei)height);
    //投影变换
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40,(GLdouble)width/(GLdouble)height,0.1,10000.0);
    //视图变换
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0,0.0,15.0,0.0,0.0,0.0,0.0,1.0,0.0);
}
