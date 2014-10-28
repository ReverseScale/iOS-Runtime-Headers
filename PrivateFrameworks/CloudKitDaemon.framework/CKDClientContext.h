/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKAccountInfo, CKContainerID, CKDAccount, CKDFlowControlManager, CKDMMCS, CKDMescalSession, CKDPCSManager, CKDServerConfiguration, CKDZoneGatekeeper, NSBundle, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSURL;

@interface CKDClientContext : NSObject <CKLoggingProtocol> {
    struct { 
        unsigned int val[8]; 
    CKDMMCS *_MMCS;
    CKDAccount *_account;
    CKAccountInfo *_accountInfoOverride;
    BOOL _accountRefreshInProgress;
    BOOL _accountReloadRequired;
    NSString *_applicationAssetDbDirectory;
    NSBundle *_applicationBundle;
    NSString *_applicationBundleID;
    NSString *_applicationCachesDirectory;
    NSString *_applicationContainerCloudKitDirectory;
    NSString *_applicationContainerPath;
    NSString *_applicationDisplayName;
    NSString *_applicationFileDownloadDirectory;
    NSURL *_applicationIcon;
    NSString *_applicationMMCSDirectory;
    NSString *_applicationPackageDownloadDirectory;
    NSString *_applicationPackageUploadDirectory;
    NSString *_applicationRecordCacheDirectory;
    NSString *_applicationVersion;
    } _auditToken;
    CKDZoneGatekeeper *_backgroundZoneGatekeeper;
    BOOL _canAccessProtectionData;
    BOOL _canSetDeviceIdentifier;
    CKDServerConfiguration *_config;
    NSString *_containerHardwareIDHash;
    CKContainerID *_containerID;
    NSString *_containerScopedUserID;
    NSString *_contextID;
    NSMutableDictionary *_fakeErrorByClassName;
    BOOL _finishedAppProxySetup;
    CKDFlowControlManager *_flowControlManager;
    CKDZoneGatekeeper *_foregroundZoneGatekeeper;
    BOOL _hasDataContainer;
    BOOL _hasSystemServiceEntitlement;
    BOOL _isForClouddInternalUse;
    CKDMescalSession *_mescalSession;
    NSMutableArray *_oldApplicationCaches;
    CKDPCSManager *_pcsManager;
    NSURL *_publicCloudDBURL;
    NSURL *_publicDeviceServiceURL;
    NSURL *_publicShareServiceURL;
    BOOL _sandboxed;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_queue> *_setupQueue;
    int _type;
    int _usesAPSPublicToken;
}

@property(retain) CKDMMCS * MMCS;
@property(retain) CKDAccount * account;
@property(readonly) CKAccountInfo * accountInfoOverride;
@property BOOL accountRefreshInProgress;
@property BOOL accountReloadRequired;
@property(retain) NSString * applicationAssetDbDirectory;
@property(readonly) NSBundle * applicationBundle;
@property(readonly) NSString * applicationBundleID;
@property(retain) NSString * applicationCachesDirectory;
@property(retain) NSString * applicationContainerCloudKitDirectory;
@property(retain) NSString * applicationContainerPath;
@property(readonly) NSString * applicationDisplayName;
@property(retain) NSString * applicationFileDownloadDirectory;
@property(readonly) NSURL * applicationIcon;
@property(retain) NSString * applicationMMCSDirectory;
@property(retain) NSString * applicationPackageDownloadDirectory;
@property(retain) NSString * applicationPackageUploadDirectory;
@property(retain) NSString * applicationRecordCacheDirectory;
@property(retain) NSString * applicationVersion;
@property(setter=setAPSEnvironmentString:,retain) NSString * apsEnvironmentString;
@property struct { unsigned int x1[8]; } auditToken;
@property(retain) CKDZoneGatekeeper * backgroundZoneGatekeeper;
@property(readonly) BOOL canAccessAccount;
@property BOOL canAccessProtectionData;
@property BOOL canSetDeviceIdentifier;
@property(retain) CKDServerConfiguration * config;
@property(readonly) NSString * containerHardwareIDHash;
@property(readonly) CKContainerID * containerID;
@property(retain) NSString * containerScopedUserID;
@property(readonly) NSString * contextID;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSMutableDictionary * fakeErrorByClassName;
@property BOOL finishedAppProxySetup;
@property(retain) CKDFlowControlManager * flowControlManager;
@property(retain) CKDZoneGatekeeper * foregroundZoneGatekeeper;
@property BOOL hasDataContainer;
@property BOOL hasSystemServiceEntitlement;
@property(readonly) unsigned int hash;
@property BOOL isForClouddInternalUse;
@property(retain) CKDMescalSession * mescalSession;
@property(retain) NSMutableArray * oldApplicationCaches;
@property(retain) CKDPCSManager * pcsManager;
@property(retain) NSURL * publicCloudDBURL;
@property(retain) NSURL * publicDeviceServiceURL;
@property(retain) NSURL * publicShareServiceURL;
@property(getter=isSandboxed) BOOL sandboxed;
@property(retain) NSObject<OS_dispatch_semaphore> * sema;
@property(retain) NSObject<OS_dispatch_queue> * setupQueue;
@property(readonly) Class superclass;
@property(readonly) int type;
@property int usesAPSPublicToken;

