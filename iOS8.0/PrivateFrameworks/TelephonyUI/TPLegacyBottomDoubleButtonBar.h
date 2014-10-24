//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUI/TPLegacyBottomSingleButtonBar.h>

@class TPLegacyButton, UIView;

@interface TPLegacyBottomDoubleButtonBar : TPLegacyBottomSingleButtonBar
{
    TPLegacyButton *_button2;
    UIView *_well1;
    UIView *_well2;
    UIView *_wellContainer;
}

+ (float)_wellPadding;
- (void)setWellAlpha:(float)arg1;
- (void)layoutSubviews;
- (void)_layoutButtons;
- (void)_layoutWells;
- (void)setDrawsSeparateWells:(BOOL)arg1;
- (id)button2;
- (void)setButton2:(id)arg1 andStyle:(BOOL)arg2;
- (void)setButton:(id)arg1 andStyle:(BOOL)arg2;
- (void)_updateButtonSettings:(id)arg1;
- (void)dealloc;
- (id)initForVideoChatWithFrame:(struct CGRect)arg1;
- (id)initForEmergencyCallWithFrame:(struct CGRect)arg1;
- (id)initForCallFailureWithFrame:(struct CGRect)arg1;
- (id)initForIncomingCallWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (float)_buttonWidth;

@end
