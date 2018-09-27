/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTImmediateScheduler : NSObject <AVTScheduler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancelAllTasks;
- (void)cancelTask:(id /* block */)arg1;
- (void)lowerTaskPriority:(id /* block */)arg1;
- (void)scheduleTask:(id /* block */)arg1;

@end