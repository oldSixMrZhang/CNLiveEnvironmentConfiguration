//
//  NetworkAPIs.h
//  CNLiveNetAdd
//
//  Created by iOS on 2018/1/24.
//  Copyright © 2018年 cnlive. All rights reserved.
//

#ifndef NetworkAPIs_h
#define NetworkAPIs_h

//上传手机通讯录和 生成订单二维码时，DES加密key
#define kUploadContactsKey    @"cnliveIm"

#define iUploadContacts   API_Contact@"/CnliveIM/notify/uploadContacts.action"
//其他投诉
static NSString *const CNLiveCNReporthtml = WjjH5_Host@"/cnReport.html";

//特色群活动必要说明
static NSString *const CNActivityManageUrl                    = API_Refund@"/term/ActivityManagement.html";

//特色群投票必要说明
static NSString *const CNVoteManageUrl                    = API_Refund@"/term/VoteManagement.html";

//订阅号特色群活动必要说明
static NSString *const CNActivityManageSPUrl                    = WjjH5_Host"/cnGroupDescription.html?type=hdgl";

//订阅号特色群投票必要说明
static NSString *const CNVoteManageSPUrl                    = WjjH5_Host"/cnGroupDescription.html?type=tp";

//获取生活号列表
static NSString *const CNGetLifeSubsUrl                    = API_Host@"/Daren/sub/getLifeSubs.action";

//获取达人号列表
static NSString *const CNGetDarenSubsUrl                    = API_Host @"/Daren/sub/getDarenSubs.action";

//达人号列表删除某达人
static NSString *const CNDarenSubsDeleteDarenUrl                    = API_Host@"/Daren/sub/deleteDarenSubs.action";

//添加某个收藏
static NSString *const CNDarenSubsCollectionUrl                    = API_Host@"/Daren/stock/collection.action";

//收藏界面删除某个收藏
static NSString *const CNDarenSubsDeleteCollectionUrl                    = API_Host@"/Daren/stock/deleteCollection.action";

//达人主页
static NSString *const CNDarenHomeUrl                    = API_Host@"/Daren/sub/getDarenHome.action";

//获取收藏结果详情
static NSString *const CNDarenCollectListDataSourceUrl            = API_Host@"/Daren/stock/getCollectionList.action";

//生活号主页
static NSString *const CNLifeHomeUrl                    = API_Host@"/Daren/sub/getLifeHome.action";

//删除生活号
static NSString *const CNLiveLifeDeleteUrl                        = API_Host@"/Daren/sub/deleteLifeSubs.action";

//通过手机号查找好友
static NSString *const CNSearchByPhoneNumUrl            = API_Contact@"/CnliveIM/notify/searchByPhoneNumber.action";


//获取已关注的达人列表
static NSString *const CNGetDarensUrl                  = API_Host@"/Daren/sub/getDarens.action";

//获取达人的粉丝列表
static NSString *const CNGetFansUrl                  = API_Host@"/Daren/sub/getFans.action";

//评价列表
static NSString *const CNGetDarenCommentUrl               = API_Host@"/Daren/hudong/getDarenComment.action";

//获取达人相关信息
static NSString *const CNGetDarenByIdUrl                = API_Host@"/Daren/member/getDarenById.action";

#pragma mark - 定义消息
//获取子群组
static NSString *const CNGetGroupChildren = API_Classify@"/contentApi/getGroupChildren";
// 退群群
static NSString *const CNDeleteGroupMember = API_Host@"/Daren/groupManagement/deleteGroupMember.action";

//发送自定义消息
static NSString *const CNFriendshipVerifyUrl                  = API_Contact@"/CnliveIM/notify/custMsgPush.action";
//音视频自定义消息
static NSString *const CNVideoOrAudioUrl                      = API_Contact@"/CnliveIM/notify/custMsgPush.action";

//音视频取得房间号
static NSString *const CNVideoOrAudioGetRoomID                = API_Host@"/Daren/common/getRoomId.action";

//发送文本消息
static NSString *const CNTextMsgPushUrl                  = API_Contact@"/CnliveIM/notify/textMsgPush.action";

