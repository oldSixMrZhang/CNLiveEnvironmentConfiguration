//
//  CNEnvironmentHeader.h
//  CNLiveNetAdd
//
//  Created by 张旭 on 2018/5/30.
//  Copyright © 2018年 cnlive. All rights reserved.
//

#ifndef CNEnvironmentHeader_h
#define CNEnvironmentHeader_h

/*
 *网家家环境配置文件
*/

// App Store 中 AppID 用于跳转 App Store 下载/评分
#define AppStoreAppId @"1337575478"

// 请求查询app在App Store的上架信息
#define AppStoreAppInfo @"https://itunes.apple.com/lookup?id=1337575478"

// h5新闻详情中分享使用到的图片地址
#define netAddShareImgUrl WjjH5_Host@"/static/logo.png"
#define WjjH5Short_Host @"http://dwz.cnlive.com"

// 正式版--测试环境com.cnlive.CNLiveNetAdd.debug 网家家测试版
// 正式版--正式环境com.cnlive.CNLiveNetAdd 网家家正式版
// 企业版--测试环境com.cnlive.CNLiveNetAddInHouse.debug 网家家测试企版
// 企业版--正式环境com.cnlive.CNLiveNetAddInHouse 网家家内测版

#define ShowGuideView @"no" // yes:显示欢迎页  no:不显示欢迎页

//#define Environment_ON 0    // 1:正式环境平台   0:测试环境平台
#ifdef Environment_ON  //主工程中只导入该头文件之前,如果定义Environment_ON(无论值是0或者1)就是正式环境,否则就是测试环境

#pragma mark - 正式环境
// 正式环境平台配置
// IMSDK相关的配置
#define kWXAccount      @"wjj_app"
#define kSdkAppId       @"1400051680"
#define kSdkAccountType @"19645"

#ifndef CNLiveNetAddUrlSchems
#define CNLiveNetAddUrlSchems @"CNLiveNetAddUrlSchems"  // 支付宝支付Schems
#endif

#ifndef CNLiveNetAddUnionPaySchems
#define CNLiveNetAddUnionPaySchems @"CNLiveNetAddUnionPaySchems" // 银联支付Schems
#endif

#define CNLiveNewAddDownloadUrl @"http://apiwjj.cnlive.com/download/index.html"
#define ShareDarenHomeUrl @"http://apiwjj.cnlive.com/daren/download.html"
#define WjjH5_Host @"http://wjjh5.cnlive.com"
#define WjjH5_VideoChina WjjH5_Host@"/cnnews.html"
#define WjjH5_NumProduct WjjH5_Host@"/cndr.html"
#define WjjH5_Complaint  WjjH5_Host@"/cnComplaint.html"//我的-投诉

#define API_Host @"https://apiwjj.cnlive.com"

#define API_Contact @"https://wjjim.cnlive.com"
#define API_Refund @"https://wjj.ys1.cnliveimg.com"
#define API_Report @"https://mobile.cnlive.com"
#define API_ThirdPay API_Host
#define API_OpenApi2 @"https://api.cnlive.com/open/api2"
#define API_Classify @"http://cms.cnlive.com:8768"

#define WjjLive_Host @"http://wjjh5.cnlive.com"

#define TIM_GetTokenUrl API_OpenApi2@"/im_chat/generateUserSign"

// 网++默认头像地址
#define CNLiveNetAddDefaultHead API_Refund@"/admin/test/head.png"

#define API_BucketName @"mam-wjj-769"
#define API_PhotoUrl @"http://wjj.ys2.cnliveimg.com/" // 还不知道
#define MultipleCategory 366
#define WitnessMultipleCategory 370

#pragma mark - 正式个人/企业开关
// #define IPA_APPSTORE 0  ////0: App Store版  1:企业版

#ifdef IPA_APPSTORE  //主工程中只导入该头文件之前,如果定义IPA_APPSTORE(无论值是0或者1)就是企业版,否则就是App Store版
// 平台环境配置描述
#define AppEnvironmentDesc @"正式企业版"
#define AppEnvironmentBundleId @"com.cnlive.CNLiveNetAddInHouse"

// 正式企业版
// 企业版  com.cnlive.CNLiveNetAddInHouse
#ifndef AppId
#define AppId @"769_jetja50p18"
#endif
#ifndef APPKey
#define APPKey @"ad101b9152817a79b5c33c3617b96ff91385096ff3b4ba"
#endif
#ifndef AppSecret
#define AppSecret @"6a324a475a8b9ef903139cb2626fdab6bf4362d6d47c83"
#define DisplayName @"网家家"
#endif

#define WjjShare_Iden @"group.com.cnlive.CNLiveNetAddInHouse"

// 企业证书id
#if DEBUG
#define IM_Cer_busiId 7346
#else
#define IM_Cer_busiId 7347
#endif

////////////////////////////////////////////////////////
////////////          高德地图Key
////////////////////////////////////////////////////////
#define GDApiKey @"84d765606a54635aec2648f663d4a5ed"

