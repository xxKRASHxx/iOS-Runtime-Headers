/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet;

@interface UITouchesEvent : UIEvent {
    struct __GSEvent { } *_gsEvent;
    struct __CFDictionary { } *_keyedTouches;
    NSMutableSet *_touches;
}

- (BOOL)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2;
- (void)_addTouch:(id)arg1;
- (id)_allTouches;
- (void)_clearTouches;
- (void)_clearViewForTouch:(id)arg1;
- (id)_cloneEvent;
- (id)_firstTouchForView:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (struct __GSEvent { }*)_gsEvent;
- (id)_init;
- (id)_initWithEvent:(struct __GSEvent { }*)arg1 touches:(id)arg2;
- (id)_initWithTouches:(id)arg1 keyedTouches:(struct __CFDictionary { }*)arg2;
- (void)_moveTouchesFromView:(id)arg1 toView:(id)arg2;
- (void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)_removeTouch:(id)arg1;
- (void)_removeTouchesForKey:(id)arg1;
- (void)_setGSEvent:(struct __GSEvent { }*)arg1;
- (id)_sortedGestureRecognizersForWindow:(id)arg1;
- (void)_touchesForGesture:(id)arg1 withPhase:(NSInteger)arg2 intoSet:(id)arg3;
- (id)_touchesForGesture:(id)arg1 withPhase:(NSInteger)arg2;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)_touchesForKey:(id)arg1;
- (id)_touchesForView:(id)arg1 withPhase:(NSInteger)arg2;
- (id)_viewsForWindow:(id)arg1;
- (id)_windows;
- (id)allTouches;
- (void)dealloc;
- (id)description;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (NSInteger)type;

@end