//生成二维码
static NSString *const CNGenOrResetCodeUrl                  = API_Host@"/Daren/qrcode/genOrResetQrCode.action";
//撤回消息
static NSString *const CNRevokebatchsendmsg                 = API_Contact@"/CnliveIM/notify/revokeBatchSendMsg.action";
//检验二维码
static NSString *const CNCheckOrNewCodeUrl                  = API_Host@"/Daren/qrcode/checkQrCode.action";
//扫码支付生成订单
static NSString *const CNCheckAddOrderForDarenUrl             =API_Host@"/Daren/order/addOrder.action";
//目击者
static NSString *const CNChecksigninfoDarenUrl             =   API_Host@"/Daren/sign/checkSignInfo.action";
//扫码返回活动地址
static NSString *const CNCheckQrActivityDarenUrl             =   API_Host@"/Daren/sign/checkQrActivity.action";

//获取Gif表情包列表
static NSString *const CNGifFaceShopListUrl             =   API_Host@"/Daren/section/getSectionList.action";
//获取一个表情包信息
static NSString *const CNGetGifFacePackageUrl             =   API_Host@"/Daren/section/getSectionDetail.action";

#pragma mark - 地址管理相关
//添加联系人
static NSString *const CNAddContactUrl                    = API_Host@"/Daren/contact/addContact.action";

//查询联系人
static NSString *const CNReadContacstUrl                  = API_Host@"/Daren/contact/readContacts.action";

//删除联系人
static NSString *const CNDeleteContacstUrl                  = API_Host@"/Daren/contact/deleteContact.action";

//更新联系人
static NSString *const CNUpdateContacstUrl                  = API_Host@"/Daren/contact/updateContact.action";


#pragma mark - 订单相关
//取消订单
static NSString *const CNOrderCancelUrl                  = API_Host@"/Daren/order/cancelOrder.action";

//订单有误
static NSString *const CNOrderErrorUrl                   = API_Host@"/Daren/order/correctOrder.action";

//查看订单
static NSString *const CNOrderCheckUrl                   = API_Host@"/Daren/order/getOrderItem.action";

//生成订单
static NSString *const CNOrderCreateUrl                  = API_Host@"/Daren/order/createOrder.action";

//修改订单
static NSString *const CNOrderModifyUrl                  = API_Host@"/Daren/order/modifyOrder.action";

//确认订单
static NSString *const CNOrderConfirmUrl                 = API_Host@"/Daren/order/confirmOrder.action";

//获取订单详情
static NSString *const CNGetOrderDetailUrl               = API_Host@"/Daren/order/getOrderItem.action";

//根据订单状态获取订单列表
static NSString *const CNGetOrderListUrl               = API_Host@"/Daren/order/getOrdersByStatus.action";

//申请退款
static NSString *const CNApplyRefundUrl               = API_Host@"/Daren/order/applyRefund.action";

//删除订单
static NSString *const CNDeleteOrderUrl               = API_Host@"/Daren/order/deleteOrder.action";

//催单
static NSString *const CNRemindOrderUrl               = API_Contact@"/CnliveIM/notify/remind.action";

//确认收货
static NSString *const CNConfirmRecvUrl               = API_Host@"/Daren/order/confirmRecv.action";

//评价
static NSString *const CNCommentDarenUrl               = API_Host@"/Daren/hudong/commentDaren.action";

//退款原因
static NSString *const CNRefunfReasonUrl               = API_Refund@"/json/refundReason.json";


#pragma mark - 发布
//发布视频 短视频接入点播云接口
static NSString *const CNPublishVideoUrl               = API_OpenApi2@"/vod_epg/svInputMamForAPP";

//发布视频 短视频上传获取bucket接口(七牛)
static NSString *const CNUploadGetBucketUrl               = API_OpenApi2@"/storage/getStorageInfo";

//发布图片,上传鉴权接口(七牛)
static NSString *const CNUploadAuthForApp               = API_OpenApi2@"/vod_epg/getUploadAuthForApp";

//上传视频成功的回调url
static NSString *const CNStockDarenVideoCallBackUrl               = API_Host@"/Daren/stock/stockDarenVideo.action";

//发布获取上冰雪banner url
static NSString *const CNPublishGetSnowBannerUrl               = API_Host@"/Daren/snow/getSnowBanner.action";


#pragma mark - 检验群公告敏感词
static NSString *const CNCheckFeaturedGroup               = API_Host@"/Daren/announcementCheck/checkFeaturedGroup.action";

#pragma mark - 特色群组活动管理
//获取群组活动收费记录
static NSString *const CNActiveGroupFundsRecordsUrl               = API_Host@"/Daren/groupManagement/groupFundsRecords.action";

