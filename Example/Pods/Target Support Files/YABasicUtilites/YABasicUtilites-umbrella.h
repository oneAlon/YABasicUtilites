#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "UIApplication+YASetContent.h"
#import "UIDevice+YA.h"
#import "YABasicUtilites.h"
#import "YARuntimeUtilites.h"
#import "YAWeakTimer.h"
#import "YASingletion.h"
#import "YASingletionManager.h"

FOUNDATION_EXPORT double YABasicUtilitesVersionNumber;
FOUNDATION_EXPORT const unsigned char YABasicUtilitesVersionString[];

