#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <qgl.h>
#include <QtOpenGL>
#include <GL/GLU.h>
#pragma comment(lib, "glu32.lib")

class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    GLWidget(QWidget* parent = 0);
protected:
    void initializeGL();
    void paintGL();
    void resizeGL( int width, int height );
};

#endif // GLWIDGET_H
