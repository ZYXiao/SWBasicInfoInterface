//
//  SWBasicInfoInterface.h
//  SWModule
//
//  Created by zyx on 2021/1/26.
//  Copyright © 2021 Geely. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SWFramework/SWFramework.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SWBasicInfoInterface <SWServiceProtocol>

///=============================================================================
/// @name App相关查询
///=============================================================================

/// 获取App版本号
- (NSString *)getAppVersion;

/// 获取App构建版本号
- (NSString *)getAppBuildVersion;

/// 获取App的包名信息
- (NSString *)getAppBundleID;

/// 获取设备的IDFV
- (NSString *)getAppIDFV;

/// 获取设备IDFA
- (NSString *)getAppIDFA;

/// 获取App名称
- (NSString *)getAppName;


///=============================================================================
/// @name 系统相关查询
///=============================================================================

/// 获取当前系统版本号
- (NSString *)getSystemVersion;

/// 获取当前系统名称
- (NSString *)getSystemName;


///=============================================================================
/// @name 设备相关查询
///=============================================================================

/// 获取设备的MAC地址
- (NSString *)getDeviceMacAddress;

/// 获取当前设备名称
- (NSString *)getDeviceName;

/// 获取当前的设备电量
- (CGFloat)getDeviceBatteryLevel;

/// 获取设备总内存大小
- (long long)getDeviceTotalMemorySize;

/// 获取设备型号
- (NSString *)getDeviceModel;

/// 获取设备IP地址
- (NSString *)getDeviceIPAddress;

/// 获取设备网络状态
- (NSString *)getDeviceNetworkStatus;

@end

NS_ASSUME_NONNULL_END
