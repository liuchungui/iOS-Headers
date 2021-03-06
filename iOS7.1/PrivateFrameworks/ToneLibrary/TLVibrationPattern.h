//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TLVibrationPattern : NSObject
{
    id _contextObject;
    id _propertyListRepresentation;
    id _complexPatternDescription;
    double _duration;
}

+ (id)noneVibrationPattern;
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)arg1;
+ (id)simpleVibrationPatternWithVibrationDuration:(double)arg1 pauseDuration:(double)arg2;
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)arg1;
@property(retain, nonatomic, setter=_setComplexPatternDescription:) id _complexPatternDescription; // @synthesize _complexPatternDescription;
@property(retain, nonatomic, setter=_setPropertyListRepresentation:) id _propertyListRepresentation; // @synthesize _propertyListRepresentation;
@property(nonatomic, setter=_setDuration:) double _duration; // @synthesize _duration;
@property(retain, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
- (void)appendVibrationComponentWithDuration:(double)arg1 isPause:(BOOL)arg2;
@property(readonly) double computedDuration;
@property(readonly) id _artificiallyRepeatingPropertyListRepresentation;
@property(readonly, nonatomic) id propertyListRepresentation;
- (void)dealloc;
- (id)_initWithPropertyListRepresentation:(id)arg1 skipValidation:(BOOL)arg2;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)init;

@end

