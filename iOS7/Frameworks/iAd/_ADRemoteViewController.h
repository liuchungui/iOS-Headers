/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_UIRemoteViewController.h"

@interface _ADRemoteViewController : _UIRemoteViewController
{
    _Bool _hasBeenDismissed;
    unsigned long long _remoteSupportedInterfaceOrientations;
}

+ (id)serviceViewControllerInterface;
@property(nonatomic) _Bool hasBeenDismissed; // @synthesize hasBeenDismissed=_hasBeenDismissed;
@property(nonatomic) unsigned long long remoteSupportedInterfaceOrientations; // @synthesize remoteSupportedInterfaceOrientations=_remoteSupportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end

