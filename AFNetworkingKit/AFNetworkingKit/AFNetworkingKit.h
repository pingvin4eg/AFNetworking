//
//  AFNetworkingKit.h
//  AFNetworkingKit
//
//  Created by Sergey Starukhin on 10.04.15.
//  Copyright (c) 2015 Altarix. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for AFNetworkingKit.
FOUNDATION_EXPORT double AFNetworkingKitVersionNumber;

//! Project version string for AFNetworkingKit.
FOUNDATION_EXPORT const unsigned char AFNetworkingKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AFNetworkingKit/PublicHeader.h>

// AFNetworking

#import <AFNetworkingKit/AFURLRequestSerialization.h>
#import <AFNetworkingKit/AFURLResponseSerialization.h>
#import <AFNetworkingKit/AFSecurityPolicy.h>
#import <AFNetworkingKit/AFNetworkReachabilityManager.h>
#import <AFNetworkingKit/AFURLConnectionOperation.h>
#import <AFNetworkingKit/AFHTTPRequestOperation.h>
#import <AFNetworkingKit/AFHTTPRequestOperationManager.h>

#if ( ( defined(__MAC_OS_X_VERSION_MAX_ALLOWED) && __MAC_OS_X_VERSION_MAX_ALLOWED >= 1090) || \
      ( defined(__IPHONE_OS_VERSION_MAX_ALLOWED) && __IPHONE_OS_VERSION_MAX_ALLOWED >= 70000 ) )
    #import <AFNetworkingKit/AFURLSessionManager.h>
    #import <AFNetworkingKit/AFHTTPSessionManager.h>
#endif

// UIKit+AFNetworking

#import <AFNetworkingKit/AFNetworkActivityIndicatorManager.h>
#import <AFNetworkingKit/UIActivityIndicatorView+AFNetworking.h>
#import <AFNetworkingKit/UIAlertView+AFNetworking.h>
#import <AFNetworkingKit/UIButton+AFNetworking.h>
#import <AFNetworkingKit/UIImageView+AFNetworking.h>
#import <AFNetworkingKit/UIProgressView+AFNetworking.h>
#import <AFNetworkingKit/UIWebView+AFNetworking.h>
#import <AFNetworkingKit/UIRefreshControl+AFNetworking.h>
