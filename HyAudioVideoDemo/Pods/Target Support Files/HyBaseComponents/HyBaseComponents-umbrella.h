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

#import "HyTipViewAnimationDismissFade.h"
#import "HyTipViewAnimationDismissNone.h"
#import "HyTipViewAnimationDismissScale.h"
#import "HyTipViewAnimationDismissStretch.h"
#import "HyTipViewAnimationDismissTranslation.h"
#import "HyTipViewAnimation.h"
#import "HyTipViewAnimationProtocol.h"
#import "HyTipViewAnimationShowFade.h"
#import "HyTipViewAnimationShowNone.h"
#import "HyTipViewAnimationShowScale.h"
#import "HyTipViewAnimationShowStretch.h"
#import "HyTipViewAnimationShowTranslation.h"
#import "HyTip.h"
#import "HyTipProtocol.h"
#import "HyTipView.h"
#import "HyTipViewProtocol.h"
#import "HyTipViewPosition.h"
#import "HyTipViewPositionProtocol.h"
#import "HyTipBottomTool.h"
#import "HyTipCenterTool.h"
#import "HyTipTopTool.h"
#import "HyHUD.h"
#import "HyHUDView.h"
#import "HyTipStatus.h"
#import "HyTipStatusView.h"
#import "HyTipText.h"
#import "HyTipTextView.h"

FOUNDATION_EXPORT double HyBaseComponentsVersionNumber;
FOUNDATION_EXPORT const unsigned char HyBaseComponentsVersionString[];

