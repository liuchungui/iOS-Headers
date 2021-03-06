//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TPBottomBar : UIView
{
    int _orientation;
    int _style;
}

+ (int)overlayStyle;
+ (int)fullscreenStyle;
+ (float)defaultHeight;
+ (float)defaultHeightForOrientation:(int)arg1;
+ (float)defaultHeightForStyle:(int)arg1;
+ (float)defaultHeightForStyle:(int)arg1 orientation:(int)arg2;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 updateFrame:(BOOL)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (id)initWithDefaultSize;

@end

