/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Symbolication/VMUMemory_Base.h>

#import "VMUMemory-Protocol.h"

@class VMUArchitecture;

@interface VMUMemory_Task : VMUMemory_Base <VMUMemory>
{
    char *_data;
    struct _VMURange _addressRange;
    VMUArchitecture *_architecture;
}

+ (id)memoryWithData:(char *)arg1 addressRange:(struct _VMURange)arg2 architecture:(id)arg3;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (id)swappedView;
- (id)view;
- (id)memoryFromSubRange:(struct _VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (_Bool)isContiguous;
- (id)architecture;
- (struct _VMURange)addressRange;
- (id)initWithData:(char *)arg1 addressRange:(struct _VMURange)arg2 architecture:(id)arg3;

@end

