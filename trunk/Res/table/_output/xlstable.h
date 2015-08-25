//This header file is Excel_DataParser has been created automatically.
//Please request to improve the +82-10-9188-5571
//Producer : ¿Ã ªÛ»£
#ifndef __TABLE_AUTO_HEADER__XLSTABLE__
#define __TABLE_AUTO_HEADER__XLSTABLE__


// costume tab
typedef enum
{
	COSTUME_X_MAX_LENGTH          = 2,
	COSTUME_Y_MAX_LENGTH          = 19,
} TABLE_COSTUME_INFO;
typedef enum
{
	COSTUME_X__IMAGE                                            = 0,
	COSTUME_X__EFFECT                                           = 1,
} TABLE_COSTUME_X;
typedef enum
{
	COSTUME__Y_START                                            = 0,
	COSTUME__Y_END                                              = 18,
} TABLE_COSTUME_Y;

// effect tab
typedef enum
{
	EFFECT_X_MAX_LENGTH          = 9,
	EFFECT_Y_MAX_LENGTH          = 6,
} TABLE_EFFECT_INFO;
typedef enum
{
	EFFECT_X__RES                                               = 0,
	EFFECT_X__VISUALID                                          = 1,
	EFFECT_X__TYPE                                              = 2,
	EFFECT_X__LIFEDT                                            = 3,
	EFFECT_X__RENDERKEY                                         = 4,
	EFFECT_X__VALUE1                                            = 5,
	EFFECT_X__VALUE2                                            = 6,
	EFFECT_X__VALUE3                                            = 7,
	EFFECT_X__VALUE4                                            = 8,
} TABLE_EFFECT_X;
typedef enum
{
	EFFECT__Y_HIT_HEAD                                          = 0,
	EFFECT__Y_HIT_GUN1                                          = 1,
	EFFECT__Y_HIT_GUN2                                          = 2,
	EFFECT__Y_HIT_GUN3                                          = 3,
	EFFECT__Y_TEST                                              = 4,
	EFFECT__Y_HIT_BLOOD                                         = 5,
} TABLE_EFFECT_Y;

// entity tab
typedef enum
{
	ENTITY_X_MAX_LENGTH          = 3,
	ENTITY_Y_MAX_LENGTH          = 12,
} TABLE_ENTITY_INFO;
typedef enum
{
	ENTITY_X__RES                                               = 0,
	ENTITY_X__GROUP                                             = 1,
	ENTITY_X__GROUPID                                           = 2,
} TABLE_ENTITY_X;
typedef enum
{
	ENTITY__Y_H_MAN1                                            = 0,
	ENTITY__Y_Z_ZOMBIE1                                         = 1,
	ENTITY__Y_Z_ZOMBIE1_HEAD                                    = 2,
	ENTITY__Y_FIELD_OBJECT1                                     = 3,
	ENTITY__Y_FIELD_OBJECT2                                     = 4,
	ENTITY__Y_FIELD_OBJECT3                                     = 5,
	ENTITY__Y_FIELD_OBJECT4                                     = 6,
	ENTITY__Y_FIELD_COIN1                                       = 7,
	ENTITY__Y_G_GUN1                                            = 8,
	ENTITY__Y_B_FLAG                                            = 9,
	ENTITY__Y_B_BULLETBOX                                       = 10,
	ENTITY__Y_O_BIRD                                            = 11,
} TABLE_ENTITY_Y;

// gun tab
typedef enum
{
	GUN_X_MAX_LENGTH          = 1,
	GUN_Y_MAX_LENGTH          = 1,
} TABLE_GUN_INFO;
typedef enum
{
	GUN_X__D_DUMMY                                              = 0,
} TABLE_GUN_X;
typedef enum
{
	GUN__Y_START                                                = 0,
} TABLE_GUN_Y;

// head tab
typedef enum
{
	HEAD_X_MAX_LENGTH          = 1,
	HEAD_Y_MAX_LENGTH          = 1,
} TABLE_HEAD_INFO;
typedef enum
{
	HEAD_X__DUMMY                                               = 0,
} TABLE_HEAD_X;
typedef enum
{
	HEAD__Y_START                                               = 0,
} TABLE_HEAD_Y;

// hero tab
typedef enum
{
	HERO_X_MAX_LENGTH          = 1,
	HERO_Y_MAX_LENGTH          = 1,
} TABLE_HERO_INFO;
typedef enum
{
	HERO_X__D_DUMMY                                             = 0,
} TABLE_HERO_X;
typedef enum
{
	HERO__Y_START                                               = 0,
} TABLE_HERO_Y;

