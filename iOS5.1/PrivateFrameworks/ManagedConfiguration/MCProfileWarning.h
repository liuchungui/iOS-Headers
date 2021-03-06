/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding>
{
    NSString *_localizedTitle;
    NSString *_localizedBody;
    BOOL _isLongForm;
}

+ (id)warningWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;
- (void)dealloc;
- (id)initWithLocalizedTitle:(id)arg1 localizedBody:(id)arg2 isLongForm:(BOOL)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property BOOL isLongForm; // @synthesize isLongForm=_isLongForm;
@property(retain) NSString *localizedBody; // @synthesize localizedBody=_localizedBody;
@property(retain) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;

@end

