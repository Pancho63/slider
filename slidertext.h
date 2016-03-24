#ifndef SLIDERTEXT_H
#define SLIDERTEXT_H

#include <QWidget>
#include <QLabel>
#include <QSlider>



class Slidertext : public QWidget
{
    Q_OBJECT
public:
    Slidertext(QWidget *parent = 0);

signals:

public slots:

private:
QLabel *labelSlider;
QSlider *slider;
};

#endif // SLIDERTEXT_H
