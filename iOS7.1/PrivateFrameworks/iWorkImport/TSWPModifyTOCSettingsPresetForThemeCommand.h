//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPModifyTOCSettingsBaseCommand.h>

@class TSSTheme;

__attribute__((visibility("hidden")))
@interface TSWPModifyTOCSettingsPresetForThemeCommand : TSWPModifyTOCSettingsBaseCommand
{
    TSSTheme *_theme;
    unsigned int _presetIndex;
    BOOL _coalesceable;
}

- (id)initFromUnarchiver:(id)arg1;
- (const struct ModifyTOCSettingsBaseCommandArchive *)tocCommandArchiveFromUnarchiver:(id)arg1;
- (void)loadFromMessage:(const struct ModifyTOCSettingsPresetForThemeCommandArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToMessage:(struct ModifyTOCSettingsPresetForThemeCommandArchive *)arg1 archiver:(id)arg2;
- (void)redo;
- (void)undo;
- (void)p_undoRedo;
- (void)commit;
- (BOOL)process;
- (BOOL)shouldRunSynchronously;
- (void)coalesceWithCommand:(id)arg1;
- (BOOL)canCoalesceWithCommand:(id)arg1;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 presetIndex:(unsigned int)arg2 tocSettings:(id)arg3 coalesceable:(BOOL)arg4;
- (id)initWithTheme:(id)arg1 presetIndex:(unsigned int)arg2 tocSettings:(id)arg3;

@end

