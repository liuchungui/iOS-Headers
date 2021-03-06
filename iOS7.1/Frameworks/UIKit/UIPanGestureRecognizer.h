//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, UIPanGestureVelocitySample;

@interface UIPanGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _firstScreenLocation;
    struct CGPoint _lastScreenLocation;
    double _lastTouchTime;
    id _velocitySample;
    id _previousVelocitySample;
    NSMutableArray *_touches;
    unsigned int _lastTouchCount;
    unsigned int _minimumNumberOfTouches;
    unsigned int _maximumNumberOfTouches;
    float _hysteresis;
    struct CGPoint _lastUnadjustedScreenLocation;
    unsigned int _failsPastMaxTouches:1;
    unsigned int _canPanHorizontally:1;
    unsigned int _canPanVertically:1;
    unsigned int _ignoresStationaryTouches:1;
    NSMutableArray *_movingTouches;
}

@property(readonly, getter=_previousVelocitySample) UIPanGestureVelocitySample *_previousVelocitySample; // @synthesize _previousVelocitySample;
@property(readonly, getter=_velocitySample) UIPanGestureVelocitySample *_velocitySample; // @synthesize _velocitySample;
@property(nonatomic) unsigned int maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property(nonatomic) unsigned int minimumNumberOfTouches; // @synthesize minimumNumberOfTouches=_minimumNumberOfTouches;
- (struct CGPoint)locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (unsigned int)numberOfTouches;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(CDUnknownBlockType)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)_updateMovingTouchesArraySavingOldArray:(id *)arg1;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)_removeHysteresisFromTranslation;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (BOOL)_willScrollY;
- (BOOL)_willScrollX;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;
- (struct CGPoint)_adjustScreenLocation:(struct CGPoint)arg1;
- (struct CGPoint)_shiftPanLocationToNewScreenLocation:(struct CGPoint)arg1 lockingToAxis:(int)arg2;
- (struct UIOffset)_offsetInViewFromScreenLocation:(struct CGPoint)arg1 toScreenLocation:(struct CGPoint)arg2;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;
- (struct CADoublePoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;
- (void)setTranslation:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CADoublePoint)_convertPoint:(struct CGPoint)arg1 fromScreenCoordinatesToView:(id)arg2;
- (struct CADoublePoint)_convertPoint:(struct CGPoint)arg1 toScreenCoordinatesFromView:(id)arg2;
- (void)_setCanPanVertically:(BOOL)arg1;
- (void)_setCanPanHorizontally:(BOOL)arg1;
- (BOOL)_canPanVertically;
- (BOOL)_canPanHorizontally;
- (BOOL)_ignoresStationaryTouches;
- (void)_setIgnoresStationaryTouches:(BOOL)arg1;
- (float)_hysteresis;
- (void)_setHysteresis:(float)arg1;
- (int)_lastTouchCount;
- (BOOL)failsPastMaxTouches;
- (void)setFailsPastMaxTouches:(BOOL)arg1;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

