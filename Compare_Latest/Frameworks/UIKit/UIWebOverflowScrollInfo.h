//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollInfo : NSObject
{
    BOOL _isUserScroll;
    DOMNode *_node;
    struct CGPoint _offset;
}

@property(nonatomic) BOOL isUserScroll; // @synthesize isUserScroll=_isUserScroll;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (BOOL)coalesceScrollForNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(BOOL)arg3;
- (void)dealloc;
- (id)initWithNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(BOOL)arg3;

@end

