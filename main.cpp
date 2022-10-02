#include <QFile>
#include <QMainWindow>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	{
		QFile styleSheet(":/stylesheet.qss");
        styleSheet.open(QIODevice::ReadOnly);
        a.setStyleSheet(styleSheet.readAll());
        styleSheet.close();
    }

    QMainWindow w;
    w.show();
    return a.exec();
}
