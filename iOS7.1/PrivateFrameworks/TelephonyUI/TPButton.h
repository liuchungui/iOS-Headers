//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class SBFGlintyStringView, UIScrollView, _UIBackdropView;

@interface TPButton : UIButton
{
    int _color;
    _UIBackdropView *_backdropView;
    BOOL _blursBackground;
    BOOL _roundsCorners;
    BOOL _usesOverlayBlendingForContents;
    UIScrollView *_shineLabelScrollView;
    SBFGlintyStringView *_shineLabelView;
}

+ (id)acceptVideoButtonImage;
+ (id)declineVideoButtonImage;
+ (id)declineButtonImage;
+ (id)answerButtonImage;
+ (float)maxWidthForCenterButton;
+ (float)defaultWidthForCenterButton;
+ (float)defaultWidthForSideButton;
+ (float)defaultHeightForColor:(int)arg1;
+ (float)defaultHeight;
+ (id)defaultStandardFont;
@property(retain) SBFGlintyStringView *shineLabelView; // @synthesize shineLabelView=_shineLabelView;
@property(retain) UIScrollView *shineLabelScrollView; // @synthesize shineLabelScrollView=_shineLabelScrollView;
@property(nonatomic) BOOL usesOverlayBlendingForContents; // @synthesize usesOverlayBlendingForContents=_usesOverlayBlendingForContents;
@property(nonatomic) BOOL roundsCorners; // @synthesize roundsCorners=_roundsCorners;
@property(nonatomic) BOOL blursBackground; // @synthesize blursBackground=_blursBackground;
- (void)setDisabledButtonColor:(int)arg1;
- (void)setTitleVerticalOffset:(float)arg1;
- (void)setIconVerticalOffset:(float)arg1;
- (void)setTitleImagePadding:(float)arg1;
- (void)setMinimumTitleFontSize:(float)arg1 maximumTitleFontSize:(float)arg2;
- (void)setMinimumTitleFontSize:(float)arg1;
- (void)setPlusSeparatedTitle:(id)arg1;
- (void)_animationDidEnd;
- (void)_animationWillBegin;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (void)setShineLabelShouldAnimate:(BOOL)arg1;
- (void)setUsesSlidingShineLabelWithText:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (int)buttonColor;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(struct CGRect)arg4;
- (void)setButtonColor:(int)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end
