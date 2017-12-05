//
//  RDFormManager.h
//  PDFViewer
//
//  Created by Emanuele Bortolami on 16/01/17.
//
//

#import <Foundation/Foundation.h>
#import "PDFObjc.h"

@interface RDFormManager : NSObject

//init
- (instancetype)initWithDoc:(id)doc;

//Getter
- (NSString *)jsonInfoForAllPages:(PDFDoc *)document;
- (NSString *)jsonInfoForPage:(int)page;

//Setter
- (void)setInfoWithJson:(PDFDoc *)document dict:(NSString *)dict error:(NSError **)error;

@end
