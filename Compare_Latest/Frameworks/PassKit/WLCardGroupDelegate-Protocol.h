/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WLCardGroupDelegate <NSObject>
- (void)group:(id)arg1 didMoveCardFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didRemoveCardWithUniqueID:(id)arg2 atIndex:(unsigned int)arg3;
- (void)group:(id)arg1 didReplaceCardWithUniqueID:(id)arg2 withCard:(id)arg3 atIndex:(unsigned int)arg4;
- (void)group:(id)arg1 willReplaceCardWithUniqueID:(id)arg2;
- (void)group:(id)arg1 didInsertCard:(id)arg2 atIndex:(unsigned int)arg3;
@end
