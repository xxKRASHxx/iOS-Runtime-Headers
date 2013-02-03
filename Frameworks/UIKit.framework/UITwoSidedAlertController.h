/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertView;

@interface UITwoSidedAlertController : NSObject {
    UIAlertView *_back;
    UIAlertView *_currentAlert;
    id _delegate;
    UIAlertView *_front;
}

- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)backAlert;
- (void)backAlertClickedButtonAtIndex:(NSInteger)arg1;
- (id)createBackAlert;
- (id)createFrontAlert;
- (void)dealloc;
- (void)dismiss;
- (void)flip;
- (id)frontAlert;
- (void)frontAlertClickedButtonAtIndex:(NSInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;

@end