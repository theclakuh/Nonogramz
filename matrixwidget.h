#ifndef MATRIXWIDGET_H
#define MATRIXWIDGET_H

#include "matrix.h"
#include <vector>
#include <QtGui/QWidget>
#include <QHBoxLayout>
//#include <QtDesigner/QDesignerCustomWidgetInterface>

class MatrixWidget : public QWidget//, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    //Q_INTERFACES(QDesignerCustomWidgetInterface)
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
