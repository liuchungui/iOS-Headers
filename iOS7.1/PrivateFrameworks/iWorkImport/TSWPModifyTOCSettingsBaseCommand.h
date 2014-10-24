//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

@class TSWPTOCSettings;

__attribute__((visibility("hidden")))
@interface TSWPModifyTOCSettingsBaseCommand : TSKCommand
{
    TSWPTOCSettings *_oldTOCSettings;
    TSWPTOCSettings *_newTOCSettings;
}

- (id)initFromUnarchiver:(id)arg1;
- (const struct ModifyTOCSettingsBaseCommandArchive *)tocCommandArchiveFromUnarchiver:(id)arg1;
- (void)loadFromMessage:(const struct ModifyTOCSettingsBaseCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct ModifyTOCSettingsBaseCommandArchive *)arg1 archiver:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 oldTOCSettings:(id)arg2 newTOCSettings:(id)arg3;

@end
