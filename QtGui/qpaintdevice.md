<!-- qpaintdevice.md --- 
;; 
;; Description: 
;; Author: Hongyi Wu(吴鸿毅)
;; Email: wuhongyi@qq.com 
;; Created: 三 12月 13 20:48:59 2017 (+0800)
;; Last-Updated: 三 12月 13 20:51:28 2017 (+0800)
;;           By: Hongyi Wu(吴鸿毅)
;;     Update #: 1
;; URL: http://wuhongyi.cn -->

# qpaintdevice



```cpp
// QPaintDevice

public:
    enum PaintDeviceMetric {
        PdmWidth = 1,
        PdmHeight,
        PdmWidthMM,
        PdmHeightMM,
        PdmNumColors,
        PdmDepth,
        PdmDpiX,
        PdmDpiY,
        PdmPhysicalDpiX,
        PdmPhysicalDpiY
    };

    virtual ~QPaintDevice();

    virtual int devType() const;
    bool paintingActive() const;
    virtual QPaintEngine *paintEngine() const = 0;

#if defined(Q_WS_QWS)
    static QWSDisplay *qwsDisplay();
#endif

#ifdef Q_WS_WIN
    virtual HDC getDC() const;
    virtual void releaseDC(HDC hdc) const;
#endif

    int width() const { return metric(PdmWidth); }
    int height() const { return metric(PdmHeight); }
    int widthMM() const { return metric(PdmWidthMM); }
    int heightMM() const { return metric(PdmHeightMM); }
    int logicalDpiX() const { return metric(PdmDpiX); }
    int logicalDpiY() const { return metric(PdmDpiY); }
    int physicalDpiX() const { return metric(PdmPhysicalDpiX); }
    int physicalDpiY() const { return metric(PdmPhysicalDpiY); }
#ifdef QT_DEPRECATED
    QT_DEPRECATED int numColors() const { return metric(PdmNumColors); }
#endif
    int colorCount() const { return metric(PdmNumColors); }
    int depth() const { return metric(PdmDepth); }

protected:
    QPaintDevice();
    virtual int metric(PaintDeviceMetric metric) const;

    ushort        painters;                        // refcount

```


<!-- qpaintdevice.md ends here -->
