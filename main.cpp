#include <QApplication>
#include "slidertext.h"
//blabla
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Slidertext *mySlider = new Slidertext;
    mySlider->show();
    return a.exec();
}
