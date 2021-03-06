#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


#import "DRCTSGetPrivilegesDataManagedObject.h"
#import "DRCTSGetPrivilegesData.h"

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


@interface DRCTSGetPrivilegesDataManagedObjectBuilder : NSObject



-(DRCTSGetPrivilegesDataManagedObject*)createNewDRCTSGetPrivilegesDataManagedObjectInContext:(NSManagedObjectContext*)context;

-(DRCTSGetPrivilegesDataManagedObject*)DRCTSGetPrivilegesDataManagedObjectFromDRCTSGetPrivilegesData:(DRCTSGetPrivilegesData*)object context:(NSManagedObjectContext*)context;

-(void)updateDRCTSGetPrivilegesDataManagedObject:(DRCTSGetPrivilegesDataManagedObject*)object withDRCTSGetPrivilegesData:(DRCTSGetPrivilegesData*)object2;

-(DRCTSGetPrivilegesData*)DRCTSGetPrivilegesDataFromDRCTSGetPrivilegesDataManagedObject:(DRCTSGetPrivilegesDataManagedObject*)obj;

-(void)updateDRCTSGetPrivilegesData:(DRCTSGetPrivilegesData*)object withDRCTSGetPrivilegesDataManagedObject:(DRCTSGetPrivilegesDataManagedObject*)object2;

@end
