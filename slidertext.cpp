#include "slidertext.h"


Slidertext::Slidertext( QWidget *parent)
    : QWidget( parent)
{
labelSlider = new QLabel;
slider = new QSlider;
labelSlider->show();
slider->show();

}

