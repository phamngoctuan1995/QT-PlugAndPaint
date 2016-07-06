TEMPLATE      = lib
CONFIG       += plugin static
QT           += widgets
INCLUDEPATH  += ../../app
HEADERS       = basictoolsplugin.h
SOURCES       = basictoolsplugin.cpp
TARGET        = $$qtLibraryTarget(pnp_basictools)
DESTDIR       = ../../plugins

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/tools/plugandpaint/plugins
INSTALLS += target

CONFIG += install_ok  # Do not cargo-cult this!