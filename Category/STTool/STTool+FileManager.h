//
//  STTool+FileManager.h
//  Together
//
//  Created by TangJR on 2/4/16.
//  Copyright © 2016 tangjr. All rights reserved.
//

#import "STTool.h"

@interface STTool (FileManager)

// 沙盒路径
+ (NSString *)st_documentPath;
+ (NSString *)st_cachesPath;
+ (NSString *)st_cookiesPath;
+ (NSString *)st_preferencesPath;
+ (NSString *)st_tempPath;

+ (id)st_fileWithPath:(NSString *)filePath fileClass:(Class)fileClass;
+ (BOOL)st_saveWithPath:(NSString *)filePath fileName:(NSString *)fileName fileData:(NSData *)fileData shouldReplace:(BOOL)shouldReplace;
+ (BOOL)st_copyWithFromPath:(NSString *)fromPath toPath:(NSString *)toPath shouldReplace:(BOOL)shouldReplace;

@end