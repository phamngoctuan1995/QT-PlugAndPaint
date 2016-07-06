TEMPLATE = subdirs

SUBDIRS += \
    app \
    plugins/basictools \
    plugins/extrafilters

app.depends += plugins/basictools plugins/extrafilters