//获取投票详情
static NSString *const CNGetVoteMsgSourceUrl                        = API_Host@"/Daren/vote/getVoteMsg.action";

//获取收费详情
static NSString *const CNQueryActivityFeeSourceUrl                 = API_Host@"/Daren/groupManagement/queryActivityFee.action";

//历任群主列表
static NSString *const CNGetSuccessiveGroupListUrl                 = API_Host@"/Daren/groupManagement/getSuccessiveGroupList.action";

//获取投票记录的列表
static NSString *const CNGetVotesSourceListUrl                      = API_Host@"/Daren/vote/getVotes.action";

//拉起支付并做定点预处理
static NSString *const CNPayByGroupMembersUrl                       = API_Host@"/Daren/groupManagement/payByGroupMembers.action";

//获取支付状态
static NSString *const CNCheckPaymentSourceUrl                      = API_Host@"/Daren/groupManagement/checkPayment.action";

//投票
static NSString *const CNGroupVoteSourceUrl                          = API_Host@"/Daren/vote/groupVote.action";

//删除投票
static NSString *const CNStopVoteSourceUrl                           = API_Host@"/Daren/vote/stopVote.action";

//获取提现的秘钥获取
static NSString *const CNGetCurrentKeySourceUrl                     = API_Host@"/Daren/groupManagement/getCurrentKey.action";

//验证秘钥的发送
static NSString *const CNSendSecretKeySourceUrl                     = API_Host@"/Daren/groupManagement/sendSecretKey.action";

//秘钥的验证
static NSString *const CNGroupManagementCheckKeyUrl                = API_Host@"/Daren/groupManagement/checkKey.action";

//网++支付的预支付订单生成 & 网++ 余额支付
static NSString *const CNGroupWjjPayWjjPrePaySourceUrl             = API_Host@"/Daren/wjjPay/unifiedOrder.action";

//网++  余额支付
static NSString *const CNGroupWjjPayWjjSourceUrl                    = API_Host@"/Daren/wjjPay/unifiedPay.action";

//返回公钥&随机AESKey
static NSString *const CNGroupReturnEncryptKeyUrl                    = API_Host@"/Daren/wjjPay/getKey.action";

//获取分享下载的地址
static NSString *const CNShareDownloadSourceUrl                  = API_Host@"/Daren/common/appDownLoadUrl.action";

//获取分享达人主页的地址
static NSString *const CNShareDarenHomeSourceUrl                  = API_Host@"/Daren/common/shareDarenHomePage.action";

//扫码获取棉花糖信息
static NSString *const CNOrderMHTSourceUrl                  = API_Host@"/Daren/order/addOrderMHT.action";

//订阅号特色群群组转账状态查询
static NSString *const CNQueryTransferUrl                    =  API_Host@"/Daren/groupManagement/getQueryTransfer.action";

#pragma mark - 朋友圈
//发布上冰雪图文
static NSString *const CNPublishSnowUrl               = API_Host@"/Daren/snow/releaseSnow.action";

//发布朋友圈
static NSString *const CNPublishFriendsCircleUrl               = API_Host@"/Daren/moment/releaseMoment.action";
// 选择圈子
static NSString *const CNGetPublishTypeListUrl        = API_Host@"/Daren/publishType/getPublishTypeList.action";

//目击者发布朋友圈
static NSString *const CNPublishWintessCircleUrl = API_Host@"/Daren/witness/releaseWitness.action";
//获取朋友圈内容
static NSString *const CNGetFriendsCircleContentUrl               = API_Host@"/Daren/moment/friendMoment.action";

//获取我的朋友圈内容(我的发布记录)
static NSString *const CNGetMyCircleContentUrl               = API_Host@"/Daren/moment/myMoment.action";

//朋友圈评论或回复
static NSString *const CNFirendsCircleCommentReplyUrl               = API_Host@"/Daren/hudong/commentMoment.action";

//删除朋友圈评论
static NSString *const CNFirendsCircleCommentDeleteUrl               = API_OpenApi2@"/commentServices/services/commentForChat/delete";

//删除好友时，调用接口
static NSString *const CNDeleteFriendUrl                     = API_Host@"/Daren/sub/deleteFriend.action";

//删除我的朋友圈某条内容
static NSString *const CNDeleteMyMomentItemUrl               = API_Host@"/Daren/moment/deleteMyMoment.action";

//删除我的相关收藏
static NSString *const CNDeleteMyCollectionItemUrl               = API_Host@"/Daren/stock/collection.action";

