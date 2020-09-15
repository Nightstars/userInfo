#pragma once

#include <QtWidgets/QDialog>
#include <QLabel>
#include <QTextEdit>
#include <QGridLayout>
#include <QComboBox>
#include <QLineEdit>
#include <QPushButton>
class UserInfo : public QDialog
{
	Q_OBJECT

public:
	UserInfo(QWidget *parent = Q_NULLPTR);

private:
	QLabel * UserNameLabel;
	QLabel * NameLabel;
	QLabel *SexLabel;
	QLabel *DepartmentLabel;
	QLabel *Agelabel;
	QLabel *otherlabel;
	QLineEdit *UserNameLineEdit;
	QLineEdit *NameLineEdit;
	QLineEdit *SexComboBox;
	QTextEdit *DepartmentTExtEdit;
	QLineEdit *AgeLIneEdit;
	QGridLayout *LeftLayout;
	//�Ҳ�
	//���ϲ���
	QLabel *HeadLabel;
	QLabel *HeaIconLabel;
	QPushButton *UpdateHeadBtn;
	QHBoxLayout *ToprightLayout;
	QLabel *IntroductionTextLabel;
	QTextEdit *IntroductionTExtEdit;
	QVBoxLayout *RightLayout;
	//�ײ�
	QPushButton *okBtn;
	QPushButton *CancelBtn;
	QHBoxLayout * ButttomLayout;
};
