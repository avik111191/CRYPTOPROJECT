#ifndef CRYPTOPROJECT_H
#define CRYPTOPROJECT_H

#include <QtWidgets/QMainWindow>
#include<QListWidgetItem>
#include "ui_cryptoproject.h"



class Itemrap {
public:
	int OptionCode;
	QString Name;
	QString ReadMeFile;
	QString Therory;




	Itemrap(int op, QString n, QString r, QString t) {
		OptionCode = op;
		Name = n;
		ReadMeFile = r;
		Therory = t;
	};
};


class CRYPTOPROJECT : public QMainWindow
{
	Q_OBJECT

public:
	CRYPTOPROJECT(QWidget *parent = 0);
	~CRYPTOPROJECT();
	QList<Itemrap*>* ItemrapList = new QList<Itemrap*>();
	//MyListItem* SelectedItem= new MyListItem();
    //void on_listWidget_itemClicked(QListWidgetItem * item);

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);



private:
	int selectedOptionCode;

	QString selectedName;
	QString selectedReadMeFile;
	QString selectedTherory;
	
	Ui::CRYPTOPROJECTClass ui;

	void PopulateListView();

	void ReadXML();

	void launch();
	void launch(int q,QString n,QString r, QString t);
	void selctionChangedUiUpdate(int q, QString n, QString r, QString t);
};

#endif // CRYPTOPROJECT_H
