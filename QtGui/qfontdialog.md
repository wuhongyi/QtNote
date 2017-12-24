<!-- qfontdialog.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 13:06:12 2017 (+0800)
;; Last-Updated: 日 12月 24 13:07:38 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qfontdialog


```cpp
// QFontDialog : public QDialog

public:
    enum FontDialogOption {
        NoButtons           = 0x00000001,
        DontUseNativeDialog = 0x00000002
    };

    Q_DECLARE_FLAGS(FontDialogOptions, FontDialogOption)

    explicit QFontDialog(QWidget *parent = 0);
    explicit QFontDialog(const QFont &initial, QWidget *parent = 0);
    ~QFontDialog();

    void setCurrentFont(const QFont &font);
    QFont currentFont() const;

    QFont selectedFont() const;

    void setOption(FontDialogOption option, bool on = true);
    bool testOption(FontDialogOption option) const;
    void setOptions(FontDialogOptions options);
    FontDialogOptions options() const;

#ifdef Q_NO_USING_KEYWORD
#ifndef Q_QDOC
    void open() { QDialog::open(); }
#endif
#else
    using QDialog::open;
#endif
    void open(QObject *receiver, const char *member);

    void setVisible(bool visible);

    // ### Qt 5: merge overloads
    static QFont getFont(bool *ok, const QFont &initial, QWidget *parent, const QString &title,
                         FontDialogOptions options);
    static QFont getFont(bool *ok, const QFont &initial, QWidget *parent, const QString &title);
    static QFont getFont(bool *ok, const QFont &initial, QWidget *parent = 0);
    static QFont getFont(bool *ok, QWidget *parent = 0);

#ifdef QT3_SUPPORT
    static QFont getFont(bool *ok, const QFont &initial, QWidget *parent, const char *name)
        { Q_UNUSED(name); return getFont(ok, initial, parent); }
    static QFont getFont(bool *ok, QWidget *parent, const char *name)
        { Q_UNUSED(name); return getFont(ok, parent); }
#endif

Q_SIGNALS:
    void currentFontChanged(const QFont &font);
    void fontSelected(const QFont &font);
```

<!-- qfontdialog.md ends here -->
