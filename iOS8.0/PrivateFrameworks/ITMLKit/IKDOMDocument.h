//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKDOMNode.h>

#import "IKJSDOMDocument.h"
#import "IKJSDOMXPathEvaluator.h"

@class IKDOMElement, IKDOMImplementation, IKJSNavigationDocument, NSString;

@interface IKDOMDocument : IKDOMNode <IKJSDOMDocument, IKJSDOMXPathEvaluator>
{
    id <IKJSDOMDocumentAppBridge> _appBridge;
    unsigned int _itmlIDSequence;
}

+ (struct _xmlDoc *)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id *)arg3;
@property(nonatomic) unsigned int itmlIDSequence; // @synthesize itmlIDSequence=_itmlIDSequence;
@property(nonatomic) __weak id <IKJSDOMDocumentAppBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void).cxx_destruct;
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode *)arg1;
- (void)setITMLIDForNode:(id)arg1;
- (int)nodeType;
- (id)nodeName;
- (id)recordedImpressions;
- (id)snapshotImpressions;
- (void)scrollToTop;
- (void)runTest:(id)arg1:(id)arg2;
@property(nonatomic) __weak IKJSNavigationDocument *navigationDocument;
- (void)replace:(id)arg1;
- (void)setNeedsUpdate;
- (id)evaluate:(id)arg1:(id)arg2:(id)arg3:(int)arg4:(id)arg5;
- (id)createExpression:(id)arg1:(id)arg2;
- (id)adoptNode:(id)arg1;
- (id)getElementById:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)createComment:(id)arg1;
- (id)createTextNode:(id)arg1;
- (id)createDocumentFragment;
- (id)createElement:(id)arg1;
@property(retain, nonatomic) NSString *documentURI;
@property(nonatomic) BOOL strictErrorChecking;
@property(retain, nonatomic) NSString *xmlVersion;
@property(nonatomic) BOOL xmlStandalone;
@property(readonly, retain, nonatomic) NSString *xmlEncoding;
@property(readonly, retain, nonatomic) NSString *inputEncoding;
@property(readonly, retain, nonatomic) IKDOMElement *documentElement;
@property(readonly, nonatomic) __weak IKDOMImplementation *implementation;
- (BOOL)markUpdated;
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;
- (id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id *)arg3;
- (id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id *)arg3;
- (id)initWithAppContext:(id)arg1;

@end

