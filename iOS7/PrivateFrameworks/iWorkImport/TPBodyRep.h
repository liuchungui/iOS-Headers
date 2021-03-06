/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSWPRep.h>

#import "TSKChangeSourceObserver-Protocol.h"

@class NSSet;

// Not exported
@interface TPBodyRep : TSWPRep <TSKChangeSourceObserver>
{
    NSSet *_lastSelectedInfos;
}

- (id)beginEditing;
- (void)willBeRemoved;
- (id)siblings;
- (id)repForCharIndex:(unsigned long long)arg1 isStart:(_Bool)arg2;
- (_Bool)p_doesRep:(id)arg1 containCharIndex:(unsigned long long)arg2 isStart:(_Bool)arg3;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (id)hitReps:(struct CGPoint)arg1 withSlop:(struct CGSize)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (id)colorBehindLayer:(id)arg1;
- (id)storage;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

