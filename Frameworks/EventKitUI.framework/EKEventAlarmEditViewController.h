/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class CalendarEventAlarmTable, EKAlarm;

@interface EKEventAlarmEditViewController : EKEventEditItemViewController <CalendarEventAlarmTableDelegate> {
    EKAlarm *_alarm;
    NSInteger _alarmIndex;
    CalendarEventAlarmTable *_table;
}

@property(retain) EKAlarm *alarm;
@property NSInteger alarmIndex;
@property NSInteger presetIdentifier;

- (id)_table;
- (id)alarm;
- (NSInteger)alarmIndex;
- (void)alarmTableDidChangeAlarm:(id)arg1;
- (BOOL)customSelected;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)loadView;
- (NSInteger)presetIdentifier;
- (void)setAlarm:(id)arg1;
- (void)setAlarmIndex:(NSInteger)arg1;
- (void)setCustomString:(id)arg1;
- (void)setPresetIdentifier:(NSInteger)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;

@end