#ifndef MATRIXWIDGET_H
#define MATRIXWIDGET_H

#include "matrix.h"
#include <vector>
#include <QtGui/QWidget>
#include <QHBoxLayout>

class MatrixWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MatrixWidget(std::vector<Cell*> cells, int cellsInRow, int width, int height, QWidget *parent);
    void paintEvent(QPaintEvent *);

//signals:

//public slots:
private:
    void paint(QPainter *painter, long xPaintPos, long yPaintPos);
    Matrix* matrix;

};

#endif // MATRIXWIDGET_H
