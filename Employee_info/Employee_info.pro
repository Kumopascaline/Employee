
QT       += core gui sql
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Employee_info
TEMPLATE = app

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += $$(PWD)/include

SOURCES += \
    src/add_employee.cpp \
    src/delete_employee.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/update_employee.cpp \
    src/view_employee.cpp

HEADERS += \
    include/add_employee.h \
    include/delete_employee.h \
    include/mainwindow.h \
    include/update_employee.h \
    include/view_employee.h

FORMS += \
    ui/add_employee.ui \
    ui/delete_employee.ui \
    ui/mainwindow.ui \
    ui/update_employee.ui \
    ui/view_employee.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
