/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray, UIColor;

@interface MPUNowPlayingIndicatorView : UIView
{
    NSMutableArray *_levelViews;
    UIColor *_bottomGradientColor;
    float _interLevelSpacing;
    float _levelCornerRadius;
    float _levelWidth;
    float _maximumLevelHeight;
    float _minimumLevelHeight;
    int _numberOfLevels;
    int _playbackState;
    UIColor *_topGradientColor;
}

@property(retain, nonatomic) UIColor *topGradientColor; // @synthesize topGradientColor=_topGradientColor;
@property(nonatomic) int playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) int numberOfLevels; // @synthesize numberOfLevels=_numberOfLevels;
@property(nonatomic) float minimumLevelHeight; // @synthesize minimumLevelHeight=_minimumLevelHeight;
@property(nonatomic) float maximumLevelHeight; // @synthesize maximumLevelHeight=_maximumLevelHeight;
@property(nonatomic) float levelWidth; // @synthesize levelWidth=_levelWidth;
@property(nonatomic) float levelCornerRadius; // @synthesize levelCornerRadius=_levelCornerRadius;
@property(nonatomic) float interLevelSpacing; // @synthesize interLevelSpacing=_interLevelSpacing;
@property(retain, nonatomic) UIColor *bottomGradientColor; // @synthesize bottomGradientColor=_bottomGradientColor;
- (void).cxx_destruct;
- (void)_updateLevelGradients;
- (void)_updateLevelAnimations;
- (void)_reloadLevelViews;
- (void)_removeAllAnimations:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
