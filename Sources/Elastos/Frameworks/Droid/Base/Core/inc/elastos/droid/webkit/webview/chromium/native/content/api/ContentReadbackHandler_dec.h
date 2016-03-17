//This file is autogenerated for
//    ContentReadbackHandler.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_CONTENTREADBACKHANDLER_CALLBACK_DEC_HH
#define ELASTOS_CONTENTREADBACKHANDLER_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern Handle64 Elastos_ContentReadbackHandler_nativeInit(IInterface* caller);
    extern void Elastos_ContentReadbackHandler_nativeDestroy(IInterface* caller,Handle64 nativeContentReadbackHandler);
    extern void Elastos_ContentReadbackHandler_nativeGetContentBitmap(IInterface* caller,Handle64 nativeContentReadbackHandler,Int32 readback_id,Float scale,Int32 config,Float x,Float y,Float width,Float height,IInterface* contentViewCore);
    extern void Elastos_ContentReadbackHandler_nativeGetCompositorBitmap(IInterface* caller,Handle64 nativeContentReadbackHandler,Int32 readback_id,Handle64 nativeWindowAndroid);
    extern void Elastos_ContentReadbackHandler_InitCallback(Handle64 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Content {
namespace Browser {

struct ElaContentReadbackHandlerCallback
{
    void (*elastos_ContentReadbackHandler_notifyGetBitmapFinished)(IInterface* obj, Int32 readbackId, Boolean success, IInterface* bitmap);
};

void* ContentReadbackHandler::ElaContentReadbackHandlerCallback_Init()
{
    static ElaContentReadbackHandlerCallback sElaContentReadbackHandlerCallback;

    sElaContentReadbackHandlerCallback.elastos_ContentReadbackHandler_notifyGetBitmapFinished = &ContentReadbackHandler::NotifyGetBitmapFinished;

    Elastos_ContentReadbackHandler_InitCallback((Handle64)&sElaContentReadbackHandlerCallback);
    return &sElaContentReadbackHandlerCallback;
}

static void* sPElaContentReadbackHandlerCallback = ContentReadbackHandler::ElaContentReadbackHandlerCallback_Init();

} // namespace Browser
} // namespace Content
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_CONTENTREADBACKHANDLER_CALLBACK_DEC_HH