+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4;
+ (id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id*)arg2 type:(int*)arg3;
+ (id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)sharedContexts;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCS;
- (void)_determineHardwareInfo;
- (id)_issueSandboxExtensionForPath:(id)arg1 error:(id*)arg2;
- (void)_loadApplicationContainerPathAndType;
- (void)_purgeOldCacheDirectories;
- (BOOL)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id*)arg2 error:(id*)arg3;
- (id)account;
- (id)accountInfoOverride;
- (BOOL)accountRefreshInProgress;
- (BOOL)accountReloadRequired;
- (id)applicationAssetDbDirectory;
- (id)applicationBundle;
- (id)applicationBundleID;
- (id)applicationCachesDirectory;
- (id)applicationContainerCloudKitDirectory;
- (id)applicationContainerPath;
- (id)applicationDisplayName;
- (id)applicationFileDownloadDirectory;
- (id)applicationIcon;
- (id)applicationMMCSDirectory;
- (id)applicationPackageDownloadDirectory;
- (id)applicationPackageUploadDirectory;
- (id)applicationRecordCacheDirectory;
- (id)applicationVersion;
- (id)apsEnvironmentString;
- (struct { unsigned int x1[8]; })auditToken;
- (id)backgroundZoneGatekeeper;
- (BOOL)canAccessAccount;
- (BOOL)canAccessProtectionData;
- (BOOL)canSetDeviceIdentifier;
- (void)clearAssetCache;
- (void)clearAssetCacheWithDatabaseScope:(int)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(int)arg2;
- (void)clearRecordCacheWithDatabaseScope:(int)arg1;
- (id)config;
- (id)containerHardwareIDHash;
- (id)containerID;
- (id)containerScopedUserID;
- (id)contextID;
- (void)dealloc;
- (id)description;
- (id)fakeErrorByClassName;
- (void)finishSetupWithClientProxy:(id)arg1 completionHandler:(id)arg2;
- (BOOL)finishedAppProxySetup;
- (id)flowControlManager;
- (id)foregroundZoneGatekeeper;
- (BOOL)hasDataContainer;
- (BOOL)hasSystemServiceEntitlement;
- (id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
- (BOOL)isForClouddInternalUse;
- (BOOL)isSandboxed;
- (void)logWithFile:(const char *)arg1 function:(const char *)arg2 line:(int)arg3 level:(int)arg4 section:(id)arg5 format:(id)arg6;
- (id)mescalSession;
- (id)oldApplicationCaches;
- (id)pcsManager;
- (void)performRequest:(id)arg1;
- (id)publicCloudDBURL;
- (id)publicDeviceServiceURL;
- (id)publicShareServiceURL;
- (void)reloadAccount;
- (id)sema;
- (void)setAPSEnvironmentString:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAccountRefreshInProgress:(BOOL)arg1;
- (void)setAccountReloadRequired:(BOOL)arg1;
- (void)setApplicationAssetDbDirectory:(id)arg1;
- (void)setApplicationCachesDirectory:(id)arg1;
- (void)setApplicationContainerCloudKitDirectory:(id)arg1;
- (void)setApplicationContainerPath:(id)arg1;
- (void)setApplicationFileDownloadDirectory:(id)arg1;
- (void)setApplicationMMCSDirectory:(id)arg1;
- (void)setApplicationPackageDownloadDirectory:(id)arg1;
- (void)setApplicationPackageUploadDirectory:(id)arg1;
- (void)setApplicationRecordCacheDirectory:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setBackgroundZoneGatekeeper:(id)arg1;
- (void)setCanAccessProtectionData:(BOOL)arg1;
- (void)setCanSetDeviceIdentifier:(BOOL)arg1;
- (void)setConfig:(id)arg1;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setFakeErrorByClassName:(id)arg1;
- (void)setFinishedAppProxySetup:(BOOL)arg1;
- (void)setFlowControlManager:(id)arg1;
- (void)setForegroundZoneGatekeeper:(id)arg1;
- (void)setHasDataContainer:(BOOL)arg1;
- (void)setHasSystemServiceEntitlement:(BOOL)arg1;
- (void)setIsForClouddInternalUse:(BOOL)arg1;
- (void)setMMCS:(id)arg1;
- (void)setMescalSession:(id)arg1;
- (void)setOldApplicationCaches:(id)arg1;
- (void)setPcsManager:(id)arg1;
- (void)setPublicCloudDBURL:(id)arg1;
- (void)setPublicDeviceServiceURL:(id)arg1;
- (void)setPublicShareServiceURL:(id)arg1;
- (void)setSandboxed:(BOOL)arg1;
- (void)setSema:(id)arg1;
- (void)setSetupQueue:(id)arg1;
- (void)setUsesAPSPublicToken:(int)arg1;
- (BOOL)setupAssetTransfersWithClientProxy:(id)arg1 error:(id*)arg2;
- (BOOL)setupMMCSWrapperWithError:(id*)arg1;
- (id)setupQueue;
- (void)showUserNotification:(struct __CFUserNotification { }*)arg1 withCompletionBlock:(id)arg2;
- (void)startSetupWithClientProxy:(id)arg1 completionHandler:(id)arg2;
- (void)tearDownAssetTransfers;
- (int)type;
- (int)usesAPSPublicToken;

@end