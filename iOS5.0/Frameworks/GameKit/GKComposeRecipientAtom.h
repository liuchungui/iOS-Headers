/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKAtomView.h>

@class GKComposeRecipient, UITextInputTraits;

@interface GKComposeRecipientAtom : GKAtomView
{
    GKComposeRecipient *_recipient;
    UITextInputTraits *_traits;
}

- (void)_handleKeyEvent:(struct __GSEvent *)arg1;
- (void)moveRight;
- (void)moveLeft;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) GKComposeRecipient *recipient;
- (id)title;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 theme:(id)arg3;

@end

