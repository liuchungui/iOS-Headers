//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIKeyboardArbitrationClient.h"
#import "_UIRemoteKeyboardControllerDelegate.h"

@class NSHashTable, NSString, NSXPCConnection, UIWindow, _UIKeyboardChangedInformation;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboards : NSObject <_UIKeyboardArbitrationClient, _UIRemoteKeyboardControllerDelegate>
{
    NSHashTable *_windowControllers;
    BOOL _currentKeyboard;
    NSXPCConnection *_connection;
    _UIKeyboardChangedInformation *_currentState;
}

+ (id)sharedRemoteKeyboards;
+ (BOOL)enabled;
@property BOOL currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
@property(retain) _UIKeyboardChangedInformation *currentState; // @synthesize currentState=_currentState;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)setHostedWindowView:(id)arg1;
@property(readonly) UIWindow *keyboardWindow;
@property(readonly) BOOL keyboardActive;
@property(readonly) float intersectionHeight;
@property(readonly) BOOL keyboardVisible;
- (id)prepareForHostedWindow;
- (void)performOnControllers:(CDUnknownBlockType)arg1;
- (void)unregisterController:(id)arg1;
- (void)registerController:(id)arg1;
- (void)controllerDidLayoutSubviews:(id)arg1;
- (void)completeMoveKeyboardForScreen:(id)arg1;
- (void)prepareToMoveKeyboard:(struct CGRect)arg1 showing:(BOOL)arg2 forScreen:(id)arg3;
- (void)didActivate:(id)arg1;
- (void)willDeactivate:(id)arg1;
- (void)willResume:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)setWindowEnabled:(BOOL)arg1;
- (void)stopConnection;
- (void)keyboardChanged:(id)arg1;
- (void)startConnection;
@property(readonly) id <_UIKeyboardArbitration> proxy;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