//读取朋友圈某条动态的评论(含回复)
static NSString *const CNGetMomentAllCommontUrl               = API_OpenApi2@"/commentServices/services/commentForChat/readAll";

//读取朋友圈某条动态的点赞列表
static NSString *const CNGetMomentAllFavoriteUrl               = API_OpenApi2@"/support/readAll";

//读取朋友圈某条动态的点赞列表(新接口)
static NSString *const CNGetMomentAllNEWFavoriteUrl               = API_OpenApi2@"/support/loadSupport";

//朋友圈某条动态点赞
static NSString *const CNFavoriteMomentUrl               = API_Host@"/Daren/moment/praiseMoment.action";

////获取朋友圈新消息数量
//static NSString *const CNGetMomentNewMsgCountUrl               = API_Host@"/Daren/moment/getNewMsg.action";

//获取朋友圈新消息详细
static NSString *const CNGetMomentNewMsgListUrl               = API_Host@"/Daren/moment/getNewMsgList.action";

//获取朋友圈记录详情
static NSString *const CNGetMomentDetailUrl               = API_Host@"/Daren/moment/getMomentDetail.action";

//清空新消息
static NSString *const CNDeleteNewMsgUrl               = API_Host@"/Daren/moment/deleteNewMsg.action";

//个人资料相册
static NSString *const CNLookUpMyMsgCommontUrl               = API_Host@"/Daren/moment/lookUpMyMsg.action";

#pragma mark - 分类
//分类频道(旧)
//static NSString *const CNCategoryGetChannelUrl               = API_Host@"/Daren/center/getChannel.action";
//分类频道(新)
static NSString *const CNCategoryGetChannelUrl               = API_Classify@"/contentApi/app";
//分类首页(旧 18.5.28)
//static NSString *const CNCategoryCenterPageUrl               = API_Host@"/Daren/center/getCenterPage.action";
//分类首页(新)
static NSString *const CNCategoryCenterPageUrl               = API_Host@"/Daren/classify/getNewCenterPage.action";

//分类次级页面-达人列表
static NSString *const CNGetDarensByCategoryUrl               = API_Host@"/Daren/classify/getNewDarensByCategory.action";
//static NSString *const CNGetDarensByCategoryUrl               = API_Host@"/Daren/center/getDarensByCategory.action";

//分类次级页面-已关注达人列表
static NSString *const CNGetDarensAlreadyUrl               = API_Host@"/Daren/classify/getDarenList.action";
//分类次级页面-未关注达人列表
static NSString *const CNGetDarensNeverUrl               = API_Host@"/Daren/classify/getUnFansOrDarenBean.action";
// 关注达人
static NSString *const CNAddDarenSubUrl               = API_Host@"/Daren/sub/addDarenSub.action";
// 取消关注
static NSString *const CNCancelDarenSubUrl               = API_Host@"/Daren/sub/cancelDarenSub.action";
//分类-搜索
static NSString *const CNCategorySearchDarenUrl               = API_Host@"/Daren/search/searchDaren.action";
//点播-获取评论列表
static NSString *const CNGetCommentListUrl               = API_OpenApi2@"/commentServices/services/commentForHdBySpId/loadComment";
//点播-评论一条节目
static NSString *const CNCommentProgrammaUrl             = API_OpenApi2@"/commentServices/commentForHdBySpId/insertComment";
//点播-点赞一条节目
static NSString *const CNPraiseProgrammaUrl              = API_OpenApi2@"/commentServices/commentForHdBySpId/praiseComment";

#pragma mark - 听见中国
//获取音频播放详情
static NSString *const CNAudioPlayerDetailUrl                 = API_Classify@"/playApi/play";
//获取音频播放列表
static NSString *const CNAlbumAudioListUrl              = API_Classify@"/contentApi/albumAudioList";
//播放进度回调
static NSString *const CNAudioRecordScheduleUrl         = API_Classify@"/recordApi/end";
//历史记录列表
static NSString *const CNAudioPastRecordsUrl                 = API_Classify@"/recordApi/getRecords";
//删除历史记录列表
static NSString *const CNAudioDeletePastRecordsUrl           = API_Classify@"/recordApi/delete";
// 简介列表
static NSString *const CNAlbumMsgUrl                    = API_Classify@"/contentApi/getAlbumMsg";
//节目列表
static NSString *const CNAlbumListUrl                   = API_Classify@"/contentApi/albumAudioList";

