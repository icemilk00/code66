//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface WCShareCardDB : MMObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_tableShareCardInfo;
}

@property(retain, nonatomic) WCDataBaseTable *m_tableShareCardInfo; // @synthesize m_tableShareCardInfo;
@property(retain, nonatomic) WCDataBase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (id)DBContext;
- (_Bool)initDB;

@end

