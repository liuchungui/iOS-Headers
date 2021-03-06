//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APSIDSProxyManager, APSOutgoingMessage, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol APSIDSProxyManagerListener <NSObject>
- (void)proxyManager:(APSIDSProxyManager *)arg1 isNearbyChanged:(BOOL)arg2;

@optional
- (void)proxyManager:(APSIDSProxyManager *)arg1 expiredNonceWithServerTime:(NSNumber *)arg2 guid:(NSString *)arg3 environmentName:(NSString *)arg4;
- (void)proxyManager:(APSIDSProxyManager *)arg1 reversePushResponse:(NSNumber *)arg2 messageGUID:(NSString *)arg3 messageId:(NSNumber *)arg4 guid:(NSString *)arg5 environmentName:(NSString *)arg6;
- (void)proxyManager:(APSIDSProxyManager *)arg1 sendReversePush:(APSOutgoingMessage *)arg2 guid:(NSString *)arg3 environmentName:(NSString *)arg4;
- (void)proxyManager:(APSIDSProxyManager *)arg1 receivedPushAckResponse:(NSNumber *)arg2 messageId:(NSData *)arg3 token:(NSData *)arg4 interface:(NSNumber *)arg5 guid:(NSString *)arg6 environmentName:(NSString *)arg7;
- (void)proxyManager:(APSIDSProxyManager *)arg1 receivedPush:(NSDictionary *)arg2 interface:(NSNumber *)arg3 guid:(NSString *)arg4 environmentName:(NSString *)arg5;
- (void)proxyManager:(APSIDSProxyManager *)arg1 inactiveReceivedForGuid:(NSString *)arg2 environmentName:(NSString *)arg3;
- (void)proxyManager:(APSIDSProxyManager *)arg1 incomingFilterForGuid:(NSString *)arg2 environmentName:(NSString *)arg3 enabledTopics:(NSArray *)arg4 ignoredTopics:(NSArray *)arg5 opportunisticTopics:(NSArray *)arg6;
- (void)proxyManagerReceivedDaemonAliveNotification:(APSIDSProxyManager *)arg1;
- (void)proxyManager:(APSIDSProxyManager *)arg1 incomingMessageSize:(NSNumber *)arg2 largeMessageSize:(NSNumber *)arg3 guid:(NSString *)arg4 environmentName:(NSString *)arg5;
- (void)proxyManager:(APSIDSProxyManager *)arg1 incomingPushToken:(NSData *)arg2 guid:(NSString *)arg3 environmentName:(NSString *)arg4;
@end