////////////////////////////////////////////////////////
////////////          百度身份证识别
////////////////////////////////////////////////////////
#define BDAppId @"14380872"
#define BDAppKey @"ibl8vbKkPVYBw5IOvR8tVGGo"
#define BDSecret @"QEd6n1qruIGG8AYkyLyqepksO2uUe0GK"

////////////////////////////////////////////////////////
////////////          听云
////////////////////////////////////////////////////////
/*听云AppKey*/ //URL Scheme:  tingyun.33699
static NSString *const CNLiveTingYunAppKey = @"782d9a70547a4e3f91cb328b122bb85c";

#else

#define AppEnvironmentDesc @"正式个人版"
#define AppEnvironmentBundleId @"com.cnlive.CNLiveNetAdd"

// 正式个人版
// 正式版  com.cnlive.CNLiveNetAdd
#ifndef AppId
#define AppId @"769_jetj7bq525"
#endif
#ifndef APPKey
#define APPKey @"0d57b045ec0c3988a682d94c644e66b9b8e0d2b8ef937d"
#endif
#ifndef AppSecret
#define AppSecret @"275e8dc29274a1186d82f65bc607c231d02bcb3bfd8976"
#define DisplayName @"网家家"
#endif

#define WjjShare_Iden @"group.com.cnlive.CNLiveNetAdd"

////////////////////////////////////////////////////////
////////////          IM推送证书相关
////////////////////////////////////////////////////////
#if DEBUG
#define IM_Cer_busiId 12452 //7307已过期
#else
#define IM_Cer_busiId 12453 //7308已过期
#endif

////////////////////////////////////////////////////////
////////////          高德地图Key
////////////////////////////////////////////////////////
#define GDApiKey @"5a0e2a559b987e67d5b0c13490adde02"

////////////////////////////////////////////////////////
////////////          百度身份证识别
////////////////////////////////////////////////////////
#define BDAppId @"14380860"
#define BDAppKey @"4bX1eK7SiCL461QBnRKilowc"
#define BDSecret @"BTzXLoPbUjlLeOM1nHnfOuTB9q18YZVq"

////////////////////////////////////////////////////////
////////////          听云
////////////////////////////////////////////////////////
/*听云AppKey*/ //URL Scheme:  tingyun.33700
static NSString *const CNLiveTingYunAppKey = @"37c9ea3f439145269e5cffe095466b17";

#endif

//////////////////////////////////////
////////////          正式平台
//////////////////////////////////////

/*微信相关参数*/
static NSString *const CNLiveWeiChatAppId_Share = @"wxed528fc749b7ee88";
static NSString *const CNLiveWeiChatAppSecret_Share = @"729c3d3055fe336bcdef7020c2548e89";

/*腾讯相关参数*/
static NSString *const CNLiveQQShareAppId_Share = @"1106691520";
static NSString *const CNLiveQQShareAppSecret_Share = @"kLZ8CglGFjzrJFan";

/*shareSDK相关参数*/
static NSString *const CNLiveShareSDKAppId_Share = @"24e4abeaa92d8";
static NSString *const CNLiveShareSDKAppSecret_Share = @"da94a6f881d404092c9a7108e4470e8f";

#else

#pragma mark - 测试环境

// 测试环境平台配置
// IMSDK相关的配置
#define kWXAccount @"wjj_app_test"
#define kSdkAppId       @"1400052101"
#define kSdkAccountType @"27313"

#ifndef CNLiveNetAddUrlSchems
#define CNLiveNetAddUrlSchems @"CNLiveNetAddTestUrlSchems"  // 支付宝支付Schems
#endif
#ifndef CNLiveNetAddUnionPaySchems
#define CNLiveNetAddUnionPaySchems @"CNLiveNetAddTestUnionPaySchems" // 银联支付Schems
#endif

#define CNLiveNewAddDownloadUrl @"http://apiwjj.cnlive.com/download/index.html"
#define ShareDarenHomeUrl @"http://apiwjj.cnlive.com/download/index.html"
#define WjjH5_Host @"http://wjjh5test.cnlive.com"
#define WjjH5_VideoChina WjjH5_Host@"/cnnews.html"
#define WjjH5_NumProduct WjjH5_Host@"/cndr.html"
#define WjjH5_Complaint  WjjH5_Host@"/cnComplaint.html"//我的-投诉

#define API_Host @"https://apiwjjtest.cnlive.com"
#define API_Contact @"https://imtest.cnlive.com"
#define API_OpenApi2 @"https://api.cnlive.com/open/api2"
#define API_Refund @"https://wjj.ys1.cnliveimg.com"
#define API_Report @"https://mobile.cnlive.com"
#define API_ThirdPay API_Host
#define API_BucketName @"mam-wjjtest-802"
#define API_PhotoUrl @"http://wjjtest.ys2.cnliveimg.com/"
#define MultipleCategory 371
#define WitnessMultipleCategory 375
#define API_Classify @"http://cmstest.cnlive.com:8768"
#define WjjLive_Host @"http://wjjh5test.cnlive.com"

