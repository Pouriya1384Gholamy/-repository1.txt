QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    complete.cpp \
    form.cpp \
    form1.cpp \
    form2.cpp \
    form3.cpp \
    home.cpp \
    karbar_1.cpp \
    karbar_2.cpp \
    likes.cpp \
    likes_2.cpp \
    lorem.cpp \
    main.cpp \
    mainwindow1.cpp \
    message.cpp \
    my_jo.cpp \
    profile2.cpp \
    profile3.cpp \
    requests.cpp \
    welcome.cpp

HEADERS += \
    complete.h \
    form.h \
    form1.h \
    form2.h \
    form3.h \
    home.h \
    karbar_1.h \
    karbar_2.h \
    likes.h \
    likes_2.h \
    lorem.h \
    mainwindow1.h \
    message.h \
    my_jo.h \
    profile2.h \
    profile3.h \
    requests.h \
    welcome.h

FORMS += \
    complete.ui \
    form.ui \
    form1.ui \
    form2.ui \
    form3.ui \
    home.ui \
    karbar_1.ui \
    karbar_2.ui \
    likes.ui \
    likes_2.ui \
    lorem.ui \
    mainwindow1.ui \
    message.ui \
    my_jo.ui \
    profile2.ui \
    profile3.ui \
    requests.ui \
    welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Photo.qrc
