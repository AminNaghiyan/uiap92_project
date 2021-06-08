QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    add_to_category.cpp \
    book.cpp \
    borrow.cpp \
    categories.cpp \
    creat_new_category.cpp \
    ctfile.cpp \
    del.cpp \
    edit.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    search.cpp \
    show_all.cpp

HEADERS += \
    add.h \
    add_to_category.h \
    book.h \
    borrow.h \
    categories.h \
    creat_new_category.h \
    ctfile.h \
    del.h \
    edit.h \
    mainwindow.h \
    menu.h \
    search.h \
    show_all.h

FORMS += \
    add.ui \
    add_to_category.ui \
    borrow.ui \
    categories.ui \
    creat_new_category.ui \
    del.ui \
    edit.ui \
    mainwindow.ui \
    menu.ui \
    search.ui \
    show_all.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

DISTFILES += \
    Menu.qml \
    MenuForm.ui.qml
