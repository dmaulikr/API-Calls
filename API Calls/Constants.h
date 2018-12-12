//
//  Constants.h
//  API Calls
//
//  Created by nestcode on 12/12/18.
//  Copyright © 2018 nestcode. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

#define ThemeColor [UIColor colorWithRed:220.0/255.0 green:147.0/255.0 blue:255.0/255.0 alpha:1.0]
#define CompletionColor [UIColor colorWithRed:122.0/255.0 green:207.0/255.0 blue:173.0/255.0 alpha:1.0]
#define MainColor @"20B973"
#define CompletedColor @"367678"
#define ActiveColor @"DDAC67"
#define LockedColor @"E1806F"


//codeNew
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))
#define IS_ZOOMED (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IPHONE_X (IS_IPHONE && SCREEN_MAX_LENGTH == 812.0)

#define iPhoneVersion ([[UIScreen mainScreen] bounds].size.height == 568 ? 5 : ([[UIScreen mainScreen] bounds].size.height == 812 ? 10 : ([[UIScreen mainScreen] bounds].size.height == 667 ? 6 : ([[UIScreen mainScreen] bounds].size.height == 736 ? 61 : 999))))



//live
#define URL_BASE    @"http://staging.com/api/"

//#define URL_BASE    @"http://10.0.1.111/public/api/"

#define API_LOGIN    URL_BASE@"login"
#define API_REGISTER  URL_BASE@"register"

typedef enum
{
    CALL_TYPE_NONE,
    CALL_TYPE_LOGIN,
    CALL_TYPE_REGISTER,
}CallTypeEnum;


#endif /* Constants_h */
