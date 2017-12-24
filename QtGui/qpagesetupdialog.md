<!-- qpagesetupdialog.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 13:11:36 2017 (+0800)
;; Last-Updated: 日 12月 24 13:12:42 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qpagesetupdialog


```cpp
// QPageSetupDialog : public QAbstractPageSetupDialog


public:
    enum PageSetupDialogOption {
        None                    = 0x00000000, // internal
        DontUseSheet            = 0x00000001,
        OwnsPrinter             = 0x80000000  // internal
    };

    Q_DECLARE_FLAGS(PageSetupDialogOptions, PageSetupDialogOption)

    explicit QPageSetupDialog(QPrinter *printer, QWidget *parent = 0);
    explicit QPageSetupDialog(QWidget *parent = 0);

    // obsolete
    void addEnabledOption(PageSetupDialogOption option);
    void setEnabledOptions(PageSetupDialogOptions options);
    PageSetupDialogOptions enabledOptions() const;
    bool isOptionEnabled(PageSetupDialogOption option) const;

    void setOption(PageSetupDialogOption option, bool on = true);
    bool testOption(PageSetupDialogOption option) const;
    void setOptions(PageSetupDialogOptions options);
    PageSetupDialogOptions options() const;

#if defined(Q_WS_MAC) || defined(Q_OS_WIN)
    virtual void setVisible(bool visible);
#endif
    virtual int exec();

#ifdef Q_NO_USING_KEYWORD
#ifndef Q_QDOC
    void open() { QDialog::open(); }
#endif
#else
    using QDialog::open;
#endif
    void open(QObject *receiver, const char *member);

#ifdef qdoc
    QPrinter *printer();
#endif
```

<!-- qpagesetupdialog.md ends here -->
