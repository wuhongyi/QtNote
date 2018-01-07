<!-- qcalendarwidget.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 日 1月  7 21:33:44 2018 (+0800)
;; Last-Updated: 日 1月  7 21:35:11 2018 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qcalendarwidget


```cpp
// QCalendarWidget : public QWidget


public:
    enum HorizontalHeaderFormat {
        NoHorizontalHeader,
        SingleLetterDayNames,
        ShortDayNames,
        LongDayNames
    };

    enum VerticalHeaderFormat {
        NoVerticalHeader,
        ISOWeekNumbers
    };

    enum SelectionMode {
        NoSelection,
        SingleSelection
    };

    explicit QCalendarWidget(QWidget *parent = 0);
    ~QCalendarWidget();

    virtual QSize sizeHint() const;
    virtual QSize minimumSizeHint() const;

    QDate selectedDate() const;

    int yearShown() const;
    int monthShown() const;

    QDate minimumDate() const;
    void setMinimumDate(const QDate &date);

    QDate maximumDate() const;
    void setMaximumDate(const QDate &date);

    Qt::DayOfWeek firstDayOfWeek() const;
    void setFirstDayOfWeek(Qt::DayOfWeek dayOfWeek);

    // ### Qt 5: eliminate these two
    bool isHeaderVisible() const;
    void setHeaderVisible(bool show); 

    inline bool isNavigationBarVisible() const { return isHeaderVisible(); }

    bool isGridVisible() const;

    SelectionMode selectionMode() const;
    void setSelectionMode(SelectionMode mode);

    HorizontalHeaderFormat horizontalHeaderFormat() const;
    void setHorizontalHeaderFormat(HorizontalHeaderFormat format);

    VerticalHeaderFormat verticalHeaderFormat() const;
    void setVerticalHeaderFormat(VerticalHeaderFormat format);

    QTextCharFormat headerTextFormat() const;
    void setHeaderTextFormat(const QTextCharFormat &format);

    QTextCharFormat weekdayTextFormat(Qt::DayOfWeek dayOfWeek) const;
    void setWeekdayTextFormat(Qt::DayOfWeek dayOfWeek, const QTextCharFormat &format);

    QMap<QDate, QTextCharFormat> dateTextFormat() const;
    QTextCharFormat dateTextFormat(const QDate &date) const;
    void setDateTextFormat(const QDate &date, const QTextCharFormat &format);

    bool isDateEditEnabled() const;
    void setDateEditEnabled(bool enable);

    int dateEditAcceptDelay() const;
    void setDateEditAcceptDelay(int delay);
```

<!-- qcalendarwidget.md ends here -->
