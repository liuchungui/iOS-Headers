/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountCredential, NSString;

@interface SUScriptAppleAccountCredential : SUScriptObject
{
    ACAccountCredential *_credential;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(readonly) NSString *oauthToken;
- (id)_className;
- (void)dealloc;
- (id)initWithACAccountCredential:(id)arg1;

@end
