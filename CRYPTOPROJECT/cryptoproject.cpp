#include "cryptoproject.h"
#include "dialog.h"
#include <qfile.h>
#include<qmessagebox.h>
#include<qxml.h>
#include <QXmlStreamReader>
#include <QDomDocument>
//int selection=1;

class MyListItem : public QListWidgetItem
{
public:
	//QPixmap *icon_to_be_shown;
	int OptionCode;
	QString Name;
	QString ReadMeFile;
	QString Therory;
	MyListItem();
	MyListItem(int op, QString n, QString r, QString t) {
		OptionCode = op;
		Name = n;
		ReadMeFile = r;
		Therory = t;
		setText(Name);
	};
	void setText_(char a[]) {
		setText(a);
	};
	
};



CRYPTOPROJECT::CRYPTOPROJECT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	//MyListItem *item = new MyListItem();
	//item->setText_("sss");
	//item->optionNo = 23;
	//ui.listWidget->addItem(item);
	////ui.listWidget->addItem();
	PopulateListView();
	
}

CRYPTOPROJECT::~CRYPTOPROJECT()
{

}

void CRYPTOPROJECT::on_pushButton_clicked()
{
  
}

void CRYPTOPROJECT::on_listWidget_itemClicked(QListWidgetItem *item)
{
	//item->
	//QMessageBox::critical(this, "CRYPTOPROJECT::ReadXML", item->text()+ (QString)((*((MyListItem*)(item))).OptionCode), QMessageBox::Ok);
	selectedOptionCode = ((*((MyListItem*)(item))).OptionCode);
	selectedName = ((*((MyListItem*)(item))).Name);
	selectedReadMeFile = ((*((MyListItem*)(item))).ReadMeFile);
	selectedTherory = ((*((MyListItem*)(item))).Therory);


	//SelectedItem = (MyListItem*)(item);
	return;
}

void CRYPTOPROJECT::PopulateListView()
{
	ReadXML();
	int length=(ItemrapList->length()-1);
	//Itemrap* iTEM = ItemrapList->pop_front();
	while (length >= 0) {
		Itemrap* iTEM = ItemrapList->at(length);
		MyListItem *item = new MyListItem(
										iTEM->OptionCode,
										iTEM->Name,
										iTEM->ReadMeFile,
										iTEM->Therory
											 
								);

		ui.listWidget->addItem(item);
		length--;
	}

}
void CRYPTOPROJECT::ReadXML()
{
	QFile* file = new QFile("ProjList.xml");
	if (!file->open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QMessageBox::critical(this, "CRYPTOPROJECT::ReadXML", "Couldn't open ProjList.xml file", QMessageBox::Ok);
		return;
	}	
	QDomDocument doc;
	doc.setContent(file);
	QDomNodeList Namelist = doc.elementsByTagName("Name");
	QDomNodeList OptionCodelist = doc.elementsByTagName("OptionCode");
	QDomNodeList ReadMeFilelist = doc.elementsByTagName("ReadMeFile");
	QDomNodeList Therorylist = doc.elementsByTagName("Therory");

	//QString helloWorld = list.at(0).toElement().text();
	int listLength = ((Namelist.length())-1);
	while (listLength >= 0) {
		int x= OptionCodelist.at(listLength).toElement().text().toInt();
		Itemrap  *ITEMRAP_ = new Itemrap(
			OptionCodelist.at(listLength).toElement().text().toInt(),
			Namelist.at(listLength).toElement().text(),
			ReadMeFilelist.at(listLength).toElement().text(),
			Therorylist.at(listLength).toElement().text()
		);
		ItemrapList->push_back(ITEMRAP_);
		listLength--;
	}

}
void CRYPTOPROJECT::selctionChangedUiUpdate(int q, QString n, QString r, QString t) {

}
void CRYPTOPROJECT::launch() {

}
void CRYPTOPROJECT::launch(int q, QString n, QString r, QString t) {

}