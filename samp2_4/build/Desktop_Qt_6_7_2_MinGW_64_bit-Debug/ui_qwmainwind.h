/********************************************************************************
** Form generated from reading UI file 'qwmainwind.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWMAINWIND_H
#define UI_QWMAINWIND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QWMainWind
{
public:
    QAction *actCut;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actFontBold;
    QAction *actFontItalic;
    QAction *actFontUnder;
    QAction *actClose;
    QAction *actOpen;
    QAction *actClear;
    QAction *actFont;
    QAction *actNew;
    QAction *actToolbarLab;
    QAction *ShowAbout;
    QWidget *centralWidget;
    QTextEdit *txtEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QWMainWind)
    {
        if (QWMainWind->objectName().isEmpty())
            QWMainWind->setObjectName("QWMainWind");
        QWMainWind->resize(602, 322);
        QFont font;
        font.setPointSize(11);
        QWMainWind->setFont(font);
        actCut = new QAction(QWMainWind);
        actCut->setObjectName("actCut");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/cut.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCut->setIcon(icon);
        actCopy = new QAction(QWMainWind);
        actCopy->setObjectName("actCopy");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/120.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCopy->setIcon(icon1);
        actPaste = new QAction(QWMainWind);
        actPaste->setObjectName("actPaste");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/paste.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actPaste->setIcon(icon2);
        actFontBold = new QAction(QWMainWind);
        actFontBold->setObjectName("actFontBold");
        actFontBold->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/BLD.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFontBold->setIcon(icon3);
        actFontItalic = new QAction(QWMainWind);
        actFontItalic->setObjectName("actFontItalic");
        actFontItalic->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/ITL.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFontItalic->setIcon(icon4);
        actFontUnder = new QAction(QWMainWind);
        actFontUnder->setObjectName("actFontUnder");
        actFontUnder->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/WORDUNDR.BMP"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFontUnder->setIcon(icon5);
        actClose = new QAction(QWMainWind);
        actClose->setObjectName("actClose");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/exit.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actClose->setIcon(icon6);
        actOpen = new QAction(QWMainWind);
        actOpen->setObjectName("actOpen");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/open3.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actOpen->setIcon(icon7);
        actClear = new QAction(QWMainWind);
        actClear->setObjectName("actClear");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/103.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actClear->setIcon(icon8);
        actFont = new QAction(QWMainWind);
        actFont->setObjectName("actFont");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/20.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actFont->setIcon(icon9);
        actNew = new QAction(QWMainWind);
        actNew->setObjectName("actNew");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/new2.bmp"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actNew->setIcon(icon10);
        actToolbarLab = new QAction(QWMainWind);
        actToolbarLab->setObjectName("actToolbarLab");
        actToolbarLab->setCheckable(true);
        actToolbarLab->setChecked(true);
        actToolbarLab->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        ShowAbout = new QAction(QWMainWind);
        ShowAbout->setObjectName("ShowAbout");
        ShowAbout->setIcon(icon3);
        ShowAbout->setMenuRole(QAction::MenuRole::NoRole);
        centralWidget = new QWidget(QWMainWind);
        centralWidget->setObjectName("centralWidget");
        txtEdit = new QTextEdit(centralWidget);
        txtEdit->setObjectName("txtEdit");
        txtEdit->setGeometry(QRect(80, 10, 396, 136));
        QFont font1;
        font1.setPointSize(16);
        txtEdit->setFont(font1);
        QWMainWind->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QWMainWind);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 602, 25));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName("menu_2");
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName("menu_3");
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName("menu_4");
        QWMainWind->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QWMainWind);
        mainToolBar->setObjectName("mainToolBar");
        mainToolBar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);
        QWMainWind->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QWMainWind);
        statusBar->setObjectName("statusBar");
        QWMainWind->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(actNew);
        menu->addAction(actOpen);
        menu->addSeparator();
        menu->addAction(actClose);
        menu_2->addAction(actCut);
        menu_2->addAction(actCopy);
        menu_2->addAction(actPaste);
        menu_2->addSeparator();
        menu_2->addAction(actClear);
        menu_3->addAction(actFontBold);
        menu_3->addAction(actFontItalic);
        menu_3->addAction(actFontUnder);
        menu_3->addSeparator();
        menu_3->addAction(actToolbarLab);
        menu_4->addAction(ShowAbout);
        mainToolBar->addAction(actNew);
        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actCut);
        mainToolBar->addAction(actCopy);
        mainToolBar->addAction(actPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFontItalic);
        mainToolBar->addAction(actFontUnder);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFontBold);
        mainToolBar->addAction(ShowAbout);

        retranslateUi(QWMainWind);
        QObject::connect(actClose, &QAction::triggered, QWMainWind, qOverload<>(&QMainWindow::close));
        QObject::connect(actClear, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::clear));
        QObject::connect(actCut, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(actCopy, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(actPaste, &QAction::triggered, txtEdit, qOverload<>(&QTextEdit::paste));

        QMetaObject::connectSlotsByName(QWMainWind);
    } // setupUi

    void retranslateUi(QMainWindow *QWMainWind)
    {
        QWMainWind->setWindowTitle(QCoreApplication::translate("QWMainWind", "QWMainWind", nullptr));
        actCut->setText(QCoreApplication::translate("QWMainWind", "\345\211\252\345\210\207", nullptr));
#if QT_CONFIG(tooltip)
        actCut->setToolTip(QCoreApplication::translate("QWMainWind", "\345\211\252\345\210\207", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCut->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actCopy->setText(QCoreApplication::translate("QWMainWind", "\345\244\215\345\210\266", nullptr));
#if QT_CONFIG(tooltip)
        actCopy->setToolTip(QCoreApplication::translate("QWMainWind", "\345\244\215\345\210\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actCopy->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actPaste->setText(QCoreApplication::translate("QWMainWind", "\347\262\230\350\264\264", nullptr));
#if QT_CONFIG(tooltip)
        actPaste->setToolTip(QCoreApplication::translate("QWMainWind", "\347\262\230\350\264\264", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actPaste->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actFontBold->setText(QCoreApplication::translate("QWMainWind", "\347\262\227\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFontBold->setToolTip(QCoreApplication::translate("QWMainWind", "\347\262\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFontItalic->setText(QCoreApplication::translate("QWMainWind", "\346\226\234\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        actFontItalic->setToolTip(QCoreApplication::translate("QWMainWind", "\346\226\234\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actFontUnder->setText(QCoreApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", nullptr));
#if QT_CONFIG(tooltip)
        actFontUnder->setToolTip(QCoreApplication::translate("QWMainWind", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("QWMainWind", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("QWMainWind", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actOpen->setText(QCoreApplication::translate("QWMainWind", "\346\211\223\345\274\200...", nullptr));
#if QT_CONFIG(tooltip)
        actOpen->setToolTip(QCoreApplication::translate("QWMainWind", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actOpen->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actClear->setText(QCoreApplication::translate("QWMainWind", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actClear->setToolTip(QCoreApplication::translate("QWMainWind", "\346\270\205\347\251\272\345\206\205\345\256\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actFont->setText(QCoreApplication::translate("QWMainWind", "\345\255\227\344\275\223...", nullptr));
#if QT_CONFIG(tooltip)
        actFont->setToolTip(QCoreApplication::translate("QWMainWind", "\345\255\227\344\275\223\350\256\276\347\275\256", nullptr));
#endif // QT_CONFIG(tooltip)
        actNew->setText(QCoreApplication::translate("QWMainWind", "\346\226\260\345\273\272", nullptr));
#if QT_CONFIG(shortcut)
        actNew->setShortcut(QCoreApplication::translate("QWMainWind", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actToolbarLab->setText(QCoreApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", nullptr));
        ShowAbout->setText(QCoreApplication::translate("QWMainWind", "\346\230\276\347\244\272\345\205\263\344\272\216\347\252\227\345\217\243 ", nullptr));
        menu->setTitle(QCoreApplication::translate("QWMainWind", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QCoreApplication::translate("QWMainWind", "\347\274\226\350\276\221", nullptr));
        menu_3->setTitle(QCoreApplication::translate("QWMainWind", "\346\240\274\345\274\217", nullptr));
        menu_4->setTitle(QCoreApplication::translate("QWMainWind", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QWMainWind: public Ui_QWMainWind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWMAINWIND_H