#pragma mark - 体育中国
//体育中国-约跑路线
static NSString *const CNSportsChinaRunningRouteUrl = API_Host@"/Daren/event/getEventList.action";
//体育中国-我的活动
static NSString *const CNSportsChinaMyActivitiesUrl = API_Host@"/Daren/event/getMySportActivity.action";
//体育中国-我的记录
static NSString *const CNSportsChinaMyRecordUrl = API_Host@"/Daren/event/getRouteRecordList.action";
//体育中国-活动成绩
static NSString *const CNSportsChinaActivitiyGradeUrl = API_Host@"/Daren/event/getByEventGetRecord.action";

//体育中国-详情
static NSString *const CNSportsChinaDetailUrl = API_Host@"/Daren/event/getEventDetails.action";
//体育中国-详情-已参与人员
static NSString *const CNSportsChinaParticipantsUrl = API_Host@"/Daren/event/getSignUpList.action";
//体育中国-详情-报名
static NSString *const CNSportsChinaSignUpUrl = API_Host@"/Daren/event/signUp.action";
//体育中国-比赛-保存
static NSString *const CNSportsChinaSaveRecordUrl = API_Host@"/Daren/event/routeRecord.action";
//踩点轨迹列表
static NSString *const CNSportsChinaShoeLineListUrl = API_Host@"/Daren/event/getShoeLineList.action";
//绑定轨迹
static NSString *const CNSportsChinaBindingShoeLineUrl = API_Host@"/Daren/event/bindingShoeLine.action";
//删除轨迹
static NSString *const CNSportsChinaDeleteShoeLineUrl = API_Host@"/Daren/event/deleteShoeLine.action";
//检查轨迹
static NSString *const CNSportsChinaCheckShoeLineUrl = API_Host@"/Daren/event/checkShoeLine.action";
//上传轨迹url
static NSString *const CNSportsChinaSaveShoeLineUrl = API_Host@"/Daren/event/saveShoeLine.action";

#pragma mark - 目击者
//新版目击者
//获取新目击者界面数据
static NSString *const CNGetWitnessMsgContent = API_Host@"/Daren/witness/getWitnessMsg.action";
//获取作品,动态数据
static NSString *const CNGetWitnessListContent = API_Host@"/Daren/witness/getWitnessList.action";
//获取作品,动态数据
static NSString *const CNGetWitnessCollectionListContent = API_Host@"/Daren/witness/getWitnessCollectionList.action";
//获取作品,动态数据
static NSString *const CNGetWitnessFollowsContent = API_Host@"/Daren/witness/witnessFollows.action";
//收藏目击者动态
static NSString *const CNGetWitnessCancelCollection = API_Host@"/Daren/witness/witnessCollectionType.action";
//对目击者的动态进行点赞
static NSString *const CNGetWitnessFavoriteMomentUrl = API_OpenApi2@"/support/supportBySpIdForRank/insert";
//对目击者的粉丝列表数据获取
static NSString *const CNGetWitnessFollowsMomentUrl = API_Host@"/Daren/witness/getWitnessFollowsList.action";
//获取目击者广场视频列表
static NSString *const  CNGetWitnessAllListUrl = API_Classify@"/contentApi/witnessNewList";
//目击者添加关注和取消关注
static NSString *const  CNGetWitnessFollowsUrl = API_Host@"/Daren/witness/witnessFollows.action";
//目击者获取评论列表
static NSString *const  CNGetWitnessCommentLoadUrl = API_OpenApi2@"/commentServices/services/commentForHdBySpId/loadComment";
//目击者添加评论
static NSString *const  CNGetWitnessInsertCommentUrl = API_OpenApi2@"/commentServices/commentForHdBySpId/insertComment";
//目击者获取相关推荐列表
static NSString *const  CNGetWitnessRecommendListUrl = API_Classify@"/playApi/moreList";
//目击者获取目击者视频列表
static NSString *const  CNGetWittnessVideoListUrl    = API_Classify@"/contentApi/getWitness";



#pragma mark - 点播
//视频点播
static NSString *const CNVideoDemandUrl    = API_Classify@"/playApi/play";
//查看全部
static NSString *const CNLookAtAllUrl      = API_Classify@"/playApi/moreList";

