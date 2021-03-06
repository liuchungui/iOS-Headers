//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDKnob.h>

@class TSDBezierPath, TSUColor;

__attribute__((visibility("hidden")))
@interface TSDCustomShapeKnob : TSDKnob
{
    TSDBezierPath *mPath;
    TSUColor *mColor;
    float mAngle;
}

+ (id)trianglePath;
+ (id)diamondPath;
@property(nonatomic) float angle; // @synthesize angle=mAngle;
@property(copy, nonatomic) TSUColor *color; // @synthesize color=mColor;
@property(retain, nonatomic) TSDBezierPath *path; // @synthesize path=mPath;
- (id)layer;
- (void)createKnobLayers;
- (id)darkColor;
- (void)dealloc;
- (id)initWithType:(int)arg1 position:(struct CGPoint)arg2 radius:(float)arg3 tag:(unsigned int)arg4 onRep:(id)arg5;

@end

