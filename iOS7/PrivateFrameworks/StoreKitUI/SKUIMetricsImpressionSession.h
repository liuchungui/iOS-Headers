/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableString, NSString;

@interface SKUIMetricsImpressionSession : NSObject
{
    NSMutableArray *_impressionIdentifiers;
    NSMutableString *_impressionsString;
}

@property(readonly, nonatomic) NSString *impressionsString; // @synthesize impressionsString=_impressionsString;
@property(readonly, nonatomic) NSArray *impressionIdentifiers; // @synthesize impressionIdentifiers=_impressionIdentifiers;
- (void).cxx_destruct;
- (void)addItemIdentifier:(long long)arg1;
- (id)init;

@end

