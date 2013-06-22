/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQSTable.h>

@interface GQSSpiceTable : GQSTable
{
    struct __CFDictionary *mVectorUidToAlongMap;
    BOOL mReadingRowVectors;
    vector_355ad652 *mRowPositions;
    vector_355ad652 *mColumnPositions;
    float mCurrentCellMinX;
    float mCurrentCellMaxX;
    float mCurrentCellMinY;
    float mCurrentCellMaxY;
    id mCurrentCellStorage;
    id mCurrentCellStyle;
}

- (id)init;
- (void)dealloc;
- (void)aboutToReadRowVectors;
- (void)aboutToReadColumnVectors;
- (void)aboutToReadCells;
- (float)alongValueForVectorUid:(const char *)arg1;
- (void)setAlongValue:(float)arg1 forOwnedVectorUid:(char *)arg2;

@end
