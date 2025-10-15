//
//  CNLiveEnvironmentConfiguration.h
//  CNLiveNetAdd
//
//  Created by CNLive-zxw on 2019/4/26.
//  Copyright © 2019 cnlive. All rights reserved.
//

#ifndef CNLiveEnvironmentConfiguration_h
#define CNLiveEnvironmentConfiguration_h

//主工程中只导入该头文件之前,如果定义Environment_ON(无论值是0或者1)就是正式环境,否则就是测试环境
//主工程中只导入该头文件之前,如果定义IPA_APPSTORE(无论值是0或者1)就是企业版,否则就是App Store版
/*
 //1.正式企业版(宏定义Environment_ON和IPA_APPSTORE)
 #ifdef Environment_ON 0
 #ifdef IPA_APPSTORE 0
 */

/*
 //2.正式App Store版(只宏定义Environment_ON)
 #ifdef Environment_ON 0
 */

/*
 //3.测试企业版(只宏定义IPA_APPSTORE)
 #ifdef IPA_APPSTORE 0
 */

/*
 //4.测试App Store版(什么都不定义)

 */

#import "CNEnvironmentHeader.h"
#import "NetworkAPIs.h"

#endif /* CNLiveEnvironmentConfiguration_h */
