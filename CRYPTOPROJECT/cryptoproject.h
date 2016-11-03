#ifndef CRYPTOPROJECT_H
#define CRYPTOPROJECT_H

#include <QtWidgets/QMainWindow>
#include "ui_cryptoproject.h"

class CRYPTOPROJECT : public QMainWindow
{
	Q_OBJECT

public:
	CRYPTOPROJECT(QWidget *parent = 0);
	~CRYPTOPROJECT();

private:
	Ui::CRYPTOPROJECTClass ui;
};

#endif // CRYPTOPROJECT_H
