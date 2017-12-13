<!-- qframe.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 20:35:00 2017 (+0800)
;; Last-Updated: 三 12月 13 20:36:01 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qframe


```cpp
// QFrame : public QWidget

public:
    explicit QFrame(QWidget* parent = 0, Qt::WindowFlags f = 0);
    ~QFrame();

    int frameStyle() const;
    void setFrameStyle(int);

    int frameWidth() const;

    QSize sizeHint() const;

    enum Shape {
        NoFrame  = 0, // no frame
        Box = 0x0001, // rectangular box
        Panel = 0x0002, // rectangular panel
        WinPanel = 0x0003, // rectangular panel (Windows)
        HLine = 0x0004, // horizontal line
        VLine = 0x0005, // vertical line
        StyledPanel = 0x0006 // rectangular panel depending on the GUI style

#if defined(QT3_SUPPORT) && !defined(Q_MOC_RUN)
        ,PopupPanel = StyledPanel, // rectangular panel depending on the GUI style
        MenuBarPanel = StyledPanel,
        ToolBarPanel = StyledPanel,
        LineEditPanel = StyledPanel,
        TabWidgetPanel = StyledPanel,
        GroupBoxPanel = StyledPanel
#endif
    };
    enum Shadow {
        Plain = 0x0010, // plain line
        Raised = 0x0020, // raised shadow effect
        Sunken = 0x0030 // sunken shadow effect
    };

    enum StyleMask {
        Shadow_Mask = 0x00f0, // mask for the shadow
        Shape_Mask = 0x000f // mask for the shape
#if defined(QT3_SUPPORT)
        ,MShadow = Shadow_Mask,
        MShape = Shape_Mask
#endif
    };

    Shape frameShape() const;
    void setFrameShape(Shape);
    Shadow frameShadow() const;
    void setFrameShadow(Shadow);

    int lineWidth() const;
    void setLineWidth(int);

    int midLineWidth() const;
    void setMidLineWidth(int);

    QRect frameRect() const;
    void setFrameRect(const QRect &);

```

<!-- qframe.md ends here -->
