//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface TLAlert : NSObject
{
    BOOL _shouldOverrideMasterSwitches;
    int _type;
    NSString *_toneIdentifier;
    NSString *_vibrationIdentifier;
    NSObject<OS_dispatch_queue> *_targetQueue;
    CDUnknownBlockType _completionHandler;
}

+ (void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(BOOL)arg4;
+ (void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
+ (void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2;
+ (void)playToneAndVibrationForType:(int)arg1;
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler;
@property(retain, nonatomic, setter=_setTargetQueue:) NSObject<OS_dispatch_queue> *_targetQueue; // @synthesize _targetQueue;
@property(nonatomic, setter=_setShouldOverrideMasterSwitches:) BOOL _shouldOverrideMasterSwitches; // @synthesize _shouldOverrideMasterSwitches;
- (void)_setVibrationIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @synthesize vibrationIdentifier=_vibrationIdentifier;
- (void)_setToneIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *toneIdentifier; // @synthesize toneIdentifier=_toneIdentifier;
- (void)_setType:(int)arg1;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)stop;
- (BOOL)playWithCompletionHandler:(CDUnknownBlockType)arg1 targetQueue:(id)arg2;
- (void)dealloc;
- (id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3;
- (id)initWithType:(int)arg1 accountIdentifier:(id)arg2;
- (id)initWithType:(int)arg1;

@end
