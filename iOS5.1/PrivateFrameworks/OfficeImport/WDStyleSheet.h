/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, WDCharacterProperties, WDDocument, WDParagraphProperties, WDStyle;

@interface WDStyleSheet : NSObject
{
    NSMutableDictionary *mStyleDictionary;
    WDDocument *mDocument;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
}

- (id)initWithDocument:(id)arg1;
- (void)dealloc;
- (id)document;
- (id)styles;
- (int)styleCount;
- (id)styleIdFromStyleName:(id)arg1;
- (id)styleWithId:(id)arg1;
- (id)styleWithName:(id)arg1;
- (id)paragraphStyleWithStartingName:(id)arg1;
- (id)createStyleWithId:(id)arg1 type:(int)arg2;
- (id)createStyleWithName:(id)arg1 type:(int)arg2;
- (void)addStyle:(id)arg1 name:(id)arg2;
- (void)setName:(id)arg1 forId:(id)arg2;
- (void)removeStyleWithId:(id)arg1;
- (id)defaultCharacterProperties;
- (id)defaultParagraphProperties;
- (void)createDefaultStyles;
- (id)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(id)arg1;
- (id)defaultCharacterStyle;
- (void)setDefaultCharacterStyle:(id)arg1;
- (id)defaultTableStyle;
- (void)setDefaultTableStyle:(id)arg1;
- (id)defaultListStyle;
- (void)setDefaultListStyle:(id)arg1;
- (id)styleIdForName:(id)arg1;
- (id)styleNameToId:(id)arg1;

@end

