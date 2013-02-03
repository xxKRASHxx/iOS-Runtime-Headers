/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAudioDeviceController;

@interface MPAudioRoutingPicker : UIAlertView {
    MPAudioDeviceController *_audioDeviceController;
    BOOL _ignoringInteractionEvents;
}

- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)audioDeviceControllerMediaServerDied:(id)arg1;
- (void)dealloc;
- (id)initWithAVController:(id)arg1;
- (NSInteger)numberOfRowsInTable:(id)arg1;
- (void)pickRoute:(id)arg1;
- (BOOL)requiresPortraitOrientation;
- (void)setAVController:(id)arg1;
- (BOOL)table:(id)arg1 canSelectRow:(NSInteger)arg2;
- (id)table:(id)arg1 cellForRow:(NSInteger)arg2 column:(id)arg3;
- (void)tableSelectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end