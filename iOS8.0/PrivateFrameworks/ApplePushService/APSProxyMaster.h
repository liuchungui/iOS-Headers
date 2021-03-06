//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSIDSProxyManagerListener.h"

@class APSEnvironment, APSIDSProxyManager, NSMutableDictionary, NSString;

@interface APSProxyMaster : NSObject <APSIDSProxyManagerListener>
{
    id <APSProxyMasterDelegate> _delegate;
    APSIDSProxyManager *_proxyManager;
    APSEnvironment *_environment;
    NSString *_guid;
    NSMutableDictionary *_outgoingMessageGUIDToConnection;
    NSMutableDictionary *_outgoingMessageGUIDToMessageID;
    BOOL _active;
}

@property(retain, nonatomic) APSIDSProxyManager *proxyManager; // @synthesize proxyManager=_proxyManager;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic) id <APSProxyMasterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)proxyManager:(id)arg1 expiredNonceWithServerTime:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;
- (void)proxyManager:(id)arg1 reversePushResponse:(id)arg2 messageGUID:(id)arg3 messageId:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;
- (void)proxyManager:(id)arg1 receivedPush:(id)arg2 interface:(id)arg3 guid:(id)arg4 environmentName:(id)arg5;
- (void)proxyManagerReceivedDaemonAliveNotification:(id)arg1;
- (void)proxyManager:(id)arg1 incomingMessageSize:(id)arg2 largeMessageSize:(id)arg3 guid:(id)arg4 environmentName:(id)arg5;
- (void)proxyManager:(id)arg1 incomingPushToken:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;
- (void)proxyManager:(id)arg1 isNearbyChanged:(BOOL)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)_failAllPendingMessages;
- (void)connection:(id)arg1 sendMessage:(id)arg2;
- (void)sendResponse:(int)arg1 messageId:(id)arg2 token:(id)arg3 interface:(int)arg4;
- (void)sendInactiveMessage;
- (void)sendPresenceMessage;
- (void)_sendPresenceMessageWithServerTime:(id)arg1;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

