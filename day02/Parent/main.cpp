#include <QApplication>
#include <QPushButton>
#include <QPushButton>
#include <QWidget>
#include <QMainWindow>
#include <QDialog>
#include <QLabel>
int mian(int argc,char** argv){
    //创建QT应用程序对象
    QApplication app(argc,agrv);
    //实例化父窗口对象
    QWidget parent;//默认构造函数
    //设置窗口展示原点的坐标位置
    parent.move(100,100);
    //设置窗口的大小，长宽
    oarent.resize(600,300);
    //创建一个标签控件，绑定在父窗口上
    QLabel label("这是一个标签",&parent);
    //设置标签控件展示的原点
    label.move(100,100);
    
    //创建一个按钮控件，绑定在父窗口上
    QPushButton btn1("ok",&parent);
    //设置按钮展示的坐标
    btn1.move(300,100);
    //设置按钮的长宽
    btn1.resize(100,50)

    QPushButton btn2("ok",&parent);
    btn2.move(450,100);
    btn2.resize(100,50)

    //显示父窗口,绑定的子窗口都会显示
    parent.show();
    //进入主事件循环
    return app.exec();    


}