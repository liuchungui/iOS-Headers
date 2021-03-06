//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface TDNamedAssetImportInfo : NSObject
{
    NSString *_name;
    int _nameIdentifier;
    NSURL *_fileURL;
    NSDate *_modificationDate;
    int _idiom;
    int _subtype;
    unsigned int _scaleFactor;
    int _renditionType;
    int _resizingMode;
    int _templateRenderingMode;
    int _sizeClassHorizontal;
    int _sizeClassVertical;
    unsigned int _memoryClass;
    unsigned int _graphicsClass;
    struct CGSize _resizableSliceSize;
    CDStruct_fd71c141 _sliceInsets;
    struct CGRect _alignmentRect;
}

@property(nonatomic) unsigned int graphicsClass; // @synthesize graphicsClass=_graphicsClass;
@property(nonatomic) unsigned int memoryClass; // @synthesize memoryClass=_memoryClass;
@property(nonatomic) int sizeClassVertical; // @synthesize sizeClassVertical=_sizeClassVertical;
@property(nonatomic) int sizeClassHorizontal; // @synthesize sizeClassHorizontal=_sizeClassHorizontal;
@property(nonatomic) struct CGRect alignmentRect; // @synthesize alignmentRect=_alignmentRect;
@property(nonatomic) int templateRenderingMode; // @synthesize templateRenderingMode=_templateRenderingMode;
@property(nonatomic) struct CGSize resizableSliceSize; // @synthesize resizableSliceSize=_resizableSliceSize;
@property(nonatomic) int resizingMode; // @synthesize resizingMode=_resizingMode;
@property(nonatomic) int renditionType; // @synthesize renditionType=_renditionType;
@property(nonatomic) CDStruct_fd71c141 sliceInsets; // @synthesize sliceInsets=_sliceInsets;
@property(nonatomic) unsigned int scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(nonatomic) int idiom; // @synthesize idiom=_idiom;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) int nameIdentifier; // @synthesize nameIdentifier=_nameIdentifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL isTemplate;
- (int)renditionSubtype;
- (void)dealloc;
- (id)init;

@end

