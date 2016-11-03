#include "cryptoproject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CRYPTOPROJECT w;
	w.show();
	return a.exec();
}
