/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet, NSString;

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate> {
    NSSet *_collections;
    NSString *_displayName;
    NSSet *_emailAddresses;
    BOOL _executingPrincipalSearchProperties;
    BOOL _fetchPrincipalSearchProperties;
    BOOL _isExpandPropertyReportSupported;
    NSString *_principalPath;
    NSSet *_principalSearchProperties;
    NSString *_resourceID;
}

@property(readonly) NSSet *collections;
@property <CoreDAVGetAccountPropertiesTaskGroupDelegate> *delegate;
@property(readonly) NSString *displayName;
@property(readonly) NSSet *emailAddresses;
@property(readonly) NSString *principalPath;
@property(readonly) NSSet *principalSearchProperties;
@property(readonly) NSString *resourceID;
@property BOOL fetchPrincipalSearchProperties;
@property(readonly) BOOL isExpandPropertyReportSupported;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_parseDAVHeader:(id)arg1;
- (void)_setPropertiesFromParsedResponces:(id)arg1;
- (void)_taskCompleted:(id)arg1 withError:(id)arg2;
- (id)collections;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)emailAddresses;
- (BOOL)fetchPrincipalSearchProperties;
- (BOOL)isExpandPropertyReportSupported;
- (void)optionsTask:(id)arg1 responseHeaders:(id)arg2 error:(id)arg3;
- (id)principalPath;
- (id)principalSearchProperties;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (id)resourceID;
- (void)searchPropertySetTask:(id)arg1 completetWithPropertySearchSet:(id)arg2 error:(id)arg3;
- (void)setFetchPrincipalSearchProperties:(BOOL)arg1;
- (void)syncAway;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end