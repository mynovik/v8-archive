#import <Foundation/Foundation.h>
#import "DRCTSObject.h"

/**
* directus.io
* API for directus.io
*
* OpenAPI spec version: 1.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DRCTSGetMessagesResponses.h"
@protocol DRCTSGetMessagesResponses;
@class DRCTSGetMessagesResponses;



@protocol DRCTSGetMessagesData
@end

@interface DRCTSGetMessagesData : DRCTSObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) NSNumber* from;

@property(nonatomic) NSString* subject;

@property(nonatomic) NSString* message;

@property(nonatomic) NSString* attachment;

@property(nonatomic) NSString* datetime;

@property(nonatomic) NSString* responseTo;

@property(nonatomic) NSNumber* read;

@property(nonatomic) DRCTSGetMessagesResponses* responses;

@property(nonatomic) NSString* recipients;

@property(nonatomic) NSString* dateUpdated;

@end