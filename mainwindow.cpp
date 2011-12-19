#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::vector<Cell*> cells;
    for(int i=0; i<25; i++){
        cells.push_back(new Cell(this));
    }

    std::cout << "INFO: mainwindow(width = " << this->width() << "; height = " << this->height() << std::endl;

    board = new MatrixWidget(cells, 5, this->width(), this->height(), this);

    this->layout()->addWidget(board);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *){
    this->board->setGeometry(0, 0, this->width(), this->height());
}