static NSString *const CNCommentsListUrl   = API_OpenApi2@"/commentServices/services/commentForChat/loadComment";
static NSString *const CNCommentsAddUrl    = API_OpenApi2@"/commentServices/services/commentForChat/insert";
static NSString *const CNCommentsDeleteUrl = API_OpenApi2@"/commentServices/services/commentForChat/delete";

//获取点播302地址
static NSString *const CNGetVodUrl = API_OpenApi2@"/vod_ips/vodplayByAPP";

//帮助与反馈上传反馈信息&图片
static NSString *const CNUpdateFeedbackUrl              = API_Host@"/Daren/feedback/collectFeedback.action";
//检查扫描结果是否有效
static NSString *const CNCheckQrCodeUrl              = API_Host@"/Daren/qrcode/checkQrCodeUrl.action";

// Native 分类
// 获取所有频道列表
static NSString *const CNAllChannelList               = @"http://intertv.cnlive.com/zgw/api/channellist";
//App配置信息
static NSString *const AppStart                  = @"http://intertv.cnlive.com/zgw/api/appstart";

#pragma mark - 申请目击者
// 目击者身份信息申请
static NSString *const CNApplyWitnessUrl    = API_Host@"/Daren/witness/applyWitness.action";
// 目击者身份校验
static NSString *const CNCheckWitnessUrl    = API_Host@"/Daren/witness/checkWitness.action";
//获取订阅号主页内容
static NSString *const CNGetSpHomePageInfoUrl    = API_Classify"/contentApi/getSpInfo";
//获取订阅号分页内容
static NSString *const CNGetSpContentListUrl    = API_Classify"/contentApi/getSpContentList";
//关注订阅号
static NSString *const CNGetSpAddFollowsUrl    = API_Host@"/Daren/group/addFollows.action";
//取消关注订阅号
static NSString *const CNGetSpUserCancelFollowUrl    = API_Host@"/Daren/group/userCancelFollow.action";
//加入群聊
static NSString *const CNGetSpUserAddGroupUrl    = API_Host@"/Daren/group/userAddGroup.action";
//获取全部粉丝
static NSString *const CNGetSPAllFansUrl    = API_Host@"/Daren/group/getFans.action";
//订阅号加入群聊
static NSString *const CNGetUserAddGroupUrl    = API_Host@"/Daren/group/userAddGroup.action";

#pragma mark - 我的
// 用户uid检测达人状态
static NSString *const CNCheckDarenUrl    = API_Host@"/Daren/member/checkDaren.action";
// 获取我的余额
static NSString *const CNGetBalanceUrl    = API_Host@"/Daren/member/getBalance.action";
// 获取交易记录
static NSString *const CNGetTradingRecordUrl    = API_Host@"/Daren/transaction/getTransactionRecord.action";
// 获取与商户的交易记录
static NSString *const CNViewTransferRecordUrl    = API_Host@"/Daren/groupManagement/viewTransferRecord.action";
// 交易记录详情
static NSString *const CNGetRecordSourceMsgUrl    = API_Host@"/Daren/transaction/getRecordSourceDetail.action";
// 是否有支付密码
static NSString *const CNPasswordIsExistingUrl  = API_Host@"/Daren/wjjPay/passwordIsExisting.action";
// 设置支付密码
static NSString *const CNSetPasswordUrl  = API_Host@"/Daren/wjjPay/setPassword.action";
// 更改密码时发送验证码
static NSString *const CNSendSMSSetPasswordUrl  = API_Host@"/Daren/sms/sendSMS.action";
// 更改密码时验证验证码
static NSString *const CNCheckVerifyCodeSetPasswordUrl  = API_Host@"/Daren/sms/checkVerifyCode.action";
// 查看是否允许好友查看生活圈的状态
static NSString *const CNIsAllowFindStrangerSwitchUrl  = API_Host@"/Daren/moment/findStrangerSwitch.action";
// 切换是否允许好友查看生活圈
static NSString *const CNSwitchAllowStrangerUrl  = API_Host@"/Daren/moment/strangerSwitch.action";

#pragma mark - 积分
static NSString *const CNIntegralGetTasksUrl  = API_Host@"/Daren/integral/getTasks.action";//任务列表
static NSString *const CNIntegralAddUrl  = API_Host@"/Daren/integral/addTask.action";//增加积分
static NSString *const CNIntegralDetailsUrl  = API_Host@"/Daren/integral/integralRecord.action";//积分明细
static NSString *const CNIntegralSignInUrl  = API_Host@"/Daren/integral/checkIn.action";//签到
static NSString *const CNCancellationUrl  = API_Host@"/Daren/common/cancellationAccount.action";//注销账号

