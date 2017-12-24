<!-- qlocale_blackberry.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 12月 24 12:08:52 2017 (+0800)
;; Last-Updated: 日 12月 24 12:18:51 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qlocale_blackberry


```cpp
// QBBSystemLocaleData : public QObject

public:
    QBBSystemLocaleData();
    virtual ~QBBSystemLocaleData();
    uint measurementSystem();
    QVariant timeFormat(QLocale::FormatType);
    QVariant dateTimeFormat(QLocale::FormatType);
    QLocale languageLocale();
    QLocale regionLocale();

    QReadWriteLock lock;

public Q_SLOTS:
    void installSocketNotifiers();
    void readLangageLocale();
    void readRegionLocale();
    void readMeasurementSystem();
    void readHourFormat();
```

<!-- qlocale_blackberry.md ends here -->
