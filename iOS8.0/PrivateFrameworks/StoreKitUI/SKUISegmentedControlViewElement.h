//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, SKUIDividerViewElement;

@interface SKUISegmentedControlViewElement : SKUIViewElement
{
    int _maximumNumberOfVisibleItems;
    NSString *_moreListTitle;
}

@property(readonly, nonatomic) NSString *moreListTitle; // @synthesize moreListTitle=_moreListTitle;
@property(readonly, nonatomic) int maximumNumberOfVisibleItems; // @synthesize maximumNumberOfVisibleItems=_maximumNumberOfVisibleItems;
- (void).cxx_destruct;
- (void)_enumerateItemElementsUsingBlock:(CDUnknownBlockType)arg1;
- (int)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) NSArray *segmentItemTitles;
@property(readonly, nonatomic) int initialSelectedItemIndex;
- (void)dispatchEventOfType:(unsigned int)arg1 forItemAtIndex:(int)arg2;
@property(readonly, nonatomic) SKUIDividerViewElement *bottomDivider;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

