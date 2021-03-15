#ifndef OUTSIDEGEN_H
#define OUTSIDEGEN_H

#include "House.h"
#include <QGridLayout>
#include <QPainter>
#include <QPen>
#include <QPoint>
#include <QWidget>
class outsideGen : public QWidget {
  Q_OBJECT
public:
  outsideGen(House *rm, QWidget *parent = 0);
  void changeHouse(House *rm);
  void HouseFire(House *h);

private:
  bool bFire = false;
  bool cFire = false;
  bool eFire = false;
  bool gFire = false;
  bool hFire = false;
  bool iFire = false;
  QPixmap FireB;
  QPixmap FireC;
  QPixmap FireE;
  QPixmap FireG;
  QPixmap FireH;
  QPixmap FireI;
  QRect backgroundRect;

protected:
  House *rm;
  void paintEvent(QPaintEvent *e);
signals:

public slots:
};

#endif // OUTSIDEGEN_H
