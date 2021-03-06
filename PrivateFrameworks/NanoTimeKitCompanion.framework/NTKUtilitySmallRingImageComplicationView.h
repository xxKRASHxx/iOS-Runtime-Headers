/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView {
    UIView<NTKComplicationImageView> * _imageView;
    CLKProgressProvider * _progressProvider;
    struct NSNumber { Class x1; } * _progressUpdateToken;
}

+ (bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;

- (void).cxx_destruct;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (void)_updateForTemplateChange;
- (void)_updateWithImageProvider:(id)arg1;
- (void)layoutSubviews;
- (id)ringColor;
- (void)updateRingWithProgressProvider:(id)arg1;

@end
