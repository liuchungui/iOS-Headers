//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVController, MPMediaItem, MPMediaPlaylist, MPMediaQuery, MPMusicPlayerControllerServer, MPRadioStation;

@protocol MPMusicPlayerControllerServerDelegate <NSObject>
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 prepareQueueWithRadioStation:(MPRadioStation *)arg2;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 prepareQueueWithGeniusMixPlaylist:(MPMediaPlaylist *)arg2;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 prepareQueueWithQuery:(MPMediaQuery *)arg2;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 setShuffleMode:(int)arg2;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 setFirstItem:(MPMediaItem *)arg2;
- (MPRadioStation *)currentRadioStationForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1;
- (MPMediaQuery *)currentMediaQueryForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1;
- (BOOL)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1;
- (unsigned int)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1;
- (unsigned int)indexOfNowPlayingItemForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 setNowPlayingItem:(MPMediaItem *)arg2;
- (MPMediaItem *)nowPlayingItemForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 setPlaybackSpeed:(int)arg2;
- (int)playbackSpeedForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1;
- (MPAVController *)playerForMusicPlayerServer:(MPMusicPlayerControllerServer *)arg1 usingApplicationSpecificQueue:(BOOL)arg2;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 registerForShuffleModeChangesWithChangeHandler:(void (^)(int))arg2;
- (void)musicPlayerServer:(MPMusicPlayerControllerServer *)arg1 registerForRepeatModeChangesWithChangeHandler:(void (^)(int))arg2;
@end
