<!-- qcolordialog.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 12:18:57 2017 (+0800)
;; Last-Updated: 日 12月 24 12:20:11 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qcolordialog


```cpp
// QColorDialog : public QDialog

public:
    enum ColorDialogOption {
        ShowAlphaChannel    = 0x00000001,
        NoButtons           = 0x00000002,
        DontUseNativeDialog = 0x00000004
    };

    Q_DECLARE_FLAGS(ColorDialogOptions, ColorDialogOption)

    explicit QColorDialog(QWidget *parent = 0);
    explicit QColorDialog(const QColor &initial, QWidget *parent = 0);
    ~QColorDialog();

    void setCurrentColor(const QColor &color);
    QColor currentColor() const;

    QColor selectedColor() const;

    void setOption(ColorDialogOption option, bool on = true);
    bool testOption(ColorDialogOption option) const;
    void setOptions(ColorDialogOptions options);
    ColorDialogOptions options() const;

#ifdef Q_NO_USING_KEYWORD
    void open() { QDialog::open(); }
#else
    using QDialog::open;
#endif
    void open(QObject *receiver, const char *member);

    void setVisible(bool visible);

    // ### Qt 5: merge overloads with title = QString()
    static QColor getColor(const QColor &initial, QWidget *parent, const QString &title,
                           ColorDialogOptions options = 0);
    static QColor getColor(const QColor &initial = Qt::white, QWidget *parent = 0);

    // obsolete
    static QRgb getRgba(QRgb rgba = 0xffffffff, bool *ok = 0, QWidget *parent = 0);

    // ### Qt 5: use QColor in signatures
    static int customCount();
    static QRgb customColor(int index);
    static void setCustomColor(int index, QRgb color);
    static void setStandardColor(int index, QRgb color);

#ifdef QT3_SUPPORT
    static QColor getColor(const QColor &init, QWidget *parent, const char *name)
        { Q_UNUSED(name); return getColor(init, parent); }
    static QRgb getRgba(QRgb rgba, bool *ok, QWidget *parent, const char *name)
        { Q_UNUSED(name); return getRgba(rgba, ok, parent); }
#endif

Q_SIGNALS:
    void currentColorChanged(const QColor &color);
    void colorSelected(const QColor &color);
```

<!-- qcolordialog.md ends here -->