// obstacle tab
typedef enum
{
	OBSTACLE_X_MAX_LENGTH          = 1,
	OBSTACLE_Y_MAX_LENGTH          = 4,
} TABLE_OBSTACLE_INFO;
typedef enum
{
	OBSTACLE_X__ACTION                                          = 0,
} TABLE_OBSTACLE_X;
typedef enum
{
	OBSTACLE__Y_START                                           = 0,
	OBSTACLE__Y_END                                             = 3,
} TABLE_OBSTACLE_Y;

// particle tab
typedef enum
{
	PARTICLE_X_MAX_LENGTH          = 5,
	PARTICLE_Y_MAX_LENGTH          = 2,
} TABLE_PARTICLE_INFO;
typedef enum
{
	PARTICLE_X__USEEFT                                          = 0,
	PARTICLE_X__WIDTH                                           = 1,
	PARTICLE_X__HEIGHT                                          = 2,
	PARTICLE_X__MAKECNT                                         = 3,
	PARTICLE_X__TIMER                                           = 4,
} TABLE_PARTICLE_X;
typedef enum
{
	PARTICLE__Y_P_HEAD                                          = 0,
	PARTICLE__Y_END                                             = 1,
} TABLE_PARTICLE_Y;

// sound tab
typedef enum
{
	SOUND_X_MAX_LENGTH          = 2,
	SOUND_Y_MAX_LENGTH          = 24,
} TABLE_SOUND_INFO;
typedef enum
{
	SOUND_X__RES                                                = 0,
	SOUND_X__LOOP                                               = 1,
} TABLE_SOUND_X;
typedef enum
{
	SOUND__Y_BGM_TITLE                                          = 0,
	SOUND__Y_BGM                                                = 1,
	SOUND__Y_BAT_HIT                                            = 2,
	SOUND__Y_GUN_HIT2                                           = 3,
	SOUND__Y_GUN_HIT3                                           = 4,
	SOUND__Y_BOUNCE                                             = 5,
	SOUND__Y_COIN                                               = 6,
	SOUND__Y_BUTTON_MENU                                        = 7,
	SOUND__Y_BUTTON_PLAY                                        = 8,
	SOUND__Y_BUTTON_PAUSE                                       = 9,
	SOUND__Y_GROAN                                              = 10,
	SOUND__Y_SCREAM                                             = 11,
	SOUND__Y_ERROR                                              = 12,
	SOUND__Y_COCKING                                            = 13,
	SOUND__Y_CASHFLOW                                           = 14,
	SOUND__Y_SWOOSH                                             = 15,
	SOUND__Y_SCROLL                                             = 16,
	SOUND__Y_STAMP                                              = 17,
	SOUND__Y_READY                                              = 18,
	SOUND__Y_PURCHASE                                           = 19,
	SOUND__Y_COMBOFAIL                                          = 20,
	SOUND__Y_WINDUP                                             = 21,
	SOUND__Y_CROW                                               = 22,
	SOUND__Y_DEAD                                               = 23,
} TABLE_SOUND_Y;

// weapon tab
typedef enum
{
	WEAPON_X_MAX_LENGTH          = 3,
	WEAPON_Y_MAX_LENGTH          = 7,
} TABLE_WEAPON_INFO;
typedef enum
{
	WEAPON_X__LOW_ANGLE                                         = 0,
	WEAPON_X__HIGH_ANGLE                                        = 1,
	WEAPON_X__POWER                                             = 2,
} TABLE_WEAPON_X;
typedef enum
{
	WEAPON__Y_START                                             = 0,
	WEAPON__Y_END                                               = 6,
} TABLE_WEAPON_Y;

// zombie tab
typedef enum
{
	ZOMBIE_X_MAX_LENGTH          = 4,
	ZOMBIE_Y_MAX_LENGTH          = 1,
} TABLE_ZOMBIE_INFO;
typedef enum
{
	ZOMBIE_X__SPEED                                             = 0,
	ZOMBIE_X__PERFECT                                           = 1,
	ZOMBIE_X__GREAT                                             = 2,
	ZOMBIE_X__GOOD                                              = 3,
} TABLE_ZOMBIE_X;
typedef enum
{
	ZOMBIE__Y_START                                             = 0,
} TABLE_ZOMBIE_Y;

#endif //__TABLE_AUTO_HEADER__