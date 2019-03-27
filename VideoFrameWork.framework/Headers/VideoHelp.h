

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

@interface VideoHelp : NSObject

+(instancetype)shareManager;

@property (nonatomic, copy) NSString *uid;

+(void)addWaterVideoUrl:(NSURL *)inputUrl logoName:(NSString *)logo completionHandler:(void (^)(NSURL* outPutURL, int code))handler;

+(void)addFirstVideo:(NSURL*)firstVideoPath andSecondVideo:(NSURL*)secondVideo withMusic:(NSURL*)musicPath WithCompletionHandler:(void (^)(NSURL* outPutURL, int code))handler;
//剪切视频
+ (void)cropWithVideoUrlStr:(NSURL *)videoUrl start:(CGFloat)startTime end:(CGFloat)endTime completion:(void (^)(NSURL *outputURL, Float64 videoDuration, BOOL isSuccess))completionHandle;

+ (UIImage *)thumbnailImageRequestWithVideoUrl:(NSURL *)videoUrl andTime:(CGFloat)timeBySecond;
/// 合并音频文件
/// @param sourceURLs 需要合并的多个音频文件
/// 注意:导出的文件是:m4a格式的.
+ (void)sourceURLs:(NSArray *)sourceURLs completed:(void (^)(NSURL* outPutURL, int code))completed;

//合成多个视频到一个视屏
+(void)mergeVideosToOneVideo:(NSArray *)videos completed:(void (^)(NSURL* outPutURL, int code))completed;

+(void)addWaterVideoUrl:(NSURL *)inputUrl logoName:(NSString *)logo logoFrame:(CGRect)frame pmdContent:(NSString *)pmdcontent direct:(NSString *)directs none:(NSString *)none title:(NSString *)title address:(NSString *)address completionHandler:(void (^)(NSURL* outPutURL, int code))handler;

+(void)tranVideo:(NSURL *)videoUrl completed:(void (^)(NSURL* outPutURL, int code))completed;
+(void)tranAVAssetVideo:(AVAsset *)avasset completed:(void (^)(NSURL* outPutURL, int code))completed;
+ (UIImage *)image:(UIImage *)image rotation:(UIImageOrientation)orientation;
+(void)scaleVideo:(NSURL *)videoUrl andScale:(CGFloat)scale completed:(void (^)(NSURL* outPutURL, int code))completed;

+(void)tranImage:(UIImage *)image completed:(void (^)(NSURL *outPutUrl, int code))completed;

@end

