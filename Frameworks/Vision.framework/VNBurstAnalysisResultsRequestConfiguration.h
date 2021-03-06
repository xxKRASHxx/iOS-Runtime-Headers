/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNBurstAnalysisResultsRequestConfiguration : VNRequestConfiguration {
    bool  _includeAllImageIdentifiers;
    bool  _includeAllImageStats;
    bool  _includeClusters;
}

@property (nonatomic) bool includeAllImageIdentifiers;
@property (nonatomic) bool includeAllImageStats;
@property (nonatomic) bool includeClusters;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)includeAllImageIdentifiers;
- (bool)includeAllImageStats;
- (bool)includeClusters;
- (id)initWithRequestClass:(Class)arg1;
- (void)setIncludeAllImageIdentifiers:(bool)arg1;
- (void)setIncludeAllImageStats:(bool)arg1;
- (void)setIncludeClusters:(bool)arg1;

@end
