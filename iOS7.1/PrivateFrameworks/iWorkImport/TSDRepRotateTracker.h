//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDDecorator.h"
#import "TSDLayoutManipulatingTracker.h"
#import "TSDRepTracker.h"

@class CAShapeLayer, TSDRep;

__attribute__((visibility("hidden")))
@interface TSDRepRotateTracker : NSObject <TSDDecorator, TSDLayoutManipulatingTracker, TSDRepTracker>
{
    TSDRep *mRep;
    BOOL mDidBeginRotation;
    BOOL mMovedMinimumDistance;
    struct CGPoint mCenterForRotation;
    float mSnapThreshold;
    float mRotateDeltaInRadians;
    float mCurrentLogicalAngleInDegrees;
    float mCurrentPhysicalAngleInDegrees;
    float mPreviousSnap;
    float mOriginalAngleInDegrees;
    float mOriginalAngleForRotationInDegrees;
    CAShapeLayer *mGuideLayer;
    BOOL mHaveSproingedHUD;
    BOOL mShouldShowHUD;
    id <TSDRepTrackerDelegate> mDelegate;
    TSDRep *mOriginalNonFloatingRep;
    BOOL mIsInspectorDrivenTracking;
}

@property(nonatomic) BOOL isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mIsInspectorDrivenTracking;
@property(nonatomic) float snapThreshold; // @synthesize snapThreshold=mSnapThreshold;
@property(readonly, nonatomic) float originalAngleInDegrees; // @synthesize originalAngleInDegrees=mOriginalAngleInDegrees;
@property(readonly, nonatomic) float currentLogicalAngleInDegrees; // @synthesize currentLogicalAngleInDegrees=mCurrentLogicalAngleInDegrees;
@property(nonatomic) struct CGPoint centerForRotation; // @synthesize centerForRotation=mCenterForRotation;
@property(nonatomic) BOOL shouldShowHUD; // @synthesize shouldShowHUD=mShouldShowHUD;
@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=mRep;
- (void)p_makeSiblingRepsPerformBlock:(CDUnknownBlockType)arg1;
- (BOOL)p_shouldApplyRotateToSiblingsOfRep;
- (void)p_hideGuideLayer;
- (void)p_updateGuideLayerWithAngle:(float)arg1 didSnap:(BOOL)arg2;
- (void)p_hideHUD;
- (void)p_sproingHUD;
- (void)p_updateHUDWithAngle:(float)arg1;
- (void)p_begin;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)decoratorOverlayLayers;
- (BOOL)operationShouldBeDynamic;
- (BOOL)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (struct CGAffineTransform)rotateTransform;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (void)addRotateDelta:(float)arg1;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end