#pragma mark - 隐私
static NSString *const CNPrivacyNoLetHimSeeListUrl  = API_Host@"/Daren/moment/getDoNotletFsids.action";//不让他看列表
static NSString *const CNPrivacyNoSeeHimListUrl  = API_Host@"/Daren/moment/getNoLookFsids.action";//不看他列表
static NSString *const CNPrivacyNoLetHimSeeAddUrl  = API_Host@"/Daren/moment/addDoNotletFsids.action";//不让他看增加
static NSString *const CNPrivacyNoSeeHimAddUrl  = API_Host@"/Daren/moment/addNoLookFsids.action";//不看他增加

#pragma mark - 订阅号
//选择你感兴趣的内容
static NSString *const CNInterestedContentUrl  = API_Host@"/Daren/group/getSpTags.action";
//推荐订阅号
static NSString *const CNRecommendedSubscribeUrl  = API_Host@"/Daren/group/getSubscriptionNumbers.action";
//推荐订阅号完成
static NSString *const CNRecommendedSubscribeFinishUrl  = API_Host@"/Daren/group/userFollowAddGroup.action";
//全部订阅号(不传sid)
static NSString *const CNAllSubscribeUrl  = API_Host@"/Daren/group/getMoreSubscriptionNumbers.action";
//全部订阅号(传sid)
static NSString *const CNAllSubscribeSidUrl  = API_Host@"/Daren/group/getCategorySubscriptionNumbers.action";
//关注订阅号
static NSString *const CNAddAttentionSubscribeUrl  = API_Host@"/Daren/group/addFollows.action";
//取消关注订阅号
static NSString *const CNCancelAttentionSubscribeUrl  = API_Host@"/Daren/group/userCancelFollow.action";
//加入群聊订阅号
static NSString *const CNJumpGroupSubscribeUrl  = API_Host@"/Daren/group/userAddGroup.action";
//设置默认订阅号
static NSString *const CNSubscribeDefaultAddFollowsUrl  = API_Host@"/Daren/group/defaultAddFollows.action";
//获取推荐的订阅号推荐内容
static NSString *const CNLiveSubscribeMsgUrl = API_Host@"/Daren/group/subscribeMsg.action";
//获取已关注的订阅号列表
static NSString *const CNLiveOfficialAccountUrl = API_Host@"/Daren/group/officialAccount.action";
//订阅号获取预约列表
static NSString *const CNLiveContentApiLiveListUrl = API_Classify@"/contentApi/getLiveList";
//预约订阅号直播
static NSString *const CNLiveContentApiLiveAppointUrl = API_Classify@"/contentApi/liveAppoint";
//订阅号热推
static NSString *const CNSubscribeHotPushUrl = API_Classify@"/contentApi/getHotContent";
//一键关注
static NSString *const CNSubscribeOneKeyConcernUrl = API_Host@"/Daren/group/oneKeyConcern.action";

#pragma mark - App配置信息
// 获取最新版本信息
static NSString *const CNGetNewestVersionUrl    = API_Host@"/Daren/common/getNewestVersion.action";
// 获取App配置信息(统一)
static NSString *const CNGetCommonMsgUrl    = API_Host@"/Daren/common/getCommonMsg.action";

#pragma mark 活动投票
//创建活动收费
static NSString *const CNAddGroupCharge  = API_Host@"/Daren/groupManagement/addGroupCharge.action";
//邀请加群
static NSString *const CNInvitationAddgroup = API_Host@"/Daren/groupManagement/invitationAddGroup.action";
//获取通知列表
static NSString *const CNGetnoticesubs = API_Host@"/Daren/sub/getNoticeSubs.action";
// 同意加入群
static NSString *const CNAgreeAddgroup = API_Contact@"/CnliveIM/notify/addGroup.action"; //@"https://wjjim.cnlive.com/CnliveIM/notify/addGroup.action"
// 创建投票
static NSString *const CNAddvote = API_Host@"/Daren/vote/addVote.action";
//储存历任群主，再特色群创建和转让群主的时候创建
static NSString *const CNSavesuccessivegroup = API_Host@"/Daren/groupManagement/saveSuccessiveGroup.action";

static NSString *const CNGetAgreementH5Url = API_Refund@"/json/wjj_user_terms.json";

