/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPAudioDeviceController, NSDate, NSDictionary, NSObject<OS_dispatch_source>, RadioStation;

@interface MusicRadioPlaybackCoordinator : NSObject
{
    MPAudioDeviceController *_audioDeviceController;
    _Bool _deviceIsDocked;
    _Bool _deviceIsLocked;
    _Bool _didPresentNotificationForCurrentItem;
    int _lockStateNotifyToken;
    _Bool _lockStateNotifyTokenIsValid;
    void *_mediaRemoteCommandObserver;
    NSObject<OS_dispatch_source> *_pauseTimeoutTimerSource;
    RadioStation *_playbackNotificationStation;
    NSDictionary *_pickedRoute;
    _Bool _playbackIsPaused;
    NSDate *_playbackTimeoutBeginDate;
    double _playbackTimeoutDuration;
    struct __CFUserNotification *_playbackTimeoutNotification;
    _Bool _playbackTimeoutNotificationDidExpire;
    NSObject<OS_dispatch_source> *_playbackTimeoutNotificationExpirationTimerSource;
    struct __CFRunLoopSource *_playbackTimeoutNotificationRunLoopSource;
    RadioStation *_currentStation;
}

+ (id)sharedCoordinator;
@property(retain, nonatomic) RadioStation *currentStation; // @synthesize currentStation=_currentStation;
- (void).cxx_destruct;
- (void)_updatePlaybackTimerForDeviceStateChangeAllowingExpiredPlaybackTimeoutNotificationDismissal:(_Bool)arg1;
- (void)_schedulePlaybackTimeoutNotificationExpirationTimerIfNeeded;
- (void)_resetPlaybackTimeoutInformation;
- (void)_receivedUserNotificationResponseForUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;
- (void)_presentPlaybackTimeoutNotificationForCurrentItemIfNeeded;
- (_Bool)_isRadioRelevantItem:(id)arg1;
- (void)_cancelPlaybackTimeoutNotification;
- (void)_cancelPauseTimeoutTimer;
- (void)_cancelPlaybackTimeoutNotificationExpirationTimer;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemIsLikedDidChangeNotification:(id)arg1;
- (void)_itemIsInWishListDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangeNotification:(id)arg1;
- (void)_itemDurationDidBecomeAvailableNotification:(id)arg1;
- (void)_fullMuteDidChangeNotification:(id)arg1;
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)requestPlaybackForStation:(id)arg1 withCompletionHandler:(id)arg2;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

