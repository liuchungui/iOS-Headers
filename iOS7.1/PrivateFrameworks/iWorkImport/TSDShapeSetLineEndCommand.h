//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

@class TSDLineEnd, TSDShapeInfo;

__attribute__((visibility("hidden")))
@interface TSDShapeSetLineEndCommand : TSKCommand
{
    TSDShapeInfo *mShape;
    TSDLineEnd *mLineEnd;
    BOOL mIsHeadLineEnd;
}

@property(readonly, nonatomic) TSDLineEnd *lineEnd; // @synthesize lineEnd=mLineEnd;
@property(readonly, nonatomic) BOOL isHeadLineEnd; // @synthesize isHeadLineEnd=mIsHeadLineEnd;
@property(readonly, nonatomic) TSDShapeInfo *shape; // @synthesize shape=mShape;
- (void)redo;
- (void)undo;
- (void)commit;
- (void)p_do;
- (BOOL)process;
- (id)actionString;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithShape:(id)arg1 lineEnd:(id)arg2 isHeadLineEnd:(BOOL)arg3;

@end