static NSString *const CNWeChatPayUrl = API_ThirdPay@"/Daren/pay/notifyWeChatPay.action";

static NSString *const CNAliPayUrl = API_ThirdPay@"/Daren/pay/notifyAliPay.action";

static NSString *const CNUnionPayUrl = API_ThirdPay@"/Daren/pay/notifyUnionPay.action";

static NSString *const CNJSFYNotifyUrl = API_ThirdPay@"/Daren/pay/jsfyPayCallback.action";

//获取特色群限制人数
static NSString *const CNGroupMemberLimit = @"https://wjj.ys1.cnliveimg.com/json/GroupMemberLimit.json";

#pragma mark - 获取观察者相关
//获取观察者相关数据
static NSString *const CNWitnessPublishContent = API_Host@"/Daren/witness/getWitnessPublishContent.action";

//删除观察者相关数据
static NSString *const CNDeleteOrUpdateWitnessURL = API_Host@"/Daren/witness/deleteOrUpdateWitnessPublish.action";

#pragma mark - 直播

//取得相关视频
static NSString *const CNPlayerBackOrRelatedUrl  = API_Classify@"/contentApi/playList";

//取得直播数据
static NSString *const CNPlayerDetailUrl = API_Classify@"/playApi/play";

//预约
static NSString *const CNPlayerOrderUrl = API_Classify@"/contentApi/liveAppoint";

//获取直播活动播放信息4App
static NSString *const CNLiveActivityPlayInfo4App = API_OpenApi2@"/live_epg/getLiveActivityPlayInfo4App";
//获取直播间详情
static NSString *const CNLiveRoomInfo = API_Classify@"/playApi/play";

static NSString *const CNNewLiveInfoWeb = API_Classify@"/contentApi/";

//获取点播播放信息
static NSString *const CNLiveGetVodRates = API_OpenApi2@"/vod_epg/getRates";

//活动举报
static NSString *const CNLiveActivityReportContent = API_Report@"/CnliveMobile/json/report.action";

//订阅号关注
static NSString *const CNLiveSPAddFollow = API_Host@"/Daren/group/addFollows.action";

//取消订阅号关注
static NSString *const CNLiveSPCancelFollow = API_Host@"/Daren/group/userCancelFollow.action";

//订阅号取消管制

//视频下载地址
static NSString *const CNLiveVideoDownloadUrl = API_OpenApi2@"/vod_ips/vodplayByAPP";

#pragma mark - 黑名单
//校验黑名单
static NSString *const CNCheckBlackUser = API_Contact@"/CnliveIM/notify/checkBlackList.action";
//添加黑名单
static NSString *const CNBlackListAdd = API_Host@"/Daren/blackList/blackListAdd.action";
//删除黑名单
static NSString *const CNBlackListDelete = API_Host @"/Daren/blackList/blackListDelete.action";
//黑名单列表
static NSString *const CNBlackList = API_Host@"/Daren/blackList/blackListGet.action";

#pragma mark - 好友生活圈观看权限设置
//增加不让他人看
static NSString *const CNAdddonotletfsids = API_Host@"/Daren/moment/addDoNotletFsids.action";
//取消不让他人看
static NSString *const CNDeldonotletfsids = API_Host@"/Daren/moment/delDoNotletFsids.action";
//不让他看人列表
static NSString *const CNGetdonotletfsids = API_Host@"/Daren/moment/getDoNotletFsids.action";

//增加不看他的
static NSString *const CNAddnolookfsids = API_Host@"/Daren/moment/addNoLookFsids.action";
//取消不看他的
static NSString *const CNDelnolookfsids = API_Host@"/Daren/moment/delNoLookFsids.action";
//不看他的列表
static NSString *const CNGetnolookfsids = API_Host@"/Daren/moment/getNoLookFsids.action";
//
////////////////////////////////////////////////////////
////////////          数据库---表名
////////////////////////////////////////////////////////

//达人个人主页表名
static NSString *const DarenHomeRealm                    = @"DarenHome";

//达人列表表名
static NSString *const DarenSubsRealm                    = @"DarenSubs";

//生活列表表名
static NSString *const LifeSubsRealm                    = @"LifeSubs";

//系统订单列表表名
static NSString *const LifeHomeRealm                    = @"LifeHome";

//朋友圈新消息表名
static NSString *const MomentNewMsgRealm                = @"MomentNewMsg";

#endif /* NetworkAPIs_h */
