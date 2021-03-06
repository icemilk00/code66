//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

@interface MemoryMappedKV : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dic;
    NSString *m_path;
    NSString *m_crcPath;
    NSString *m_mmapID;
    int m_fd;
    char *m_ptr;
    unsigned long long m_size;
    unsigned long long m_actualSize;
    struct CodedOutputData *m_output;
    _Bool m_isInBackground;
    _Bool m_needLoadFromFile;
    unsigned int m_crcDigest;
    int m_crcFd;
    char *m_crcPtr;
}

+ (_Bool)isFileValid:(id)arg1;
+ (id)crcPathWithMappedKVPath:(id)arg1;
+ (id)mappedKVPathWithID:(id)arg1;
+ (id)memoryMappedKVWithID:(id)arg1 withApplicationState:(long long)arg2;
+ (id)sharedDefaultMemoryMappedKVWithApplicationState:(long long)arg1;
+ (id)defaultMemoryMappedKVWithApplicationState:(long long)arg1;
+ (void)setCurrentUin:(unsigned int)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)sync;
- (void)removeValuesForKeys:(id)arg1;
- (void)removeValueForKey:(id)arg1;
- (void)enumerateKeys:(CDUnknownBlockType)arg1;
- (unsigned long long)totalSize;
- (unsigned long long)count;
- (_Bool)containsKey:(id)arg1;
- (unsigned long long)getUInt64ForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (unsigned long long)getUInt64ForKey:(id)arg1;
- (long long)getInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)getInt64ForKey:(id)arg1;
- (unsigned int)getUInt32ForKey:(id)arg1 defaultValue:(unsigned int)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (int)getInt32ForKey:(id)arg1 defaultValue:(int)arg2;
- (int)getInt32ForKey:(id)arg1;
- (_Bool)getBoolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (id)getObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (_Bool)setUInt64:(unsigned long long)arg1 forKey:(id)arg2;
- (_Bool)setInt64:(long long)arg1 forKey:(id)arg2;
- (_Bool)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (_Bool)setInt32:(int)arg1 forKey:(id)arg2;
- (_Bool)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
- (void)prepareCRCFile;
- (void)updateCRCDigest:(const char *)arg1 withSize:(unsigned long long)arg2;
- (void)recaculateCRCDigest;
- (_Bool)checkFileCRCValid;
- (_Bool)isFileValid;
- (_Bool)fullWriteback;
- (id)getDataForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2;
- (_Bool)writeAcutalSize:(unsigned long long)arg1;
- (_Bool)ensureMemorySize:(unsigned long long)arg1;
- (_Bool)protectFromBackgroundWritting:(unsigned long long)arg1 writeBlock:(CDUnknownBlockType)arg2;
- (void)clearMemoryState;
- (void)clearAll;
- (void)checkLoadData;
- (void)loadFromFile;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (void)onMemoryWarning;
- (void)dealloc;
- (id)initWithMMapID:(id)arg1 withApplicationState:(long long)arg2;

@end

