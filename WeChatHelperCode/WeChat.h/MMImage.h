//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@class MMAsset, MMImageLocation, NSData, NSString, NSURL;

@interface MMImage : UIImage
{
    long long _mattID;
    NSString *_dataPath;
    long long _imageFrom;
    int m_processState;
    NSURL *_referenceURL;
    MMAsset *m_asset;
    UIImage *m_imageFromAsset;
    NSData *m_imageData;
    MMImageLocation *m_location;
}

@property(retain, nonatomic) MMImageLocation *m_location; // @synthesize m_location;
@property(retain, nonatomic) NSData *m_imageData; // @synthesize m_imageData;
@property(retain, nonatomic) UIImage *m_imageFromAsset; // @synthesize m_imageFromAsset;
@property(nonatomic) int m_processState; // @synthesize m_processState;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset;
@property(retain, nonatomic) NSURL *referenceURL; // @synthesize referenceURL=_referenceURL;
@property(nonatomic) long long imageFrom; // @synthesize imageFrom=_imageFrom;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(nonatomic) long long mattID; // @synthesize mattID=_mattID;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;
- (id)init;
- (void)commonInit;

@end

