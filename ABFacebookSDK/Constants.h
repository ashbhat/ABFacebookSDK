//
//  Constants.h
//  ABFacebookSDK
//
//  Created by Ash Bhat on 10/26/16.
//  Copyright © 2016 Ash Bhat. All rights reserved.
//

#import <Foundation/Foundation.h>


#pragma mark FBSDK Graph Fields


#pragma mark core
FOUNDATION_EXPORT NSString *const kFB_id;
FOUNDATION_EXPORT NSString *const kFB_age_range;
FOUNDATION_EXPORT NSString *const kFB_birthday;
FOUNDATION_EXPORT NSString *const kFB_email;
FOUNDATION_EXPORT NSString *const kFB_first_name;
FOUNDATION_EXPORT NSString *const kFB_gender;
FOUNDATION_EXPORT NSString *const kFB_last_name;
FOUNDATION_EXPORT NSString *const kFB_link;
FOUNDATION_EXPORT NSString *const kFB_locale;
FOUNDATION_EXPORT NSString *const kFB_location;
FOUNDATION_EXPORT NSString *const kFB_middle_name;
FOUNDATION_EXPORT NSString *const kFB_name;
FOUNDATION_EXPORT NSString *const kFB_timezone;
FOUNDATION_EXPORT NSString *const kFB_picture;
FOUNDATION_EXPORT NSString *const kFB_updated_time;

#pragma mark not-core
FOUNDATION_EXPORT NSString *const kFB_about;
FOUNDATION_EXPORT NSString *const kFB_admin_notes;
FOUNDATION_EXPORT NSString *const kFB_context;
FOUNDATION_EXPORT NSString *const kFB_cover;
FOUNDATION_EXPORT NSString *const kFB_currency;
FOUNDATION_EXPORT NSString *const kFB_devices;
FOUNDATION_EXPORT NSString *const kFB_education;
FOUNDATION_EXPORT NSString *const kFB_employee_number;
FOUNDATION_EXPORT NSString *const kFB_favorite_athletes;
FOUNDATION_EXPORT NSString *const kFB_favorite_teams;
FOUNDATION_EXPORT NSString *const kFB_hometown;
FOUNDATION_EXPORT NSString *const kFB_inspirational_people;
FOUNDATION_EXPORT NSString *const kFB_install_type;
FOUNDATION_EXPORT NSString *const kFB_installed;
FOUNDATION_EXPORT NSString *const kFB_interested_in;
FOUNDATION_EXPORT NSString *const kFB_is_shared_login;
FOUNDATION_EXPORT NSString *const kFB_is_verified;
FOUNDATION_EXPORT NSString *const kFB_labels;
FOUNDATION_EXPORT NSString *const kFB_languages;
FOUNDATION_EXPORT NSString *const kFB_meeting_for;
FOUNDATION_EXPORT NSString *const kFB_name_format;
FOUNDATION_EXPORT NSString *const kFB_payment_pricepoints;
FOUNDATION_EXPORT NSString *const kFB_political;
FOUNDATION_EXPORT NSString *const kFB_public_key;
FOUNDATION_EXPORT NSString *const kFB_quotes;
FOUNDATION_EXPORT NSString *const kFB_relationship_status;
FOUNDATION_EXPORT NSString *const kFB_religion;
FOUNDATION_EXPORT NSString *const kFB_security_settings;
FOUNDATION_EXPORT NSString *const kFB_significant_other;
FOUNDATION_EXPORT NSString *const kFB_sports;
FOUNDATION_EXPORT NSString *const kFB_third_party_id;
FOUNDATION_EXPORT NSString *const kFB_token_for_business;
FOUNDATION_EXPORT NSString *const kFB_updated_time;
FOUNDATION_EXPORT NSString *const kFB_verified;
FOUNDATION_EXPORT NSString *const kFB_video_upload_limits;
FOUNDATION_EXPORT NSString *const kFB_viewer_can_send_gift;
FOUNDATION_EXPORT NSString *const kFB_website;
FOUNDATION_EXPORT NSString *const kFB_work;


#pragma mark permsissions
FOUNDATION_EXPORT NSString *const kFB_permission_public_profile;
FOUNDATION_EXPORT NSString *const kFB_permission_user_friends;
FOUNDATION_EXPORT NSString *const kFB_permission_email;
FOUNDATION_EXPORT NSString *const kFB_permission_user_about_me;
FOUNDATION_EXPORT NSString *const kFB_permission_user_actions_books;
FOUNDATION_EXPORT NSString *const kFB_permission_user_actions_fitness;
FOUNDATION_EXPORT NSString *const kFB_permission_user_actions_music;
FOUNDATION_EXPORT NSString *const kFB_permission_user_actions_news;
FOUNDATION_EXPORT NSString *const kFB_permission_user_actions_video;
FOUNDATION_EXPORT NSString *const kFB_permission_user_birthday;
FOUNDATION_EXPORT NSString *const kFB_permission_user_education_history;
FOUNDATION_EXPORT NSString *const kFB_permission_user_events;
FOUNDATION_EXPORT NSString *const kFB_permission_user_games_activity;
FOUNDATION_EXPORT NSString *const kFB_permission_user_hometown;
FOUNDATION_EXPORT NSString *const kFB_permission_user_likes;
FOUNDATION_EXPORT NSString *const kFB_permission_user_location;
FOUNDATION_EXPORT NSString *const kFB_permission_user_managed_groups;
FOUNDATION_EXPORT NSString *const kFB_permission_user_photos;
FOUNDATION_EXPORT NSString *const kFB_permission_user_posts;
FOUNDATION_EXPORT NSString *const kFB_permission_user_relationships;
FOUNDATION_EXPORT NSString *const kFB_permission_user_relationship_details;
FOUNDATION_EXPORT NSString *const kFB_permission_user_religion_politics;
FOUNDATION_EXPORT NSString *const kFB_permission_user_tagged_places;
FOUNDATION_EXPORT NSString *const kFB_permission_user_videos;
FOUNDATION_EXPORT NSString *const kFB_permission_user_website;
FOUNDATION_EXPORT NSString *const kFB_permission_user_work_history;
FOUNDATION_EXPORT NSString *const kFB_permission_read_insights;
FOUNDATION_EXPORT NSString *const kFB_permission_read_audience_network_insights;
FOUNDATION_EXPORT NSString *const kFB_permission_read_page_mailboxes;
FOUNDATION_EXPORT NSString *const kFB_permission_manage_pages;
FOUNDATION_EXPORT NSString *const kFB_permission_publish_pages;
FOUNDATION_EXPORT NSString *const kFB_permission_publish_actions;
FOUNDATION_EXPORT NSString *const kFB_permission_rsvp_event;
FOUNDATION_EXPORT NSString *const kFB_permission_pages_show_list;
FOUNDATION_EXPORT NSString *const kFB_permission_pages_manage_cta;
FOUNDATION_EXPORT NSString *const kFB_permission_pages_manage_instant_articles;
FOUNDATION_EXPORT NSString *const kFB_permission_ads_read;
FOUNDATION_EXPORT NSString *const kFB_permission_ads_management;
FOUNDATION_EXPORT NSString *const kFB_permission_business_management;
FOUNDATION_EXPORT NSString *const kFB_permission_pages_messaging;
FOUNDATION_EXPORT NSString *const kFB_permission_pages_messaging_phone_number;

typedef void (^RequestHandler)(id result, NSError *error);

@interface Constants : NSObject

@end
