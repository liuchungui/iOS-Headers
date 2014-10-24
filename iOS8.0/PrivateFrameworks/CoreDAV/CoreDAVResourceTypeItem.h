//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_addressBook;
    CoreDAVItemWithNoChildren *_searchAddressBook;
    CoreDAVItemWithNoChildren *_shared;
    CoreDAVItemWithNoChildren *_principal;
    CoreDAVItemWithNoChildren *_collection;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

+ (id)copyParseRules;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *principal; // @synthesize principal=_principal;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *shared; // @synthesize shared=_shared;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *searchAddressBook; // @synthesize searchAddressBook=_searchAddressBook;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *addressBook; // @synthesize addressBook=_addressBook;
- (BOOL)isTypeWithNameSpace:(id)arg1 andName:(id)arg2;
@property(readonly, nonatomic) NSSet *stringSet;
- (void)write:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