#define TIM_GetTokenUrl API_Contact@"/CnliveIM/notify/generateUserSign.action"
// 网++默认头像地址
#define CNLiveNetAddDefaultHead API_Refund@"/admin/test/head.png"

/*微信相关参数*/
static NSString *const CNLiveWeiChatAppId_Share = @"wx9b7f9443a8ccf15a";
static NSString *const CNLiveWeiChatAppSecret_Share = @"8d9970bf2901411d8dd2bffb344f147e";

/*腾讯相关参数*/
static NSString *const CNLiveQQShareAppId_Share = @"1106970445";
static NSString *const CNLiveQQShareAppSecret_Share = @"4hxuJ1HIes4i4hqT";

/*shareSDK相关参数*/
static NSString *const CNLiveShareSDKAppId_Share = @"26192e9007048";
static NSString *const CNLiveShareSDKAppSecret_Share = @"f9d2fbf7f7827925c532a716340363c7";


#pragma mark - 测试个人/企业开关
//#define IPA_APPSTORE 1  ////0: 个人版  1:企业版

#ifdef IPA_APPSTORE
// 平台环境配置描述
#define AppEnvironmentDesc @"测试企业版"
#define AppEnvironmentBundleId @"com.cnlive.CNLiveNetAddInHouse.debug"

// 测试企业版
// 企业版  com.cnlive.CNLiveNetAddInHouse.debug
#ifndef AppId
#define AppId @"802_jhbqccxw08"
#endif
#ifndef APPKey
#define APPKey @"9c5619e9be747bb3b925dd215ca5923d86f12c09b9394f"
#endif
#ifndef AppSecret
#define AppSecret @"1e6380cb347255e777f72b5aa60f41daa68443a132aaea"
#define DisplayName @"网家家测试版"
#endif

#define WjjShare_Iden @"group.com.cnlive.CNLiveNetAddInHouse.debug"

// 企业证书id
#if DEBUG
#define IM_Cer_busiId 9204
#else
#define IM_Cer_busiId 9205
#endif

////////////////////////////////////////////////////////
////////////          高德地图Key
////////////////////////////////////////////////////////
#define GDApiKey @"f4459435f1c756d2efedc6ceec12be63"

////////////////////////////////////////////////////////
////////////          百度身份证识别
////////////////////////////////////////////////////////
#define BDAppId @"14435716"
#define BDAppKey @"4foSD6VBILQ61olzmVAFEVGZ"
#define BDSecret @"VEuz92EVrmEVrrgTZKxYo4ApUkol7Ptk"

////////////////////////////////////////////////////////
////////////          听云
////////////////////////////////////////////////////////
/*听云AppKey*/ //URL Scheme:  tingyun.33185
static NSString *const CNLiveTingYunAppKey = @"3dda66ec904a4c3a8ad0169ca74de352";

#else

// 平台环境配置描述
#define AppEnvironmentDesc @"测试个人版"
#define AppEnvironmentBundleId @"com.cnlive.CNLiveNetAdd.debug"

// 测试个人版
// 个人版  com.cnlive.CNLiveNetAdd.debug
#ifndef AppId
#define AppId @"802_jhlqbq4475"
#endif
#ifndef APPKey
#define APPKey @"d25cf0dce30e7d7ddc7c857b85ab0dde670d491fc2ffe4"
#endif
#ifndef AppSecret
#define AppSecret @"b9064cfe0a030b8b20c061fc0ee3c16acce7757874b7a2"
#define DisplayName @"网家家测试"
#endif

#define WjjShare_Iden @"group.com.cnlive.CNLiveNetAdd.debug"

////////////////////////////////////////////////////////
////////////          IM推送证书相关
////////////////////////////////////////////////////////
#if DEBUG
#define IM_Cer_busiId 12450 //9246已过期
#else
#define IM_Cer_busiId 12451 //9247已过期
#endif

////////////////////////////////////////////////////////
////////////          高德地图Key
////////////////////////////////////////////////////////
#define GDApiKey @"4b15525f4265edfed8dce1d02f08a893"

////////////////////////////////////////////////////////
////////////          百度身份证识别
////////////////////////////////////////////////////////
#define BDAppId  @"14435697"
#define BDAppKey @"3LqIXy2AtXxrxyFM8N73QGYN"
#define BDSecret @"EKZxZza8purqGHOmngkMi7awtZkm0lOW"

////////////////////////////////////////////////////////
////////////          听云
////////////////////////////////////////////////////////
/*听云AppKey*/ //URL Scheme:  tingyun.33185
static NSString *const CNLiveTingYunAppKey = @"3dda66ec904a4c3a8ad0169ca74de352";

#endif

#endif

#endif /* CNEnvironmentHeader_h */
