# 0 "src/map_name_popup.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "src/map_name_popup.c"
# 1 "include/global.h" 1



# 1 "/usr/include/newlib/string.h" 1 3
# 10 "/usr/include/newlib/string.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 10 "/usr/include/newlib/_ansi.h" 3
# 1 "/usr/include/newlib/newlib.h" 1 3
# 10 "/usr/include/newlib/newlib.h" 3
# 1 "/usr/include/newlib/_newlib_version.h" 1 3
# 11 "/usr/include/newlib/newlib.h" 2 3
# 11 "/usr/include/newlib/_ansi.h" 2 3
# 1 "/usr/include/newlib/sys/config.h" 1 3



# 1 "/usr/include/newlib/machine/ieeefp.h" 1 3
# 5 "/usr/include/newlib/sys/config.h" 2 3
# 1 "/usr/include/newlib/sys/features.h" 1 3
# 6 "/usr/include/newlib/sys/config.h" 2 3
# 12 "/usr/include/newlib/_ansi.h" 2 3
# 11 "/usr/include/newlib/string.h" 2 3
# 1 "/usr/include/newlib/sys/reent.h" 1 3
# 13 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 14 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 145 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4

# 145 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 329 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 425 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
} max_align_t;
# 15 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/include/newlib/sys/cdefs.h" 1 3
# 45 "/usr/include/newlib/sys/cdefs.h" 3
# 1 "/usr/include/newlib/machine/_default_types.h" 1 3
# 41 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 46 "/usr/include/newlib/sys/cdefs.h" 2 3

# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 48 "/usr/include/newlib/sys/cdefs.h" 2 3
# 16 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/include/newlib/sys/_types.h" 1 3
# 24 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 359 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "/usr/include/newlib/sys/_types.h" 2 3


# 1 "/usr/include/newlib/machine/_types.h" 1 3
# 28 "/usr/include/newlib/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/usr/include/newlib/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/usr/include/newlib/sys/_types.h" 3
typedef unsigned int __size_t;
# 147 "/usr/include/newlib/sys/_types.h" 3
typedef signed int _ssize_t;
# 158 "/usr/include/newlib/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef long __daddr_t;



typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 17 "/usr/include/newlib/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 35 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/sys/lock.h" 1 3
# 11 "/usr/include/newlib/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 36 "/usr/include/newlib/sys/reent.h" 2 3
typedef _LOCK_RECURSIVE_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 99 "/usr/include/newlib/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 116 "/usr/include/newlib/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 153 "/usr/include/newlib/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 270 "/usr/include/newlib/sys/reent.h" 3
typedef struct __sFILE __FILE;



extern __FILE __sf[3];

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

extern struct _glue __sglue;
# 306 "/usr/include/newlib/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 578 "/usr/include/newlib/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];




  struct __locale_t *_locale;





  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {



          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
# 647 "/usr/include/newlib/sys/reent.h" 3
   char _getlocalename_l_buf[32 ];
        } _reent;







    } _new;







  void (**_sig_func)(int);
};
# 797 "/usr/include/newlib/sys/reent.h" 3
extern struct _reent *_impure_ptr ;





extern struct _reent _impure_data ;
# 917 "/usr/include/newlib/sys/reent.h" 3
extern struct _atexit *__atexit;
extern struct _atexit __atexit0;

extern void (*__stdio_exit_handler) (void);

void _reclaim_reent (struct _reent *);

extern int _fwalk_sglue (struct _reent *, int (*)(struct _reent *, __FILE *),
    struct _glue *);
# 12 "/usr/include/newlib/string.h" 2 3





# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 18 "/usr/include/newlib/string.h" 2 3


# 1 "/usr/include/newlib/sys/_locale.h" 1 3
# 9 "/usr/include/newlib/sys/_locale.h" 3
struct __locale_t;
typedef struct __locale_t *locale_t;
# 21 "/usr/include/newlib/string.h" 2 3



# 1 "include/strings.h" 1 3




extern const u8 gText_ExpandedPlaceholder_Empty[];
extern const u8 gText_ExpandedPlaceholder_Kun[];
extern const u8 gText_ExpandedPlaceholder_Chan[];
extern const u8 gText_ExpandedPlaceholder_Sapphire[];
extern const u8 gText_ExpandedPlaceholder_Ruby[];
extern const u8 gText_ExpandedPlaceholder_Emerald[];
extern const u8 gText_ExpandedPlaceholder_Aqua[];
extern const u8 gText_ExpandedPlaceholder_Magma[];
extern const u8 gText_ExpandedPlaceholder_Archie[];
extern const u8 gText_ExpandedPlaceholder_Maxie[];
extern const u8 gText_ExpandedPlaceholder_Kyogre[];
extern const u8 gText_ExpandedPlaceholder_Groudon[];
extern const u8 gText_ExpandedPlaceholder_Brendan[];
extern const u8 gText_ExpandedPlaceholder_May[];

extern const u8 gText_FromSpace[];

extern const u8 gText_Lv50[];
extern const u8 gText_OpenLevel[];

extern const u8 gText_Mom[];
extern const u8 gText_Dad[];

extern const u8 gText_GetsAPokeBlockQuestion[];
extern const u8 gText_WontEatAnymore[];
extern const u8 gText_WasEnhanced[];
extern const u8 gText_NothingChanged[];
extern const u8 gText_NatureSlash[];

extern const u8 gText_Cool[];
extern const u8 gText_Beauty[];
extern const u8 gText_Cute[];
extern const u8 gText_Smart[];
extern const u8 gText_Tough[];

extern const u8 gText_Normal[];
extern const u8 gText_Super[];
extern const u8 gText_Hyper[];
extern const u8 gText_Master[];

extern const u8 gText_Cool2[];
extern const u8 gText_Beauty2[];
extern const u8 gText_Cute2[];
extern const u8 gText_Smart2[];
extern const u8 gText_Tough2[];

extern const u8 gText_Items[];
extern const u8 gText_Key_Items[];
extern const u8 gText_Poke_Balls[];
extern const u8 gText_TMs_Hms[];
extern const u8 gText_Berries2[];

extern const u8 gText_Single2[];
extern const u8 gText_Double2[];
extern const u8 gText_Multi[];
extern const u8 gText_MultiLink[];

extern const u8 gText_Single[];
extern const u8 gText_Double[];

extern const u8 gText_Spicy2[];
extern const u8 gText_Dry2[];
extern const u8 gText_Sweet2[];
extern const u8 gText_Bitter2[];
extern const u8 gText_Sour2[];

extern const u8 gText_Excellent[];
extern const u8 gText_VeryGood[];
extern const u8 gText_Good[];
extern const u8 gText_SoSo[];
extern const u8 gText_Bad[];
extern const u8 gText_TheWorst[];

extern const u8 Roulette_Text_ControlsInstruction[];
extern const u8 Roulette_Text_KeepPlaying[];
extern const u8 Roulette_Text_Jackpot[];
extern const u8 Roulette_Text_ItsAHit[];
extern const u8 Roulette_Text_NothingDoing[];
extern const u8 Roulette_Text_YouveWonXCoins[];
extern const u8 Roulette_Text_BoardWillBeCleared[];
extern const u8 Roulette_Text_CoinCaseIsFull[];
extern const u8 Roulette_Text_NoCoinsLeft[];
extern const u8 Roulette_Text_PlayMinimumWagerIsX[];
extern const u8 Roulette_Text_SpecialRateTable[];
extern const u8 Roulette_Text_NotEnoughCoins[];

extern const u8 gText_Slots[];
extern const u8 gText_Roulette[];
extern const u8 gText_Jackpot[];

extern const u8 gText_YouDontHaveThreeCoins[];
extern const u8 gText_QuitTheGame[];
extern const u8 gText_YouveGot9999Coins[];
extern const u8 gText_YouveRunOutOfCoins[];
extern const u8 gText_ReelTimeHelp[];

extern const u8 gText_First[];
extern const u8 gText_Second[];
extern const u8 gText_Third[];

extern const u8 gText_NoDecorations[];
extern const u8 gText_NoDecorationsInUse[];

extern const u8 gText_Exit[];
extern const u8 gText_Cancel[];

extern const u8 gText_Color161Shadow161[];
extern const u8 gText_GoBackPrevMenu[];
extern const u8 gText_CantPlaceInRoom[];
extern const u8 gText_NoMoreDecorations[];
extern const u8 gText_NoMoreDecorations2[];
extern const u8 gText_InUseAlready[];
extern const u8 gText_CancelDecorating[];
extern const u8 gText_PlaceItHere[];
extern const u8 gText_CantBePlacedHere[];
extern const u8 gText_DecorationReturnedToPC[];
extern const u8 gText_StopPuttingAwayDecorations[];
extern const u8 gText_ReturnDecorationToPC[];
extern const u8 gText_NoDecorationHere[];
extern const u8 gText_DecorationWillBeDiscarded[];
extern const u8 gText_CantThrowAwayInUse[];
extern const u8 gText_DecorationThrownAway[];

extern const u8 gText_PokeBalls[];
extern const u8 gText_Berries[];
extern const u8 gText_Berry[];

extern const u8 gText_Desk[];
extern const u8 gText_Chair[];
extern const u8 gText_Plant[];
extern const u8 gText_Ornament[];
extern const u8 gText_Mat[];
extern const u8 gText_Poster[];

extern const u8 gText_PutOutSelectedDecorItem[];
extern const u8 gText_StoreChosenDecorInPC[];
extern const u8 gText_ThrowAwayUnwantedDecors[];
extern const u8 gText_Doll[];
extern const u8 gText_Cushion[];
extern const u8 gText_Decorate[];
extern const u8 gText_PutAway[];
extern const u8 gText_Toss2[];
extern const u8 gText_Hoenn[];
extern const u8 gText_Ferry[];
extern const u8 gText_SecretBase[];
extern const u8 gText_Hideout[];
extern const u8 gText_FlyToWhere[];
extern const u8 gText_PokemonLeague[];
extern const u8 gText_PokemonCenter[];
extern const u8 gText_ApostropheSBase[];
extern const u8 gText_NoRegistry[];
extern const u8 gText_OkayToDeleteFromRegistry[];
extern const u8 gText_RegisteredDataDeleted[];
extern const u8 gText_DelRegist[];
extern const u8 gText_CommErrorEllipsis[];
extern const u8 gText_MoveCloserToLinkPartner[];
extern const u8 gText_CommErrorCheckConnections[];
extern const u8 gText_ABtnTitleScreen[];
extern const u8 gText_ABtnRegistrationCounter[];
extern const u8 gText_MixingRecords[];
extern const u8 gText_RecordMixingComplete[];
extern const u8 gText_EmptyString2[];
extern const u8 gText_Confirm3[];
extern const u8 gText_Cancel4[];
extern const u8 gText_IsThisTheCorrectTime[];
extern const u8 gText_PkmnFainted_FldPsn[];
extern const u8 gText_Coins[];
extern const u8 gText_Silver[];
extern const u8 gText_Gold[];

extern const u8 gMenuText_Use[];
extern const u8 gMenuText_Toss[];
extern const u8 gMenuText_Give[];
extern const u8 gMenuText_Give2[];
extern const u8 gMenuText_Register[];
extern const u8 gMenuText_Confirm[];
extern const u8 gMenuText_Give2[];

extern const u8 gText_EggNickname[];
extern const u8 gText_Pokemon[];
extern const u8 gText_InParty[];
extern const u8 gText_InGameClockUsable[];


extern const u8 gText_Day[];
extern const u8 gText_Colon3[];
extern const u8 gText_Confirm2[];
extern const u8 gText_PresentTime[];
extern const u8 gText_PreviousTime[];
extern const u8 gText_ResetRTCConfirmCancel[];
extern const u8 gText_NoSaveFileCantSetTime[];
extern const u8 gText_PleaseResetTime[];
extern const u8 gText_ClockHasBeenReset[];
extern const u8 gText_SaveCompleted[];
extern const u8 gText_SaveFailed[];


extern const u8 gText_MenuPokedex[];
extern const u8 gText_MenuPokemon[];
extern const u8 gText_MenuBag[];
extern const u8 gText_MenuPC[];
extern const u8 gText_MenuPokenav[];
extern const u8 gText_MenuPlayer[];
extern const u8 gText_MenuSave[];
extern const u8 gText_MenuOption[];
extern const u8 gText_MenuExit[];
extern const u8 gText_MenuRetire[];
extern const u8 gText_MenuRest[];
extern const u8 gText_MenuDexNav[];
extern const u8 gText_Floor1[];
extern const u8 gText_Floor2[];
extern const u8 gText_Floor3[];
extern const u8 gText_Floor4[];
extern const u8 gText_Floor5[];
extern const u8 gText_Floor6[];
extern const u8 gText_Floor7[];
extern const u8 gText_Peak[];
extern const u8 gText_SafariBallStock[];
extern const u8 gText_BattlePyramidFloor[];

extern const u8 gText_MenuOptionPokedex[];
extern const u8 gText_MenuOptionPokemon[];
extern const u8 gText_MenuOptionBag[];
extern const u8 gText_MenuOptionPokenav[];
extern const u8 gText_MenuOptionSave[];
extern const u8 gText_MenuOptionOption[];
extern const u8 gText_MenuOptionExit[];


extern const u8 gText_ConfirmSave[];
extern const u8 gText_DifferentSaveFile[];
extern const u8 gText_AlreadySavedFile[];
extern const u8 gText_SavingDontTurnOff[];
extern const u8 gText_PlayerSavedGame[];
extern const u8 gText_SaveError[];
extern const u8 gText_SavingDontTurnOffPower[];
extern const u8 gText_SavingPlayer[];
extern const u8 gText_SavingBadges[];
extern const u8 gText_SavingPokedex[];
extern const u8 gText_SavingTime[];


extern const u8 gText_BattlePyramidConfirmRest[];
extern const u8 gText_BattlePyramidConfirmRetire[];

extern const u8 gText_MaleSymbol[];
extern const u8 gText_FemaleSymbol[];

extern const u8 gText_SelectorArrow3[];
extern const u8 gText_YesNo[];


extern const u8 gText_Birch_Welcome[];
extern const u8 gText_ThisIsAPokemon[];
extern const u8 gText_Birch_MainSpeech[];
extern const u8 gText_Birch_AndYouAre[];
extern const u8 gText_Birch_BoyOrGirl[];
extern const u8 gText_Birch_ConfirmBoy[];
extern const u8 gText_Birch_ConfirmGirl[];
extern const u8 gText_Birch_WhatsYourName[];
extern const u8 gText_Birch_SoItsPlayer[];
extern const u8 gText_Birch_SoItsRival[];
extern const u8 gText_Birch_YourePlayerAndHeIs[];
extern const u8 gText_Birch_AreYouReady[];

extern const u8 gText_BirchInTrouble[];
extern const u8 gText_ConfirmStarterChoice[];


extern const u8 gText_EventSafelyLoaded[];
extern const u8 gText_LoadErrorEndingSession[];
extern const u8 gText_PressAToLoadEvent[];
extern const u8 gText_LoadingEvent[];
extern const u8 gText_DontRemoveCableTurnOff[];
extern const u8 gText_LinkStandby2[];


extern const u8 gText_CloseBag[];
extern const u8 gText_NumberItem_HM[];
extern const u8 gText_NumberItem_TMBerry[];
extern const u8 gText_xVar1[];
extern const u8 gText_ReturnToVar1[];
extern const u8 gText_SelectorArrow2[];
extern const u8 gText_MoveVar1Where[];
extern const u8 gText_Var1IsSelected[];
extern const u8 gText_TossHowManyVar1s[];
extern const u8 gText_ConfirmTossItems[];
extern const u8 gText_ThrewAwayVar2Var1s[];
extern const u8 gText_PressAnyDpadKey[];
extern const u8 gText_CantWriteMail[];
extern const u8 gText_NoPokemon[];
extern const u8 gText_Var1CantBeHeld[];
extern const u8 gText_CantBuyKeyItem[];
extern const u8 gText_HowManyToSell[];
extern const u8 gText_ICanPayVar1[];
extern const u8 gText_TurnedOverVar1ForVar2[];
extern const u8 gText_ThreeDashes[];
extern const u8 *const gPocketNamesStringsTable[];


extern const u8 gText_PkmnHPRestoredByVar2[];
extern const u8 gText_CantBeUsedOnPkmn[];
extern const u8 gText_CancelParticipation[];
extern const u8 gText_PkmnWasGivenItem[];
extern const u8 gText_ReceivedItemFromPkmn[];
extern const u8 gText_PkmnAlreadyHoldingItemSwitch[];
extern const u8 gText_SwitchedPkmnItem[];
extern const u8 gText_BagFullCouldNotRemoveItem[];
extern const u8 gText_PkmnCantParticipate[];
extern const u8 gText_PkmnNotHolding[];
extern const u8 gText_ThrowAwayItem[];
extern const u8 gText_ItemThrownAway[];
extern const u8 gText_SendMailToPC[];
extern const u8 gText_MailSentToPC[];
extern const u8 gText_PCMailboxFull[];
extern const u8 gText_MailMessageWillBeLost[];
extern const u8 gText_MailTakenFromPkmn[];
extern const u8 gText_NoMoreThanVar1Pkmn[];
extern const u8 gText_PkmnCantBeTradedNow[];
extern const u8 gText_PkmnCantBeTraded[];
extern const u8 gText_EggCantBeTradedNow[];
extern const u8 gText_OnlyPkmnForBattle[];
extern const u8 gJPText_AreYouSureYouWantToSpinTradeMon[];
extern const u8 gText_PauseUntilPress[];
extern const u8 gText_CantUseUntilNewBadge[];
extern const u8 gText_ReturnToHealingSpot[];
extern const u8 gText_EscapeFromHere[];
extern const u8 gText_PkmnCuredOfPoison[];
extern const u8 gText_PkmnWokeUp2[];
extern const u8 gText_PkmnBurnHealed[];
extern const u8 gText_PkmnFrostbiteHealed[];
extern const u8 gText_PkmnThawedOut[];
extern const u8 gText_PkmnCuredOfParalysis[];
extern const u8 gText_PkmnGotOverInfatuation[];
extern const u8 gText_PkmnTransformed[];
extern const u8 gText_PkmnBecameHealthy[];
extern const u8 gText_HP3[];
extern const u8 gText_SpAtk3[];
extern const u8 gText_SpDef3[];
extern const u8 gText_PkmnBaseVar2StatIncreased[];
extern const u8 gText_MovesPPIncreased[];
extern const u8 gText_PPWasRestored[];
extern const u8 gText_WontHaveEffect[];
extern const u8 gText_PkmnSnappedOutOfConfusion[];
extern const u8 gText_PkmnFriendlyBaseVar2Fell[];
extern const u8 gText_PkmnFriendlyBaseVar2CantFall[];
extern const u8 gText_PkmnAdoresBaseVar2Fell[];
extern const u8 gText_PkmnAlreadyKnows[];
extern const u8 gText_PkmnCantLearnMove[];
extern const u8 gText_PkmnNeedsToReplaceMove[];
extern const u8 gText_PkmnLearnedMove3[];
extern const u8 gText_WhichMoveToForget[];
extern const u8 gText_12PoofForgotMove[];
extern const u8 gText_StopLearningMove2[];
extern const u8 gText_MoveNotLearned[];
extern const u8 gText_PkmnElevatedToLvVar2[];
extern const u8 gText_PkmnGainedExp[];
extern const u8 gText_PkmnGainedExpAndElevatedToLvVar3[];
extern const u8 gText_RemoveMailBeforeItem[];
extern const u8 gText_PkmnHoldingItemCantHoldMail[];
extern const u8 gText_MailTransferredFromMailbox[];
extern const u8 gText_CancelBattle[];
extern const u8 gText_ReturnToWaitingRoom[];
extern const u8 gText_CancelChallenge[];
extern const u8 gText_CantSwitchWithAlly[];
extern const u8 gText_PkmnHasNoEnergy[];
extern const u8 gText_EggCantBattle[];
extern const u8 gText_PkmnAlreadySelected[];
extern const u8 gText_PkmnAlreadyInBattle[];
extern const u8 gText_PkmnCantSwitchOut[];
extern const u8 gText_MaxHP[];
extern const u8 gText_Attack[];
extern const u8 gText_Defense[];
extern const u8 gText_SpAtk[];
extern const u8 gText_SpDef[];
extern const u8 gText_Speed[];
extern const u8 gText_Dash[];
extern const u8 gText_Plus[];


extern const u8 gText_CryOf[];
extern const u8 gText_SizeComparedTo[];
extern const u8 gText_PokedexRegistration[];
extern const u8 gText_NumberClear01[];
extern const u8 gText_5MarksPokemon[];
extern const u8 gText_UnkHeight[];
extern const u8 gText_UnkHeightMetric[];
extern const u8 gText_UnkWeight[];
extern const u8 gText_UnkWeightMetric[];
extern const u8 gText_HTHeight[];
extern const u8 gText_WTWeight[];
extern const u8 gText_SearchingPleaseWait[];
extern const u8 gText_SearchCompleted[];
extern const u8 gText_NoMatchingPkmnWereFound[];
extern const u8 gText_SelectorArrow[];


extern const u8 gBirchDexRatingText_LessThan10[];
extern const u8 gBirchDexRatingText_LessThan20[];
extern const u8 gBirchDexRatingText_LessThan30[];
extern const u8 gBirchDexRatingText_LessThan40[];
extern const u8 gBirchDexRatingText_LessThan50[];
extern const u8 gBirchDexRatingText_LessThan60[];
extern const u8 gBirchDexRatingText_LessThan70[];
extern const u8 gBirchDexRatingText_LessThan80[];
extern const u8 gBirchDexRatingText_LessThan90[];
extern const u8 gBirchDexRatingText_LessThan100[];
extern const u8 gBirchDexRatingText_LessThan110[];
extern const u8 gBirchDexRatingText_LessThan120[];
extern const u8 gBirchDexRatingText_LessThan130[];
extern const u8 gBirchDexRatingText_LessThan140[];
extern const u8 gBirchDexRatingText_LessThan150[];
extern const u8 gBirchDexRatingText_LessThan160[];
extern const u8 gBirchDexRatingText_LessThan170[];
extern const u8 gBirchDexRatingText_LessThan180[];
extern const u8 gBirchDexRatingText_LessThan190[];
extern const u8 gBirchDexRatingText_LessThan200[];
extern const u8 gBirchDexRatingText_DexCompleted[];


extern const u8 gText_WhatWouldYouLike[];
extern const u8 gText_NoMailHere[];
extern const u8 gText_GoBackPrevMenu[];
extern const u8 gText_Cancel[];

extern const u8 gText_Cancel2[];

extern const u8 gText_NoItems[];
extern const u8 gText_WhatToDoWithVar1sMail[];
extern const u8 gText_MessageWillBeLost[];
extern const u8 gText_BagIsFull[];

extern const u8 gText_MailToBagMessageErased[];
extern const u8 gText_GoBackPrevMenu[];
extern const u8 gText_TossHowManyVar1s[];
extern const u8 gText_ThrewAwayVar2Var1s[];
extern const u8 gText_ConfirmTossItems[];
extern const u8 gText_MoveVar1Where[];

extern const u8 gText_ColorLightShadowDarkGray[];
extern const u8 gText_ColorBlue[];
extern const u8 gText_Friend[];
extern const u8 gText_Tristan[];
extern const u8 gText_Philip[];
extern const u8 gText_Dennis[];
extern const u8 gText_Roberto[];
extern const u8 gText_FiveMarks[];

extern const u8 gText_TotalRecordWLD[];
extern const u8 gText_PlayersBattleResults[];
extern const u8 gText_WinLoseDraw[];
extern const u8 gText_ColorTransparent[];
extern const u8 gText_Slash[];
extern const u8 gText_HealthboxNickname[];
extern const u8 gText_HealthboxGender_None[];
extern const u8 gText_HealthboxGender_Male[];
extern const u8 gText_HealthboxGender_Female[];


extern const u8 gText_Exit[];
extern const u8 gText_1F[];
extern const u8 gText_2F[];
extern const u8 gText_3F[];
extern const u8 gText_4F[];
extern const u8 gText_5F[];
extern const u8 gText_6F[];
extern const u8 gText_7F[];
extern const u8 gText_8F[];
extern const u8 gText_9F[];
extern const u8 gText_10F[];
extern const u8 gText_11F[];
extern const u8 gText_B1F[];
extern const u8 gText_B2F[];
extern const u8 gText_B3F[];
extern const u8 gText_B4F[];
extern const u8 gText_Rooftop[];
extern const u8 gText_ElevatorNowOn[];

extern const u8 gText_BattleTower2[];
extern const u8 gText_BattleDome[];
extern const u8 gText_BattlePalace[];
extern const u8 gText_BattleArena[];
extern const u8 gText_BattleFactory[];
extern const u8 gText_BattlePike[];
extern const u8 gText_BattlePyramid[];
extern const u8 gText_RankingHall[];
extern const u8 gText_ExchangeService[];

extern const u8 gText_SlateportCity[];
extern const u8 gText_BattleFrontier[];
extern const u8 gText_SouthernIsland[];
extern const u8 gText_NavelRock[];
extern const u8 gText_BirthIsland[];
extern const u8 gText_FarawayIsland[];

extern const u8 gText_BattleTrainers[];
extern const u8 gText_BattleBasics[];
extern const u8 gText_PokemonNature[];
extern const u8 gText_PokemonMoves[];
extern const u8 gText_Underpowered[];
extern const u8 gText_WhenInDanger[];


extern const u8 BattleFrontier_Lounge2_Text_SalonMaidenIsThere[];
extern const u8 BattleFrontier_Lounge2_Text_SalonMaidenSilverMons[];
extern const u8 BattleFrontier_Lounge2_Text_SalonMaidenGoldMons[];
extern const u8 BattleFrontier_Lounge2_Text_DoubleBattleAdvice1[];
extern const u8 BattleFrontier_Lounge2_Text_DoubleBattleAdvice2[];
extern const u8 BattleFrontier_Lounge2_Text_DoubleBattleAdvice3[];
extern const u8 BattleFrontier_Lounge2_Text_MultiBattleAdvice[];
extern const u8 BattleFrontier_Lounge2_Text_LinkMultiBattleAdvice[];
extern const u8 BattleFrontier_Lounge2_Text_DomeAceIsThere[];
extern const u8 BattleFrontier_Lounge2_Text_DomeAceSilverMons[];
extern const u8 BattleFrontier_Lounge2_Text_DomeAceGoldMons[];
extern const u8 BattleFrontier_Lounge2_Text_FactoryHeadIsThere[];
extern const u8 BattleFrontier_Lounge2_Text_FactoryHeadSilverMons[];
extern const u8 BattleFrontier_Lounge2_Text_FactoryHeadGoldMons[];
extern const u8 BattleFrontier_Lounge2_Text_PalaceMavenIsThere[];
extern const u8 BattleFrontier_Lounge2_Text_PalaceMavenSilverMons[];
extern const u8 BattleFrontier_Lounge2_Text_PalaceMavenGoldMons[];
extern const u8 BattleFrontier_Lounge2_Text_ArenaTycoonIsThere[];
extern const u8 BattleFrontier_Lounge2_Text_ArenaTycoonSilverMons[];
extern const u8 BattleFrontier_Lounge2_Text_ArenaTycoonGoldMons[];
extern const u8 BattleFrontier_Lounge2_Text_PikeQueenIsThere[];
extern const u8 BattleFrontier_Lounge2_Text_PikeQueenSilverMons[];
extern const u8 BattleFrontier_Lounge2_Text_PikeQueenGoldMons[];
extern const u8 BattleFrontier_Lounge2_Text_PyramidKingIsThere[];
extern const u8 BattleFrontier_Lounge2_Text_PyramidKingSilverMons[];
extern const u8 BattleFrontier_Lounge2_Text_PyramidKingGoldMons[];


extern const u8 BattleFrontier_Lounge5_Text_NatureGirlAttackHighAttackLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlAttackHighDefenseLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlAttackHighSupportLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighAttackLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighDefenseLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlDefenseHighSupportLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlSupportHighAttackLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlSupportHighDefenseLow[];
extern const u8 BattleFrontier_Lounge5_Text_NatureGirlSupportHighSupportLow[];


extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleTowerSingle[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleTowerDouble[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleTowerMulti[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleDomeSingle[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleDomeDouble[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleFactorySingle[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleFactoryDouble[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePalaceSingle[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePalaceDouble[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattleArena[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePike[];
extern const u8 BattleFrontier_Lounge3_Text_ChallengeBattlePyramid[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleTowerSingle[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleTowerDouble[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleTowerMulti[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleDomeSingle[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleDomeDouble[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleFactorySingle[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleFactoryDouble[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattlePalaceSingle[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattlePalaceDouble[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattleArena[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattlePike[];
extern const u8 BattleFrontier_Lounge3_Text_GetToBattlePyramid[];

extern const u8 gText_BP[];


extern const u8 BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_IronDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_ZincDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc[];
extern const u8 BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc[];


extern const u8 BattleFrontier_Lounge7_Text_SoftboiledDesc[];
extern const u8 BattleFrontier_Lounge7_Text_SeismicTossDesc[];
extern const u8 BattleFrontier_Lounge7_Text_DreamEaterDesc[];
extern const u8 BattleFrontier_Lounge7_Text_MegaPunchDesc[];
extern const u8 BattleFrontier_Lounge7_Text_MegaKickDesc[];
extern const u8 BattleFrontier_Lounge7_Text_BodySlamDesc[];
extern const u8 BattleFrontier_Lounge7_Text_RockSlideDesc[];
extern const u8 BattleFrontier_Lounge7_Text_CounterDesc[];
extern const u8 BattleFrontier_Lounge7_Text_ThunderWaveDesc[];
extern const u8 BattleFrontier_Lounge7_Text_SwordsDanceDesc[];
extern const u8 BattleFrontier_Lounge7_Text_DefenseCurlDesc[];
extern const u8 BattleFrontier_Lounge7_Text_SnoreDesc[];
extern const u8 BattleFrontier_Lounge7_Text_MudSlapDesc[];
extern const u8 BattleFrontier_Lounge7_Text_SwiftDesc[];
extern const u8 BattleFrontier_Lounge7_Text_IcyWindDesc[];
extern const u8 BattleFrontier_Lounge7_Text_EndureDesc[];
extern const u8 BattleFrontier_Lounge7_Text_PsychUpDesc[];
extern const u8 BattleFrontier_Lounge7_Text_IcePunchDesc[];
extern const u8 BattleFrontier_Lounge7_Text_ThunderPunchDesc[];
extern const u8 BattleFrontier_Lounge7_Text_FirePunchDesc[];

extern const u8 gText_YourPartnerHasRetired[];

extern const u8 gText_Wallace[];
extern const u8 gText_Steven[];
extern const u8 gText_Brawly[];
extern const u8 gText_Winona[];
extern const u8 gText_Phoebe[];
extern const u8 gText_Glacia[];

extern const u8 gText_MoveRelearnerPkmnLearnedMove[];
extern const u8 gText_MoveRelearnerPkmnTryingToLearnMove[];
extern const u8 gText_MoveRelearnerWhichMoveToForget[];
extern const u8 gText_MoveRelearnerStopTryingToTeachMove[];
extern const u8 gText_MoveRelearnerAndPoof[];
extern const u8 gText_MoveRelearnerPkmnForgotMoveAndLearnedNew[];
extern const u8 gText_TeachWhichMoveToPkmn[];
extern const u8 gText_MoveRelearnerGiveUp[];
extern const u8 gText_MoveRelearnerTeachMoveConfirm[];
extern const u8 gText_MoveRelearnerBattleMoves[];
extern const u8 gText_MoveRelearnerPP[];
extern const u8 gText_MoveRelearnerPower[];
extern const u8 gText_MoveRelearnerAccuracy[];
extern const u8 gText_MoveRelearnerContestMovesTitle[];
extern const u8 gText_MoveRelearnerAppeal[];
extern const u8 gText_MoveRelearnerJam[];

extern const u8 gText_Kira[];
extern const u8 gText_Amy[];
extern const u8 gText_John[];
extern const u8 gText_Roy[];
extern const u8 gText_Gabby[];
extern const u8 gText_Anna[];

extern const u8 gText_DadsAdvice[];
extern const u8 gText_PlayerUsedVar2[];
extern const u8 gText_RepelEffectsLingered[];
extern const u8 gText_LureEffectsLingered[];
extern const u8 gText_BoxFull[];
extern const u8 gText_WontHaveEffect[];
extern const u8 gText_NextFusionMon[];

extern const u8 gText_LevelSymbol[];
extern const u8 gText_PkmnInfo[];
extern const u8 gText_PkmnSkills[];
extern const u8 gText_BattleMoves[];
extern const u8 gText_ContestMoves[];
extern const u8 gText_HMMovesCantBeForgotten2[];
extern const u8 gText_Info[];
extern const u8 gText_Switch[];
extern const u8 gText_RentalPkmn[];
extern const u8 gText_TypeSlash[];
extern const u8 gText_HP4[];
extern const u8 gText_Attack3[];
extern const u8 gText_Defense3[];
extern const u8 gText_SpAtk4[];
extern const u8 gText_SpDef4[];
extern const u8 gText_Speed2[];
extern const u8 gText_ExpPoints[];
extern const u8 gText_NextLv[];
extern const u8 gText_Status[];
extern const u8 gText_Power[];
extern const u8 gText_Accuracy2[];
extern const u8 gText_Appeal[];
extern const u8 gText_Jam[];
extern const u8 gText_OTSlash[];
extern const u8 gText_IDNumber2[];
extern const u8 gText_XNature[];
extern const u8 gText_XNatureHatchedAtYZ[];
extern const u8 gText_XNatureHatchedSomewhereAt[];
extern const u8 gText_XNatureMetAtYZ[];
extern const u8 gText_XNatureMetSomewhereAt[];
extern const u8 gText_XNatureFatefulEncounter[];
extern const u8 gText_XNatureProbablyMetAt[];
extern const u8 gText_XNatureObtainedInTrade[];
extern const u8 gText_EmptyString5[];
extern const u8 gText_EggWillTakeALongTime[];
extern const u8 gText_EggAboutToHatch[];
extern const u8 gText_EggWillHatchSoon[];
extern const u8 gText_EggWillTakeSomeTime[];
extern const u8 gText_PeculiarEggNicePlace[];
extern const u8 gText_PeculiarEggTrade[];
extern const u8 gText_EggFromTraveler[];
extern const u8 gText_EggFromHotSprings[];
extern const u8 gText_OddEggFoundByCouple[];
extern const u8 gText_None[];
extern const u8 gText_RibbonsVar1[];
extern const u8 gText_OneDash[];
extern const u8 gText_TwoDashes[];

extern const u8 *const gBagMenu_ReturnToStrings[];
extern const u8 *const gPyramidBagMenu_ReturnToStrings[];

extern const u8 gText_NumPlayerLink[];
extern const u8 gText_ConfirmLinkWhenPlayersReady[];
extern const u8 gText_ConfirmStartLinkWithXPlayers[];
extern const u8 gText_AwaitingLinkup[];
extern const u8 gText_PleaseWaitForLink[];
extern const u8 gText_BronzeCard[];
extern const u8 gText_CopperCard[];
extern const u8 gText_SilverCard[];
extern const u8 gText_GoldCard[];

extern const u8 gText_CanIHelpWithAnythingElse[];
extern const u8 gText_AnythingElseICanHelp[];
extern const u8 gText_QuitShopping[];
extern const u8 gText_PokedollarVar1[];
extern const u8 gText_YouDontHaveMoney[];
extern const u8 gText_Var1CertainlyHowMany2[];
extern const u8 gText_Var1CertainlyHowMany[];
extern const u8 gText_Var1IsItThatllBeVar2[];
extern const u8 gText_YouWantedVar1ThatllBeVar2[];
extern const u8 gText_InBagVar1[];
extern const u8 gText_Var1AndYouWantedVar2[];
extern const u8 gText_HereYouGoThankYou[];
extern const u8 gText_NoMoreRoomForThis[];
extern const u8 gText_ThankYouIllSendItHome[];
extern const u8 gText_ThanksIllSendItHome[];
extern const u8 gText_SpaceForVar1Full[];
extern const u8 gText_ThrowInPremierBall[];
extern const u8 gText_ThrowInPremierBalls[];
extern const u8 gText_ShopBuy[];
extern const u8 gText_ShopSell[];
extern const u8 gText_ShopQuit[];
extern const u8 gText_ThatItemIsSoldOut[];
extern const u8 gText_SoldOut[];

extern const u8 gText_OhABite[];
extern const u8 gText_PokemonOnHook[];
extern const u8 gText_NotEvenANibble[];
extern const u8 gText_ItGotAway[];

extern const u8 gText_HallOfFame[];
extern const u8 gText_LogOff[];
extern const u8 gText_LanettesPC[];
extern const u8 gText_SomeonesPC[];
extern const u8 gText_PlayersPC[];
extern const u8 gText_WhichPCShouldBeAccessed[];

extern const u8 gText_Info2[];
extern const u8 gText_Decoration2[];
extern const u8 gText_PackUp[];
extern const u8 gText_Registry[];
extern const u8 gText_Information[];
extern const u8 gText_Yes[];
extern const u8 gText_No[];


extern const u8 gText_SearchForPkmnBasedOnParameters[];
extern const u8 gText_SwitchPokedexListings[];
extern const u8 gText_ReturnToPokedex[];
extern const u8 gText_SelectPokedexMode[];
extern const u8 gText_SelectPokedexListingMode[];
extern const u8 gText_ListByFirstLetter[];
extern const u8 gText_ListByBodyColor[];
extern const u8 gText_ListByType[];
extern const u8 gText_ExecuteSearchSwitch[];
extern const u8 gText_DexHoennTitle[];
extern const u8 gText_DexNatTitle[];
extern const u8 gText_DexSortNumericalTitle[];
extern const u8 gText_DexSortAtoZTitle[];
extern const u8 gText_DexSortHeaviestTitle[];
extern const u8 gText_DexSortLightestTitle[];
extern const u8 gText_DexSortTallestTitle[];
extern const u8 gText_DexSortSmallestTitle[];
extern const u8 gText_DexSearchAlphaABC[];
extern const u8 gText_DexSearchAlphaDEF[];
extern const u8 gText_DexSearchAlphaGHI[];
extern const u8 gText_DexSearchAlphaJKL[];
extern const u8 gText_DexSearchAlphaMNO[];
extern const u8 gText_DexSearchAlphaPQR[];
extern const u8 gText_DexSearchAlphaSTU[];
extern const u8 gText_DexSearchAlphaVWX[];
extern const u8 gText_DexSearchAlphaYZ[];
extern const u8 gText_DexSearchColorRed[];
extern const u8 gText_DexSearchColorBlue[];
extern const u8 gText_DexSearchColorYellow[];
extern const u8 gText_DexSearchColorGreen[];
extern const u8 gText_DexSearchColorBlack[];
extern const u8 gText_DexSearchColorBrown[];
extern const u8 gText_DexSearchColorPurple[];
extern const u8 gText_DexSearchColorGray[];
extern const u8 gText_DexSearchColorWhite[];
extern const u8 gText_DexSearchColorPink[];
extern const u8 gText_DexHoennDescription[];
extern const u8 gText_DexNatDescription[];
extern const u8 gText_DexSortNumericalDescription[];
extern const u8 gText_DexSortAtoZDescription[];
extern const u8 gText_DexSortHeaviestDescription[];
extern const u8 gText_DexSortLightestDescription[];
extern const u8 gText_DexSortTallestDescription[];
extern const u8 gText_DexSortSmallestDescription[];
extern const u8 gText_DexEmptyString[];
extern const u8 gText_DexSearchDontSpecify[];
extern const u8 gText_DexSearchTypeNone[];

extern const u8 gText_LilycoveCity[];
extern const u8 gText_RedShard[];
extern const u8 gText_YellowShard[];
extern const u8 gText_BlueShard[];
extern const u8 gText_GreenShard[];
extern const u8 gText_Opponent[];
extern const u8 gText_Tourney_Tree[];
extern const u8 gText_ReadyToStart[];
extern const u8 gText_Record2[];
extern const u8 gText_Rest[];
extern const u8 gText_Retire[];
extern const u8 gText_TradeCenter[];
extern const u8 gText_Colosseum[];
extern const u8 gText_RecordCorner[];
extern const u8 gText_BerryCrush3[];
extern const u8 gText_Blank[];
extern const u8 gText_BattleRules[];
extern const u8 gText_JudgeMind[];
extern const u8 gText_JudgeSkill[];
extern const u8 gText_JudgeBody[];
extern const u8 gText_BasicRules[];
extern const u8 gText_SwapPartners[];
extern const u8 gText_SwapNumber[];
extern const u8 gText_SwapNotes[];
extern const u8 gText_GoOn[];
extern const u8 gText_BattlePokemon[];
extern const u8 gText_NormalTagMatch[];
extern const u8 gText_VarietyTagMatch[];
extern const u8 gText_UniqueTagMatch[];
extern const u8 gText_ExpertTagMatch[];
extern const u8 gText_TimeBoard[];
extern const u8 gText_TimeCleared[];
extern const u8 gText_XMinYDotZSec[];
extern const u8 gText_TrainerHill1F[];
extern const u8 gText_TrainerHill2F[];
extern const u8 gText_TrainerHill3F[];
extern const u8 gText_TrainerHill4F[];


extern const u8 CableClub_Text_TradeUsingLinkCable[];
extern const u8 CableClub_Text_BattleUsingLinkCable[];
extern const u8 CableClub_Text_RecordCornerUsingLinkCable[];
extern const u8 CableClub_Text_CancelSelectedItem[];
extern const u8 CableClub_Text_YouMayTradeHere[];
extern const u8 CableClub_Text_YouMayBattleHere[];
extern const u8 CableClub_Text_CanMixRecords[];
extern const u8 CableClub_Text_CanMakeBerryPowder[];


extern const u8 gText_WinStreak[];
extern const u8 gText_Record[];
extern const u8 gText_Current[];
extern const u8 gText_RoomsCleared[];
extern const u8 gText_Prev[];
extern const u8 gText_SingleBattleRoomResults[];
extern const u8 gText_DoubleBattleRoomResults[];
extern const u8 gText_MultiBattleRoomResults[];
extern const u8 gText_LinkMultiBattleRoomResults[];
extern const u8 gText_Lv502[];
extern const u8 gText_OpenLv[];
extern const u8 gText_RentalSwap[];
extern const u8 gText_ClearStreak[];
extern const u8 gText_Total[];
extern const u8 gText_Championships[];
extern const u8 gText_SingleBattleTourneyResults[];
extern const u8 gText_DoubleBattleTourneyResults[];
extern const u8 gText_SingleBattleHallResults[];
extern const u8 gText_DoubleBattleHallResults[];
extern const u8 gText_BattleChoiceResults[];
extern const u8 gText_TimesCleared[];
extern const u8 gText_KOsInARow[];
extern const u8 gText_SetKOTourneyResults[];
extern const u8 gText_TimesVar1[];
extern const u8 gText_BattleSwapSingleResults[];
extern const u8 gText_BattleSwapDoubleResults[];
extern const u8 gText_FloorsCleared[];
extern const u8 gText_BattleQuestResults[];
extern const u8 gText_LinkContestResults[];
extern const u8 gText_4th[];
extern const u8 gText_3rd[];
extern const u8 gText_2nd[];
extern const u8 gText_1st[];
extern const u8 gText_SpaceAndSpace[];
extern const u8 gText_CommaSpace[];
extern const u8 gText_NewLine[];
extern const u8 gText_LineBreak[];
extern const u8 gText_Space[];
extern const u8 gText_Space2[];
extern const u8 gText_Are[];
extern const u8 gText_Are2[];
extern const u8 gText_123Dot[][3];


extern const u8 gText_FacilitySingle[];
extern const u8 gText_FacilityDouble[];
extern const u8 gText_FacilityMulti[];
extern const u8 gText_FacilityLink[];
extern const u8 gText_Facility[];

extern const u8 gText_RecordsLv50[];
extern const u8 gText_RecordsOpenLevel[];
extern const u8 gText_FrontierFacilityWinStreak[];
extern const u8 gText_FrontierFacilityClearStreak[];
extern const u8 gText_FrontierFacilityRoomsCleared[];
extern const u8 gText_FrontierFacilityKOsStreak[];
extern const u8 gText_FrontierFacilityFloorsCleared[];
extern const u8 gText_FrontierFacilityTotalCaughtSpeciesBanned[];
extern const u8 gText_FrontierFacilityIncluding[];
extern const u8 gText_FrontierFacilityAreInelegible[];


extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice1Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice2Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice3Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice4Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice5Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice6Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice7Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice8Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice9Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice10Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice11Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice12Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice13Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice14Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice15Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Intro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Mon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Accept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_Apprentice16Reject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LassReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_YoungsterReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HikerReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BeautyReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_FishermanReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_LadyReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugCatcherReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RichBoyReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BlackBeltReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_HexManiacReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RunningTriathleteMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BattleGirlReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CyclingTriathleteMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_TuberMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GuitaristReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_GentlemanReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ExpertFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_DragonTamerReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BirdKeeperReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_NinjaBoyReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_ParasolLadyReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_BugManiacReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SailorReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CollectorReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnRangerFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_AromaLadyReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_RuinManiacReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CoolTrainerFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokemaniacReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_KindlerReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_CamperReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PicnickerReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PsychicFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SchoolKidFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PkmnBreederFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_PokefanFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteMReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmingTriathleteFReject[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMIntro[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon1[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMMon2Ask[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMAccept[];
extern const u8 BattleFrontier_BattleTowerMultiPartnerRoom_Text_SwimmerMReject[];


extern const u8 BattleDome_Text_Potential1[];
extern const u8 BattleDome_Text_Potential2[];
extern const u8 BattleDome_Text_Potential3[];
extern const u8 BattleDome_Text_Potential4[];
extern const u8 BattleDome_Text_Potential5[];
extern const u8 BattleDome_Text_Potential6[];
extern const u8 BattleDome_Text_Potential7[];
extern const u8 BattleDome_Text_Potential8[];
extern const u8 BattleDome_Text_Potential9[];
extern const u8 BattleDome_Text_Potential10[];
extern const u8 BattleDome_Text_Potential11[];
extern const u8 BattleDome_Text_Potential12[];
extern const u8 BattleDome_Text_Potential13[];
extern const u8 BattleDome_Text_Potential14[];
extern const u8 BattleDome_Text_Potential15[];
extern const u8 BattleDome_Text_Potential16[];
extern const u8 BattleDome_Text_PotentialDomeAceTucker[];
extern const u8 BattleDome_Text_StyleRiskDisaster[];
extern const u8 BattleDome_Text_StyleEndureLongBattles[];
extern const u8 BattleDome_Text_StyleVariesTactics[];
extern const u8 BattleDome_Text_StyleToughWinningPattern[];
extern const u8 BattleDome_Text_StyleUsesVeryRareMove[];
extern const u8 BattleDome_Text_StyleUsesStartlingMoves[];
extern const u8 BattleDome_Text_StyleConstantlyWatchesHP[];
extern const u8 BattleDome_Text_StyleStoresAndLoosesPower[];
extern const u8 BattleDome_Text_StyleEnfeeblesFoes[];
extern const u8 BattleDome_Text_StylePrefersLuckTactics[];
extern const u8 BattleDome_Text_StyleRegalAtmosphere[];
extern const u8 BattleDome_Text_StylePowerfulLowPPMoves[];
extern const u8 BattleDome_Text_StyleEnfeebleThenAttack[];
extern const u8 BattleDome_Text_StyleBattlesWhileEnduring[];
extern const u8 BattleDome_Text_StyleUpsetsFoesEmotionally[];
extern const u8 BattleDome_Text_StyleStrongAndStraightforward[];
extern const u8 BattleDome_Text_StyleAggressivelyStrongMoves[];
extern const u8 BattleDome_Text_StyleCleverlyDodgesAttacks[];
extern const u8 BattleDome_Text_StyleUsesUpsettingMoves[];
extern const u8 BattleDome_Text_StyleUsesPopularMoves[];
extern const u8 BattleDome_Text_StyleHasPowerfulComboMoves[];
extern const u8 BattleDome_Text_StyleUsesHighProbabilityMoves[];
extern const u8 BattleDome_Text_StyleAggressivelySpectacularMoves[];
extern const u8 BattleDome_Text_StyleEmphasizesOffenseOverDefense[];
extern const u8 BattleDome_Text_StyleEmphasizesDefenseOverOffense[];
extern const u8 BattleDome_Text_StyleAttacksQuicklyStrongMoves[];
extern const u8 BattleDome_Text_StyleUsesAddedEffectMoves[];
extern const u8 BattleDome_Text_StyleUsesBalancedMixOfMoves[];
extern const u8 BattleDome_Text_StyleSampleMessage1[];
extern const u8 BattleDome_Text_StyleSampleMessage2[];
extern const u8 BattleDome_Text_StyleSampleMessage3[];
extern const u8 BattleDome_Text_StyleSampleMessage4[];
extern const u8 BattleDome_Text_EmphasizesHPAndAtk[];
extern const u8 BattleDome_Text_EmphasizesHPAndDef[];
extern const u8 BattleDome_Text_EmphasizesHPAndSpeed[];
extern const u8 BattleDome_Text_EmphasizesHPAndSpAtk[];
extern const u8 BattleDome_Text_EmphasizesHPAndSpDef[];
extern const u8 BattleDome_Text_EmphasizesAtkAndDef[];
extern const u8 BattleDome_Text_EmphasizesAtkAndSpeed[];
extern const u8 BattleDome_Text_EmphasizesAtkAndSpAtk[];
extern const u8 BattleDome_Text_EmphasizesAtkAndSpDef[];
extern const u8 BattleDome_Text_EmphasizesDefAndSpeed[];
extern const u8 BattleDome_Text_EmphasizesDefAndSpAtk[];
extern const u8 BattleDome_Text_EmphasizesDefAndSpDef[];
extern const u8 BattleDome_Text_EmphasizesSpeedAndSpAtk[];
extern const u8 BattleDome_Text_EmphasizesSpeedAndSpDef[];
extern const u8 BattleDome_Text_EmphasizesSpAtkAndSpDef[];
extern const u8 BattleDome_Text_EmphasizesHP[];
extern const u8 BattleDome_Text_EmphasizesAtk[];
extern const u8 BattleDome_Text_EmphasizesDef[];
extern const u8 BattleDome_Text_EmphasizesSpeed[];
extern const u8 BattleDome_Text_EmphasizesSpAtk[];
extern const u8 BattleDome_Text_EmphasizesSpDef[];
extern const u8 BattleDome_Text_NeglectsHPAndAtk[];
extern const u8 BattleDome_Text_NeglectsHPAndDef[];
extern const u8 BattleDome_Text_NeglectsHPAndSpeed[];
extern const u8 BattleDome_Text_NeglectsHPAndSpAtk[];
extern const u8 BattleDome_Text_NeglectsHPAndSpDef[];
extern const u8 BattleDome_Text_NeglectsAtkAndDef[];
extern const u8 BattleDome_Text_NeglectsAtkAndSpeed[];
extern const u8 BattleDome_Text_NeglectsAtkAndSpAtk[];
extern const u8 BattleDome_Text_NeglectsAtkAndSpDef[];
extern const u8 BattleDome_Text_NeglectsDefAndSpeed[];
extern const u8 BattleDome_Text_NeglectsDefAndSpAtk[];
extern const u8 BattleDome_Text_NeglectsDefAndSpDef[];
extern const u8 BattleDome_Text_NeglectsSpeedAndSpAtk[];
extern const u8 BattleDome_Text_NeglectsSpeedAndSpDef[];
extern const u8 BattleDome_Text_NeglectsSpAtkAndSpDef[];
extern const u8 BattleDome_Text_NeglectsHP[];
extern const u8 BattleDome_Text_NeglectsAtk[];
extern const u8 BattleDome_Text_NeglectsDef[];
extern const u8 BattleDome_Text_NeglectsSpeed[];
extern const u8 BattleDome_Text_NeglectsSpAtk[];
extern const u8 BattleDome_Text_NeglectsSpDef[];
extern const u8 BattleDome_Text_RaisesMonsWellBalanced[];
extern const u8 BattleDome_Text_Round1Match1[];
extern const u8 BattleDome_Text_Round1Match2[];
extern const u8 BattleDome_Text_Round1Match3[];
extern const u8 BattleDome_Text_Round1Match4[];
extern const u8 BattleDome_Text_Round1Match5[];
extern const u8 BattleDome_Text_Round1Match6[];
extern const u8 BattleDome_Text_Round1Match7[];
extern const u8 BattleDome_Text_Round1Match8[];
extern const u8 BattleDome_Text_Round2Match1[];
extern const u8 BattleDome_Text_Round2Match2[];
extern const u8 BattleDome_Text_Round2Match3[];
extern const u8 BattleDome_Text_Round2Match4[];
extern const u8 BattleDome_Text_SemifinalMatch1[];
extern const u8 BattleDome_Text_SemifinalMatch2[];
extern const u8 BattleDome_Text_FinalMatch[];
extern const u8 BattleDome_Text_LetTheBattleBegin[];
extern const u8 BattleDome_Text_TrainerWonUsingMove[];
extern const u8 BattleDome_Text_TrainerBecameChamp[];
extern const u8 BattleDome_Text_TrainerWonByDefault[];
extern const u8 BattleDome_Text_TrainerWonOutrightByDefault[];
extern const u8 BattleDome_Text_TrainerWonNoMoves[];
extern const u8 BattleDome_Text_TrainerWonOutrightNoMoves[];


extern const u8 BattlePyramid_Text_ExitHintUp1[];
extern const u8 BattlePyramid_Text_ExitHintLeft1[];
extern const u8 BattlePyramid_Text_ExitHintRight1[];
extern const u8 BattlePyramid_Text_ExitHintDown1[];
extern const u8 BattlePyramid_Text_ZeroItemsRemaining1[];
extern const u8 BattlePyramid_Text_OneItemRemaining1[];
extern const u8 BattlePyramid_Text_TwoItemsRemaining1[];
extern const u8 BattlePyramid_Text_ThreeItemsRemaining1[];
extern const u8 BattlePyramid_Text_FourItemsRemaining1[];
extern const u8 BattlePyramid_Text_FiveItemsRemaining1[];
extern const u8 BattlePyramid_Text_SixItemsRemaining1[];
extern const u8 BattlePyramid_Text_SevenItemsRemaining1[];
extern const u8 BattlePyramid_Text_EightItemsRemaining1[];
extern const u8 BattlePyramid_Text_ZeroTrainersRemaining1[];
extern const u8 BattlePyramid_Text_OneTrainersRemaining1[];
extern const u8 BattlePyramid_Text_TwoTrainersRemaining1[];
extern const u8 BattlePyramid_Text_ThreeTrainersRemaining1[];
extern const u8 BattlePyramid_Text_FourTrainersRemaining1[];
extern const u8 BattlePyramid_Text_FiveTrainersRemaining1[];
extern const u8 BattlePyramid_Text_SixTrainersRemaining1[];
extern const u8 BattlePyramid_Text_SevenTrainersRemaining1[];
extern const u8 BattlePyramid_Text_ExitHintUp2[];
extern const u8 BattlePyramid_Text_ExitHintLeft2[];
extern const u8 BattlePyramid_Text_ExitHintRight2[];
extern const u8 BattlePyramid_Text_ExitHintDown2[];
extern const u8 BattlePyramid_Text_ZeroItemsRemaining2[];
extern const u8 BattlePyramid_Text_OneItemRemaining2[];
extern const u8 BattlePyramid_Text_TwoItemsRemaining2[];
extern const u8 BattlePyramid_Text_ThreeItemsRemaining2[];
extern const u8 BattlePyramid_Text_FourItemsRemaining2[];
extern const u8 BattlePyramid_Text_FiveItemsRemaining2[];
extern const u8 BattlePyramid_Text_SixItemsRemaining2[];
extern const u8 BattlePyramid_Text_SevenItemsRemaining2[];
extern const u8 BattlePyramid_Text_EightItemsRemaining2[];
extern const u8 BattlePyramid_Text_ZeroTrainersRemaining2[];
extern const u8 BattlePyramid_Text_OneTrainersRemaining2[];
extern const u8 BattlePyramid_Text_TwoTrainersRemaining2[];
extern const u8 BattlePyramid_Text_ThreeTrainersRemaining2[];
extern const u8 BattlePyramid_Text_FourTrainersRemaining2[];
extern const u8 BattlePyramid_Text_FiveTrainersRemaining2[];
extern const u8 BattlePyramid_Text_SixTrainersRemaining2[];
extern const u8 BattlePyramid_Text_SevenTrainersRemaining2[];
extern const u8 BattlePyramid_Text_ExitHintUp3[];
extern const u8 BattlePyramid_Text_ExitHintLeft3[];
extern const u8 BattlePyramid_Text_ExitHintRight3[];
extern const u8 BattlePyramid_Text_ExitHintDown3[];
extern const u8 BattlePyramid_Text_ZeroItemsRemaining3[];
extern const u8 BattlePyramid_Text_OneItemRemaining3[];
extern const u8 BattlePyramid_Text_TwoItemsRemaining3[];
extern const u8 BattlePyramid_Text_ThreeItemsRemaining3[];
extern const u8 BattlePyramid_Text_FourItemsRemaining3[];
extern const u8 BattlePyramid_Text_FiveItemsRemaining3[];
extern const u8 BattlePyramid_Text_SixItemsRemaining3[];
extern const u8 BattlePyramid_Text_SevenItemsRemaining3[];
extern const u8 BattlePyramid_Text_EightItemsRemaining3[];
extern const u8 BattlePyramid_Text_ZeroTrainersRemaining3[];
extern const u8 BattlePyramid_Text_OneTrainersRemaining3[];
extern const u8 BattlePyramid_Text_TwoTrainersRemaining3[];
extern const u8 BattlePyramid_Text_ThreeTrainersRemaining3[];
extern const u8 BattlePyramid_Text_FourTrainersRemaining3[];
extern const u8 BattlePyramid_Text_FiveTrainersRemaining3[];
extern const u8 BattlePyramid_Text_SixTrainersRemaining3[];
extern const u8 BattlePyramid_Text_SevenTrainersRemaining3[];
extern const u8 BattlePyramid_Text_ExitHintUp4[];
extern const u8 BattlePyramid_Text_ExitHintLeft4[];
extern const u8 BattlePyramid_Text_ExitHintRight4[];
extern const u8 BattlePyramid_Text_ExitHintDown4[];
extern const u8 BattlePyramid_Text_ZeroItemsRemaining4[];
extern const u8 BattlePyramid_Text_OneItemRemaining4[];
extern const u8 BattlePyramid_Text_TwoItemsRemaining4[];
extern const u8 BattlePyramid_Text_ThreeItemsRemaining4[];
extern const u8 BattlePyramid_Text_FourItemsRemaining4[];
extern const u8 BattlePyramid_Text_FiveItemsRemaining4[];
extern const u8 BattlePyramid_Text_SixItemsRemaining4[];
extern const u8 BattlePyramid_Text_SevenItemsRemaining4[];
extern const u8 BattlePyramid_Text_EightItemsRemaining4[];
extern const u8 BattlePyramid_Text_ZeroTrainersRemaining4[];
extern const u8 BattlePyramid_Text_OneTrainersRemaining4[];
extern const u8 BattlePyramid_Text_TwoTrainersRemaining4[];
extern const u8 BattlePyramid_Text_ThreeTrainersRemaining4[];
extern const u8 BattlePyramid_Text_FourTrainersRemaining4[];
extern const u8 BattlePyramid_Text_FiveTrainersRemaining4[];
extern const u8 BattlePyramid_Text_SixTrainersRemaining4[];
extern const u8 BattlePyramid_Text_SevenTrainersRemaining4[];
extern const u8 BattlePyramid_Text_ExitHintUp5[];
extern const u8 BattlePyramid_Text_ExitHintLeft5[];
extern const u8 BattlePyramid_Text_ExitHintRight5[];
extern const u8 BattlePyramid_Text_ExitHintDown5[];
extern const u8 BattlePyramid_Text_ZeroItemsRemaining5[];
extern const u8 BattlePyramid_Text_OneItemRemaining5[];
extern const u8 BattlePyramid_Text_TwoItemsRemaining5[];
extern const u8 BattlePyramid_Text_ThreeItemsRemaining5[];
extern const u8 BattlePyramid_Text_FourItemsRemaining5[];
extern const u8 BattlePyramid_Text_FiveItemsRemaining5[];
extern const u8 BattlePyramid_Text_SixItemsRemaining5[];
extern const u8 BattlePyramid_Text_SevenItemsRemaining5[];
extern const u8 BattlePyramid_Text_EightItemsRemaining5[];
extern const u8 BattlePyramid_Text_ZeroTrainersRemaining5[];
extern const u8 BattlePyramid_Text_OneTrainersRemaining5[];
extern const u8 BattlePyramid_Text_TwoTrainersRemaining5[];
extern const u8 BattlePyramid_Text_ThreeTrainersRemaining5[];
extern const u8 BattlePyramid_Text_FourTrainersRemaining5[];
extern const u8 BattlePyramid_Text_FiveTrainersRemaining5[];
extern const u8 BattlePyramid_Text_SixTrainersRemaining5[];
extern const u8 BattlePyramid_Text_SevenTrainersRemaining5[];
extern const u8 BattlePyramid_Text_ExitHintUp6[];
extern const u8 BattlePyramid_Text_ExitHintLeft6[];
extern const u8 BattlePyramid_Text_ExitHintRight6[];
extern const u8 BattlePyramid_Text_ExitHintDown6[];
extern const u8 BattlePyramid_Text_ZeroItemsRemaining6[];
extern const u8 BattlePyramid_Text_OneItemRemaining6[];
extern const u8 BattlePyramid_Text_TwoItemsRemaining6[];
extern const u8 BattlePyramid_Text_ThreeItemsRemaining6[];
extern const u8 BattlePyramid_Text_FourItemsRemaining6[];
extern const u8 BattlePyramid_Text_FiveItemsRemaining6[];
extern const u8 BattlePyramid_Text_SixItemsRemaining6[];
extern const u8 BattlePyramid_Text_SevenItemsRemaining6[];
extern const u8 BattlePyramid_Text_EightItemsRemaining6[];
extern const u8 BattlePyramid_Text_ZeroTrainersRemaining6[];
extern const u8 BattlePyramid_Text_OneTrainersRemaining6[];
extern const u8 BattlePyramid_Text_TwoTrainersRemaining6[];
extern const u8 BattlePyramid_Text_ThreeTrainersRemaining6[];
extern const u8 BattlePyramid_Text_FourTrainersRemaining6[];
extern const u8 BattlePyramid_Text_FiveTrainersRemaining6[];
extern const u8 BattlePyramid_Text_SixTrainersRemaining6[];
extern const u8 BattlePyramid_Text_SevenTrainersRemaining6[];


extern const u8 gText_YourPartysFull[];


extern const u8 gText_LinkStandby3[];
extern const u8 BattleFrontier_BattleTowerBattleRoom_Text_RecordCouldntBeSaved[];
extern const u8 gText_Poison[];
extern const u8 gText_Sleep[];
extern const u8 gText_Paralysis[];
extern const u8 gText_Burn[];
extern const u8 gText_Ice[];
extern const u8 gText_Confusion[];
extern const u8 gText_Love[];


extern const u8 gText_PkmnTransferredSomeonesPCBoxFull[];
extern const u8 gText_PkmnTransferredLanettesPCBoxFull[];
extern const u8 gText_PkmnTransferredSomeonesPC[];
extern const u8 gText_PkmnTransferredLanettesPC[];
extern const u8 gText_PkmnSentToPCAfterCatch[];


extern const u8 gText_LeagueChamp[];
extern const u8 gText_HOFNumber[];
extern const u8 gText_PickNextCancel[];
extern const u8 gText_PickCancel[];
extern const u8 gText_AButtonExit[];
extern const u8 gText_HOFCorrupted[];
extern const u8 gText_WelcomeToHOF[];
extern const u8 gText_Number[];
extern const u8 gText_Level[];
extern const u8 gText_IDNumber[];
extern const u8 gText_Name[];
extern const u8 gText_Time[];


extern const u8 gText_MaleSymbol4[];
extern const u8 gText_FemaleSymbol4[];
extern const u8 gText_GenderlessSymbol[];
extern const u8 gText_NewLine2[];
extern const u8 gText_Exit4[];
extern const u8 gText_Lv[];
extern const u8 gExpandedPlaceholder_Empty[];
extern const u8 gText_Exit[];
extern const u8 gDaycareText_GetAlongVeryWell[];
extern const u8 gDaycareText_GetAlong[];
extern const u8 gDaycareText_DontLikeOther[];
extern const u8 gDaycareText_PlayOther[];


extern const u8 gText_ChoosePokemon[];
extern const u8 gText_ChoosePokemonCancel[];
extern const u8 gText_ChoosePokemonConfirm[];
extern const u8 gText_SendWhichMonToPC[];
extern const u8 gText_MoveItemWhere[];
extern const u8 gText_XsYAnd[];
extern const u8 gText_XsYWereSwapped[];
extern const u8 gText_MoveToWhere[];
extern const u8 gText_TeachWhichPokemon[];
extern const u8 gText_UseOnWhichPokemon[];
extern const u8 gText_GiveToWhichPokemon[];
extern const u8 gText_NothingToCut[];
extern const u8 gText_CantSurfHere[];
extern const u8 gText_AlreadySurfing[];
extern const u8 gText_CurrentIsTooFast[];
extern const u8 gText_EnjoyCycling[];
extern const u8 gText_InUseAlready_PM[];
extern const u8 gText_CantUseHere[];
extern const u8 gText_NoPokemonForBattle[];
extern const u8 gText_ChoosePokemon2[];
extern const u8 gText_NotEnoughHp[];
extern const u8 gText_PokemonAreNeeded[];
extern const u8 gText_PokemonCantBeSame[];
extern const u8 gText_NoIdenticalHoldItems[];
extern const u8 gText_DoWhatWithPokemon[];
extern const u8 gText_RestoreWhichMove[];
extern const u8 gText_BoostPp[];
extern const u8 gText_DoWhatWithItem[];
extern const u8 gText_DoWhatWithMail[];
extern const u8 gText_AlreadyHoldingOne[];
extern const u8 gText_WhichAppliance[];
extern const u8 gText_NoUse[];
extern const u8 gText_Able[];
extern const u8 gText_First_PM[];
extern const u8 gText_Second_PM[];
extern const u8 gText_Third_PM[];
extern const u8 gText_Fourth[];
extern const u8 gText_Able2[];
extern const u8 gText_NotAble[];
extern const u8 gText_Able3[];
extern const u8 gText_NotAble2[];
extern const u8 gText_Learned[];
extern const u8 gText_Have[];
extern const u8 gText_DontHave[];
extern const u8 gText_Cancel2[];
extern const u8 gText_Register[];
extern const u8 gText_NotPkmnOtherTrainerWants[];
extern const u8 gText_ThatIsntAnEgg[];
extern const u8 gText_OtherTrainersPkmnCantBeTraded[];
extern const u8 gText_OtherTrainerCantAcceptPkmn[];
extern const u8 gText_CantTradeWithTrainer[];


extern const u8 gText_XWillBeSentToY[];
extern const u8 gText_ByeByeVar1[];
extern const u8 gText_XSentOverY[];
extern const u8 gText_TakeGoodCareOfX[];
extern const u8 gText_CommunicationStandby5[];


extern const u8 MatchCall_WildBattleText1[];
extern const u8 MatchCall_WildBattleText2[];
extern const u8 MatchCall_WildBattleText3[];
extern const u8 MatchCall_WildBattleText4[];
extern const u8 MatchCall_WildBattleText5[];
extern const u8 MatchCall_WildBattleText6[];
extern const u8 MatchCall_WildBattleText7[];
extern const u8 MatchCall_WildBattleText8[];
extern const u8 MatchCall_WildBattleText9[];
extern const u8 MatchCall_WildBattleText10[];
extern const u8 MatchCall_WildBattleText11[];
extern const u8 MatchCall_WildBattleText12[];
extern const u8 MatchCall_WildBattleText13[];
extern const u8 MatchCall_WildBattleText14[];
extern const u8 MatchCall_WildBattleText15[];
extern const u8 MatchCall_NegativeBattleText1[];
extern const u8 MatchCall_NegativeBattleText2[];
extern const u8 MatchCall_NegativeBattleText3[];
extern const u8 MatchCall_NegativeBattleText4[];
extern const u8 MatchCall_NegativeBattleText5[];
extern const u8 MatchCall_NegativeBattleText6[];
extern const u8 MatchCall_NegativeBattleText7[];
extern const u8 MatchCall_NegativeBattleText8[];
extern const u8 MatchCall_NegativeBattleText9[];
extern const u8 MatchCall_NegativeBattleText10[];
extern const u8 MatchCall_NegativeBattleText11[];
extern const u8 MatchCall_NegativeBattleText12[];
extern const u8 MatchCall_NegativeBattleText13[];
extern const u8 MatchCall_NegativeBattleText14[];
extern const u8 MatchCall_PositiveBattleText1[];
extern const u8 MatchCall_PositiveBattleText2[];
extern const u8 MatchCall_PositiveBattleText3[];
extern const u8 MatchCall_PositiveBattleText4[];
extern const u8 MatchCall_PositiveBattleText5[];
extern const u8 MatchCall_PositiveBattleText6[];
extern const u8 MatchCall_PositiveBattleText7[];
extern const u8 MatchCall_PositiveBattleText8[];
extern const u8 MatchCall_PositiveBattleText9[];
extern const u8 MatchCall_PositiveBattleText10[];
extern const u8 MatchCall_PositiveBattleText11[];
extern const u8 MatchCall_PositiveBattleText12[];
extern const u8 MatchCall_PositiveBattleText13[];
extern const u8 MatchCall_PositiveBattleText14[];
extern const u8 MatchCall_SameRouteBattleRequestText1[];
extern const u8 MatchCall_SameRouteBattleRequestText2[];
extern const u8 MatchCall_SameRouteBattleRequestText3[];
extern const u8 MatchCall_SameRouteBattleRequestText4[];
extern const u8 MatchCall_SameRouteBattleRequestText5[];
extern const u8 MatchCall_SameRouteBattleRequestText6[];
extern const u8 MatchCall_SameRouteBattleRequestText7[];
extern const u8 MatchCall_SameRouteBattleRequestText8[];
extern const u8 MatchCall_SameRouteBattleRequestText9[];
extern const u8 MatchCall_SameRouteBattleRequestText10[];
extern const u8 MatchCall_SameRouteBattleRequestText11[];
extern const u8 MatchCall_SameRouteBattleRequestText12[];
extern const u8 MatchCall_SameRouteBattleRequestText13[];
extern const u8 MatchCall_SameRouteBattleRequestText14[];
extern const u8 MatchCall_DifferentRouteBattleRequestText1[];
extern const u8 MatchCall_DifferentRouteBattleRequestText2[];
extern const u8 MatchCall_DifferentRouteBattleRequestText3[];
extern const u8 MatchCall_DifferentRouteBattleRequestText4[];
extern const u8 MatchCall_DifferentRouteBattleRequestText5[];
extern const u8 MatchCall_DifferentRouteBattleRequestText6[];
extern const u8 MatchCall_DifferentRouteBattleRequestText7[];
extern const u8 MatchCall_DifferentRouteBattleRequestText8[];
extern const u8 MatchCall_DifferentRouteBattleRequestText9[];
extern const u8 MatchCall_DifferentRouteBattleRequestText10[];
extern const u8 MatchCall_DifferentRouteBattleRequestText11[];
extern const u8 MatchCall_DifferentRouteBattleRequestText12[];
extern const u8 MatchCall_DifferentRouteBattleRequestText13[];
extern const u8 MatchCall_DifferentRouteBattleRequestText14[];
extern const u8 MatchCall_PersonalizedText1[];
extern const u8 MatchCall_PersonalizedText2[];
extern const u8 MatchCall_PersonalizedText3[];
extern const u8 MatchCall_PersonalizedText4[];
extern const u8 MatchCall_PersonalizedText5[];
extern const u8 MatchCall_PersonalizedText6[];
extern const u8 MatchCall_PersonalizedText7[];
extern const u8 MatchCall_PersonalizedText8[];
extern const u8 MatchCall_PersonalizedText9[];
extern const u8 MatchCall_PersonalizedText10[];
extern const u8 MatchCall_PersonalizedText11[];
extern const u8 MatchCall_PersonalizedText12[];
extern const u8 MatchCall_PersonalizedText13[];
extern const u8 MatchCall_PersonalizedText14[];
extern const u8 MatchCall_PersonalizedText15[];
extern const u8 MatchCall_PersonalizedText16[];
extern const u8 MatchCall_PersonalizedText17[];
extern const u8 MatchCall_PersonalizedText18[];
extern const u8 MatchCall_PersonalizedText19[];
extern const u8 MatchCall_PersonalizedText20[];
extern const u8 MatchCall_PersonalizedText21[];
extern const u8 MatchCall_PersonalizedText22[];
extern const u8 MatchCall_PersonalizedText23[];
extern const u8 MatchCall_PersonalizedText24[];
extern const u8 MatchCall_PersonalizedText25[];
extern const u8 MatchCall_PersonalizedText26[];
extern const u8 MatchCall_PersonalizedText27[];
extern const u8 MatchCall_PersonalizedText28[];
extern const u8 MatchCall_PersonalizedText29[];
extern const u8 MatchCall_PersonalizedText30[];
extern const u8 MatchCall_PersonalizedText31[];
extern const u8 MatchCall_PersonalizedText32[];
extern const u8 MatchCall_PersonalizedText33[];
extern const u8 MatchCall_PersonalizedText34[];
extern const u8 MatchCall_PersonalizedText35[];
extern const u8 MatchCall_PersonalizedText36[];
extern const u8 MatchCall_PersonalizedText37[];
extern const u8 MatchCall_PersonalizedText38[];
extern const u8 MatchCall_PersonalizedText39[];
extern const u8 MatchCall_PersonalizedText40[];
extern const u8 MatchCall_PersonalizedText41[];
extern const u8 MatchCall_PersonalizedText42[];
extern const u8 MatchCall_PersonalizedText43[];
extern const u8 MatchCall_PersonalizedText44[];
extern const u8 MatchCall_PersonalizedText45[];
extern const u8 MatchCall_PersonalizedText46[];
extern const u8 MatchCall_PersonalizedText47[];
extern const u8 MatchCall_PersonalizedText48[];
extern const u8 MatchCall_PersonalizedText49[];
extern const u8 MatchCall_PersonalizedText50[];
extern const u8 MatchCall_PersonalizedText51[];
extern const u8 MatchCall_PersonalizedText52[];
extern const u8 MatchCall_PersonalizedText53[];
extern const u8 MatchCall_PersonalizedText54[];
extern const u8 MatchCall_PersonalizedText55[];
extern const u8 MatchCall_PersonalizedText56[];
extern const u8 MatchCall_PersonalizedText57[];
extern const u8 MatchCall_PersonalizedText58[];
extern const u8 MatchCall_PersonalizedText59[];
extern const u8 MatchCall_PersonalizedText60[];
extern const u8 MatchCall_PersonalizedText61[];
extern const u8 MatchCall_PersonalizedText62[];
extern const u8 MatchCall_PersonalizedText63[];
extern const u8 MatchCall_PersonalizedText64[];
extern const u8 MatchCall_BattleFrontierStreakText1[];
extern const u8 MatchCall_BattleFrontierStreakText2[];
extern const u8 MatchCall_BattleFrontierStreakText3[];
extern const u8 MatchCall_BattleFrontierStreakText4[];
extern const u8 MatchCall_BattleFrontierStreakText5[];
extern const u8 MatchCall_BattleFrontierStreakText6[];
extern const u8 MatchCall_BattleFrontierStreakText7[];
extern const u8 MatchCall_BattleFrontierStreakText8[];
extern const u8 MatchCall_BattleFrontierStreakText9[];
extern const u8 MatchCall_BattleFrontierStreakText10[];
extern const u8 MatchCall_BattleFrontierStreakText11[];
extern const u8 MatchCall_BattleFrontierStreakText12[];
extern const u8 MatchCall_BattleFrontierStreakText13[];
extern const u8 MatchCall_BattleFrontierStreakText14[];
extern const u8 MatchCall_BattleFrontierRecordStreakText1[];
extern const u8 MatchCall_BattleFrontierRecordStreakText2[];
extern const u8 MatchCall_BattleFrontierRecordStreakText3[];
extern const u8 MatchCall_BattleFrontierRecordStreakText4[];
extern const u8 MatchCall_BattleFrontierRecordStreakText5[];
extern const u8 MatchCall_BattleFrontierRecordStreakText6[];
extern const u8 MatchCall_BattleFrontierRecordStreakText7[];
extern const u8 MatchCall_BattleFrontierRecordStreakText8[];
extern const u8 MatchCall_BattleFrontierRecordStreakText9[];
extern const u8 MatchCall_BattleFrontierRecordStreakText10[];
extern const u8 MatchCall_BattleFrontierRecordStreakText11[];
extern const u8 MatchCall_BattleFrontierRecordStreakText12[];
extern const u8 MatchCall_BattleFrontierRecordStreakText13[];
extern const u8 MatchCall_BattleFrontierRecordStreakText14[];
extern const u8 MatchCall_BattleDomeText1[];
extern const u8 MatchCall_BattleDomeText2[];
extern const u8 MatchCall_BattleDomeText3[];
extern const u8 MatchCall_BattleDomeText4[];
extern const u8 MatchCall_BattleDomeText5[];
extern const u8 MatchCall_BattleDomeText6[];
extern const u8 MatchCall_BattleDomeText7[];
extern const u8 MatchCall_BattleDomeText8[];
extern const u8 MatchCall_BattleDomeText9[];
extern const u8 MatchCall_BattleDomeText10[];
extern const u8 MatchCall_BattleDomeText11[];
extern const u8 MatchCall_BattleDomeText12[];
extern const u8 MatchCall_BattleDomeText13[];
extern const u8 MatchCall_BattleDomeText14[];
extern const u8 MatchCall_BattlePikeText1[];
extern const u8 MatchCall_BattlePikeText2[];
extern const u8 MatchCall_BattlePikeText3[];
extern const u8 MatchCall_BattlePikeText4[];
extern const u8 MatchCall_BattlePikeText5[];
extern const u8 MatchCall_BattlePikeText6[];
extern const u8 MatchCall_BattlePikeText7[];
extern const u8 MatchCall_BattlePikeText8[];
extern const u8 MatchCall_BattlePikeText9[];
extern const u8 MatchCall_BattlePikeText10[];
extern const u8 MatchCall_BattlePikeText11[];
extern const u8 MatchCall_BattlePikeText12[];
extern const u8 MatchCall_BattlePikeText13[];
extern const u8 MatchCall_BattlePikeText14[];
extern const u8 MatchCall_BattlePyramidText1[];
extern const u8 MatchCall_BattlePyramidText2[];
extern const u8 MatchCall_BattlePyramidText3[];
extern const u8 MatchCall_BattlePyramidText4[];
extern const u8 MatchCall_BattlePyramidText5[];
extern const u8 MatchCall_BattlePyramidText6[];
extern const u8 MatchCall_BattlePyramidText7[];
extern const u8 MatchCall_BattlePyramidText8[];
extern const u8 MatchCall_BattlePyramidText9[];
extern const u8 MatchCall_BattlePyramidText10[];
extern const u8 MatchCall_BattlePyramidText11[];
extern const u8 MatchCall_BattlePyramidText12[];
extern const u8 MatchCall_BattlePyramidText13[];
extern const u8 MatchCall_BattlePyramidText14[];
extern const u8 MatchCall_Text_MrStone1[];
extern const u8 MatchCall_Text_MrStone2[];
extern const u8 MatchCall_Text_MrStone3[];
extern const u8 MatchCall_Text_MrStone4[];
extern const u8 MatchCall_Text_MrStone5[];
extern const u8 MatchCall_Text_MrStone6[];
extern const u8 MatchCall_Text_MrStone7[];
extern const u8 MatchCall_Text_MrStone8[];
extern const u8 MatchCall_Text_MrStone9[];
extern const u8 MatchCall_Text_MrStone10[];
extern const u8 MatchCall_Text_MrStone11[];
extern const u8 MatchCall_Text_Norman1[];
extern const u8 MatchCall_Text_Norman2[];
extern const u8 MatchCall_Text_Norman3[];
extern const u8 MatchCall_Text_Norman4[];
extern const u8 MatchCall_Text_Norman5[];
extern const u8 MatchCall_Text_Norman6[];
extern const u8 MatchCall_Text_Norman7[];
extern const u8 MatchCall_Text_Norman8[];
extern const u8 MatchCall_Text_Norman9[];
extern const u8 MatchCall_Text_Mom1[];
extern const u8 MatchCall_Text_Mom2[];
extern const u8 MatchCall_Text_Mom3[];
extern const u8 MatchCall_Text_Steven1[];
extern const u8 MatchCall_Text_Steven2[];
extern const u8 MatchCall_Text_Steven3[];
extern const u8 MatchCall_Text_Steven4[];
extern const u8 MatchCall_Text_Steven5[];
extern const u8 MatchCall_Text_Steven6[];
extern const u8 MatchCall_Text_Steven7[];
extern const u8 MatchCall_Text_May1[];
extern const u8 MatchCall_Text_May2[];
extern const u8 MatchCall_Text_May3[];
extern const u8 MatchCall_Text_May4[];
extern const u8 MatchCall_Text_May5[];
extern const u8 MatchCall_Text_May6[];
extern const u8 MatchCall_Text_May7[];
extern const u8 MatchCall_Text_May8[];
extern const u8 MatchCall_Text_May9[];
extern const u8 MatchCall_Text_May10[];
extern const u8 MatchCall_Text_May11[];
extern const u8 MatchCall_Text_May12[];
extern const u8 MatchCall_Text_May13[];
extern const u8 MatchCall_Text_May14[];
extern const u8 MatchCall_Text_May15[];
extern const u8 MatchCall_Text_Brendan1[];
extern const u8 MatchCall_Text_Brendan2[];
extern const u8 MatchCall_Text_Brendan3[];
extern const u8 MatchCall_Text_Brendan4[];
extern const u8 MatchCall_Text_Brendan5[];
extern const u8 MatchCall_Text_Brendan6[];
extern const u8 MatchCall_Text_Brendan7[];
extern const u8 MatchCall_Text_Brendan8[];
extern const u8 MatchCall_Text_Brendan9[];
extern const u8 MatchCall_Text_Brendan10[];
extern const u8 MatchCall_Text_Brendan11[];
extern const u8 MatchCall_Text_Brendan12[];
extern const u8 MatchCall_Text_Brendan13[];
extern const u8 MatchCall_Text_Brendan14[];
extern const u8 MatchCall_Text_Brendan15[];
extern const u8 MatchCall_Text_Wally1[];
extern const u8 MatchCall_Text_Wally2[];
extern const u8 MatchCall_Text_Wally3[];
extern const u8 MatchCall_Text_Wally4[];
extern const u8 MatchCall_Text_Wally5[];
extern const u8 MatchCall_Text_Wally6[];
extern const u8 MatchCall_Text_Wally7[];
extern const u8 MatchCall_Text_Scott1[];
extern const u8 MatchCall_Text_Scott2[];
extern const u8 MatchCall_Text_Scott3[];
extern const u8 MatchCall_Text_Scott4[];
extern const u8 MatchCall_Text_Scott5[];
extern const u8 MatchCall_Text_Scott6[];
extern const u8 MatchCall_Text_Scott7[];
extern const u8 MatchCall_Text_Roxanne1[];
extern const u8 MatchCall_Text_Roxanne2[];
extern const u8 MatchCall_Text_Roxanne3[];
extern const u8 MatchCall_Text_Roxanne4[];
extern const u8 MatchCall_Text_Brawly1[];
extern const u8 MatchCall_Text_Brawly2[];
extern const u8 MatchCall_Text_Brawly3[];
extern const u8 MatchCall_Text_Brawly4[];
extern const u8 MatchCall_Text_Wattson1[];
extern const u8 MatchCall_Text_Wattson2[];
extern const u8 MatchCall_Text_Wattson3[];
extern const u8 MatchCall_Text_Wattson4[];
extern const u8 MatchCall_Text_Flannery1[];
extern const u8 MatchCall_Text_Flannery2[];
extern const u8 MatchCall_Text_Flannery3[];
extern const u8 MatchCall_Text_Flannery4[];
extern const u8 MatchCall_Text_Winona1[];
extern const u8 MatchCall_Text_Winona2[];
extern const u8 MatchCall_Text_Winona3[];
extern const u8 MatchCall_Text_Winona4[];
extern const u8 MatchCall_Text_TateLiza1[];
extern const u8 MatchCall_Text_TateLiza2[];
extern const u8 MatchCall_Text_TateLiza3[];
extern const u8 MatchCall_Text_TateLiza4[];
extern const u8 MatchCall_Text_Juan1[];
extern const u8 MatchCall_Text_Juan2[];
extern const u8 MatchCall_Text_Juan3[];
extern const u8 MatchCall_Text_Juan4[];
extern const u8 MatchCall_Text_Sidney[];
extern const u8 MatchCall_Text_Phoebe[];
extern const u8 MatchCall_Text_Glacia[];
extern const u8 MatchCall_Text_Drake[];
extern const u8 MatchCall_Text_Wallace[];


extern const u8 gText_ColorDarkGray[];
extern const u8 gText_CommunicationStandby[];
extern const u8 gText_AnnouncingResults[];
extern const u8 gText_PreliminaryResults[];
extern const u8 gText_Round2Results[];
extern const u8 gText_ContestantsMonWon[];


extern const u8 gText_LinkCableBattles[];
extern const u8 gText_LinkBattles[];
extern const u8 gText_WaitingTrainerFinishReading[];
extern const u8 gText_TrainerCardName[];
extern const u8 gText_TrainerCardIDNo[];
extern const u8 gText_TrainerCardMoney[];
extern const u8 gText_PokedollarVar1[];
extern const u8 gText_EmptyString6[];
extern const u8 gText_TrainerCardPokedex[];
extern const u8 gText_TrainerCardTime[];
extern const u8 gText_Colon2[];
extern const u8 gText_Var1sTrainerCard[];
extern const u8 gText_HallOfFameDebut[];
extern const u8 gText_WinsLosses[];
extern const u8 gText_PokemonTrades[];
extern const u8 gText_BerryCrush[];
extern const u8 gText_UnionTradesAndBattles[];
extern const u8 gText_NumPokeblocks[];
extern const u8 gText_PokeblocksWithFriends[];
extern const u8 gText_WonContestsWFriends[];
extern const u8 gText_WinsStraight[];
extern const u8 gText_NumBP[];
extern const u8 gText_BattleTower[];
extern const u8 gText_BattlePtsWon[];


extern const u8 gText_SymbolsEarned[];
extern const u8 gText_BattleRecord[];
extern const u8 gText_BattlePoints[];
extern const u8 gText_ThereIsNoBattleRecord[];
extern const u8 gText_CheckFrontierMap[];
extern const u8 gText_CheckTrainerCard[];
extern const u8 gText_ViewRecordedBattle[];
extern const u8 gText_PutAwayFrontierPass[];
extern const u8 gText_CurrentBattlePoints[];
extern const u8 gText_CollectedSymbols[];
extern const u8 gText_BattleTowerAbilitySymbol[];
extern const u8 gText_BattleDomeTacticsSymbol[];
extern const u8 gText_BattlePalaceSpiritsSymbol[];
extern const u8 gText_BattleArenaGutsSymbol[];
extern const u8 gText_BattleFactoryKnowledgeSymbol[];
extern const u8 gText_BattlePikeLuckSymbol[];
extern const u8 gText_BattlePyramidBraveSymbol[];
extern const u8 gText_EmptyString7[];
extern const u8 gText_BattleTower3[];
extern const u8 gText_BattleDome2[];
extern const u8 gText_BattlePalace2[];
extern const u8 gText_BattleArena2[];
extern const u8 gText_BattleFactory2[];
extern const u8 gText_BattlePike2[];
extern const u8 gText_BattlePyramid2[];
extern const u8 gText_BattleTowerDesc[];
extern const u8 gText_BattleDomeDesc[];
extern const u8 gText_BattlePalaceDesc[];
extern const u8 gText_BattleArenaDesc[];
extern const u8 gText_BattleFactoryDesc[];
extern const u8 gText_BattlePikeDesc[];
extern const u8 gText_BattlePyramidDesc[];


extern const u8 gText_Give[];
extern const u8 gText_NoNeed[];


extern const u8 gText_StopGivingPkmnMail[];
extern const u8 gText_LikeToQuitQuiz[];
extern const u8 gText_ChallengeQuestionMark[];
extern const u8 gText_QuitEditing[];
extern const u8 gText_AllTextBeingEditedWill[];
extern const u8 gText_BeDeletedThatOkay[];
extern const u8 gText_Lady[];
extern const u8 gText_F700sQuiz[];
extern const u8 gText_CreateAQuiz[];
extern const u8 gText_SelectTheAnswer[];
extern const u8 gText_OriginalSongWillBeUsed[];
extern const u8 gText_LyricsCantBeDeleted[];
extern const u8 gText_CombineTwoWordsOrPhrases3[];
extern const u8 gText_OnlyOnePhrase[];
extern const u8 gText_YouCannotQuitHere[];
extern const u8 gText_SectionMustBeCompleted[];
extern const u8 gText_ThreeQuestionMarks[];
extern const u8 gText_Profile[];
extern const u8 gText_CombineFourWordsOrPhrases[];
extern const u8 gText_AndMakeYourProfile[];
extern const u8 gText_YourProfile[];
extern const u8 gText_IsAsShownOkay[];
extern const u8 gText_AtTheBattlesStart[];
extern const u8 gText_CombineSixWordsOrPhrases[];
extern const u8 gText_AndMakeAMessage[];
extern const u8 gText_YourFeelingAtTheBattlesStart[];
extern const u8 gText_UponWinningABattle[];
extern const u8 gText_WhatYouSayIfYouWin[];
extern const u8 gText_UponLosingABattle[];
extern const u8 gText_WhatYouSayIfYouLose[];
extern const u8 gText_CombineNineWordsOrPhrases[];
extern const u8 gText_AndMakeAMessage2[];
extern const u8 gText_TheMailMessage[];
extern const u8 gText_Interview[];
extern const u8 gText_LetsReplyToTheInterview[];
extern const u8 gText_TheAnswer[];
extern const u8 gText_TheBardsSong[];
extern const u8 gText_ChangeJustOneWordOrPhrase[];
extern const u8 gText_AndImproveTheBardsSong[];
extern const u8 gText_TheBardsSong2[];
extern const u8 gText_FindWordsThatDescribeYour[];
extern const u8 gText_FeelingsRightNow[];
extern const u8 gText_WhatsHipAndHappening[];
extern const u8 gText_CombineTwoWordsOrPhrases[];
extern const u8 gText_AndMakeATrendySaying[];
extern const u8 gText_TheTrendySaying[];
extern const u8 gText_AfterYouHaveReadTheQuiz[];
extern const u8 gText_QuestionPressTheAButton[];
extern const u8 gText_TheQuizAnswerIs[];
extern const u8 gText_OutOfTheListedChoices[];
extern const u8 gText_SelectTheAnswerToTheQuiz[];
extern const u8 gText_TheAnswerColon[];
extern const u8 gText_AndCreateAQuiz[];
extern const u8 gText_IsThisQuizOK[];
extern const u8 gText_PickAWordOrPhraseAnd[];
extern const u8 gText_SetTheQuizAnswer[];
extern const u8 gText_ApprenticesPhrase[];
extern const u8 gText_FindWordsWhichFit[];
extern const u8 gText_TheTrainersImage[];
extern const u8 gText_ApprenticePhrase[];
extern const u8 gText_GoodSaying[];
extern const u8 gText_CombineTwoWordsOrPhrases2[];
extern const u8 gText_ToTeachHerAGoodSaying[];
extern const u8 gText_FansQuestion[];
extern const u8 gText_TheImage[];
extern const u8 gText_Questionnaire[];
extern const u8 gText_AndFillOutTheQuestionnaire[];
extern const u8 gText_DelAll[];
extern const u8 gText_Cancel5[];
extern const u8 gText_Ok2[];
extern const u8 gText_Quiz[];
extern const u8 gText_Answer[];
extern const u8 gEasyChatGroupName_Pokemon[];
extern const u8 gEasyChatGroupName_Trainer[];
extern const u8 gEasyChatGroupName_Status[];
extern const u8 gEasyChatGroupName_Battle[];
extern const u8 gEasyChatGroupName_Greetings[];
extern const u8 gEasyChatGroupName_People[];
extern const u8 gEasyChatGroupName_Voices[];
extern const u8 gEasyChatGroupName_Speech[];
extern const u8 gEasyChatGroupName_Endings[];
extern const u8 gEasyChatGroupName_Feelings[];
extern const u8 gEasyChatGroupName_Conditions[];
extern const u8 gEasyChatGroupName_Actions[];
extern const u8 gEasyChatGroupName_Lifestyle[];
extern const u8 gEasyChatGroupName_Hobbies[];
extern const u8 gEasyChatGroupName_Time[];
extern const u8 gEasyChatGroupName_Misc[];
extern const u8 gEasyChatGroupName_Adjectives[];
extern const u8 gEasyChatGroupName_Events[];
extern const u8 gEasyChatGroupName_Move1[];
extern const u8 gEasyChatGroupName_Move2[];
extern const u8 gEasyChatGroupName_TrendySaying[];
extern const u8 gEasyChatGroupName_Pokemon2[];


extern const u8 gText_EasyChatKeyboard_ABCDEFothers[];
extern const u8 gText_EasyChatKeyboard_GHIJKL[];
extern const u8 gText_EasyChatKeyboard_MNOPQRS[];
extern const u8 gText_EasyChatKeyboard_TUVWXYZ[];
extern const u8 gText_NamingScreenKeyboard_abcdef[];
extern const u8 gText_NamingScreenKeyboard_ghijkl[];
extern const u8 gText_NamingScreenKeyboard_mnopqrs[];
extern const u8 gText_NamingScreenKeyboard_tuvwxyz[];
extern const u8 gText_NamingScreenKeyboard_ABCDEF[];
extern const u8 gText_NamingScreenKeyboard_GHIJKL[];
extern const u8 gText_NamingScreenKeyboard_MNOPQRS[];
extern const u8 gText_NamingScreenKeyboard_TUVWXYZ[];
extern const u8 gText_NamingScreenKeyboard_01234[];
extern const u8 gText_NamingScreenKeyboard_56789[];
extern const u8 gText_NamingScreenKeyboard_Symbols1[];
extern const u8 gText_NamingScreenKeyboard_Symbols2[];
extern const u8 gText_UnionRoomChatKeyboard_ABCDE[];
extern const u8 gText_UnionRoomChatKeyboard_FGHIJ[];
extern const u8 gText_UnionRoomChatKeyboard_KLMNO[];
extern const u8 gText_UnionRoomChatKeyboard_PQRST[];
extern const u8 gText_UnionRoomChatKeyboard_UVWXY[];
extern const u8 gText_UnionRoomChatKeyboard_Z[];
extern const u8 gText_UnionRoomChatKeyboard_01234Upper[];
extern const u8 gText_UnionRoomChatKeyboard_56789Upper[];
extern const u8 gText_UnionRoomChatKeyboard_PunctuationUpper[];
extern const u8 gText_UnionRoomChatKeyboard_SymbolsUpper[];
extern const u8 gText_UnionRoomChatKeyboard_abcde[];
extern const u8 gText_UnionRoomChatKeyboard_fghij[];
extern const u8 gText_UnionRoomChatKeyboard_klmno[];
extern const u8 gText_UnionRoomChatKeyboard_pqrst[];
extern const u8 gText_UnionRoomChatKeyboard_uvwxy[];
extern const u8 gText_UnionRoomChatKeyboard_z[];
extern const u8 gText_UnionRoomChatKeyboard_01234Lower[];
extern const u8 gText_UnionRoomChatKeyboard_56789Lower[];
extern const u8 gText_UnionRoomChatKeyboard_PunctuationLower[];
extern const u8 gText_UnionRoomChatKeyboard_SymbolsLower[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji1[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji2[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji3[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji4[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji5[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji6[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji7[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji8[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji9[];
extern const u8 gText_UnionRoomChatKeyboard_Emoji10[];


extern const u8 gJPText_ReceiveMysteryGiftWithEReader[];
extern const u8 gJPText_SelectConnectFromEReaderMenu[];
extern const u8 gJPText_SelectConnectWithGBA[];
extern const u8 gJPText_LinkIsIncorrect[];
extern const u8 gJPText_CardReadingHasBeenHalted[];
extern const u8 gJPText_Connecting[];
extern const u8 gJPText_ConnectionErrorCheckLink[];
extern const u8 gJPText_ConnectionErrorTryAgain[];
extern const u8 gJPText_AllowEReaderToLoadCard[];
extern const u8 gJPText_ConnectionComplete[];
extern const u8 gJPText_NewTrainerHasComeToHoenn[];
extern const u8 gJPText_PleaseWaitAMoment[];
extern const u8 gJPText_WriteErrorUnableToSaveData[];


extern const u8 gText_Powder[];


extern const u8 gText_F700JoinedChat[];
extern const u8 gText_F700LeftChat[];
extern const u8 gText_Hello[];
extern const u8 gText_Pokemon2[];
extern const u8 gText_Trade[];
extern const u8 gText_Battle[];
extern const u8 gText_Lets[];
extern const u8 gText_Ok[];
extern const u8 gText_Sorry[];
extern const u8 gText_YaySmileEmoji[];
extern const u8 gText_ThankYou[];
extern const u8 gText_ByeBye[];


extern const u8 gText_MysteryGift[];
extern const u8 gText_PickOKCancel[];
extern const u8 gText_PickOKExit[];
extern const u8 gJPText_MysteryGift[];
extern const u8 gJPText_DecideStop[];
extern const u8 gText_WonderCards[];
extern const u8 gText_WonderNews[];
extern const u8 gText_Exit3[];
extern const u8 gText_WirelessCommunication[];
extern const u8 gText_Friend2[];
extern const u8 gText_Cancel2[];
extern const u8 gText_Receive[];
extern const u8 gText_Send[];
extern const u8 gText_Toss[];
extern const u8 gText_VarietyOfEventsImportedWireless[];
extern const u8 gText_WonderCardsInPossession[];
extern const u8 gText_ReadNewsThatArrived[];
extern const u8 gText_ReturnToTitle[];
extern const u8 gText_WhatToDoWithCards[];
extern const u8 gText_WhatToDoWithNews[];
extern const u8 gText_IfThrowAwayCardEventWontHappen[];
extern const u8 gText_OkayToDiscardNews[];
extern const u8 gText_WonderNewsThrownAway[];
extern const u8 gText_WonderCardThrownAway[];
extern const u8 gText_DataWillBeSaved[];
extern const u8 gText_SaveCompletedPressA[];
extern const u8 gText_NothingSentOver[];
extern const u8 gText_RecordUploadedViaWireless[];
extern const u8 gText_WonderCardReceivedFrom[];
extern const u8 gText_WonderCardReceived[];
extern const u8 gText_WonderNewsReceivedFrom[];
extern const u8 gText_WonderNewsReceived[];
extern const u8 gText_NewStampReceived[];
extern const u8 gText_AlreadyHadCard[];
extern const u8 gText_AlreadyHadStamp[];
extern const u8 gText_AlreadyHadNews[];
extern const u8 gText_NoMoreRoomForStamps[];
extern const u8 gText_CommunicationCanceled[];
extern const u8 gText_CantAcceptNewsFromTrainer[];
extern const u8 gText_CantAcceptCardFromTrainer[];
extern const u8 gText_CommunicationError[];
extern const u8 gText_NewTrainerReceived[];
extern const u8 gText_RecordUploadedViaWireless[];
extern const u8 gText_WonderCardSentTo[];
extern const u8 gText_WonderNewsSentTo[];
extern const u8 gText_StampSentTo[];
extern const u8 gText_OtherTrainerHasCard[];
extern const u8 gText_OtherTrainerHasStamp[];
extern const u8 gText_OtherTrainerHasNews[];
extern const u8 gText_NoMoreRoomForStamps[];
extern const u8 gText_OtherTrainerCanceled[];
extern const u8 gText_GiftSentTo[];
extern const u8 gText_CantSendGiftToTrainer[];
extern const u8 gText_DontHaveCardNewOneInput[];
extern const u8 gText_DontHaveNewsNewOneInput[];
extern const u8 gText_WhereShouldCardBeAccessed[];
extern const u8 gText_WhereShouldNewsBeAccessed[];
extern const u8 gText_Communicating[];
extern const u8 gText_ThrowAwayWonderCard[];
extern const u8 gText_HaventReceivedCardsGift[];
extern const u8 gText_CommunicationCompleted[];
extern const u8 gText_HaventReceivedGiftOkayToDiscard[];
extern const u8 gText_SendingWonderCard[];
extern const u8 gText_SendingWonderNews[];
extern const u8 gText_WirelessCommStatus[];
extern const u8 gText_PeopleTrading[];
extern const u8 gText_PeopleBattling[];
extern const u8 gText_PeopleInUnionRoom[];
extern const u8 gText_PeopleCommunicating[];
extern const u8 gText_CommStandbyAwaitingOtherPlayer[];
extern const u8 gText_RefusedBattle[];
extern const u8 gText_BattleWasRefused[];
extern const u8 gText_QuitChatting[];
extern const u8 gText_RegisterTextWhere[];
extern const u8 gText_RegisterTextHere[];
extern const u8 gText_InputText[];
extern const u8 gText_ExitingChat[];
extern const u8 gText_LeaderLeftEndingChat[];
extern const u8 gText_RegisteredTextChangedOKToSave[];
extern const u8 gText_AlreadySavedFile_Chat[];
extern const u8 gText_SavingDontTurnOff_Chat[];
extern const u8 gText_PlayerSavedGame_Chat[];
extern const u8 gText_IfLeaderLeavesChatEnds[];
extern const u8 gText_Upper[];
extern const u8 gText_Lower[];
extern const u8 gText_Symbols[];
extern const u8 gText_Register2[];
extern const u8 gText_Exit2[];


extern const u8 gText_BerryPickingRecords[];
extern const u8 gText_BerriesPicked[];
extern const u8 gText_BerriesInRowFivePlayers[];
extern const u8 gText_BestScore[];
extern const u8 gText_1Colon[];
extern const u8 gText_2Colon[];
extern const u8 gText_3Colon[];
extern const u8 gText_4Colon[];
extern const u8 gText_5Colon[];
extern const u8 gText_SpacePoints[];
extern const u8 gText_10P30P50P50P[];
extern const u8 gText_AnnouncingPrizes[];
extern const u8 gText_AnnouncingRankings[];
extern const u8 gText_FirstPlacePrize[];
extern const u8 gText_CantHoldAnyMore[];
extern const u8 gText_FilledStorageSpace[];
extern const u8 gText_BerryPickingResults[];
extern const u8 gText_WantToPlayAgain[];
extern const u8 gText_CommunicationStandby3[];
extern const u8 gText_SomeoneDroppedOut[];


extern const u8 gText_WantToPlayAgain2[];
extern const u8 gText_SomeoneDroppedOut2[];
extern const u8 gText_CommunicationStandby4[];
extern const u8 gText_AwesomeWonF701F700[];
extern const u8 gText_FilledStorageSpace2[];
extern const u8 gText_CantHoldMore[];
extern const u8 gText_SpacePoints2[];
extern const u8 gText_SpaceTimes3[];
extern const u8 gText_PkmnJumpRecords[];
extern const u8 gText_JumpsInARow[];
extern const u8 gText_BestScore2[];
extern const u8 gText_ExcellentsInARow[];


extern const u8 gText_Var1Berry[];
extern const u8 gText_XDotY[];
extern const u8 gText_1DotBlueF700[];
extern const u8 gText_1DotF700[];
extern const u8 gText_TimeColon[];
extern const u8 gText_SpaceSec[];
extern const u8 gText_XDotY2[];
extern const u8 gText_SpaceMin[];
extern const u8 gText_StrVar1[];
extern const u8 gText_PressingSpeed[];
extern const u8 gText_TimesPerSec[];
extern const u8 gText_XDotY3[];
extern const u8 gText_Silkiness[];
extern const u8 gText_Var1Percent[];
extern const u8 gText_PressesRankings[];
extern const u8 gText_CrushingResults[];
extern const u8 gText_BerryCrush2[];
extern const u8 gText_PressingSpeedRankings[];
extern const u8 gText_Var1Players[];
extern const u8 gText_ReadyPickBerry[];
extern const u8 gText_WaitForAllChooseBerry[];
extern const u8 gText_EndedWithXUnitsPowder[];
extern const u8 gText_RecordingGameResults[];
extern const u8 gText_PlayBerryCrushAgain[];
extern const u8 gText_YouHaveNoBerries[];
extern const u8 gText_MemberDroppedOut[];
extern const u8 gText_TimesUpNoGoodPowder[];
extern const u8 gText_CommunicationStandby2[];
extern const u8 gText_SpaceTimes2[];
extern const u8 gText_XDotY[];
extern const u8 gText_Var1Berry[];
extern const u8 gText_NeatnessRankings[];
extern const u8 gText_CoopRankings[];
extern const u8 gText_PressingPowerRankings[];

extern const u8 gText_CoolnessContest[];
extern const u8 gText_BeautyContest[];
extern const u8 gText_CutenessContest[];
extern const u8 gText_SmartnessContest[];
extern const u8 gText_ToughnessContest[];


extern const u8 gText_Coolness[];
extern const u8 gText_Toughness[];
extern const u8 gText_Smartness[];
extern const u8 gText_Cuteness[];
extern const u8 gText_Beauty3[];


extern const u8 gText_SavingDontTurnOff2[];
extern const u8 gText_BlenderMaxSpeedRecord[];
extern const u8 gText_234Players[];


extern const u8 gText_RentalPkmn2[];
extern const u8 gText_SelectFirstPkmn[];
extern const u8 gText_SelectSecondPkmn[];
extern const u8 gText_SelectThirdPkmn[];
extern const u8 gText_TheseThreePkmnOkay[];
extern const u8 gText_CantSelectSamePkmn[];
extern const u8 gText_Summary[];
extern const u8 gText_Rechoose[];
extern const u8 gText_Deselect[];
extern const u8 gText_Rent[];
extern const u8 gText_Others2[];
extern const u8 gText_Yes2[];
extern const u8 gText_Yes3[];
extern const u8 gText_No2[];
extern const u8 gText_No3[];
extern const u8 gText_QuitSwapping[];
extern const u8 gText_AcceptThisPkmn[];
extern const u8 gText_SelectPkmnToAccept[];
extern const u8 gText_SelectPkmnToSwap[];
extern const u8 gText_PkmnSwap[];
extern const u8 gText_Swap[];
extern const u8 gText_Summary2[];
extern const u8 gText_PkmnForSwap[];
extern const u8 gText_SamePkmnInPartyAlready[];
extern const u8 gText_Cancel3[];


extern const u8 gText_MoveOkBack[];
extern const u8 gText_YourName[];
extern const u8 gText_BoxName[];
extern const u8 gText_PkmnsNickname[];
extern const u8 gText_TellHimTheWords[];


extern const u8 gText_ExpShareOn[];
extern const u8 gText_ExpShareOff[];

extern const u8 gText_BasePointsResetToZero[];


extern const u8 gText_AM[];
extern const u8 gText_PM[];


extern const u8 gText_PlayerScurriedToCenter[];
extern const u8 gText_PlayerScurriedBackHome[];
extern const u8 gText_PlayerRegroupCenter[];
extern const u8 gText_PlayerRegroupHome[];

extern const u8 gText_Relearn[];
extern const u8 gText_Relearn_LevelUp[];
extern const u8 gText_Relearn_Egg[];
extern const u8 gText_Relearn_TM[];
extern const u8 gText_Relearn_Tutor[];
extern const u8 gText_Rename[];

extern const u8 MoveRelearner_Text_LevelUpMoveLWR[];
extern const u8 MoveRelearner_Text_EggMoveLWR[];
extern const u8 MoveRelearner_Text_TMMoveLWR[];
extern const u8 MoveRelearner_Text_TutorMoveLWR[];


extern const u8 gText_CannotSendMonToBoxHM[];
extern const u8 gText_CannotSendMonToBoxActive[];
extern const u8 gText_CannotSendMonToBoxPartner[];
# 25 "/usr/include/newlib/string.h" 2 3




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);


char *strtok_r (char *restrict, const char *restrict, char **restrict);


int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


void * memccpy (void *restrict, const void *restrict, int, size_t);
# 76 "/usr/include/newlib/string.h" 3
char *stpcpy (char *restrict, const char *restrict);
char *stpncpy (char *restrict, const char *restrict, size_t);






char *strdup (const char *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strndup_r (struct _reent *, const char *, size_t);
# 100 "/usr/include/newlib/string.h" 3
int strerror_r (int, char *, size_t)

             __asm__ ("" "__xpg_strerror_r")

  ;







char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __attribute__((__pure__));



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);
# 175 "/usr/include/newlib/string.h" 3
# 1 "/usr/include/newlib/sys/string.h" 1 3
# 176 "/usr/include/newlib/string.h" 2 3


# 5 "include/global.h" 2
# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/limits.h" 1 3 4
# 6 "include/global.h" 2
# 1 "include/config/general.h" 1
# 7 "include/global.h" 2
# 1 "include/gba/gba.h" 1



# 1 "include/gba/defines.h" 1



# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stddef.h" 1 3 4
# 5 "include/gba/defines.h" 2
# 5 "include/gba/gba.h" 2
# 1 "include/gba/io_reg.h" 1
# 6 "include/gba/gba.h" 2
# 1 "include/gba/types.h" 1



# 1 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 1 3 4
# 34 "/usr/lib/gcc/arm-none-eabi/14.2.1/include/stdint.h" 3 4
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 5 "include/gba/types.h" 2



# 7 "include/gba/types.h"
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t s8;
typedef int16_t s16;
typedef int32_t s32;
typedef int64_t s64;

typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float f32;
typedef double f64;

typedef u8 bool8;
typedef u16 bool16;
typedef u32 bool32;
typedef vu8 vbool8;
typedef vu16 vbool16;
typedef vu32 vbool32;

struct BgCnt
{
    u16 priority:2;
    u16 charBaseBlock:2;
    u16 dsCharBaseBlock:2;
    u16 mosaic:1;
    u16 palettes:1;
    u16 screenBaseBlock:5;
    u16 areaOverflowMode:1;
    u16 screenSize:2;
} __attribute__((packed));
typedef volatile struct BgCnt vBgCnt;

struct PlttData
{
    u16 r:5;
    u16 g:5;
    u16 b:5;
    u16 unused_15:1;
};

struct OamData
{
             u32 y:8;
             u32 affineMode:2;
             u32 objMode:2;
             u32 mosaic:1;
             u32 bpp:1;
             u32 shape:2;

             u32 x:9;
             u32 matrixNum:5;
             u32 size:2;

             u16 tileNum:10;
             u16 priority:2;
             u16 paletteNum:4;
             u16 affineParam;
};
# 121 "include/gba/types.h"
struct BgAffineSrcData
{
    s32 texX;
    s32 texY;
    s16 scrX;
    s16 scrY;
    s16 sx;
    s16 sy;
    u16 alpha;
};

struct BgAffineDstData
{
    s16 pa;
    s16 pb;
    s16 pc;
    s16 pd;
    s32 dx;
    s32 dy;
};

struct ObjAffineSrcData
{
    s16 xScale;
    s16 yScale;
    u16 rotation;
};


struct SioMultiCnt
{
    u16 baudRate:2;
    u16 si:1;
    u16 sd:1;
    u16 id:2;
    u16 error:1;
    u16 enable:1;
    u16 unused_11_8:4;
    u16 mode:2;
    u16 intrEnable:1;
    u16 unused_15:1;
    u16 data;
};
# 7 "include/gba/gba.h" 2
# 1 "include/gba/multiboot.h" 1
# 9 "include/gba/multiboot.h"
struct MultiBootParam
{
    u32 system_work[5];
    u8 handshake_data;

    u16 handshake_timeout;
    u8 probe_count;
    u8 client_data[3];
    u8 palette_data;
    u8 response_bit;
    u8 client_bit;
    u8 reserved1;
    const u8 *boot_srcp;
    const u8 *boot_endp;
    const u8 *masterp;
    u8 *reserved2[3];
    u32 system_work2[4];
    u8 sendflag;
    u8 probe_target_bit;
    u8 check_wait;
    u8 server_type;
};
# 8 "include/gba/gba.h" 2
# 1 "include/gba/syscall.h" 1
# 14 "include/gba/syscall.h"
void SoftReset(u32 resetFlags);

void RegisterRamReset(u32 resetFlags);

void VBlankIntrWait(void);

u16 Sqrt(u32 num);

u16 ArcTan2(s16 x, s16 y);





void CpuSet(const void *src, void *dest, u32 control);
# 44 "include/gba/syscall.h"
void CpuFastSet(const void *src, void *dest, u32 control);
# 56 "include/gba/syscall.h"
void BgAffineSet(struct BgAffineSrcData *src, struct BgAffineDstData *dest, s32 count);

void ObjAffineSet(struct ObjAffineSrcData *src, void *dest, s32 count, s32 offset);

void LZ77UnCompWram(const u32 *src, void *dest);

void LZ77UnCompVram(const u32 *src, void *dest);

void RLUnCompWram(const u32 *src, void *dest);

void RLUnCompVram(const u32 *src, void *dest);

int MultiBoot(struct MultiBootParam *mp);

s32 Div(s32 num, s32 denom);
# 9 "include/gba/gba.h" 2
# 1 "include/gba/macro.h" 1
# 10 "include/gba/gba.h" 2
# 1 "include/gba/isagbprint.h" 1
# 21 "include/gba/isagbprint.h"
bool32 MgbaOpen(void);
void MgbaClose(void);
void MgbaPrintf(s32 level, const char *pBuf, ...);
void MgbaAssert(const char *pFile, s32 nLine, const char *pExpression, bool32 nStopProgram);
void NoCashGBAPrintf(const char *pBuf, ...);
void NoCashGBAAssert(const char *pFile, s32 nLine, const char *pExpression, bool32 nStopProgram);
void AGBPrintf(const char *pBuf, ...);
void AGBAssert(const char *pFile, int nLine, const char *pExpression, int nStopProgram);
void AGBPrintInit(void);
# 11 "include/gba/gba.h" 2
# 8 "include/global.h" 2
# 1 "include/gametypes.h" 1



# 1 "include/gba/types.h" 1
# 5 "include/gametypes.h" 2
# 52 "include/gametypes.h"
typedef u8 mapsec_u8_t;
typedef u16 mapsec_u16_t;
typedef s16 mapsec_s16_t;
typedef s32 mapsec_s32_t;
# 65 "include/gametypes.h"
typedef mapsec_u8_t metloc_u8_t;
# 9 "include/global.h" 2
# 1 "include/siirtc.h" 1




# 1 "include/constants/siirtc.h" 1
# 14 "include/constants/siirtc.h"
enum Weekday
{
    WEEKDAY_SUN,
    WEEKDAY_MON,
    WEEKDAY_TUE,
    WEEKDAY_WED,
    WEEKDAY_THU,
    WEEKDAY_FRI,
    WEEKDAY_SAT,
    WEEKDAY_COUNT,
};

enum Month
{
    MONTH_JAN = 1,
    MONTH_FEB,
    MONTH_MAR,
    MONTH_APR,
    MONTH_MAY,
    MONTH_JUN,
    MONTH_JUL,
    MONTH_AUG,
    MONTH_SEP,
    MONTH_OCT,
    MONTH_NOV,
    MONTH_DEC,
    MONTH_COUNT = MONTH_DEC,
};
# 6 "include/siirtc.h" 2

struct SiiRtcInfo
{
    u8 year;
    u8 month;
    u8 day;
    u8 dayOfWeek;
    u8 hour;
    u8 minute;
    u8 second;
    u8 status;
    u8 alarmHour;
    u8 alarmMinute;
};

void SiiRtcUnprotect(void);
void SiiRtcProtect(void);
u8 SiiRtcProbe(void);
bool8 SiiRtcReset(void);
bool8 SiiRtcGetStatus(struct SiiRtcInfo *rtc);
bool8 SiiRtcSetStatus(struct SiiRtcInfo *rtc);
bool8 SiiRtcGetDateTime(struct SiiRtcInfo *rtc);
bool8 SiiRtcSetDateTime(struct SiiRtcInfo *rtc);
bool8 SiiRtcGetTime(struct SiiRtcInfo *rtc);
bool8 SiiRtcSetTime(struct SiiRtcInfo *rtc);
bool8 SiiRtcSetAlarm(struct SiiRtcInfo *rtc);
# 10 "include/global.h" 2
# 1 "include/fpmath.h" 1



typedef s16 q4_12_t;
typedef u32 uq4_12_t;
# 40 "include/fpmath.h"
static inline uq4_12_t uq4_12_add(uq4_12_t a, uq4_12_t b)
{
    return a + b;
}

static inline uq4_12_t uq4_12_subtract(uq4_12_t a, uq4_12_t b)
{
    return a - b;
}

static inline uq4_12_t uq4_12_multiply(uq4_12_t a, uq4_12_t b)
{
    u32 product = (u32) a * b;
    return (product + ((1) << ((12) - 1))) >> (12);
}

static inline uq4_12_t uq4_12_multiply_half_down(uq4_12_t a, uq4_12_t b)
{
    u32 product = (u32) a * b;
    return (product + ((1) << ((12) - 1)) - 1) >> (12);
}

static inline uq4_12_t uq4_12_divide(uq4_12_t dividend, uq4_12_t divisor)
{
    if (divisor == ((uq4_12_t)((0.0) * 4096 + 0.5))) return ((uq4_12_t)((0) * 4096 + 0.5));
    return (dividend << (12)) / divisor;
}



static inline u32 uq4_12_multiply_by_int_half_down(uq4_12_t modifier, u32 value)
{
    return ((u32)(((modifier * value) + ((1) << ((12) - 1)) - 1) / 4096));
}



static inline u32 uq4_12_multiply_by_int_half_up(uq4_12_t modifier, u32 value)
{
    return ((u32)(((modifier * value) + ((1) << ((12) - 1))) / 4096));
}
# 11 "include/global.h" 2
# 1 "include/metaprogram.h" 1
# 12 "include/global.h" 2
# 1 "include/constants/global.h" 1
# 19 "include/constants/global.h"
# 1 "include/config/ai.h" 1
# 20 "include/constants/global.h" 2
# 1 "include/config/battle.h" 1
# 21 "include/constants/global.h" 2
# 1 "include/config/caps.h" 1
# 22 "include/constants/global.h" 2
# 1 "include/config/contest.h" 1
# 23 "include/constants/global.h" 2
# 1 "include/config/debug.h" 1
# 24 "include/constants/global.h" 2
# 1 "include/config/dexnav.h" 1
# 25 "include/constants/global.h" 2
# 1 "include/config/follower_npc.h" 1
# 26 "include/constants/global.h" 2
# 1 "include/config/general.h" 1
# 27 "include/constants/global.h" 2
# 1 "include/config/item.h" 1
# 28 "include/constants/global.h" 2
# 1 "include/config/overworld.h" 1
# 29 "include/constants/global.h" 2
# 1 "include/config/pokemon.h" 1
# 76 "include/config/pokemon.h"
# 1 "include/config/species_enabled.h" 1
# 77 "include/config/pokemon.h" 2
# 30 "include/constants/global.h" 2
# 1 "include/config/summary_screen.h" 1
# 31 "include/constants/global.h" 2
# 13 "include/global.h" 2
# 1 "include/constants/flags.h" 1



# 1 "include/constants/opponents.h" 1



# 1 "include/constants/battle_partner.h" 1
# 5 "include/constants/opponents.h" 2
# 5 "include/constants/flags.h" 2
# 1 "include/constants/rematches.h" 1



enum {
    REMATCH_ROSE,
    REMATCH_ANDRES,
    REMATCH_DUSTY,
    REMATCH_LOLA,
    REMATCH_RICKY,
    REMATCH_LILA_AND_ROY,
    REMATCH_CRISTIN,
    REMATCH_BROOKE,
    REMATCH_WILTON,
    REMATCH_VALERIE,
    REMATCH_CINDY,
    REMATCH_THALIA,
    REMATCH_JESSICA,
    REMATCH_WINSTON,
    REMATCH_STEVE,
    REMATCH_TONY,
    REMATCH_NOB,
    REMATCH_KOJI,
    REMATCH_FERNANDO,
    REMATCH_DALTON,
    REMATCH_BERNIE,
    REMATCH_ETHAN,
    REMATCH_JOHN_AND_JAY,
    REMATCH_JEFFREY,
    REMATCH_CAMERON,
    REMATCH_JACKI,
    REMATCH_WALTER,
    REMATCH_KAREN,
    REMATCH_JERRY,
    REMATCH_ANNA_AND_MEG,
    REMATCH_ISABEL,
    REMATCH_MIGUEL,
    REMATCH_TIMOTHY,
    REMATCH_SHELBY,
    REMATCH_CALVIN,
    REMATCH_ELLIOT,
    REMATCH_ISAIAH,
    REMATCH_MARIA,
    REMATCH_ABIGAIL,
    REMATCH_DYLAN,
    REMATCH_KATELYN,
    REMATCH_BENJAMIN,
    REMATCH_PABLO,
    REMATCH_NICOLAS,
    REMATCH_ROBERT,
    REMATCH_LAO,
    REMATCH_CYNDY,
    REMATCH_MADELINE,
    REMATCH_JENNY,
    REMATCH_DIANA,
    REMATCH_AMY_AND_LIV,
    REMATCH_ERNEST,
    REMATCH_CORY,
    REMATCH_EDWIN,
    REMATCH_LYDIA,
    REMATCH_ISAAC,
    REMATCH_GABRIELLE,
    REMATCH_CATHERINE,
    REMATCH_JACKSON,
    REMATCH_HALEY,
    REMATCH_JAMES,
    REMATCH_TRENT,
    REMATCH_SAWYER,
    REMATCH_KIRA_AND_DAN,
    REMATCH_WALLY_VR,
    REMATCH_ROXANNE,
    REMATCH_BRAWLY,
    REMATCH_WATTSON,
    REMATCH_FLANNERY,
    REMATCH_NORMAN,
    REMATCH_WINONA,
    REMATCH_TATE_AND_LIZA,
    REMATCH_JUAN,
    REMATCH_SIDNEY,
    REMATCH_PHOEBE,
    REMATCH_GLACIA,
    REMATCH_DRAKE,
    REMATCH_WALLACE,
    REMATCH_TABLE_ENTRIES
};
# 6 "include/constants/flags.h" 2
# 14 "include/global.h" 2
# 1 "include/constants/vars.h" 1
# 15 "include/global.h" 2
# 1 "include/constants/species.h" 1
# 16 "include/global.h" 2
# 1 "include/constants/pokedex.h" 1





enum NationalDexOrder
{
    NATIONAL_DEX_NONE,

    NATIONAL_DEX_BULBASAUR,
    NATIONAL_DEX_IVYSAUR,
    NATIONAL_DEX_VENUSAUR,
    NATIONAL_DEX_CHARMANDER,
    NATIONAL_DEX_CHARMELEON,
    NATIONAL_DEX_CHARIZARD,
    NATIONAL_DEX_SQUIRTLE,
    NATIONAL_DEX_WARTORTLE,
    NATIONAL_DEX_BLASTOISE,
    NATIONAL_DEX_CATERPIE,
    NATIONAL_DEX_METAPOD,
    NATIONAL_DEX_BUTTERFREE,
    NATIONAL_DEX_WEEDLE,
    NATIONAL_DEX_KAKUNA,
    NATIONAL_DEX_BEEDRILL,
    NATIONAL_DEX_PIDGEY,
    NATIONAL_DEX_PIDGEOTTO,
    NATIONAL_DEX_PIDGEOT,
    NATIONAL_DEX_RATTATA,
    NATIONAL_DEX_RATICATE,
    NATIONAL_DEX_SPEAROW,
    NATIONAL_DEX_FEAROW,
    NATIONAL_DEX_EKANS,
    NATIONAL_DEX_ARBOK,
    NATIONAL_DEX_PIKACHU,
    NATIONAL_DEX_RAICHU,
    NATIONAL_DEX_SANDSHREW,
    NATIONAL_DEX_SANDSLASH,
    NATIONAL_DEX_NIDORAN_F,
    NATIONAL_DEX_NIDORINA,
    NATIONAL_DEX_NIDOQUEEN,
    NATIONAL_DEX_NIDORAN_M,
    NATIONAL_DEX_NIDORINO,
    NATIONAL_DEX_NIDOKING,
    NATIONAL_DEX_CLEFAIRY,
    NATIONAL_DEX_CLEFABLE,
    NATIONAL_DEX_VULPIX,
    NATIONAL_DEX_NINETALES,
    NATIONAL_DEX_JIGGLYPUFF,
    NATIONAL_DEX_WIGGLYTUFF,
    NATIONAL_DEX_ZUBAT,
    NATIONAL_DEX_GOLBAT,
    NATIONAL_DEX_ODDISH,
    NATIONAL_DEX_GLOOM,
    NATIONAL_DEX_VILEPLUME,
    NATIONAL_DEX_PARAS,
    NATIONAL_DEX_PARASECT,
    NATIONAL_DEX_VENONAT,
    NATIONAL_DEX_VENOMOTH,
    NATIONAL_DEX_DIGLETT,
    NATIONAL_DEX_DUGTRIO,
    NATIONAL_DEX_MEOWTH,
    NATIONAL_DEX_PERSIAN,
    NATIONAL_DEX_PSYDUCK,
    NATIONAL_DEX_GOLDUCK,
    NATIONAL_DEX_MANKEY,
    NATIONAL_DEX_PRIMEAPE,
    NATIONAL_DEX_GROWLITHE,
    NATIONAL_DEX_ARCANINE,
    NATIONAL_DEX_POLIWAG,
    NATIONAL_DEX_POLIWHIRL,
    NATIONAL_DEX_POLIWRATH,
    NATIONAL_DEX_ABRA,
    NATIONAL_DEX_KADABRA,
    NATIONAL_DEX_ALAKAZAM,
    NATIONAL_DEX_MACHOP,
    NATIONAL_DEX_MACHOKE,
    NATIONAL_DEX_MACHAMP,
    NATIONAL_DEX_BELLSPROUT,
    NATIONAL_DEX_WEEPINBELL,
    NATIONAL_DEX_VICTREEBEL,
    NATIONAL_DEX_TENTACOOL,
    NATIONAL_DEX_TENTACRUEL,
    NATIONAL_DEX_GEODUDE,
    NATIONAL_DEX_GRAVELER,
    NATIONAL_DEX_GOLEM,
    NATIONAL_DEX_PONYTA,
    NATIONAL_DEX_RAPIDASH,
    NATIONAL_DEX_SLOWPOKE,
    NATIONAL_DEX_SLOWBRO,
    NATIONAL_DEX_MAGNEMITE,
    NATIONAL_DEX_MAGNETON,
    NATIONAL_DEX_FARFETCHD,
    NATIONAL_DEX_DODUO,
    NATIONAL_DEX_DODRIO,
    NATIONAL_DEX_SEEL,
    NATIONAL_DEX_DEWGONG,
    NATIONAL_DEX_GRIMER,
    NATIONAL_DEX_MUK,
    NATIONAL_DEX_SHELLDER,
    NATIONAL_DEX_CLOYSTER,
    NATIONAL_DEX_GASTLY,
    NATIONAL_DEX_HAUNTER,
    NATIONAL_DEX_GENGAR,
    NATIONAL_DEX_ONIX,
    NATIONAL_DEX_DROWZEE,
    NATIONAL_DEX_HYPNO,
    NATIONAL_DEX_KRABBY,
    NATIONAL_DEX_KINGLER,
    NATIONAL_DEX_VOLTORB,
    NATIONAL_DEX_ELECTRODE,
    NATIONAL_DEX_EXEGGCUTE,
    NATIONAL_DEX_EXEGGUTOR,
    NATIONAL_DEX_CUBONE,
    NATIONAL_DEX_MAROWAK,
    NATIONAL_DEX_HITMONLEE,
    NATIONAL_DEX_HITMONCHAN,
    NATIONAL_DEX_LICKITUNG,
    NATIONAL_DEX_KOFFING,
    NATIONAL_DEX_WEEZING,
    NATIONAL_DEX_RHYHORN,
    NATIONAL_DEX_RHYDON,
    NATIONAL_DEX_CHANSEY,
    NATIONAL_DEX_TANGELA,
    NATIONAL_DEX_KANGASKHAN,
    NATIONAL_DEX_HORSEA,
    NATIONAL_DEX_SEADRA,
    NATIONAL_DEX_GOLDEEN,
    NATIONAL_DEX_SEAKING,
    NATIONAL_DEX_STARYU,
    NATIONAL_DEX_STARMIE,
    NATIONAL_DEX_MR_MIME,
    NATIONAL_DEX_SCYTHER,
    NATIONAL_DEX_JYNX,
    NATIONAL_DEX_ELECTABUZZ,
    NATIONAL_DEX_MAGMAR,
    NATIONAL_DEX_PINSIR,
    NATIONAL_DEX_TAUROS,
    NATIONAL_DEX_MAGIKARP,
    NATIONAL_DEX_GYARADOS,
    NATIONAL_DEX_LAPRAS,
    NATIONAL_DEX_DITTO,
    NATIONAL_DEX_EEVEE,
    NATIONAL_DEX_VAPOREON,
    NATIONAL_DEX_JOLTEON,
    NATIONAL_DEX_FLAREON,
    NATIONAL_DEX_PORYGON,
    NATIONAL_DEX_OMANYTE,
    NATIONAL_DEX_OMASTAR,
    NATIONAL_DEX_KABUTO,
    NATIONAL_DEX_KABUTOPS,
    NATIONAL_DEX_AERODACTYL,
    NATIONAL_DEX_SNORLAX,
    NATIONAL_DEX_ARTICUNO,
    NATIONAL_DEX_ZAPDOS,
    NATIONAL_DEX_MOLTRES,
    NATIONAL_DEX_DRATINI,
    NATIONAL_DEX_DRAGONAIR,
    NATIONAL_DEX_DRAGONITE,
    NATIONAL_DEX_MEWTWO,
    NATIONAL_DEX_MEW,

    NATIONAL_DEX_CHIKORITA,
    NATIONAL_DEX_BAYLEEF,
    NATIONAL_DEX_MEGANIUM,
    NATIONAL_DEX_CYNDAQUIL,
    NATIONAL_DEX_QUILAVA,
    NATIONAL_DEX_TYPHLOSION,
    NATIONAL_DEX_TOTODILE,
    NATIONAL_DEX_CROCONAW,
    NATIONAL_DEX_FERALIGATR,
    NATIONAL_DEX_SENTRET,
    NATIONAL_DEX_FURRET,
    NATIONAL_DEX_HOOTHOOT,
    NATIONAL_DEX_NOCTOWL,
    NATIONAL_DEX_LEDYBA,
    NATIONAL_DEX_LEDIAN,
    NATIONAL_DEX_SPINARAK,
    NATIONAL_DEX_ARIADOS,
    NATIONAL_DEX_CROBAT,
    NATIONAL_DEX_CHINCHOU,
    NATIONAL_DEX_LANTURN,
    NATIONAL_DEX_PICHU,
    NATIONAL_DEX_CLEFFA,
    NATIONAL_DEX_IGGLYBUFF,
    NATIONAL_DEX_TOGEPI,
    NATIONAL_DEX_TOGETIC,
    NATIONAL_DEX_NATU,
    NATIONAL_DEX_XATU,
    NATIONAL_DEX_MAREEP,
    NATIONAL_DEX_FLAAFFY,
    NATIONAL_DEX_AMPHAROS,
    NATIONAL_DEX_BELLOSSOM,
    NATIONAL_DEX_MARILL,
    NATIONAL_DEX_AZUMARILL,
    NATIONAL_DEX_SUDOWOODO,
    NATIONAL_DEX_POLITOED,
    NATIONAL_DEX_HOPPIP,
    NATIONAL_DEX_SKIPLOOM,
    NATIONAL_DEX_JUMPLUFF,
    NATIONAL_DEX_AIPOM,
    NATIONAL_DEX_SUNKERN,
    NATIONAL_DEX_SUNFLORA,
    NATIONAL_DEX_YANMA,
    NATIONAL_DEX_WOOPER,
    NATIONAL_DEX_QUAGSIRE,
    NATIONAL_DEX_ESPEON,
    NATIONAL_DEX_UMBREON,
    NATIONAL_DEX_MURKROW,
    NATIONAL_DEX_SLOWKING,
    NATIONAL_DEX_MISDREAVUS,
    NATIONAL_DEX_UNOWN,
    NATIONAL_DEX_WOBBUFFET,
    NATIONAL_DEX_GIRAFARIG,
    NATIONAL_DEX_PINECO,
    NATIONAL_DEX_FORRETRESS,
    NATIONAL_DEX_DUNSPARCE,
    NATIONAL_DEX_GLIGAR,
    NATIONAL_DEX_STEELIX,
    NATIONAL_DEX_SNUBBULL,
    NATIONAL_DEX_GRANBULL,
    NATIONAL_DEX_QWILFISH,
    NATIONAL_DEX_SCIZOR,
    NATIONAL_DEX_SHUCKLE,
    NATIONAL_DEX_HERACROSS,
    NATIONAL_DEX_SNEASEL,
    NATIONAL_DEX_TEDDIURSA,
    NATIONAL_DEX_URSARING,
    NATIONAL_DEX_SLUGMA,
    NATIONAL_DEX_MAGCARGO,
    NATIONAL_DEX_SWINUB,
    NATIONAL_DEX_PILOSWINE,
    NATIONAL_DEX_CORSOLA,
    NATIONAL_DEX_REMORAID,
    NATIONAL_DEX_OCTILLERY,
    NATIONAL_DEX_DELIBIRD,
    NATIONAL_DEX_MANTINE,
    NATIONAL_DEX_SKARMORY,
    NATIONAL_DEX_HOUNDOUR,
    NATIONAL_DEX_HOUNDOOM,
    NATIONAL_DEX_KINGDRA,
    NATIONAL_DEX_PHANPY,
    NATIONAL_DEX_DONPHAN,
    NATIONAL_DEX_PORYGON2,
    NATIONAL_DEX_STANTLER,
    NATIONAL_DEX_SMEARGLE,
    NATIONAL_DEX_TYROGUE,
    NATIONAL_DEX_HITMONTOP,
    NATIONAL_DEX_SMOOCHUM,
    NATIONAL_DEX_ELEKID,
    NATIONAL_DEX_MAGBY,
    NATIONAL_DEX_MILTANK,
    NATIONAL_DEX_BLISSEY,
    NATIONAL_DEX_RAIKOU,
    NATIONAL_DEX_ENTEI,
    NATIONAL_DEX_SUICUNE,
    NATIONAL_DEX_LARVITAR,
    NATIONAL_DEX_PUPITAR,
    NATIONAL_DEX_TYRANITAR,
    NATIONAL_DEX_LUGIA,
    NATIONAL_DEX_HO_OH,
    NATIONAL_DEX_CELEBI,

    NATIONAL_DEX_TREECKO,
    NATIONAL_DEX_GROVYLE,
    NATIONAL_DEX_SCEPTILE,
    NATIONAL_DEX_TORCHIC,
    NATIONAL_DEX_COMBUSKEN,
    NATIONAL_DEX_BLAZIKEN,
    NATIONAL_DEX_MUDKIP,
    NATIONAL_DEX_MARSHTOMP,
    NATIONAL_DEX_SWAMPERT,
    NATIONAL_DEX_POOCHYENA,
    NATIONAL_DEX_MIGHTYENA,
    NATIONAL_DEX_ZIGZAGOON,
    NATIONAL_DEX_LINOONE,
    NATIONAL_DEX_WURMPLE,
    NATIONAL_DEX_SILCOON,
    NATIONAL_DEX_BEAUTIFLY,
    NATIONAL_DEX_CASCOON,
    NATIONAL_DEX_DUSTOX,
    NATIONAL_DEX_LOTAD,
    NATIONAL_DEX_LOMBRE,
    NATIONAL_DEX_LUDICOLO,
    NATIONAL_DEX_SEEDOT,
    NATIONAL_DEX_NUZLEAF,
    NATIONAL_DEX_SHIFTRY,
    NATIONAL_DEX_TAILLOW,
    NATIONAL_DEX_SWELLOW,
    NATIONAL_DEX_WINGULL,
    NATIONAL_DEX_PELIPPER,
    NATIONAL_DEX_RALTS,
    NATIONAL_DEX_KIRLIA,
    NATIONAL_DEX_GARDEVOIR,
    NATIONAL_DEX_SURSKIT,
    NATIONAL_DEX_MASQUERAIN,
    NATIONAL_DEX_SHROOMISH,
    NATIONAL_DEX_BRELOOM,
    NATIONAL_DEX_SLAKOTH,
    NATIONAL_DEX_VIGOROTH,
    NATIONAL_DEX_SLAKING,
    NATIONAL_DEX_NINCADA,
    NATIONAL_DEX_NINJASK,
    NATIONAL_DEX_SHEDINJA,
    NATIONAL_DEX_WHISMUR,
    NATIONAL_DEX_LOUDRED,
    NATIONAL_DEX_EXPLOUD,
    NATIONAL_DEX_MAKUHITA,
    NATIONAL_DEX_HARIYAMA,
    NATIONAL_DEX_AZURILL,
    NATIONAL_DEX_NOSEPASS,
    NATIONAL_DEX_SKITTY,
    NATIONAL_DEX_DELCATTY,
    NATIONAL_DEX_SABLEYE,
    NATIONAL_DEX_MAWILE,
    NATIONAL_DEX_ARON,
    NATIONAL_DEX_LAIRON,
    NATIONAL_DEX_AGGRON,
    NATIONAL_DEX_MEDITITE,
    NATIONAL_DEX_MEDICHAM,
    NATIONAL_DEX_ELECTRIKE,
    NATIONAL_DEX_MANECTRIC,
    NATIONAL_DEX_PLUSLE,
    NATIONAL_DEX_MINUN,
    NATIONAL_DEX_VOLBEAT,
    NATIONAL_DEX_ILLUMISE,
    NATIONAL_DEX_ROSELIA,
    NATIONAL_DEX_GULPIN,
    NATIONAL_DEX_SWALOT,
    NATIONAL_DEX_CARVANHA,
    NATIONAL_DEX_SHARPEDO,
    NATIONAL_DEX_WAILMER,
    NATIONAL_DEX_WAILORD,
    NATIONAL_DEX_NUMEL,
    NATIONAL_DEX_CAMERUPT,
    NATIONAL_DEX_TORKOAL,
    NATIONAL_DEX_SPOINK,
    NATIONAL_DEX_GRUMPIG,
    NATIONAL_DEX_SPINDA,
    NATIONAL_DEX_TRAPINCH,
    NATIONAL_DEX_VIBRAVA,
    NATIONAL_DEX_FLYGON,
    NATIONAL_DEX_CACNEA,
    NATIONAL_DEX_CACTURNE,
    NATIONAL_DEX_SWABLU,
    NATIONAL_DEX_ALTARIA,
    NATIONAL_DEX_ZANGOOSE,
    NATIONAL_DEX_SEVIPER,
    NATIONAL_DEX_LUNATONE,
    NATIONAL_DEX_SOLROCK,
    NATIONAL_DEX_BARBOACH,
    NATIONAL_DEX_WHISCASH,
    NATIONAL_DEX_CORPHISH,
    NATIONAL_DEX_CRAWDAUNT,
    NATIONAL_DEX_BALTOY,
    NATIONAL_DEX_CLAYDOL,
    NATIONAL_DEX_LILEEP,
    NATIONAL_DEX_CRADILY,
    NATIONAL_DEX_ANORITH,
    NATIONAL_DEX_ARMALDO,
    NATIONAL_DEX_FEEBAS,
    NATIONAL_DEX_MILOTIC,
    NATIONAL_DEX_CASTFORM,
    NATIONAL_DEX_KECLEON,
    NATIONAL_DEX_SHUPPET,
    NATIONAL_DEX_BANETTE,
    NATIONAL_DEX_DUSKULL,
    NATIONAL_DEX_DUSCLOPS,
    NATIONAL_DEX_TROPIUS,
    NATIONAL_DEX_CHIMECHO,
    NATIONAL_DEX_ABSOL,
    NATIONAL_DEX_WYNAUT,
    NATIONAL_DEX_SNORUNT,
    NATIONAL_DEX_GLALIE,
    NATIONAL_DEX_SPHEAL,
    NATIONAL_DEX_SEALEO,
    NATIONAL_DEX_WALREIN,
    NATIONAL_DEX_CLAMPERL,
    NATIONAL_DEX_HUNTAIL,
    NATIONAL_DEX_GOREBYSS,
    NATIONAL_DEX_RELICANTH,
    NATIONAL_DEX_LUVDISC,
    NATIONAL_DEX_BAGON,
    NATIONAL_DEX_SHELGON,
    NATIONAL_DEX_SALAMENCE,
    NATIONAL_DEX_BELDUM,
    NATIONAL_DEX_METANG,
    NATIONAL_DEX_METAGROSS,
    NATIONAL_DEX_REGIROCK,
    NATIONAL_DEX_REGICE,
    NATIONAL_DEX_REGISTEEL,
    NATIONAL_DEX_LATIAS,
    NATIONAL_DEX_LATIOS,
    NATIONAL_DEX_KYOGRE,
    NATIONAL_DEX_GROUDON,
    NATIONAL_DEX_RAYQUAZA,
    NATIONAL_DEX_JIRACHI,
    NATIONAL_DEX_DEOXYS,

    NATIONAL_DEX_TURTWIG,
    NATIONAL_DEX_GROTLE,
    NATIONAL_DEX_TORTERRA,
    NATIONAL_DEX_CHIMCHAR,
    NATIONAL_DEX_MONFERNO,
    NATIONAL_DEX_INFERNAPE,
    NATIONAL_DEX_PIPLUP,
    NATIONAL_DEX_PRINPLUP,
    NATIONAL_DEX_EMPOLEON,
    NATIONAL_DEX_STARLY,
    NATIONAL_DEX_STARAVIA,
    NATIONAL_DEX_STARAPTOR,
    NATIONAL_DEX_BIDOOF,
    NATIONAL_DEX_BIBAREL,
    NATIONAL_DEX_KRICKETOT,
    NATIONAL_DEX_KRICKETUNE,
    NATIONAL_DEX_SHINX,
    NATIONAL_DEX_LUXIO,
    NATIONAL_DEX_LUXRAY,
    NATIONAL_DEX_BUDEW,
    NATIONAL_DEX_ROSERADE,
    NATIONAL_DEX_CRANIDOS,
    NATIONAL_DEX_RAMPARDOS,
    NATIONAL_DEX_SHIELDON,
    NATIONAL_DEX_BASTIODON,
    NATIONAL_DEX_BURMY,
    NATIONAL_DEX_WORMADAM,
    NATIONAL_DEX_MOTHIM,
    NATIONAL_DEX_COMBEE,
    NATIONAL_DEX_VESPIQUEN,
    NATIONAL_DEX_PACHIRISU,
    NATIONAL_DEX_BUIZEL,
    NATIONAL_DEX_FLOATZEL,
    NATIONAL_DEX_CHERUBI,
    NATIONAL_DEX_CHERRIM,
    NATIONAL_DEX_SHELLOS,
    NATIONAL_DEX_GASTRODON,
    NATIONAL_DEX_AMBIPOM,
    NATIONAL_DEX_DRIFLOON,
    NATIONAL_DEX_DRIFBLIM,
    NATIONAL_DEX_BUNEARY,
    NATIONAL_DEX_LOPUNNY,
    NATIONAL_DEX_MISMAGIUS,
    NATIONAL_DEX_HONCHKROW,
    NATIONAL_DEX_GLAMEOW,
    NATIONAL_DEX_PURUGLY,
    NATIONAL_DEX_CHINGLING,
    NATIONAL_DEX_STUNKY,
    NATIONAL_DEX_SKUNTANK,
    NATIONAL_DEX_BRONZOR,
    NATIONAL_DEX_BRONZONG,
    NATIONAL_DEX_BONSLY,
    NATIONAL_DEX_MIME_JR,
    NATIONAL_DEX_HAPPINY,
    NATIONAL_DEX_CHATOT,
    NATIONAL_DEX_SPIRITOMB,
    NATIONAL_DEX_GIBLE,
    NATIONAL_DEX_GABITE,
    NATIONAL_DEX_GARCHOMP,
    NATIONAL_DEX_MUNCHLAX,
    NATIONAL_DEX_RIOLU,
    NATIONAL_DEX_LUCARIO,
    NATIONAL_DEX_HIPPOPOTAS,
    NATIONAL_DEX_HIPPOWDON,
    NATIONAL_DEX_SKORUPI,
    NATIONAL_DEX_DRAPION,
    NATIONAL_DEX_CROAGUNK,
    NATIONAL_DEX_TOXICROAK,
    NATIONAL_DEX_CARNIVINE,
    NATIONAL_DEX_FINNEON,
    NATIONAL_DEX_LUMINEON,
    NATIONAL_DEX_MANTYKE,
    NATIONAL_DEX_SNOVER,
    NATIONAL_DEX_ABOMASNOW,
    NATIONAL_DEX_WEAVILE,
    NATIONAL_DEX_MAGNEZONE,
    NATIONAL_DEX_LICKILICKY,
    NATIONAL_DEX_RHYPERIOR,
    NATIONAL_DEX_TANGROWTH,
    NATIONAL_DEX_ELECTIVIRE,
    NATIONAL_DEX_MAGMORTAR,
    NATIONAL_DEX_TOGEKISS,
    NATIONAL_DEX_YANMEGA,
    NATIONAL_DEX_LEAFEON,
    NATIONAL_DEX_GLACEON,
    NATIONAL_DEX_GLISCOR,
    NATIONAL_DEX_MAMOSWINE,
    NATIONAL_DEX_PORYGON_Z,
    NATIONAL_DEX_GALLADE,
    NATIONAL_DEX_PROBOPASS,
    NATIONAL_DEX_DUSKNOIR,
    NATIONAL_DEX_FROSLASS,
    NATIONAL_DEX_ROTOM,
    NATIONAL_DEX_UXIE,
    NATIONAL_DEX_MESPRIT,
    NATIONAL_DEX_AZELF,
    NATIONAL_DEX_DIALGA,
    NATIONAL_DEX_PALKIA,
    NATIONAL_DEX_HEATRAN,
    NATIONAL_DEX_REGIGIGAS,
    NATIONAL_DEX_GIRATINA,
    NATIONAL_DEX_CRESSELIA,
    NATIONAL_DEX_PHIONE,
    NATIONAL_DEX_MANAPHY,
    NATIONAL_DEX_DARKRAI,
    NATIONAL_DEX_SHAYMIN,
    NATIONAL_DEX_ARCEUS,

    NATIONAL_DEX_VICTINI,
    NATIONAL_DEX_SNIVY,
    NATIONAL_DEX_SERVINE,
    NATIONAL_DEX_SERPERIOR,
    NATIONAL_DEX_TEPIG,
    NATIONAL_DEX_PIGNITE,
    NATIONAL_DEX_EMBOAR,
    NATIONAL_DEX_OSHAWOTT,
    NATIONAL_DEX_DEWOTT,
    NATIONAL_DEX_SAMUROTT,
    NATIONAL_DEX_PATRAT,
    NATIONAL_DEX_WATCHOG,
    NATIONAL_DEX_LILLIPUP,
    NATIONAL_DEX_HERDIER,
    NATIONAL_DEX_STOUTLAND,
    NATIONAL_DEX_PURRLOIN,
    NATIONAL_DEX_LIEPARD,
    NATIONAL_DEX_PANSAGE,
    NATIONAL_DEX_SIMISAGE,
    NATIONAL_DEX_PANSEAR,
    NATIONAL_DEX_SIMISEAR,
    NATIONAL_DEX_PANPOUR,
    NATIONAL_DEX_SIMIPOUR,
    NATIONAL_DEX_MUNNA,
    NATIONAL_DEX_MUSHARNA,
    NATIONAL_DEX_PIDOVE,
    NATIONAL_DEX_TRANQUILL,
    NATIONAL_DEX_UNFEZANT,
    NATIONAL_DEX_BLITZLE,
    NATIONAL_DEX_ZEBSTRIKA,
    NATIONAL_DEX_ROGGENROLA,
    NATIONAL_DEX_BOLDORE,
    NATIONAL_DEX_GIGALITH,
    NATIONAL_DEX_WOOBAT,
    NATIONAL_DEX_SWOOBAT,
    NATIONAL_DEX_DRILBUR,
    NATIONAL_DEX_EXCADRILL,
    NATIONAL_DEX_AUDINO,
    NATIONAL_DEX_TIMBURR,
    NATIONAL_DEX_GURDURR,
    NATIONAL_DEX_CONKELDURR,
    NATIONAL_DEX_TYMPOLE,
    NATIONAL_DEX_PALPITOAD,
    NATIONAL_DEX_SEISMITOAD,
    NATIONAL_DEX_THROH,
    NATIONAL_DEX_SAWK,
    NATIONAL_DEX_SEWADDLE,
    NATIONAL_DEX_SWADLOON,
    NATIONAL_DEX_LEAVANNY,
    NATIONAL_DEX_VENIPEDE,
    NATIONAL_DEX_WHIRLIPEDE,
    NATIONAL_DEX_SCOLIPEDE,
    NATIONAL_DEX_COTTONEE,
    NATIONAL_DEX_WHIMSICOTT,
    NATIONAL_DEX_PETILIL,
    NATIONAL_DEX_LILLIGANT,
    NATIONAL_DEX_BASCULIN,
    NATIONAL_DEX_SANDILE,
    NATIONAL_DEX_KROKOROK,
    NATIONAL_DEX_KROOKODILE,
    NATIONAL_DEX_DARUMAKA,
    NATIONAL_DEX_DARMANITAN,
    NATIONAL_DEX_MARACTUS,
    NATIONAL_DEX_DWEBBLE,
    NATIONAL_DEX_CRUSTLE,
    NATIONAL_DEX_SCRAGGY,
    NATIONAL_DEX_SCRAFTY,
    NATIONAL_DEX_SIGILYPH,
    NATIONAL_DEX_YAMASK,
    NATIONAL_DEX_COFAGRIGUS,
    NATIONAL_DEX_TIRTOUGA,
    NATIONAL_DEX_CARRACOSTA,
    NATIONAL_DEX_ARCHEN,
    NATIONAL_DEX_ARCHEOPS,
    NATIONAL_DEX_TRUBBISH,
    NATIONAL_DEX_GARBODOR,
    NATIONAL_DEX_ZORUA,
    NATIONAL_DEX_ZOROARK,
    NATIONAL_DEX_MINCCINO,
    NATIONAL_DEX_CINCCINO,
    NATIONAL_DEX_GOTHITA,
    NATIONAL_DEX_GOTHORITA,
    NATIONAL_DEX_GOTHITELLE,
    NATIONAL_DEX_SOLOSIS,
    NATIONAL_DEX_DUOSION,
    NATIONAL_DEX_REUNICLUS,
    NATIONAL_DEX_DUCKLETT,
    NATIONAL_DEX_SWANNA,
    NATIONAL_DEX_VANILLITE,
    NATIONAL_DEX_VANILLISH,
    NATIONAL_DEX_VANILLUXE,
    NATIONAL_DEX_DEERLING,
    NATIONAL_DEX_SAWSBUCK,
    NATIONAL_DEX_EMOLGA,
    NATIONAL_DEX_KARRABLAST,
    NATIONAL_DEX_ESCAVALIER,
    NATIONAL_DEX_FOONGUS,
    NATIONAL_DEX_AMOONGUSS,
    NATIONAL_DEX_FRILLISH,
    NATIONAL_DEX_JELLICENT,
    NATIONAL_DEX_ALOMOMOLA,
    NATIONAL_DEX_JOLTIK,
    NATIONAL_DEX_GALVANTULA,
    NATIONAL_DEX_FERROSEED,
    NATIONAL_DEX_FERROTHORN,
    NATIONAL_DEX_KLINK,
    NATIONAL_DEX_KLANG,
    NATIONAL_DEX_KLINKLANG,
    NATIONAL_DEX_TYNAMO,
    NATIONAL_DEX_EELEKTRIK,
    NATIONAL_DEX_EELEKTROSS,
    NATIONAL_DEX_ELGYEM,
    NATIONAL_DEX_BEHEEYEM,
    NATIONAL_DEX_LITWICK,
    NATIONAL_DEX_LAMPENT,
    NATIONAL_DEX_CHANDELURE,
    NATIONAL_DEX_AXEW,
    NATIONAL_DEX_FRAXURE,
    NATIONAL_DEX_HAXORUS,
    NATIONAL_DEX_CUBCHOO,
    NATIONAL_DEX_BEARTIC,
    NATIONAL_DEX_CRYOGONAL,
    NATIONAL_DEX_SHELMET,
    NATIONAL_DEX_ACCELGOR,
    NATIONAL_DEX_STUNFISK,
    NATIONAL_DEX_MIENFOO,
    NATIONAL_DEX_MIENSHAO,
    NATIONAL_DEX_DRUDDIGON,
    NATIONAL_DEX_GOLETT,
    NATIONAL_DEX_GOLURK,
    NATIONAL_DEX_PAWNIARD,
    NATIONAL_DEX_BISHARP,
    NATIONAL_DEX_BOUFFALANT,
    NATIONAL_DEX_RUFFLET,
    NATIONAL_DEX_BRAVIARY,
    NATIONAL_DEX_VULLABY,
    NATIONAL_DEX_MANDIBUZZ,
    NATIONAL_DEX_HEATMOR,
    NATIONAL_DEX_DURANT,
    NATIONAL_DEX_DEINO,
    NATIONAL_DEX_ZWEILOUS,
    NATIONAL_DEX_HYDREIGON,
    NATIONAL_DEX_LARVESTA,
    NATIONAL_DEX_VOLCARONA,
    NATIONAL_DEX_COBALION,
    NATIONAL_DEX_TERRAKION,
    NATIONAL_DEX_VIRIZION,
    NATIONAL_DEX_TORNADUS,
    NATIONAL_DEX_THUNDURUS,
    NATIONAL_DEX_RESHIRAM,
    NATIONAL_DEX_ZEKROM,
    NATIONAL_DEX_LANDORUS,
    NATIONAL_DEX_KYUREM,
    NATIONAL_DEX_KELDEO,
    NATIONAL_DEX_MELOETTA,
    NATIONAL_DEX_GENESECT,

    NATIONAL_DEX_CHESPIN,
    NATIONAL_DEX_QUILLADIN,
    NATIONAL_DEX_CHESNAUGHT,
    NATIONAL_DEX_FENNEKIN,
    NATIONAL_DEX_BRAIXEN,
    NATIONAL_DEX_DELPHOX,
    NATIONAL_DEX_FROAKIE,
    NATIONAL_DEX_FROGADIER,
    NATIONAL_DEX_GRENINJA,
    NATIONAL_DEX_BUNNELBY,
    NATIONAL_DEX_DIGGERSBY,
    NATIONAL_DEX_FLETCHLING,
    NATIONAL_DEX_FLETCHINDER,
    NATIONAL_DEX_TALONFLAME,
    NATIONAL_DEX_SCATTERBUG,
    NATIONAL_DEX_SPEWPA,
    NATIONAL_DEX_VIVILLON,
    NATIONAL_DEX_LITLEO,
    NATIONAL_DEX_PYROAR,
    NATIONAL_DEX_FLABEBE,
    NATIONAL_DEX_FLOETTE,
    NATIONAL_DEX_FLORGES,
    NATIONAL_DEX_SKIDDO,
    NATIONAL_DEX_GOGOAT,
    NATIONAL_DEX_PANCHAM,
    NATIONAL_DEX_PANGORO,
    NATIONAL_DEX_FURFROU,
    NATIONAL_DEX_ESPURR,
    NATIONAL_DEX_MEOWSTIC,
    NATIONAL_DEX_HONEDGE,
    NATIONAL_DEX_DOUBLADE,
    NATIONAL_DEX_AEGISLASH,
    NATIONAL_DEX_SPRITZEE,
    NATIONAL_DEX_AROMATISSE,
    NATIONAL_DEX_SWIRLIX,
    NATIONAL_DEX_SLURPUFF,
    NATIONAL_DEX_INKAY,
    NATIONAL_DEX_MALAMAR,
    NATIONAL_DEX_BINACLE,
    NATIONAL_DEX_BARBARACLE,
    NATIONAL_DEX_SKRELP,
    NATIONAL_DEX_DRAGALGE,
    NATIONAL_DEX_CLAUNCHER,
    NATIONAL_DEX_CLAWITZER,
    NATIONAL_DEX_HELIOPTILE,
    NATIONAL_DEX_HELIOLISK,
    NATIONAL_DEX_TYRUNT,
    NATIONAL_DEX_TYRANTRUM,
    NATIONAL_DEX_AMAURA,
    NATIONAL_DEX_AURORUS,
    NATIONAL_DEX_SYLVEON,
    NATIONAL_DEX_HAWLUCHA,
    NATIONAL_DEX_DEDENNE,
    NATIONAL_DEX_CARBINK,
    NATIONAL_DEX_GOOMY,
    NATIONAL_DEX_SLIGGOO,
    NATIONAL_DEX_GOODRA,
    NATIONAL_DEX_KLEFKI,
    NATIONAL_DEX_PHANTUMP,
    NATIONAL_DEX_TREVENANT,
    NATIONAL_DEX_PUMPKABOO,
    NATIONAL_DEX_GOURGEIST,
    NATIONAL_DEX_BERGMITE,
    NATIONAL_DEX_AVALUGG,
    NATIONAL_DEX_NOIBAT,
    NATIONAL_DEX_NOIVERN,
    NATIONAL_DEX_XERNEAS,
    NATIONAL_DEX_YVELTAL,
    NATIONAL_DEX_ZYGARDE,
    NATIONAL_DEX_DIANCIE,
    NATIONAL_DEX_HOOPA,
    NATIONAL_DEX_VOLCANION,

    NATIONAL_DEX_ROWLET,
    NATIONAL_DEX_DARTRIX,
    NATIONAL_DEX_DECIDUEYE,
    NATIONAL_DEX_LITTEN,
    NATIONAL_DEX_TORRACAT,
    NATIONAL_DEX_INCINEROAR,
    NATIONAL_DEX_POPPLIO,
    NATIONAL_DEX_BRIONNE,
    NATIONAL_DEX_PRIMARINA,
    NATIONAL_DEX_PIKIPEK,
    NATIONAL_DEX_TRUMBEAK,
    NATIONAL_DEX_TOUCANNON,
    NATIONAL_DEX_YUNGOOS,
    NATIONAL_DEX_GUMSHOOS,
    NATIONAL_DEX_GRUBBIN,
    NATIONAL_DEX_CHARJABUG,
    NATIONAL_DEX_VIKAVOLT,
    NATIONAL_DEX_CRABRAWLER,
    NATIONAL_DEX_CRABOMINABLE,
    NATIONAL_DEX_ORICORIO,
    NATIONAL_DEX_CUTIEFLY,
    NATIONAL_DEX_RIBOMBEE,
    NATIONAL_DEX_ROCKRUFF,
    NATIONAL_DEX_LYCANROC,
    NATIONAL_DEX_WISHIWASHI,
    NATIONAL_DEX_MAREANIE,
    NATIONAL_DEX_TOXAPEX,
    NATIONAL_DEX_MUDBRAY,
    NATIONAL_DEX_MUDSDALE,
    NATIONAL_DEX_DEWPIDER,
    NATIONAL_DEX_ARAQUANID,
    NATIONAL_DEX_FOMANTIS,
    NATIONAL_DEX_LURANTIS,
    NATIONAL_DEX_MORELULL,
    NATIONAL_DEX_SHIINOTIC,
    NATIONAL_DEX_SALANDIT,
    NATIONAL_DEX_SALAZZLE,
    NATIONAL_DEX_STUFFUL,
    NATIONAL_DEX_BEWEAR,
    NATIONAL_DEX_BOUNSWEET,
    NATIONAL_DEX_STEENEE,
    NATIONAL_DEX_TSAREENA,
    NATIONAL_DEX_COMFEY,
    NATIONAL_DEX_ORANGURU,
    NATIONAL_DEX_PASSIMIAN,
    NATIONAL_DEX_WIMPOD,
    NATIONAL_DEX_GOLISOPOD,
    NATIONAL_DEX_SANDYGAST,
    NATIONAL_DEX_PALOSSAND,
    NATIONAL_DEX_PYUKUMUKU,
    NATIONAL_DEX_TYPE_NULL,
    NATIONAL_DEX_SILVALLY,
    NATIONAL_DEX_MINIOR,
    NATIONAL_DEX_KOMALA,
    NATIONAL_DEX_TURTONATOR,
    NATIONAL_DEX_TOGEDEMARU,
    NATIONAL_DEX_MIMIKYU,
    NATIONAL_DEX_BRUXISH,
    NATIONAL_DEX_DRAMPA,
    NATIONAL_DEX_DHELMISE,
    NATIONAL_DEX_JANGMO_O,
    NATIONAL_DEX_HAKAMO_O,
    NATIONAL_DEX_KOMMO_O,
    NATIONAL_DEX_TAPU_KOKO,
    NATIONAL_DEX_TAPU_LELE,
    NATIONAL_DEX_TAPU_BULU,
    NATIONAL_DEX_TAPU_FINI,
    NATIONAL_DEX_COSMOG,
    NATIONAL_DEX_COSMOEM,
    NATIONAL_DEX_SOLGALEO,
    NATIONAL_DEX_LUNALA,
    NATIONAL_DEX_NIHILEGO,
    NATIONAL_DEX_BUZZWOLE,
    NATIONAL_DEX_PHEROMOSA,
    NATIONAL_DEX_XURKITREE,
    NATIONAL_DEX_CELESTEELA,
    NATIONAL_DEX_KARTANA,
    NATIONAL_DEX_GUZZLORD,
    NATIONAL_DEX_NECROZMA,
    NATIONAL_DEX_MAGEARNA,
    NATIONAL_DEX_MARSHADOW,
    NATIONAL_DEX_POIPOLE,
    NATIONAL_DEX_NAGANADEL,
    NATIONAL_DEX_STAKATAKA,
    NATIONAL_DEX_BLACEPHALON,
    NATIONAL_DEX_ZERAORA,

    NATIONAL_DEX_MELTAN,
    NATIONAL_DEX_MELMETAL,

    NATIONAL_DEX_GROOKEY,
    NATIONAL_DEX_THWACKEY,
    NATIONAL_DEX_RILLABOOM,
    NATIONAL_DEX_SCORBUNNY,
    NATIONAL_DEX_RABOOT,
    NATIONAL_DEX_CINDERACE,
    NATIONAL_DEX_SOBBLE,
    NATIONAL_DEX_DRIZZILE,
    NATIONAL_DEX_INTELEON,
    NATIONAL_DEX_SKWOVET,
    NATIONAL_DEX_GREEDENT,
    NATIONAL_DEX_ROOKIDEE,
    NATIONAL_DEX_CORVISQUIRE,
    NATIONAL_DEX_CORVIKNIGHT,
    NATIONAL_DEX_BLIPBUG,
    NATIONAL_DEX_DOTTLER,
    NATIONAL_DEX_ORBEETLE,
    NATIONAL_DEX_NICKIT,
    NATIONAL_DEX_THIEVUL,
    NATIONAL_DEX_GOSSIFLEUR,
    NATIONAL_DEX_ELDEGOSS,
    NATIONAL_DEX_WOOLOO,
    NATIONAL_DEX_DUBWOOL,
    NATIONAL_DEX_CHEWTLE,
    NATIONAL_DEX_DREDNAW,
    NATIONAL_DEX_YAMPER,
    NATIONAL_DEX_BOLTUND,
    NATIONAL_DEX_ROLYCOLY,
    NATIONAL_DEX_CARKOL,
    NATIONAL_DEX_COALOSSAL,
    NATIONAL_DEX_APPLIN,
    NATIONAL_DEX_FLAPPLE,
    NATIONAL_DEX_APPLETUN,
    NATIONAL_DEX_SILICOBRA,
    NATIONAL_DEX_SANDACONDA,
    NATIONAL_DEX_CRAMORANT,
    NATIONAL_DEX_ARROKUDA,
    NATIONAL_DEX_BARRASKEWDA,
    NATIONAL_DEX_TOXEL,
    NATIONAL_DEX_TOXTRICITY,
    NATIONAL_DEX_SIZZLIPEDE,
    NATIONAL_DEX_CENTISKORCH,
    NATIONAL_DEX_CLOBBOPUS,
    NATIONAL_DEX_GRAPPLOCT,
    NATIONAL_DEX_SINISTEA,
    NATIONAL_DEX_POLTEAGEIST,
    NATIONAL_DEX_HATENNA,
    NATIONAL_DEX_HATTREM,
    NATIONAL_DEX_HATTERENE,
    NATIONAL_DEX_IMPIDIMP,
    NATIONAL_DEX_MORGREM,
    NATIONAL_DEX_GRIMMSNARL,
    NATIONAL_DEX_OBSTAGOON,
    NATIONAL_DEX_PERRSERKER,
    NATIONAL_DEX_CURSOLA,
    NATIONAL_DEX_SIRFETCHD,
    NATIONAL_DEX_MR_RIME,
    NATIONAL_DEX_RUNERIGUS,
    NATIONAL_DEX_MILCERY,
    NATIONAL_DEX_ALCREMIE,
    NATIONAL_DEX_FALINKS,
    NATIONAL_DEX_PINCURCHIN,
    NATIONAL_DEX_SNOM,
    NATIONAL_DEX_FROSMOTH,
    NATIONAL_DEX_STONJOURNER,
    NATIONAL_DEX_EISCUE,
    NATIONAL_DEX_INDEEDEE,
    NATIONAL_DEX_MORPEKO,
    NATIONAL_DEX_CUFANT,
    NATIONAL_DEX_COPPERAJAH,
    NATIONAL_DEX_DRACOZOLT,
    NATIONAL_DEX_ARCTOZOLT,
    NATIONAL_DEX_DRACOVISH,
    NATIONAL_DEX_ARCTOVISH,
    NATIONAL_DEX_DURALUDON,
    NATIONAL_DEX_DREEPY,
    NATIONAL_DEX_DRAKLOAK,
    NATIONAL_DEX_DRAGAPULT,
    NATIONAL_DEX_ZACIAN,
    NATIONAL_DEX_ZAMAZENTA,
    NATIONAL_DEX_ETERNATUS,
    NATIONAL_DEX_KUBFU,
    NATIONAL_DEX_URSHIFU,
    NATIONAL_DEX_ZARUDE,
    NATIONAL_DEX_REGIELEKI,
    NATIONAL_DEX_REGIDRAGO,
    NATIONAL_DEX_GLASTRIER,
    NATIONAL_DEX_SPECTRIER,
    NATIONAL_DEX_CALYREX,
    NATIONAL_DEX_WYRDEER,
    NATIONAL_DEX_KLEAVOR,
    NATIONAL_DEX_URSALUNA,
    NATIONAL_DEX_BASCULEGION,
    NATIONAL_DEX_SNEASLER,
    NATIONAL_DEX_OVERQWIL,
    NATIONAL_DEX_ENAMORUS,
    NATIONAL_DEX_SPRIGATITO,
    NATIONAL_DEX_FLORAGATO,
    NATIONAL_DEX_MEOWSCARADA,
    NATIONAL_DEX_FUECOCO,
    NATIONAL_DEX_CROCALOR,
    NATIONAL_DEX_SKELEDIRGE,
    NATIONAL_DEX_QUAXLY,
    NATIONAL_DEX_QUAXWELL,
    NATIONAL_DEX_QUAQUAVAL,
    NATIONAL_DEX_LECHONK,
    NATIONAL_DEX_OINKOLOGNE,
    NATIONAL_DEX_TAROUNTULA,
    NATIONAL_DEX_SPIDOPS,
    NATIONAL_DEX_NYMBLE,
    NATIONAL_DEX_LOKIX,
    NATIONAL_DEX_PAWMI,
    NATIONAL_DEX_PAWMO,
    NATIONAL_DEX_PAWMOT,
    NATIONAL_DEX_TANDEMAUS,
    NATIONAL_DEX_MAUSHOLD,
    NATIONAL_DEX_FIDOUGH,
    NATIONAL_DEX_DACHSBUN,
    NATIONAL_DEX_SMOLIV,
    NATIONAL_DEX_DOLLIV,
    NATIONAL_DEX_ARBOLIVA,
    NATIONAL_DEX_SQUAWKABILLY,
    NATIONAL_DEX_NACLI,
    NATIONAL_DEX_NACLSTACK,
    NATIONAL_DEX_GARGANACL,
    NATIONAL_DEX_CHARCADET,
    NATIONAL_DEX_ARMAROUGE,
    NATIONAL_DEX_CERULEDGE,
    NATIONAL_DEX_TADBULB,
    NATIONAL_DEX_BELLIBOLT,
    NATIONAL_DEX_WATTREL,
    NATIONAL_DEX_KILOWATTREL,
    NATIONAL_DEX_MASCHIFF,
    NATIONAL_DEX_MABOSSTIFF,
    NATIONAL_DEX_SHROODLE,
    NATIONAL_DEX_GRAFAIAI,
    NATIONAL_DEX_BRAMBLIN,
    NATIONAL_DEX_BRAMBLEGHAST,
    NATIONAL_DEX_TOEDSCOOL,
    NATIONAL_DEX_TOEDSCRUEL,
    NATIONAL_DEX_KLAWF,
    NATIONAL_DEX_CAPSAKID,
    NATIONAL_DEX_SCOVILLAIN,
    NATIONAL_DEX_RELLOR,
    NATIONAL_DEX_RABSCA,
    NATIONAL_DEX_FLITTLE,
    NATIONAL_DEX_ESPATHRA,
    NATIONAL_DEX_TINKATINK,
    NATIONAL_DEX_TINKATUFF,
    NATIONAL_DEX_TINKATON,
    NATIONAL_DEX_WIGLETT,
    NATIONAL_DEX_WUGTRIO,
    NATIONAL_DEX_BOMBIRDIER,
    NATIONAL_DEX_FINIZEN,
    NATIONAL_DEX_PALAFIN,
    NATIONAL_DEX_VAROOM,
    NATIONAL_DEX_REVAVROOM,
    NATIONAL_DEX_CYCLIZAR,
    NATIONAL_DEX_ORTHWORM,
    NATIONAL_DEX_GLIMMET,
    NATIONAL_DEX_GLIMMORA,
    NATIONAL_DEX_GREAVARD,
    NATIONAL_DEX_HOUNDSTONE,
    NATIONAL_DEX_FLAMIGO,
    NATIONAL_DEX_CETODDLE,
    NATIONAL_DEX_CETITAN,
    NATIONAL_DEX_VELUZA,
    NATIONAL_DEX_DONDOZO,
    NATIONAL_DEX_TATSUGIRI,
    NATIONAL_DEX_ANNIHILAPE,
    NATIONAL_DEX_CLODSIRE,
    NATIONAL_DEX_FARIGIRAF,
    NATIONAL_DEX_DUDUNSPARCE,
    NATIONAL_DEX_KINGAMBIT,
    NATIONAL_DEX_GREAT_TUSK,
    NATIONAL_DEX_SCREAM_TAIL,
    NATIONAL_DEX_BRUTE_BONNET,
    NATIONAL_DEX_FLUTTER_MANE,
    NATIONAL_DEX_SLITHER_WING,
    NATIONAL_DEX_SANDY_SHOCKS,
    NATIONAL_DEX_IRON_TREADS,
    NATIONAL_DEX_IRON_BUNDLE,
    NATIONAL_DEX_IRON_HANDS,
    NATIONAL_DEX_IRON_JUGULIS,
    NATIONAL_DEX_IRON_MOTH,
    NATIONAL_DEX_IRON_THORNS,
    NATIONAL_DEX_FRIGIBAX,
    NATIONAL_DEX_ARCTIBAX,
    NATIONAL_DEX_BAXCALIBUR,
    NATIONAL_DEX_GIMMIGHOUL,
    NATIONAL_DEX_GHOLDENGO,
    NATIONAL_DEX_WO_CHIEN,
    NATIONAL_DEX_CHIEN_PAO,
    NATIONAL_DEX_TING_LU,
    NATIONAL_DEX_CHI_YU,
    NATIONAL_DEX_ROARING_MOON,
    NATIONAL_DEX_IRON_VALIANT,
    NATIONAL_DEX_KORAIDON,
    NATIONAL_DEX_MIRAIDON,
    NATIONAL_DEX_WALKING_WAKE,
    NATIONAL_DEX_IRON_LEAVES,
    NATIONAL_DEX_DIPPLIN,
    NATIONAL_DEX_POLTCHAGEIST,
    NATIONAL_DEX_SINISTCHA,
    NATIONAL_DEX_OKIDOGI,
    NATIONAL_DEX_MUNKIDORI,
    NATIONAL_DEX_FEZANDIPITI,
    NATIONAL_DEX_OGERPON,
    NATIONAL_DEX_ARCHALUDON,
    NATIONAL_DEX_HYDRAPPLE,
    NATIONAL_DEX_GOUGING_FIRE,
    NATIONAL_DEX_RAGING_BOLT,
    NATIONAL_DEX_IRON_BOULDER,
    NATIONAL_DEX_IRON_CROWN,
    NATIONAL_DEX_TERAPAGOS,
    NATIONAL_DEX_PECHARUNT,
};
# 1067 "include/constants/pokedex.h"
enum HoennDexOrder
{
    HOENN_DEX_NONE,
    HOENN_DEX_TURTWIG,
    HOENN_DEX_GROTLE,
    HOENN_DEX_TORTERRA,
    HOENN_DEX_CHIMCHAR,
    HOENN_DEX_MONFERNO,
    HOENN_DEX_INFERNAPE,
    HOENN_DEX_PIPLUP,
    HOENN_DEX_PRINPLUP,
    HOENN_DEX_EMPOLEON,
    HOENN_DEX_STARLY,
    HOENN_DEX_STARAVIA,
    HOENN_DEX_STARAPTOR,
    HOENN_DEX_BIDOOF,
    HOENN_DEX_BIBAREL,
    HOENN_DEX_KRICKETOT,
    HOENN_DEX_KRICKETUNE,
    HOENN_DEX_SHINX,
    HOENN_DEX_LUXIO,
    HOENN_DEX_LUXRAY,
    HOENN_DEX_ABRA,
    HOENN_DEX_KADABRA,
    HOENN_DEX_ALAKAZAM,
    HOENN_DEX_MAGIKARP,
    HOENN_DEX_GYARADOS,
    HOENN_DEX_BUDEW,
    HOENN_DEX_ROSELIA,
    HOENN_DEX_ROSERADE,
    HOENN_DEX_ZUBAT,
    HOENN_DEX_GOLBAT,
    HOENN_DEX_CROBAT,
    HOENN_DEX_GEODUDE,
    HOENN_DEX_GRAVELER,
    HOENN_DEX_GOLEM,
    HOENN_DEX_ONIX,
    HOENN_DEX_STEELIX,
    HOENN_DEX_CRANIDOS,
    HOENN_DEX_RAMPARDOS,
    HOENN_DEX_SHIELDON,
    HOENN_DEX_BASTIODON,
    HOENN_DEX_MACHOP,
    HOENN_DEX_MACHOKE,
    HOENN_DEX_MACHAMP,
    HOENN_DEX_PSYDUCK,
    HOENN_DEX_GOLDUCK,
    HOENN_DEX_BURMY,
    HOENN_DEX_WORMADAM,
    HOENN_DEX_MOTHIM,
    HOENN_DEX_WURMPLE,
    HOENN_DEX_SILCOON,
    HOENN_DEX_BEAUTIFLY,
    HOENN_DEX_CASCOON,
    HOENN_DEX_DUSTOX,
    HOENN_DEX_COMBEE,
    HOENN_DEX_VESPIQUEN,
    HOENN_DEX_PARAS,
    HOENN_DEX_PARASECT,
    HOENN_DEX_PACHIRISU,
    HOENN_DEX_BUIZEL,
    HOENN_DEX_FLOATZEL,
    HOENN_DEX_CHERUBI,
    HOENN_DEX_CHERRIM,
    HOENN_DEX_SHELLOS,
    HOENN_DEX_GASTRODON,
    HOENN_DEX_QWILFISH,
    HOENN_DEX_OVERQWIL,
    HOENN_DEX_HERACROSS,
    HOENN_DEX_AIPOM,
    HOENN_DEX_AMBIPOM,
    HOENN_DEX_DRIFLOON,
    HOENN_DEX_DRIFBLIM,
    HOENN_DEX_BUNEARY,
    HOENN_DEX_LOPUNNY,
    HOENN_DEX_STANTLER,
    HOENN_DEX_WYRDEER,
    HOENN_DEX_GASTLY,
    HOENN_DEX_HAUNTER,
    HOENN_DEX_GENGAR,
    HOENN_DEX_MISDREAVUS,
    HOENN_DEX_MISMAGIUS,
    HOENN_DEX_MURKROW,
    HOENN_DEX_HONCHKROW,
    HOENN_DEX_GLAMEOW,
    HOENN_DEX_PURUGLY,
    HOENN_DEX_GOLDEEN,
    HOENN_DEX_SEAKING,
    HOENN_DEX_BARBOACH,
    HOENN_DEX_WHISCASH,
    HOENN_DEX_BASCULIN,
    HOENN_DEX_BASCULEGION,
    HOENN_DEX_CHINGLING,
    HOENN_DEX_CHIMECHO,
    HOENN_DEX_STUNKY,
    HOENN_DEX_SKUNTANK,
    HOENN_DEX_MEDITITE,
    HOENN_DEX_MEDICHAM,
    HOENN_DEX_BRONZOR,
    HOENN_DEX_BRONZONG,
    HOENN_DEX_NOSEPASS,
    HOENN_DEX_PROBOPASS,
    HOENN_DEX_MAGNEMITE,
    HOENN_DEX_MAGNETON,
    HOENN_DEX_MAGNEZONE,
    HOENN_DEX_VOLTORB,
    HOENN_DEX_ELECTRODE,
    HOENN_DEX_ROTOM,
    HOENN_DEX_PONYTA,
    HOENN_DEX_RAPIDASH,
    HOENN_DEX_HOUNDOUR,
    HOENN_DEX_HOUNDOOM,
    HOENN_DEX_MAGBY,
    HOENN_DEX_MAGMAR,
    HOENN_DEX_MAGMORTAR,
    HOENN_DEX_ELEKID,
    HOENN_DEX_ELECTABUZZ,
    HOENN_DEX_ELECTIVIRE,
    HOENN_DEX_BONSLY,
    HOENN_DEX_SUDOWOODO,
    HOENN_DEX_MIME_JR,
    HOENN_DEX_MR_MIME,
    HOENN_DEX_TOGEPI,
    HOENN_DEX_TOGETIC,
    HOENN_DEX_TOGEKISS,
    HOENN_DEX_HAPPINY,
    HOENN_DEX_CHANSEY,
    HOENN_DEX_BLISSEY,
    HOENN_DEX_CLEFFA,
    HOENN_DEX_CLEFAIRY,
    HOENN_DEX_CLEFABLE,
    HOENN_DEX_CHATOT,
    HOENN_DEX_PICHU,
    HOENN_DEX_PIKACHU,
    HOENN_DEX_RAICHU,
    HOENN_DEX_EEVEE,
    HOENN_DEX_VAPOREON,
    HOENN_DEX_JOLTEON,
    HOENN_DEX_FLAREON,
    HOENN_DEX_ESPEON,
    HOENN_DEX_UMBREON,
    HOENN_DEX_LEAFEON,
    HOENN_DEX_GLACEON,
    HOENN_DEX_SYLVEON,
    HOENN_DEX_RALTS,
    HOENN_DEX_KIRLIA,
    HOENN_DEX_GARDEVOIR,
    HOENN_DEX_GALLADE,
    HOENN_DEX_HOOTHOOT,
    HOENN_DEX_NOCTOWL,
    HOENN_DEX_ROWLET,
    HOENN_DEX_DARTRIX,
    HOENN_DEX_DECIDUEYE,
    HOENN_DEX_SPIRITOMB,
    HOENN_DEX_GIBLE,
    HOENN_DEX_GABITE,
    HOENN_DEX_GARCHOMP,
    HOENN_DEX_GLIGAR,
    HOENN_DEX_GLISCOR,
    HOENN_DEX_MUNCHLAX,
    HOENN_DEX_SNORLAX,
    HOENN_DEX_UNOWN,
    HOENN_DEX_RIOLU,
    HOENN_DEX_LUCARIO,
    HOENN_DEX_WOOPER,
    HOENN_DEX_QUAGSIRE,
    HOENN_DEX_WINGULL,
    HOENN_DEX_PELIPPER,
    HOENN_DEX_SWABLU,
    HOENN_DEX_ALTARIA,
    HOENN_DEX_GIRAFARIG,
    HOENN_DEX_FARIGIRAF,
    HOENN_DEX_HIPPOPOTAS,
    HOENN_DEX_HIPPOWDON,
    HOENN_DEX_TEDDIURSA,
    HOENN_DEX_URSARING,
    HOENN_DEX_URSALUNA,
    HOENN_DEX_GOOMY,
    HOENN_DEX_SLIGGOO,
    HOENN_DEX_GOODRA,
    HOENN_DEX_AZURILL,
    HOENN_DEX_MARILL,
    HOENN_DEX_AZUMARILL,
    HOENN_DEX_OSHAWOTT,
    HOENN_DEX_DEWOTT,
    HOENN_DEX_SAMUROTT,
    HOENN_DEX_SKORUPI,
    HOENN_DEX_DRAPION,
    HOENN_DEX_CROAGUNK,
    HOENN_DEX_TOXICROAK,
    HOENN_DEX_CARNIVINE,
    HOENN_DEX_PETILIL,
    HOENN_DEX_LILLIGANT,
    HOENN_DEX_TANGELA,
    HOENN_DEX_TANGROWTH,
    HOENN_DEX_LICKITUNG,
    HOENN_DEX_LICKILICKY,
    HOENN_DEX_YANMA,
    HOENN_DEX_YANMEGA,
    HOENN_DEX_SCYTHER,
    HOENN_DEX_SCIZOR,
    HOENN_DEX_KLEAVOR,
    HOENN_DEX_TROPIUS,
    HOENN_DEX_RHYHORN,
    HOENN_DEX_RHYDON,
    HOENN_DEX_RHYPERIOR,
    HOENN_DEX_DUSKULL,
    HOENN_DEX_DUSCLOPS,
    HOENN_DEX_DUSKNOIR,
    HOENN_DEX_CYNDAQUIL,
    HOENN_DEX_QUILAVA,
    HOENN_DEX_TYPHLOSION,
    HOENN_DEX_GROWLITHE,
    HOENN_DEX_ARCANINE,
    HOENN_DEX_VULPIX,
    HOENN_DEX_NINETALES,
    HOENN_DEX_REMORAID,
    HOENN_DEX_OCTILLERY,
    HOENN_DEX_FINNEON,
    HOENN_DEX_LUMINEON,
    HOENN_DEX_TENTACOOL,
    HOENN_DEX_TENTACRUEL,
    HOENN_DEX_FEEBAS,
    HOENN_DEX_MILOTIC,
    HOENN_DEX_MANTYKE,
    HOENN_DEX_MANTINE,
    HOENN_DEX_SPHEAL,
    HOENN_DEX_SEALEO,
    HOENN_DEX_WALREIN,
    HOENN_DEX_SNOVER,
    HOENN_DEX_ABOMASNOW,
    HOENN_DEX_SNEASEL,
    HOENN_DEX_WEAVILE,
    HOENN_DEX_SNEASLER,
    HOENN_DEX_SWINUB,
    HOENN_DEX_PILOSWINE,
    HOENN_DEX_MAMOSWINE,
    HOENN_DEX_SNORUNT,
    HOENN_DEX_GLALIE,
    HOENN_DEX_FROSLASS,
    HOENN_DEX_BERGMITE,
    HOENN_DEX_AVALUGG,
    HOENN_DEX_ZORUA,
    HOENN_DEX_ZOROARK,
    HOENN_DEX_RUFFLET,
    HOENN_DEX_BRAVIARY,
    HOENN_DEX_PORYGON,
    HOENN_DEX_PORYGON2,
    HOENN_DEX_PORYGON_Z,
    HOENN_DEX_ABSOL,
    HOENN_DEX_UXIE,
    HOENN_DEX_MESPRIT,
    HOENN_DEX_AZELF,
    HOENN_DEX_HEATRAN,
    HOENN_DEX_REGIGIGAS,
    HOENN_DEX_CRESSELIA,
    HOENN_DEX_TORNADUS,
    HOENN_DEX_THUNDURUS,
    HOENN_DEX_LANDORUS,
    HOENN_DEX_ENAMORUS,
    HOENN_DEX_DIALGA,
    HOENN_DEX_PALKIA,
    HOENN_DEX_GIRATINA,
    HOENN_DEX_ARCEUS,
    HOENN_DEX_PHIONE,
    HOENN_DEX_MANAPHY,
    HOENN_DEX_SHAYMIN,
    HOENN_DEX_DARKRAI,
};
# 1359 "include/constants/pokedex.h"
enum
{
    DEX_MODE_HOENN,
    DEX_MODE_NATIONAL
};

enum
{
    FLAG_GET_SEEN,
    FLAG_GET_CAUGHT,
    FLAG_SET_SEEN,
    FLAG_SET_CAUGHT
};
# 17 "include/global.h" 2
# 1 "include/constants/apricorn_tree.h" 1



# 1 "include/constants/items.h" 1
# 5 "include/constants/apricorn_tree.h" 2


enum ApricornType
{
    APRICORN_RED = 188,
    APRICORN_BLUE = 189,
    APRICORN_YELLOW = 190,
    APRICORN_GREEN = 191,
    APRICORN_PINK = 192,
    APRICORN_WHITE = 193,
    APRICORN_BLACK = 194,
    APRICORN_BERRY_CHERI = 514,
    APRICORN_BERRY_CHESTO = 515,
    APRICORN_BERRY_PECHA = 516,
    APRICORN_BERRY_RAWST = 517,
    APRICORN_BERRY_ASPEAR = 518,
    APRICORN_BERRY_LEPPA = 519,
    APRICORN_BERRY_ORAN = 520,
    APRICORN_BERRY_PERSIM = 521,
    APRICORN_BERRY_LUM = 522,
    APRICORN_BERRY_SITRUS = 523,
    APRICORN_BERRY_FIGY = 524,
    APRICORN_BERRY_WIKI = 525,
    APRICORN_BERRY_MAGO = 526,
    APRICORN_BERRY_AGUAV = 527,
    APRICORN_BERRY_IAPAPA = 528,
    APRICORN_BERRY_RAZZ = 529,
    APRICORN_BERRY_BLUK = 530,
    APRICORN_BERRY_NANAB = 531,
    APRICORN_BERRY_WEPEAR = 532,
    APRICORN_BERRY_PINAP = 533,
    APRICORN_BERRY_POMEG = 534,
    APRICORN_BERRY_KELPSY = 535,
    APRICORN_BERRY_QUALOT = 536,
    APRICORN_BERRY_HONDEW = 537,
    APRICORN_BERRY_GREPA = 538,
    APRICORN_BERRY_TAMATO = 539,
    APRICORN_BERRY_CORNN = 540,
    APRICORN_BERRY_MAGOST = 541,
    APRICORN_BERRY_RABUTA = 542,
    APRICORN_BERRY_NOMEL = 543,
    APRICORN_BERRY_SPELON = 544,
    APRICORN_BERRY_PAMTRE = 545,
    APRICORN_BERRY_WATMEL = 546,
    APRICORN_BERRY_DURIN = 547,
    APRICORN_BERRY_BELUE = 548,
    APRICORN_BERRY_OCCA = 550,
    APRICORN_BERRY_PASSHO = 551,
    APRICORN_BERRY_WACAN = 552,
    APRICORN_BERRY_RINDO = 553,
    APRICORN_BERRY_YACHE = 554,
    APRICORN_BERRY_CHOPLE = 555,
    APRICORN_BERRY_KEBIA = 556,
    APRICORN_BERRY_SHUCA = 557,
    APRICORN_BERRY_COBA = 558,
    APRICORN_BERRY_PAYAPA = 559,
    APRICORN_BERRY_TANGA = 560,
    APRICORN_BERRY_CHARTI = 561,
    APRICORN_BERRY_KASIB = 562,
    APRICORN_BERRY_HABAN = 563,
    APRICORN_BERRY_COLBUR = 564,
    APRICORN_BERRY_BABIRI = 565,
    APRICORN_BERRY_CHILAN = 549,
    APRICORN_BERRY_LIECHI = 567,
    APRICORN_BERRY_GANLON = 568,
    APRICORN_BERRY_SALAC = 569,
    APRICORN_BERRY_PETAYA = 570,
    APRICORN_BERRY_APICOT = 571,
    APRICORN_BERRY_LANSAT = 572,
    APRICORN_BERRY_STARF = 573,
    APRICORN_BERRY_ENIGMA = 574,
    APRICORN_BERRY_MICLE = 575,
    APRICORN_BERRY_CUSTAP = 576,
    APRICORN_BERRY_JABOCA = 577,
    APRICORN_BERRY_ROWAP = 578,
    APRICORN_BERRY_ROSELI = 566,
    APRICORN_BERRY_KEE = 579,
    APRICORN_BERRY_MARANGA = 580,
};
# 18 "include/global.h" 2
# 1 "include/constants/berry.h" 1
# 19 "include/global.h" 2
# 1 "include/constants/maps.h" 1



# 1 "include/constants/map_groups.h" 1
# 12 "include/constants/map_groups.h"
enum
{

    MAP_TWIN_LEAF_TOWN = (0 | (0 << 8)),
    MAP_SANDGEM_TOWN = (1 | (0 << 8)),
    MAP_JUBILIFE_CITY = (2 | (0 << 8)),
    MAP_OREBURGH_CITY = (3 | (0 << 8)),
    MAP_FLOROMA_TOWN = (4 | (0 << 8)),
    MAP_ETERNA_CITY = (5 | (0 << 8)),
    MAP_HEARTHOME_CITY = (6 | (0 << 8)),
    MAP_SOLACEON_TOWN = (7 | (0 << 8)),
    MAP_VEILSTONE_CITY = (8 | (0 << 8)),
    MAP_PASTORIA_CITY = (9 | (0 << 8)),
    MAP_CELESTIC_TOWN = (10 | (0 << 8)),
    MAP_CANALAVE_CITY = (11 | (0 << 8)),
    MAP_SUNY_SHORE_CITY = (12 | (0 << 8)),
    MAP_VALLEY_WINDWORKS = (13 | (0 << 8)),
    MAP_FUEGO_IRONWORKS = (14 | (0 << 8)),
    MAP_ETERNA_FOREST_EXTERIOR = (15 | (0 << 8)),
    MAP_SINNOH_POKEMON_LEAUGE = (16 | (0 << 8)),
    MAP_VERITY_LAKEFRONT = (17 | (0 << 8)),
    MAP_LAKE_VERITY = (18 | (0 << 8)),
    MAP_VALOR_LAKEFRONT = (19 | (0 << 8)),
    MAP_LAKE_VALOR = (20 | (0 << 8)),
    MAP_IRON_ISLAND_EXTERIOR = (21 | (0 << 8)),
    MAP_ROUTE_201 = (22 | (0 << 8)),
    MAP_ROUTE_202 = (23 | (0 << 8)),
    MAP_ROUTE_203 = (24 | (0 << 8)),
    MAP_ROUTE_204_NORTH = (25 | (0 << 8)),
    MAP_ROUTE_204_SOUTH = (26 | (0 << 8)),
    MAP_ROUTE_205_SOUTH = (27 | (0 << 8)),
    MAP_ROUTE_205_NORTH = (28 | (0 << 8)),
    MAP_ROUTE_206 = (29 | (0 << 8)),
    MAP_ROUTE_207 = (30 | (0 << 8)),
    MAP_ROUTE_208 = (31 | (0 << 8)),
    MAP_ROUTE_209 = (32 | (0 << 8)),
    MAP_ROUTE_210_SOUTH = (33 | (0 << 8)),
    MAP_ROUTE_210_NORTH = (34 | (0 << 8)),
    MAP_ROUTE_211 = (35 | (0 << 8)),
    MAP_ROUTE_212_WEST = (36 | (0 << 8)),
    MAP_ROUTE_212_EAST = (37 | (0 << 8)),
    MAP_ROUTE_213 = (38 | (0 << 8)),
    MAP_ROUTE_214 = (39 | (0 << 8)),
    MAP_ROUTE_215 = (40 | (0 << 8)),
    MAP_ROUTE_218 = (41 | (0 << 8)),
    MAP_ROUTE_219 = (42 | (0 << 8)),
    MAP_ROUTE_220 = (43 | (0 << 8)),
    MAP_ROUTE_221 = (44 | (0 << 8)),
    MAP_ROUTE_222 = (45 | (0 << 8)),
    MAP_ROUTE_223 = (46 | (0 << 8)),


    MAP_OREBURGH_GATE = (0 | (1 << 8)),
    MAP_OREBURGH_GATE_UNDERGROUND = (1 | (1 << 8)),
    MAP_RAVAGED_PATH = (2 | (1 << 8)),
    MAP_OREBURGH_MINE = (3 | (1 << 8)),
    MAP_OREBURGH_MINE_B1F = (4 | (1 << 8)),
    MAP_LAKE_VERITY_CAVERN = (5 | (1 << 8)),
    MAP_WAYWARD_CAVE_1F = (6 | (1 << 8)),
    MAP_WAYWARD_CAVE_B1F = (7 | (1 << 8)),
    MAP_IRON_ISLAND_CAVE_1F = (8 | (1 << 8)),
    MAP_IRON_ISLAND_CAVE_B1F = (9 | (1 << 8)),
    MAP_IRON_ISLAND_CAVE_B2F = (10 | (1 << 8)),
    MAP_IRON_ISLAND_CAVE_B3F = (11 | (1 << 8)),
    MAP_IRON_ISLAND_REGISTEEL_ROOM = (12 | (1 << 8)),


    MAP_PLAYERS_HOUSE_1F = (0 | (2 << 8)),
    MAP_PLAYERS_HOUSE_2F = (1 | (2 << 8)),
    MAP_RIVALS_HOUSE_1F = (2 | (2 << 8)),
    MAP_RIVALS_HOUSE_2F = (3 | (2 << 8)),
    MAP_TWIN_LEAF_TOWN_BOTTOM_LEFT_HOUSE = (4 | (2 << 8)),
    MAP_TWIN_LEAF_TOWN_TOP_RIGHT_HOUSE = (5 | (2 << 8)),


    MAP_SANDGEM_TOWN_POKEMON_CENTER_1F = (0 | (3 << 8)),
    MAP_SANDGEM_TOWN_POKEMON_CENTER_2F = (1 | (3 << 8)),
    MAP_SANDGEM_TOWN_POKEMON_MART = (2 | (3 << 8)),
    MAP_SANDGEM_TOWN_PROFFESOR_ROWANS_LAB = (3 | (3 << 8)),
    MAP_SANDGEM_TOWN_BOTTOM_LEFT_HOUSE = (4 | (3 << 8)),
    MAP_SANDGEM_TOWN_RIVALS_HOUSE_1F = (5 | (3 << 8)),
    MAP_SANDGEM_TOWN_RIVALS_HOUSE_2F = (6 | (3 << 8)),


    MAP_JUBILIFE_CITY_POKEMON_CENTER_1F = (0 | (4 << 8)),
    MAP_JUBILIFE_CITY_POKEMON_CENTER_2F = (1 | (4 << 8)),
    MAP_JUBILIFE_CITY_POKEMON_MART = (2 | (4 << 8)),
    MAP_JUBILIFE_CITY_SOUTH_HOUSE_1F = (3 | (4 << 8)),
    MAP_JUBILIFE_CITY_SOUTH_HOUSE_2F = (4 | (4 << 8)),
    MAP_JUBILIFE_CITY_CONDOMINIUMS_1F = (5 | (4 << 8)),
    MAP_JUBILIFE_CITY_CONDOMINIUMS_2F = (6 | (4 << 8)),
    MAP_JUBILIFE_CITY_SCHOOL = (7 | (4 << 8)),


    MAP_JUBILIFE_CITY_EAST_ENTRANCE = (0 | (5 << 8)),


    MAP_PETALBURG_CITY = (0 | (6 << 8)),
    MAP_SLATEPORT_CITY = (1 | (6 << 8)),
    MAP_MAUVILLE_CITY = (2 | (6 << 8)),
    MAP_RUSTBORO_CITY = (3 | (6 << 8)),
    MAP_FORTREE_CITY = (4 | (6 << 8)),
    MAP_LILYCOVE_CITY = (5 | (6 << 8)),
    MAP_MOSSDEEP_CITY = (6 | (6 << 8)),
    MAP_SOOTOPOLIS_CITY = (7 | (6 << 8)),
    MAP_EVER_GRANDE_CITY = (8 | (6 << 8)),
    MAP_LITTLEROOT_TOWN = (9 | (6 << 8)),
    MAP_OLDALE_TOWN = (10 | (6 << 8)),
    MAP_DEWFORD_TOWN = (11 | (6 << 8)),
    MAP_LAVARIDGE_TOWN = (12 | (6 << 8)),
    MAP_FALLARBOR_TOWN = (13 | (6 << 8)),
    MAP_VERDANTURF_TOWN = (14 | (6 << 8)),
    MAP_PACIFIDLOG_TOWN = (15 | (6 << 8)),
    MAP_ROUTE101 = (16 | (6 << 8)),
    MAP_ROUTE102 = (17 | (6 << 8)),
    MAP_ROUTE103 = (18 | (6 << 8)),
    MAP_ROUTE104 = (19 | (6 << 8)),
    MAP_ROUTE105 = (20 | (6 << 8)),
    MAP_ROUTE106 = (21 | (6 << 8)),
    MAP_ROUTE107 = (22 | (6 << 8)),
    MAP_ROUTE108 = (23 | (6 << 8)),
    MAP_ROUTE109 = (24 | (6 << 8)),
    MAP_ROUTE110 = (25 | (6 << 8)),
    MAP_ROUTE111 = (26 | (6 << 8)),
    MAP_ROUTE112 = (27 | (6 << 8)),
    MAP_ROUTE113 = (28 | (6 << 8)),
    MAP_ROUTE114 = (29 | (6 << 8)),
    MAP_ROUTE115 = (30 | (6 << 8)),
    MAP_ROUTE116 = (31 | (6 << 8)),
    MAP_ROUTE117 = (32 | (6 << 8)),
    MAP_ROUTE118 = (33 | (6 << 8)),
    MAP_ROUTE119 = (34 | (6 << 8)),
    MAP_ROUTE120 = (35 | (6 << 8)),
    MAP_ROUTE121 = (36 | (6 << 8)),
    MAP_ROUTE122 = (37 | (6 << 8)),
    MAP_ROUTE123 = (38 | (6 << 8)),
    MAP_ROUTE124 = (39 | (6 << 8)),
    MAP_ROUTE125 = (40 | (6 << 8)),
    MAP_ROUTE126 = (41 | (6 << 8)),
    MAP_ROUTE127 = (42 | (6 << 8)),
    MAP_ROUTE128 = (43 | (6 << 8)),
    MAP_ROUTE129 = (44 | (6 << 8)),
    MAP_ROUTE130 = (45 | (6 << 8)),
    MAP_ROUTE131 = (46 | (6 << 8)),
    MAP_ROUTE132 = (47 | (6 << 8)),
    MAP_ROUTE133 = (48 | (6 << 8)),
    MAP_ROUTE134 = (49 | (6 << 8)),
    MAP_UNDERWATER_ROUTE124 = (50 | (6 << 8)),
    MAP_UNDERWATER_ROUTE126 = (51 | (6 << 8)),
    MAP_UNDERWATER_ROUTE127 = (52 | (6 << 8)),
    MAP_UNDERWATER_ROUTE128 = (53 | (6 << 8)),
    MAP_UNDERWATER_ROUTE129 = (54 | (6 << 8)),
    MAP_UNDERWATER_ROUTE105 = (55 | (6 << 8)),
    MAP_UNDERWATER_ROUTE125 = (56 | (6 << 8)),


    MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F = (0 | (7 << 8)),
    MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F = (1 | (7 << 8)),
    MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F = (2 | (7 << 8)),
    MAP_LITTLEROOT_TOWN_MAYS_HOUSE_2F = (3 | (7 << 8)),
    MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB = (4 | (7 << 8)),


    MAP_OLDALE_TOWN_HOUSE1 = (0 | (8 << 8)),
    MAP_OLDALE_TOWN_HOUSE2 = (1 | (8 << 8)),
    MAP_OLDALE_TOWN_POKEMON_CENTER_1F = (2 | (8 << 8)),
    MAP_OLDALE_TOWN_POKEMON_CENTER_2F = (3 | (8 << 8)),
    MAP_OLDALE_TOWN_MART = (4 | (8 << 8)),


    MAP_DEWFORD_TOWN_HOUSE1 = (0 | (9 << 8)),
    MAP_DEWFORD_TOWN_POKEMON_CENTER_1F = (1 | (9 << 8)),
    MAP_DEWFORD_TOWN_POKEMON_CENTER_2F = (2 | (9 << 8)),
    MAP_DEWFORD_TOWN_GYM = (3 | (9 << 8)),
    MAP_DEWFORD_TOWN_HALL = (4 | (9 << 8)),
    MAP_DEWFORD_TOWN_HOUSE2 = (5 | (9 << 8)),


    MAP_LAVARIDGE_TOWN_HERB_SHOP = (0 | (10 << 8)),
    MAP_LAVARIDGE_TOWN_GYM_1F = (1 | (10 << 8)),
    MAP_LAVARIDGE_TOWN_GYM_B1F = (2 | (10 << 8)),
    MAP_LAVARIDGE_TOWN_HOUSE = (3 | (10 << 8)),
    MAP_LAVARIDGE_TOWN_MART = (4 | (10 << 8)),
    MAP_LAVARIDGE_TOWN_POKEMON_CENTER_1F = (5 | (10 << 8)),
    MAP_LAVARIDGE_TOWN_POKEMON_CENTER_2F = (6 | (10 << 8)),


    MAP_FALLARBOR_TOWN_MART = (0 | (11 << 8)),
    MAP_FALLARBOR_TOWN_BATTLE_TENT_LOBBY = (1 | (11 << 8)),
    MAP_FALLARBOR_TOWN_BATTLE_TENT_CORRIDOR = (2 | (11 << 8)),
    MAP_FALLARBOR_TOWN_BATTLE_TENT_BATTLE_ROOM = (3 | (11 << 8)),
    MAP_FALLARBOR_TOWN_POKEMON_CENTER_1F = (4 | (11 << 8)),
    MAP_FALLARBOR_TOWN_POKEMON_CENTER_2F = (5 | (11 << 8)),
    MAP_FALLARBOR_TOWN_COZMOS_HOUSE = (6 | (11 << 8)),
    MAP_FALLARBOR_TOWN_MOVE_RELEARNERS_HOUSE = (7 | (11 << 8)),


    MAP_VERDANTURF_TOWN_BATTLE_TENT_LOBBY = (0 | (12 << 8)),
    MAP_VERDANTURF_TOWN_BATTLE_TENT_CORRIDOR = (1 | (12 << 8)),
    MAP_VERDANTURF_TOWN_BATTLE_TENT_BATTLE_ROOM = (2 | (12 << 8)),
    MAP_VERDANTURF_TOWN_MART = (3 | (12 << 8)),
    MAP_VERDANTURF_TOWN_POKEMON_CENTER_1F = (4 | (12 << 8)),
    MAP_VERDANTURF_TOWN_POKEMON_CENTER_2F = (5 | (12 << 8)),
    MAP_VERDANTURF_TOWN_WANDAS_HOUSE = (6 | (12 << 8)),
    MAP_VERDANTURF_TOWN_FRIENDSHIP_RATERS_HOUSE = (7 | (12 << 8)),
    MAP_VERDANTURF_TOWN_HOUSE = (8 | (12 << 8)),


    MAP_PACIFIDLOG_TOWN_POKEMON_CENTER_1F = (0 | (13 << 8)),
    MAP_PACIFIDLOG_TOWN_POKEMON_CENTER_2F = (1 | (13 << 8)),
    MAP_PACIFIDLOG_TOWN_HOUSE1 = (2 | (13 << 8)),
    MAP_PACIFIDLOG_TOWN_HOUSE2 = (3 | (13 << 8)),
    MAP_PACIFIDLOG_TOWN_HOUSE3 = (4 | (13 << 8)),
    MAP_PACIFIDLOG_TOWN_HOUSE4 = (5 | (13 << 8)),
    MAP_PACIFIDLOG_TOWN_HOUSE5 = (6 | (13 << 8)),


    MAP_PETALBURG_CITY_WALLYS_HOUSE = (0 | (14 << 8)),
    MAP_PETALBURG_CITY_GYM = (1 | (14 << 8)),
    MAP_PETALBURG_CITY_HOUSE1 = (2 | (14 << 8)),
    MAP_PETALBURG_CITY_HOUSE2 = (3 | (14 << 8)),
    MAP_PETALBURG_CITY_POKEMON_CENTER_1F = (4 | (14 << 8)),
    MAP_PETALBURG_CITY_POKEMON_CENTER_2F = (5 | (14 << 8)),
    MAP_PETALBURG_CITY_MART = (6 | (14 << 8)),


    MAP_SLATEPORT_CITY_STERNS_SHIPYARD_1F = (0 | (15 << 8)),
    MAP_SLATEPORT_CITY_STERNS_SHIPYARD_2F = (1 | (15 << 8)),
    MAP_SLATEPORT_CITY_BATTLE_TENT_LOBBY = (2 | (15 << 8)),
    MAP_SLATEPORT_CITY_BATTLE_TENT_CORRIDOR = (3 | (15 << 8)),
    MAP_SLATEPORT_CITY_BATTLE_TENT_BATTLE_ROOM = (4 | (15 << 8)),
    MAP_SLATEPORT_CITY_NAME_RATERS_HOUSE = (5 | (15 << 8)),
    MAP_SLATEPORT_CITY_POKEMON_FAN_CLUB = (6 | (15 << 8)),
    MAP_SLATEPORT_CITY_OCEANIC_MUSEUM_1F = (7 | (15 << 8)),
    MAP_SLATEPORT_CITY_OCEANIC_MUSEUM_2F = (8 | (15 << 8)),
    MAP_SLATEPORT_CITY_HARBOR = (9 | (15 << 8)),
    MAP_SLATEPORT_CITY_HOUSE = (10 | (15 << 8)),
    MAP_SLATEPORT_CITY_POKEMON_CENTER_1F = (11 | (15 << 8)),
    MAP_SLATEPORT_CITY_POKEMON_CENTER_2F = (12 | (15 << 8)),
    MAP_SLATEPORT_CITY_MART = (13 | (15 << 8)),


    MAP_MAUVILLE_CITY_GYM = (0 | (16 << 8)),
    MAP_MAUVILLE_CITY_BIKE_SHOP = (1 | (16 << 8)),
    MAP_MAUVILLE_CITY_HOUSE1 = (2 | (16 << 8)),
    MAP_MAUVILLE_CITY_GAME_CORNER = (3 | (16 << 8)),
    MAP_MAUVILLE_CITY_HOUSE2 = (4 | (16 << 8)),
    MAP_MAUVILLE_CITY_POKEMON_CENTER_1F = (5 | (16 << 8)),
    MAP_MAUVILLE_CITY_POKEMON_CENTER_2F = (6 | (16 << 8)),
    MAP_MAUVILLE_CITY_MART = (7 | (16 << 8)),


    MAP_RUSTBORO_CITY_DEVON_CORP_1F = (0 | (17 << 8)),
    MAP_RUSTBORO_CITY_DEVON_CORP_2F = (1 | (17 << 8)),
    MAP_RUSTBORO_CITY_DEVON_CORP_3F = (2 | (17 << 8)),
    MAP_RUSTBORO_CITY_GYM = (3 | (17 << 8)),
    MAP_RUSTBORO_CITY_POKEMON_SCHOOL = (4 | (17 << 8)),
    MAP_RUSTBORO_CITY_POKEMON_CENTER_1F = (5 | (17 << 8)),
    MAP_RUSTBORO_CITY_POKEMON_CENTER_2F = (6 | (17 << 8)),
    MAP_RUSTBORO_CITY_MART = (7 | (17 << 8)),
    MAP_RUSTBORO_CITY_FLAT1_1F = (8 | (17 << 8)),
    MAP_RUSTBORO_CITY_FLAT1_2F = (9 | (17 << 8)),
    MAP_RUSTBORO_CITY_HOUSE1 = (10 | (17 << 8)),
    MAP_RUSTBORO_CITY_CUTTERS_HOUSE = (11 | (17 << 8)),
    MAP_RUSTBORO_CITY_HOUSE2 = (12 | (17 << 8)),
    MAP_RUSTBORO_CITY_FLAT2_1F = (13 | (17 << 8)),
    MAP_RUSTBORO_CITY_FLAT2_2F = (14 | (17 << 8)),
    MAP_RUSTBORO_CITY_FLAT2_3F = (15 | (17 << 8)),
    MAP_RUSTBORO_CITY_HOUSE3 = (16 | (17 << 8)),


    MAP_FORTREE_CITY_HOUSE1 = (0 | (18 << 8)),
    MAP_FORTREE_CITY_GYM = (1 | (18 << 8)),
    MAP_FORTREE_CITY_POKEMON_CENTER_1F = (2 | (18 << 8)),
    MAP_FORTREE_CITY_POKEMON_CENTER_2F = (3 | (18 << 8)),
    MAP_FORTREE_CITY_MART = (4 | (18 << 8)),
    MAP_FORTREE_CITY_HOUSE2 = (5 | (18 << 8)),
    MAP_FORTREE_CITY_HOUSE3 = (6 | (18 << 8)),
    MAP_FORTREE_CITY_HOUSE4 = (7 | (18 << 8)),
    MAP_FORTREE_CITY_HOUSE5 = (8 | (18 << 8)),
    MAP_FORTREE_CITY_DECORATION_SHOP = (9 | (18 << 8)),


    MAP_LILYCOVE_CITY_COVE_LILY_MOTEL_1F = (0 | (19 << 8)),
    MAP_LILYCOVE_CITY_COVE_LILY_MOTEL_2F = (1 | (19 << 8)),
    MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_1F = (2 | (19 << 8)),
    MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F = (3 | (19 << 8)),
    MAP_LILYCOVE_CITY_CONTEST_LOBBY = (4 | (19 << 8)),
    MAP_LILYCOVE_CITY_CONTEST_HALL = (5 | (19 << 8)),
    MAP_LILYCOVE_CITY_POKEMON_CENTER_1F = (6 | (19 << 8)),
    MAP_LILYCOVE_CITY_POKEMON_CENTER_2F = (7 | (19 << 8)),
    MAP_LILYCOVE_CITY_UNUSED_MART = (8 | (19 << 8)),
    MAP_LILYCOVE_CITY_POKEMON_TRAINER_FAN_CLUB = (9 | (19 << 8)),
    MAP_LILYCOVE_CITY_HARBOR = (10 | (19 << 8)),
    MAP_LILYCOVE_CITY_MOVE_DELETERS_HOUSE = (11 | (19 << 8)),
    MAP_LILYCOVE_CITY_HOUSE1 = (12 | (19 << 8)),
    MAP_LILYCOVE_CITY_HOUSE2 = (13 | (19 << 8)),
    MAP_LILYCOVE_CITY_HOUSE3 = (14 | (19 << 8)),
    MAP_LILYCOVE_CITY_HOUSE4 = (15 | (19 << 8)),
    MAP_LILYCOVE_CITY_DEPARTMENT_STORE_1F = (16 | (19 << 8)),
    MAP_LILYCOVE_CITY_DEPARTMENT_STORE_2F = (17 | (19 << 8)),
    MAP_LILYCOVE_CITY_DEPARTMENT_STORE_3F = (18 | (19 << 8)),
    MAP_LILYCOVE_CITY_DEPARTMENT_STORE_4F = (19 | (19 << 8)),
    MAP_LILYCOVE_CITY_DEPARTMENT_STORE_5F = (20 | (19 << 8)),
    MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ROOFTOP = (21 | (19 << 8)),
    MAP_LILYCOVE_CITY_DEPARTMENT_STORE_ELEVATOR = (22 | (19 << 8)),


    MAP_MOSSDEEP_CITY_GYM = (0 | (20 << 8)),
    MAP_MOSSDEEP_CITY_HOUSE1 = (1 | (20 << 8)),
    MAP_MOSSDEEP_CITY_HOUSE2 = (2 | (20 << 8)),
    MAP_MOSSDEEP_CITY_POKEMON_CENTER_1F = (3 | (20 << 8)),
    MAP_MOSSDEEP_CITY_POKEMON_CENTER_2F = (4 | (20 << 8)),
    MAP_MOSSDEEP_CITY_MART = (5 | (20 << 8)),
    MAP_MOSSDEEP_CITY_HOUSE3 = (6 | (20 << 8)),
    MAP_MOSSDEEP_CITY_STEVENS_HOUSE = (7 | (20 << 8)),
    MAP_MOSSDEEP_CITY_HOUSE4 = (8 | (20 << 8)),
    MAP_MOSSDEEP_CITY_SPACE_CENTER_1F = (9 | (20 << 8)),
    MAP_MOSSDEEP_CITY_SPACE_CENTER_2F = (10 | (20 << 8)),
    MAP_MOSSDEEP_CITY_GAME_CORNER_1F = (11 | (20 << 8)),
    MAP_MOSSDEEP_CITY_GAME_CORNER_B1F = (12 | (20 << 8)),


    MAP_SOOTOPOLIS_CITY_GYM_1F = (0 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_GYM_B1F = (1 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_POKEMON_CENTER_1F = (2 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_POKEMON_CENTER_2F = (3 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_MART = (4 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_HOUSE1 = (5 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_HOUSE2 = (6 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_HOUSE3 = (7 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_HOUSE4 = (8 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_HOUSE5 = (9 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_HOUSE6 = (10 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_HOUSE7 = (11 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_LOTAD_AND_SEEDOT_HOUSE = (12 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_1F = (13 | (21 << 8)),
    MAP_SOOTOPOLIS_CITY_MYSTERY_EVENTS_HOUSE_B1F = (14 | (21 << 8)),


    MAP_EVER_GRANDE_CITY_SIDNEYS_ROOM = (0 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_PHOEBES_ROOM = (1 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_GLACIAS_ROOM = (2 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_DRAKES_ROOM = (3 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_CHAMPIONS_ROOM = (4 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_HALL1 = (5 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_HALL2 = (6 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_HALL3 = (7 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_HALL4 = (8 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_HALL5 = (9 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_1F = (10 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_HALL_OF_FAME = (11 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_POKEMON_CENTER_1F = (12 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_POKEMON_CENTER_2F = (13 | (22 << 8)),
    MAP_EVER_GRANDE_CITY_POKEMON_LEAGUE_2F = (14 | (22 << 8)),


    MAP_ROUTE104_MR_BRINEYS_HOUSE = (0 | (23 << 8)),
    MAP_ROUTE104_PRETTY_PETAL_FLOWER_SHOP = (1 | (23 << 8)),


    MAP_ROUTE111_WINSTRATE_FAMILYS_HOUSE = (0 | (24 << 8)),
    MAP_ROUTE111_OLD_LADYS_REST_STOP = (1 | (24 << 8)),


    MAP_ROUTE112_CABLE_CAR_STATION = (0 | (25 << 8)),
    MAP_MT_CHIMNEY_CABLE_CAR_STATION = (1 | (25 << 8)),


    MAP_ROUTE114_FOSSIL_MANIACS_HOUSE = (0 | (26 << 8)),
    MAP_ROUTE114_FOSSIL_MANIACS_TUNNEL = (1 | (26 << 8)),
    MAP_ROUTE114_LANETTES_HOUSE = (2 | (26 << 8)),


    MAP_ROUTE116_TUNNELERS_REST_HOUSE = (0 | (27 << 8)),


    MAP_ROUTE117_POKEMON_DAY_CARE = (0 | (28 << 8)),


    MAP_ROUTE121_SAFARI_ZONE_ENTRANCE = (0 | (29 << 8)),


    MAP_METEOR_FALLS_1F_1R = (0 | (30 << 8)),
    MAP_METEOR_FALLS_1F_2R = (1 | (30 << 8)),
    MAP_METEOR_FALLS_B1F_1R = (2 | (30 << 8)),
    MAP_METEOR_FALLS_B1F_2R = (3 | (30 << 8)),
    MAP_RUSTURF_TUNNEL = (4 | (30 << 8)),
    MAP_UNDERWATER_SOOTOPOLIS_CITY = (5 | (30 << 8)),
    MAP_DESERT_RUINS = (6 | (30 << 8)),
    MAP_GRANITE_CAVE_1F = (7 | (30 << 8)),
    MAP_GRANITE_CAVE_B1F = (8 | (30 << 8)),
    MAP_GRANITE_CAVE_B2F = (9 | (30 << 8)),
    MAP_GRANITE_CAVE_STEVENS_ROOM = (10 | (30 << 8)),
    MAP_PETALBURG_WOODS = (11 | (30 << 8)),
    MAP_MT_CHIMNEY = (12 | (30 << 8)),
    MAP_JAGGED_PASS = (13 | (30 << 8)),
    MAP_FIERY_PATH = (14 | (30 << 8)),
    MAP_MT_PYRE_1F = (15 | (30 << 8)),
    MAP_MT_PYRE_2F = (16 | (30 << 8)),
    MAP_MT_PYRE_3F = (17 | (30 << 8)),
    MAP_MT_PYRE_4F = (18 | (30 << 8)),
    MAP_MT_PYRE_5F = (19 | (30 << 8)),
    MAP_MT_PYRE_6F = (20 | (30 << 8)),
    MAP_MT_PYRE_EXTERIOR = (21 | (30 << 8)),
    MAP_MT_PYRE_SUMMIT = (22 | (30 << 8)),
    MAP_AQUA_HIDEOUT_1F = (23 | (30 << 8)),
    MAP_AQUA_HIDEOUT_B1F = (24 | (30 << 8)),
    MAP_AQUA_HIDEOUT_B2F = (25 | (30 << 8)),
    MAP_UNDERWATER_SEAFLOOR_CAVERN = (26 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ENTRANCE = (27 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM1 = (28 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM2 = (29 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM3 = (30 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM4 = (31 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM5 = (32 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM6 = (33 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM7 = (34 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM8 = (35 | (30 << 8)),
    MAP_SEAFLOOR_CAVERN_ROOM9 = (36 | (30 << 8)),
    MAP_CAVE_OF_ORIGIN_ENTRANCE = (37 | (30 << 8)),
    MAP_CAVE_OF_ORIGIN_1F = (38 | (30 << 8)),
    MAP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP1 = (39 | (30 << 8)),
    MAP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP2 = (40 | (30 << 8)),
    MAP_CAVE_OF_ORIGIN_UNUSED_RUBY_SAPPHIRE_MAP3 = (41 | (30 << 8)),
    MAP_CAVE_OF_ORIGIN_B1F = (42 | (30 << 8)),
    MAP_VICTORY_ROAD_1F = (43 | (30 << 8)),
    MAP_VICTORY_ROAD_B1F = (44 | (30 << 8)),
    MAP_VICTORY_ROAD_B2F = (45 | (30 << 8)),
    MAP_SHOAL_CAVE_LOW_TIDE_ENTRANCE_ROOM = (46 | (30 << 8)),
    MAP_SHOAL_CAVE_LOW_TIDE_INNER_ROOM = (47 | (30 << 8)),
    MAP_SHOAL_CAVE_LOW_TIDE_STAIRS_ROOM = (48 | (30 << 8)),
    MAP_SHOAL_CAVE_LOW_TIDE_LOWER_ROOM = (49 | (30 << 8)),
    MAP_SHOAL_CAVE_HIGH_TIDE_ENTRANCE_ROOM = (50 | (30 << 8)),
    MAP_SHOAL_CAVE_HIGH_TIDE_INNER_ROOM = (51 | (30 << 8)),
    MAP_NEW_MAUVILLE_ENTRANCE = (52 | (30 << 8)),
    MAP_NEW_MAUVILLE_INSIDE = (53 | (30 << 8)),
    MAP_ABANDONED_SHIP_DECK = (54 | (30 << 8)),
    MAP_ABANDONED_SHIP_CORRIDORS_1F = (55 | (30 << 8)),
    MAP_ABANDONED_SHIP_ROOMS_1F = (56 | (30 << 8)),
    MAP_ABANDONED_SHIP_CORRIDORS_B1F = (57 | (30 << 8)),
    MAP_ABANDONED_SHIP_ROOMS_B1F = (58 | (30 << 8)),
    MAP_ABANDONED_SHIP_ROOMS2_B1F = (59 | (30 << 8)),
    MAP_ABANDONED_SHIP_UNDERWATER1 = (60 | (30 << 8)),
    MAP_ABANDONED_SHIP_ROOM_B1F = (61 | (30 << 8)),
    MAP_ABANDONED_SHIP_ROOMS2_1F = (62 | (30 << 8)),
    MAP_ABANDONED_SHIP_CAPTAINS_OFFICE = (63 | (30 << 8)),
    MAP_ABANDONED_SHIP_UNDERWATER2 = (64 | (30 << 8)),
    MAP_ABANDONED_SHIP_HIDDEN_FLOOR_CORRIDORS = (65 | (30 << 8)),
    MAP_ABANDONED_SHIP_HIDDEN_FLOOR_ROOMS = (66 | (30 << 8)),
    MAP_ISLAND_CAVE = (67 | (30 << 8)),
    MAP_ANCIENT_TOMB = (68 | (30 << 8)),
    MAP_UNDERWATER_ROUTE134 = (69 | (30 << 8)),
    MAP_UNDERWATER_SEALED_CHAMBER = (70 | (30 << 8)),
    MAP_SEALED_CHAMBER_OUTER_ROOM = (71 | (30 << 8)),
    MAP_SEALED_CHAMBER_INNER_ROOM = (72 | (30 << 8)),
    MAP_SCORCHED_SLAB = (73 | (30 << 8)),
    MAP_AQUA_HIDEOUT_UNUSED_RUBY_MAP1 = (74 | (30 << 8)),
    MAP_AQUA_HIDEOUT_UNUSED_RUBY_MAP2 = (75 | (30 << 8)),
    MAP_AQUA_HIDEOUT_UNUSED_RUBY_MAP3 = (76 | (30 << 8)),
    MAP_SKY_PILLAR_ENTRANCE = (77 | (30 << 8)),
    MAP_SKY_PILLAR_OUTSIDE = (78 | (30 << 8)),
    MAP_SKY_PILLAR_1F = (79 | (30 << 8)),
    MAP_SKY_PILLAR_2F = (80 | (30 << 8)),
    MAP_SKY_PILLAR_3F = (81 | (30 << 8)),
    MAP_SKY_PILLAR_4F = (82 | (30 << 8)),
    MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM = (83 | (30 << 8)),
    MAP_SKY_PILLAR_5F = (84 | (30 << 8)),
    MAP_SKY_PILLAR_TOP = (85 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_1F = (86 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_2F_1R = (87 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_2F_2R = (88 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_3F_1R = (89 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_3F_2R = (90 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_4F = (91 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_3F_3R = (92 | (30 << 8)),
    MAP_MAGMA_HIDEOUT_2F_3R = (93 | (30 << 8)),
    MAP_MIRAGE_TOWER_1F = (94 | (30 << 8)),
    MAP_MIRAGE_TOWER_2F = (95 | (30 << 8)),
    MAP_MIRAGE_TOWER_3F = (96 | (30 << 8)),
    MAP_MIRAGE_TOWER_4F = (97 | (30 << 8)),
    MAP_DESERT_UNDERPASS = (98 | (30 << 8)),
    MAP_ARTISAN_CAVE_B1F = (99 | (30 << 8)),
    MAP_ARTISAN_CAVE_1F = (100 | (30 << 8)),
    MAP_UNDERWATER_MARINE_CAVE = (101 | (30 << 8)),
    MAP_MARINE_CAVE_ENTRANCE = (102 | (30 << 8)),
    MAP_MARINE_CAVE_END = (103 | (30 << 8)),
    MAP_TERRA_CAVE_ENTRANCE = (104 | (30 << 8)),
    MAP_TERRA_CAVE_END = (105 | (30 << 8)),
    MAP_ALTERING_CAVE = (106 | (30 << 8)),
    MAP_METEOR_FALLS_STEVENS_CAVE = (107 | (30 << 8)),


    MAP_SECRET_BASE_RED_CAVE1 = (0 | (31 << 8)),
    MAP_SECRET_BASE_BROWN_CAVE1 = (1 | (31 << 8)),
    MAP_SECRET_BASE_BLUE_CAVE1 = (2 | (31 << 8)),
    MAP_SECRET_BASE_YELLOW_CAVE1 = (3 | (31 << 8)),
    MAP_SECRET_BASE_TREE1 = (4 | (31 << 8)),
    MAP_SECRET_BASE_SHRUB1 = (5 | (31 << 8)),
    MAP_SECRET_BASE_RED_CAVE2 = (6 | (31 << 8)),
    MAP_SECRET_BASE_BROWN_CAVE2 = (7 | (31 << 8)),
    MAP_SECRET_BASE_BLUE_CAVE2 = (8 | (31 << 8)),
    MAP_SECRET_BASE_YELLOW_CAVE2 = (9 | (31 << 8)),
    MAP_SECRET_BASE_TREE2 = (10 | (31 << 8)),
    MAP_SECRET_BASE_SHRUB2 = (11 | (31 << 8)),
    MAP_SECRET_BASE_RED_CAVE3 = (12 | (31 << 8)),
    MAP_SECRET_BASE_BROWN_CAVE3 = (13 | (31 << 8)),
    MAP_SECRET_BASE_BLUE_CAVE3 = (14 | (31 << 8)),
    MAP_SECRET_BASE_YELLOW_CAVE3 = (15 | (31 << 8)),
    MAP_SECRET_BASE_TREE3 = (16 | (31 << 8)),
    MAP_SECRET_BASE_SHRUB3 = (17 | (31 << 8)),
    MAP_SECRET_BASE_RED_CAVE4 = (18 | (31 << 8)),
    MAP_SECRET_BASE_BROWN_CAVE4 = (19 | (31 << 8)),
    MAP_SECRET_BASE_BLUE_CAVE4 = (20 | (31 << 8)),
    MAP_SECRET_BASE_YELLOW_CAVE4 = (21 | (31 << 8)),
    MAP_SECRET_BASE_TREE4 = (22 | (31 << 8)),
    MAP_SECRET_BASE_SHRUB4 = (23 | (31 << 8)),
    MAP_BATTLE_COLOSSEUM_2P = (24 | (31 << 8)),
    MAP_TRADE_CENTER = (25 | (31 << 8)),
    MAP_RECORD_CORNER = (26 | (31 << 8)),
    MAP_BATTLE_COLOSSEUM_4P = (27 | (31 << 8)),
    MAP_CONTEST_HALL = (28 | (31 << 8)),
    MAP_UNUSED_CONTEST_HALL1 = (29 | (31 << 8)),
    MAP_UNUSED_CONTEST_HALL2 = (30 | (31 << 8)),
    MAP_UNUSED_CONTEST_HALL3 = (31 | (31 << 8)),
    MAP_UNUSED_CONTEST_HALL4 = (32 | (31 << 8)),
    MAP_UNUSED_CONTEST_HALL5 = (33 | (31 << 8)),
    MAP_UNUSED_CONTEST_HALL6 = (34 | (31 << 8)),
    MAP_CONTEST_HALL_BEAUTY = (35 | (31 << 8)),
    MAP_CONTEST_HALL_TOUGH = (36 | (31 << 8)),
    MAP_CONTEST_HALL_COOL = (37 | (31 << 8)),
    MAP_CONTEST_HALL_SMART = (38 | (31 << 8)),
    MAP_CONTEST_HALL_CUTE = (39 | (31 << 8)),
    MAP_INSIDE_OF_TRUCK = (40 | (31 << 8)),
    MAP_SS_TIDAL_CORRIDOR = (41 | (31 << 8)),
    MAP_SS_TIDAL_LOWER_DECK = (42 | (31 << 8)),
    MAP_SS_TIDAL_ROOMS = (43 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE01 = (44 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE02 = (45 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE03 = (46 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE04 = (47 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE05 = (48 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE06 = (49 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE07 = (50 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE08 = (51 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE09 = (52 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE10 = (53 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE11 = (54 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE12 = (55 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE13 = (56 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE14 = (57 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE15 = (58 | (31 << 8)),
    MAP_BATTLE_PYRAMID_SQUARE16 = (59 | (31 << 8)),
    MAP_UNION_ROOM = (60 | (31 << 8)),


    MAP_SAFARI_ZONE_NORTHWEST = (0 | (32 << 8)),
    MAP_SAFARI_ZONE_NORTH = (1 | (32 << 8)),
    MAP_SAFARI_ZONE_SOUTHWEST = (2 | (32 << 8)),
    MAP_SAFARI_ZONE_SOUTH = (3 | (32 << 8)),
    MAP_BATTLE_FRONTIER_OUTSIDE_WEST = (4 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_TOWER_LOBBY = (5 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_TOWER_ELEVATOR = (6 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_TOWER_CORRIDOR = (7 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_TOWER_BATTLE_ROOM = (8 | (32 << 8)),
    MAP_SOUTHERN_ISLAND_EXTERIOR = (9 | (32 << 8)),
    MAP_SOUTHERN_ISLAND_INTERIOR = (10 | (32 << 8)),
    MAP_SAFARI_ZONE_REST_HOUSE = (11 | (32 << 8)),
    MAP_SAFARI_ZONE_NORTHEAST = (12 | (32 << 8)),
    MAP_SAFARI_ZONE_SOUTHEAST = (13 | (32 << 8)),
    MAP_BATTLE_FRONTIER_OUTSIDE_EAST = (14 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_PARTNER_ROOM = (15 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_CORRIDOR = (16 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_TOWER_MULTI_BATTLE_ROOM = (17 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_DOME_LOBBY = (18 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_DOME_CORRIDOR = (19 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_DOME_PRE_BATTLE_ROOM = (20 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM = (21 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PALACE_LOBBY = (22 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PALACE_CORRIDOR = (23 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PALACE_BATTLE_ROOM = (24 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_LOBBY = (25 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_FLOOR = (26 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PYRAMID_TOP = (27 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_ARENA_LOBBY = (28 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_ARENA_CORRIDOR = (29 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_ARENA_BATTLE_ROOM = (30 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_FACTORY_LOBBY = (31 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_FACTORY_PRE_BATTLE_ROOM = (32 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_FACTORY_BATTLE_ROOM = (33 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PIKE_LOBBY = (34 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PIKE_CORRIDOR = (35 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PIKE_THREE_PATH_ROOM = (36 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_NORMAL = (37 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_FINAL = (38 | (32 << 8)),
    MAP_BATTLE_FRONTIER_BATTLE_PIKE_ROOM_WILD_MONS = (39 | (32 << 8)),
    MAP_BATTLE_FRONTIER_RANKING_HALL = (40 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE1 = (41 | (32 << 8)),
    MAP_BATTLE_FRONTIER_EXCHANGE_SERVICE_CORNER = (42 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE2 = (43 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE3 = (44 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE4 = (45 | (32 << 8)),
    MAP_BATTLE_FRONTIER_SCOTTS_HOUSE = (46 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE5 = (47 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE6 = (48 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE7 = (49 | (32 << 8)),
    MAP_BATTLE_FRONTIER_RECEPTION_GATE = (50 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE8 = (51 | (32 << 8)),
    MAP_BATTLE_FRONTIER_LOUNGE9 = (52 | (32 << 8)),
    MAP_BATTLE_FRONTIER_POKEMON_CENTER_1F = (53 | (32 << 8)),
    MAP_BATTLE_FRONTIER_POKEMON_CENTER_2F = (54 | (32 << 8)),
    MAP_BATTLE_FRONTIER_MART = (55 | (32 << 8)),
    MAP_FARAWAY_ISLAND_ENTRANCE = (56 | (32 << 8)),
    MAP_FARAWAY_ISLAND_INTERIOR = (57 | (32 << 8)),
    MAP_BIRTH_ISLAND_EXTERIOR = (58 | (32 << 8)),
    MAP_BIRTH_ISLAND_HARBOR = (59 | (32 << 8)),
    MAP_TRAINER_HILL_ENTRANCE = (60 | (32 << 8)),
    MAP_TRAINER_HILL_1F = (61 | (32 << 8)),
    MAP_TRAINER_HILL_2F = (62 | (32 << 8)),
    MAP_TRAINER_HILL_3F = (63 | (32 << 8)),
    MAP_TRAINER_HILL_4F = (64 | (32 << 8)),
    MAP_TRAINER_HILL_ROOF = (65 | (32 << 8)),
    MAP_NAVEL_ROCK_EXTERIOR = (66 | (32 << 8)),
    MAP_NAVEL_ROCK_HARBOR = (67 | (32 << 8)),
    MAP_NAVEL_ROCK_ENTRANCE = (68 | (32 << 8)),
    MAP_NAVEL_ROCK_B1F = (69 | (32 << 8)),
    MAP_NAVEL_ROCK_FORK = (70 | (32 << 8)),
    MAP_NAVEL_ROCK_UP1 = (71 | (32 << 8)),
    MAP_NAVEL_ROCK_UP2 = (72 | (32 << 8)),
    MAP_NAVEL_ROCK_UP3 = (73 | (32 << 8)),
    MAP_NAVEL_ROCK_UP4 = (74 | (32 << 8)),
    MAP_NAVEL_ROCK_TOP = (75 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN01 = (76 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN02 = (77 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN03 = (78 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN04 = (79 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN05 = (80 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN06 = (81 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN07 = (82 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN08 = (83 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN09 = (84 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN10 = (85 | (32 << 8)),
    MAP_NAVEL_ROCK_DOWN11 = (86 | (32 << 8)),
    MAP_NAVEL_ROCK_BOTTOM = (87 | (32 << 8)),
    MAP_TRAINER_HILL_ELEVATOR = (88 | (32 << 8)),


    MAP_ROUTE104_PROTOTYPE = (0 | (33 << 8)),
    MAP_ROUTE104_PROTOTYPE_PRETTY_PETAL_FLOWER_SHOP = (1 | (33 << 8)),


    MAP_ROUTE109_SEASHORE_HOUSE = (0 | (34 << 8)),


    MAP_ROUTE110_TRICK_HOUSE_ENTRANCE = (0 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_END = (1 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_CORRIDOR = (2 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE1 = (3 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE2 = (4 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE3 = (5 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE4 = (6 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE5 = (7 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE6 = (8 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE7 = (9 | (35 << 8)),
    MAP_ROUTE110_TRICK_HOUSE_PUZZLE8 = (10 | (35 << 8)),
    MAP_ROUTE110_SEASIDE_CYCLING_ROAD_SOUTH_ENTRANCE = (11 | (35 << 8)),
    MAP_ROUTE110_SEASIDE_CYCLING_ROAD_NORTH_ENTRANCE = (12 | (35 << 8)),


    MAP_ROUTE113_GLASS_WORKSHOP = (0 | (36 << 8)),


    MAP_ROUTE123_BERRY_MASTERS_HOUSE = (0 | (37 << 8)),


    MAP_ROUTE119_WEATHER_INSTITUTE_1F = (0 | (38 << 8)),
    MAP_ROUTE119_WEATHER_INSTITUTE_2F = (1 | (38 << 8)),
    MAP_ROUTE119_HOUSE = (2 | (38 << 8)),


    MAP_ROUTE124_DIVING_TREASURE_HUNTERS_HOUSE = (0 | (39 << 8)),

};
# 5 "include/constants/maps.h" 2

enum
{


    MAP_DYNAMIC = (0x7F | (0x7F << 8)),

    MAP_UNDEFINED = (0xFF | (0xFF << 8)),
};
# 20 "include/global.h" 2
# 1 "include/constants/pokemon.h" 1




enum __attribute__((packed)) Type
{
    TYPE_NONE = 0,
    TYPE_NORMAL = 1,
    TYPE_FIGHTING = 2,
    TYPE_FLYING = 3,
    TYPE_POISON = 4,
    TYPE_GROUND = 5,
    TYPE_ROCK = 6,
    TYPE_BUG = 7,
    TYPE_GHOST = 8,
    TYPE_STEEL = 9,
    TYPE_MYSTERY = 10,
    TYPE_FIRE = 11,
    TYPE_WATER = 12,
    TYPE_GRASS = 13,
    TYPE_ELECTRIC = 14,
    TYPE_PSYCHIC = 15,
    TYPE_ICE = 16,
    TYPE_DRAGON = 17,
    TYPE_DARK = 18,
    TYPE_FAIRY = 19,
    TYPE_STELLAR = 20,
    NUMBER_OF_MON_TYPES
};
# 80 "include/constants/pokemon.h"
enum __attribute__((packed)) Stat
{
    STAT_HP,
    STAT_ATK,
    STAT_DEF,
    STAT_SPEED,
    STAT_SPATK,
    STAT_SPDEF,
    NUM_STATS,
    STAT_ACC = NUM_STATS,
    STAT_EVASION,
};
# 225 "include/constants/pokemon.h"
enum __attribute__((packed)) DamageCategory
{
    DAMAGE_CATEGORY_PHYSICAL,
    DAMAGE_CATEGORY_SPECIAL,
    DAMAGE_CATEGORY_STATUS
};


enum GrowthRate
{
    GROWTH_MEDIUM_FAST,
    GROWTH_ERRATIC,
    GROWTH_FLUCTUATING,
    GROWTH_MEDIUM_SLOW,
    GROWTH_FAST,
    GROWTH_SLOW,
};


enum BodyColor
{
    BODY_COLOR_RED,
    BODY_COLOR_BLUE,
    BODY_COLOR_YELLOW,
    BODY_COLOR_GREEN,
    BODY_COLOR_BLACK,
    BODY_COLOR_BROWN,
    BODY_COLOR_PURPLE,
    BODY_COLOR_GRAY,
    BODY_COLOR_WHITE,
    BODY_COLOR_PINK,
};





enum EvolutionConditions {

    IF_GENDER,
    IF_TIME,
    IF_NOT_TIME,
    IF_MIN_FRIENDSHIP,
    IF_ATK_GT_DEF,
    IF_ATK_EQ_DEF,
    IF_ATK_LT_DEF,
    IF_HOLD_ITEM,

    IF_PID_UPPER_MODULO_10_GT,
    IF_PID_UPPER_MODULO_10_EQ,
    IF_PID_UPPER_MODULO_10_LT,
    IF_MIN_BEAUTY,
    IF_MIN_COOLNESS,
    IF_MIN_SMARTNESS,
    IF_MIN_TOUGHNESS,
    IF_MIN_CUTENESS,

    IF_SPECIES_IN_PARTY,
    IF_IN_MAP,
    IF_IN_MAPSEC,
    IF_KNOWS_MOVE,

    IF_TRADE_PARTNER_SPECIES,

    IF_TYPE_IN_PARTY,
    IF_WEATHER,
    IF_KNOWS_MOVE_TYPE,

    IF_NATURE,
    IF_AMPED_NATURE,
    IF_LOW_KEY_NATURE,
    IF_RECOIL_DAMAGE_GE,
    IF_CURRENT_DAMAGE_GE,
    IF_CRITICAL_HITS_GE,
    IF_USED_MOVE_X_TIMES,

    IF_DEFEAT_X_WITH_ITEMS,
    IF_PID_MODULO_100_GT,
    IF_PID_MODULO_100_EQ,
    IF_PID_MODULO_100_LT,
    IF_MIN_OVERWORLD_STEPS,
    IF_BAG_ITEM_COUNT,
    IF_REGION,
    IF_NOT_REGION,
    CONDITIONS_END
};

enum EvolutionMethods {
    EVO_NONE,
    EVO_LEVEL,
    EVO_TRADE,
    EVO_ITEM,
    EVO_SPLIT_FROM_EVO,
    EVO_SCRIPT_TRIGGER,
    EVO_LEVEL_BATTLE_ONLY,
    EVO_BATTLE_END,
    EVO_SPIN
};

enum EvolutionMode {
    EVO_MODE_NORMAL,
    EVO_MODE_TRADE,
    EVO_MODE_ITEM_USE,
    EVO_MODE_ITEM_CHECK,
    EVO_MODE_BATTLE_SPECIAL,
    EVO_MODE_OVERWORLD_SPECIAL,
    EVO_MODE_SCRIPT_TRIGGER,
    EVO_MODE_BATTLE_ONLY,
};


enum EvoState {
    CHECK_EVO,
    DO_EVO,
};

enum PokemonJumpType {
    PKMN_JUMP_TYPE_NONE,
    PKMN_JUMP_TYPE_NORMAL,
    PKMN_JUMP_TYPE_FAST,
    PKMN_JUMP_TYPE_SLOW,
};

enum EvoSpinDirections {
    SPIN_CW_SHORT,
    SPIN_CW_LONG,
    SPIN_CCW_SHORT,
    SPIN_CCW_LONG,
    SPIN_EITHER,
};

enum ShinyMode {
    SHINY_MODE_ALWAYS,
    SHINY_MODE_RANDOM,
    SHINY_MODE_NEVER
};
# 21 "include/global.h" 2
# 1 "include/constants/easy_chat.h" 1
# 22 "include/global.h" 2
# 1 "include/constants/trainer_hill.h" 1
# 23 "include/global.h" 2
# 1 "include/constants/items.h" 1
# 24 "include/global.h" 2
# 1 "include/config/save.h" 1
# 25 "include/global.h" 2
# 147 "include/global.h"
static inline void CycleCountStart()
{
    (*(vu16 *)(0x4000000 + 0x10a)) = 0;
    (*(vu16 *)(0x4000000 + 0x10e)) = 0;

    (*(vu16 *)(0x4000000 + 0x108)) = 0;
    (*(vu16 *)(0x4000000 + 0x10c)) = 0;


    (*(vu16 *)(0x4000000 + 0x10e)) = 0x80 | 0x04;
    (*(vu16 *)(0x4000000 + 0x10a)) = 0x00 | 0x80;
}

static inline u32 CycleCountEnd()
{

    (*(vu16 *)(0x4000000 + 0x10a)) = 0;
    (*(vu16 *)(0x4000000 + 0x10e)) = 0;


    return (*(vu16 *)(0x4000000 + 0x108)) | ((*(vu16 *)(0x4000000 + 0x10c)) << 16u);
}

struct Coords8
{
    s8 x;
    s8 y;
};

struct UCoords8
{
    u8 x;
    u8 y;
};

struct Coords16
{
    s16 x;
    s16 y;
};

struct UCoords16
{
    u16 x;
    u16 y;
};

struct Coords32
{
    s32 x;
    s32 y;
};

struct UCoords32
{
    u32 x;
    u32 y;
};

struct Time
{
             s16 days;
             s8 hours;
             s8 minutes;
             s8 seconds;
};

struct NPCFollowerPadding
{
    u8 padding1;
    u8 padding2;
    u8 padding3;
};

struct NPCFollower
{
    u8 inProgress:1;
    u8 warpEnd:1;
    u8 createSurfBlob:2;
    u8 comeOutDoorStairs:2;
    u8 forcedMovement:2;
    u8 objId;
    u8 currentSprite;
    u8 delayedState;
    struct NPCFollowerPadding padding;
    struct Coords16 log;
    const u8 *script;
    u16 flag;
    u16 graphicsId;
    u16 flags;
    u8 battlePartner;
};




struct SaveBlock3
{




    struct NPCFollower NPCfollower;


    u8 itemFlags[((860 / 8) + ((860 % 8) ? 1 : 0))];




    u8 dexNavChain;



};

extern struct SaveBlock3 *gSaveBlock3Ptr;

struct Pokedex
{
             u8 order;
             u8 mode;
             u8 nationalMagic;
             u8 unknown2;
             u32 unownPersonality;
             u32 spindaPersonality;
             u32 unknown3;



};

struct PokemonJumpRecords
{
    u16 jumpsInRow;
    u16 unused1;
    u16 excellentsInRow;
    u16 gamesWithMaxPlayers;
    u32 unused2;
    u32 bestJumpScore;
};

struct BerryPickingResults
{
    u32 bestScore;
    u16 berriesPicked;
    u16 berriesPickedInRow;
    u8 field_8;
    u8 field_9;
    u8 field_A;
    u8 field_B;
    u8 field_C;
    u8 field_D;
    u8 field_E;
    u8 field_F;
};

struct PyramidBag
{
    u16 itemId[2][10];



    u8 quantity[2][10];

};

struct BerryCrush
{
    u16 pressingSpeeds[4];
    u32 berryPowderAmount;
    u32 unk;
};

struct ApprenticeMon
{
    u16 species;
    u16 moves[4];
    u16 item;
};



struct Apprentice
{
    u8 id:5;
    u8 lvlMode:2;

    u8 numQuestions;
    u8 number;

    struct ApprenticeMon party[(6 / 2)];
    u16 speechWon[6];
    u8 playerId[4];
    u8 playerName[7];
    u8 language;
    u32 checksum;
};

struct BattleTowerPokemon
{
    u16 species;
    u16 heldItem;
    u16 moves[4];
    u8 level;
    u8 ppBonuses;
    u8 hpEV;
    u8 attackEV;
    u8 defenseEV;
    u8 speedEV;
    u8 spAttackEV;
    u8 spDefenseEV;
    u32 otId;
    u32 hpIV:5;
    u32 attackIV:5;
    u32 defenseIV:5;
    u32 speedIV:5;
    u32 spAttackIV:5;
    u32 spDefenseIV:5;
    u32 gap:1;
    u32 abilityNum:1;
    u32 personality;
    u8 nickname[10 + 1];
    u8 friendship;
};

struct EmeraldBattleTowerRecord
{
             u8 lvlMode;
             u8 facilityClass;
             u16 winStreak;
             u8 name[7 + 1];
             u8 trainerId[4];
             u16 greeting[6];
             u16 speechWon[6];
             u16 speechLost[6];
             struct BattleTowerPokemon party[(((3) >= (((4) >= (2) ? (4) : (2))) ? (3) : (((4) >= (2) ? (4) : (2)))))];
             u8 language;

             u32 checksum;
};

struct BattleTowerInterview
{
    u16 playerSpecies;
    u16 opponentSpecies;
    u8 opponentName[7 + 1];
    u8 opponentMonNickname[10 + 1];
    u8 opponentLanguage;
};

struct BattleTowerEReaderTrainer
{
             u8 unk0;
             u8 facilityClass;
             u16 winStreak;
             u8 name[7 + 1];
             u8 trainerId[4];
             u16 greeting[6];
             u16 farewellPlayerLost[6];
             u16 farewellPlayerWon[6];
             struct BattleTowerPokemon party[3];
             u32 checksum;
};


struct DomeMonData
{
    u16 moves[4];
    u8 evs[NUM_STATS];
    u8 nature;

};

struct RentalMon
{
    u16 monId;

    u32 personality;
    u8 ivs;
    u8 abilityNum;

};

struct BattleDomeTrainer
{
    u16 trainerId:10;
    u16 isEliminated:1;
    u16 eliminatedAt:2;
    u16 forfeited:3;
};




struct BattleFrontier
{
              struct EmeraldBattleTowerRecord towerPlayer;
              struct EmeraldBattleTowerRecord towerRecords[5];
              struct BattleTowerInterview towerInterview;



              u8 challengeStatus;
              u8 lvlMode:2;
              u8 challengePaused:1;
              u8 disableRecordBattle:1;

              u16 selectedPartyMons[(((3) >= (((4) >= (2) ? (4) : (2))) ? (3) : (((4) >= (2) ? (4) : (2)))))];
              u16 curChallengeBattleNum;
              u16 trainerIds[20];
              u32 winStreakActiveFlags;
              u16 towerWinStreaks[4][2];
              u16 towerRecordWinStreaks[4][2];
              u16 battledBrainFlags;
              u16 towerSinglesStreak;
              u16 towerNumWins;
              u8 towerBattleOutcome;
              u8 towerLvlMode;
              u8 domeAttemptedSingles50:1;
              u8 domeAttemptedSinglesOpen:1;
              u8 domeHasWonSingles50:1;
              u8 domeHasWonSinglesOpen:1;
              u8 domeAttemptedDoubles50:1;
              u8 domeAttemptedDoublesOpen:1;
              u8 domeHasWonDoubles50:1;
              u8 domeHasWonDoublesOpen:1;
              u8 domeUnused;
              u8 domeLvlMode;
              u8 domeBattleMode;
              u16 domeWinStreaks[2][2];
              u16 domeRecordWinStreaks[2][2];
              u16 domeTotalChampionships[2][2];
              struct BattleDomeTrainer domeTrainers[16];
              u16 domeMonIds[16][3];
              u16 unused_DC4;
              u16 palacePrize;
              u16 palaceWinStreaks[2][2];
              u16 palaceRecordWinStreaks[2][2];
              u16 arenaPrize;
              u16 arenaWinStreaks[2];
              u16 arenaRecordStreaks[2];
              u16 factoryWinStreaks[2][2];
              u16 factoryRecordWinStreaks[2][2];
              u16 factoryRentsCount[2][2];
              u16 factoryRecordRentsCount[2][2];
              u16 pikePrize;
              u16 pikeWinStreaks[2];
              u16 pikeRecordStreaks[2];
              u16 pikeTotalStreaks[2];
              u8 pikeHintedRoomIndex:3;
              u8 pikeHintedRoomType:4;
              u8 pikeHealingRoomsDisabled:1;

              u16 pikeHeldItemsBackup[3];
              u16 pyramidPrize;
              u16 pyramidWinStreaks[2];
              u16 pyramidRecordStreaks[2];
              u16 pyramidRandoms[4];
              u8 pyramidTrainerFlags;

              struct PyramidBag pyramidBag;
              u8 pyramidLightRadius;

              u16 verdanturfTentPrize;
              u16 fallarborTentPrize;
              u16 slateportTentPrize;
              struct RentalMon rentalMons[3 * 2];
              u16 battlePoints;
              u16 cardBattlePoints;
              u32 battlesCount;
              u16 domeWinningMoves[16];
              u8 trainerFlags;
              u8 opponentNames[2][7 + 1];
              u8 opponentTrainerIds[2][4];
              u8 unk_EF9:7;
              u8 savedGame:1;
              u8 unused_EFA;
              u8 unused_EFB;
              struct DomeMonData domePlayerPartyData[3];
};

struct ApprenticeQuestion
{
    u8 questionId:2;
    u8 monId:2;
    u8 moveSlot:2;
    u8 suggestedChange:2;

    u16 data;
};

struct PlayersApprentice
{
             u8 id;
             u8 lvlMode:2;
             u8 questionsAnswered:4;
             u8 leadMonId:2;
             u8 party:3;
             u8 saveId:2;

             u8 unused;
             u8 speciesIds[(6 / 2)];

             struct ApprenticeQuestion questions[9];
};

struct RankingHall1P
{
    u8 id[4];
    u16 winStreak;
    u8 name[7 + 1];
    u8 language;

};

struct RankingHall2P
{
    u8 id1[4];
    u8 id2[4];
    u16 winStreak;
    u8 name1[7 + 1];
    u8 name2[7 + 1];
    u8 language;

};


struct FollowerMapData
{
            u8 id;
            u8 number;
            u8 group;
};
struct Follower
{
             u8 inProgress:1;
             u8 warpEnd:1;
             u8 createSurfBlob:3;
             u8 comeOutDoorStairs:3;
             u8 objId;
             u8 currentSprite;
             u8 delayedState;
             struct FollowerMapData map;
             struct Coords16 log;
             const u8* script;
             u16 flag;
             u16 graphicsId;
             u16 flags;
             u8 locked;
             u8 battlePartner;
};

struct SaveBlock2
{
             u8 playerName[7 + 1];
             u8 playerGender;
             u8 specialSaveWarpFlags;
             u8 playerTrainerId[4];
             u16 playTimeHours;
             u8 playTimeMinutes;
             u8 playTimeSeconds;
             u8 playTimeVBlanks;
             u8 optionsButtonMode;
             u16 optionsTextSpeed:3;
             u16 optionsWindowFrameType:5;
             u16 optionsSound:1;
             u16 optionsBattleStyle:1;
             u16 optionsBattleSceneOff:1;
             u16 regionMapZoom:1;


             struct Pokedex pokedex;
             u8 filler_90[0x8];
             struct Time localTimeOffset;
             struct Time lastBerryTreeUpdate;
             u32 gcnLinkFlags;
             u32 encryptionKey;
             struct PlayersApprentice playerApprentice;
             struct Apprentice apprentices[4];
              struct BerryCrush berryCrush;



              struct BerryPickingResults berryPick;




              u16 contestLinkResults[5][4];
              struct BattleFrontier frontier;
              u8 rivalName[7 + 1];
              struct Follower follower;
};

extern struct SaveBlock2 *gSaveBlock2Ptr;

extern u8 UpdateSpritePaletteWithTime(u8);

struct SecretBaseParty
{
    u32 personality[6];
    u16 moves[6 * 4];
    u16 species[6];
    u16 heldItems[6];
    u8 levels[6];
    u8 EVs[6];
};

struct SecretBase
{
               u8 secretBaseId;
               bool8 toRegister:4;
               u8 gender:1;
               u8 battledOwnerToday:1;
               u8 registryStatus:2;
               u8 trainerName[7];
               u8 trainerId[4];
               u8 language;
               u16 numSecretBasesReceived;
               u8 numTimesEntered;
               u8 unused;
               u8 decorations[16];
               u8 decorationPositions[16];

               struct SecretBaseParty party;
};

# 1 "include/constants/game_stat.h" 1
# 676 "include/global.h" 2
# 1 "include/global.fieldmap.h" 1
# 40 "include/global.fieldmap.h"
enum {
    METATILE_LAYER_TYPE_NORMAL,
    METATILE_LAYER_TYPE_COVERED,
    METATILE_LAYER_TYPE_SPLIT,
};
# 53 "include/global.fieldmap.h"
typedef void (*TilesetCB)(void);

struct Tileset
{
             u8 isCompressed:1;
             u8 swapPalettes:7;
             bool8 isSecondary;
             u8 lightPalettes;
             u8 customLightColor;
             const u32 *tiles;
             const u16 (*palettes)[16];
             const u16 *metatiles;
             const u16 *metatileAttributes;
             TilesetCB callback;
};

struct MapLayout
{
             s32 width;
             s32 height;
             const u16 *border;
             const u16 *map;
             const struct Tileset *primaryTileset;
             const struct Tileset *secondaryTileset;
};

struct BackupMapLayout
{
    s32 width;
    s32 height;
    u16 *map;
};

struct __attribute__((packed, aligned(4))) ObjectEventTemplate
{
             u8 localId;
             u16 graphicsId;
             u8 kind;
             s16 x;
             s16 y;
             u8 elevation;
             u8 movementType;
             u16 movementRangeX:4;
             u16 movementRangeY:4;
             u16 unused:8;
             u16 trainerType;
             u16 trainerRange_berryTreeId;
             const u8 *script;
             u16 flagId;
             u16 filler;
};

struct WarpEvent
{
    s16 x, y;
    u8 elevation;
    u8 warpId;
    u8 mapNum;
    u8 mapGroup;
};

struct CoordEvent
{
    s16 x, y;
    u8 elevation;
    u16 trigger;
    u16 index;
    const u8 *script;
};

struct BgEvent
{
    u16 x, y;
    u8 elevation;
    u8 kind;
    union {
        const u8 *script;
        struct {
            u16 item;
            u16 hiddenItemId;
        } hiddenItem;
        u32 secretBaseId;
    } bgUnion;
};

struct MapEvents
{
    u8 objectEventCount;
    u8 warpCount;
    u8 coordEventCount;
    u8 bgEventCount;
    const struct ObjectEventTemplate *objectEvents;
    const struct WarpEvent *warps;
    const struct CoordEvent *coordEvents;
    const struct BgEvent *bgEvents;
};

struct MapConnection
{
    u8 direction;
    s32 offset;
    u8 mapGroup;
    u8 mapNum;
};

struct MapConnections
{
    s32 count;
    const struct MapConnection *connections;
};

struct MapHeader
{
               const struct MapLayout *mapLayout;
               const struct MapEvents *events;
               const u8 *mapScripts;
               const struct MapConnections *connections;
               u16 music;
               u16 mapLayoutId;
               mapsec_u8_t regionMapSectionId;
               u8 cave;
               u8 weather;
               u8 mapType;
               u8 filler_18[2];

               bool8 allowCycling:1;
               bool8 allowEscaping:1;
               bool8 allowRunning:1;
               bool8 showMapName:5;

               u8 battleType;
};


struct ObjectEvent
{
             u32 active:1;
             u32 singleMovementActive:1;
             u32 triggerGroundEffectsOnMove:1;
             u32 triggerGroundEffectsOnStop:1;
             u32 disableCoveringGroundEffects:1;
             u32 landingJump:1;
             u32 heldMovementActive:1;
             u32 heldMovementFinished:1;
             u32 frozen:1;
             u32 facingDirectionLocked:1;
             u32 disableAnim:1;
             u32 enableAnim:1;
             u32 inanimate:1;
             u32 invisible:1;
             u32 offScreen:1;
             u32 trackedByCamera:1;
             u32 isPlayer:1;
             u32 hasReflection:1;
             u32 inShortGrass:1;
             u32 inShallowFlowingWater:1;
             u32 inSandPile:1;
             u32 inHotSprings:1;
             u32 noShadow:1;
             u32 spriteAnimPausedBackup:1;
             u32 spriteAffineAnimPausedBackup:1;
             u32 disableJumpLandingGroundEffect:1;
             u32 fixedPriority:1;
             u32 hideReflection:1;
             u32 shiny:1;
             u32 jumpDone:1;
             u32 padding:2;
             u16 graphicsId;
             u8 movementType;
             u8 trainerType;
             u8 localId;
             u8 mapNum;
             u8 mapGroup;
             u8 currentElevation:4;
             u8 previousElevation:4;
             struct Coords16 initialCoords;
             struct Coords16 currentCoords;
             struct Coords16 previousCoords;
             u16 facingDirection:4;
             u16 movementDirection:4;
             struct __attribute__((packed))
             {
                u16 rangeX:4;
                u16 rangeY:4;
             } range;
             u8 fieldEffectSpriteId;
             u8 warpArrowSpriteId;
             u8 movementActionId;
             u8 trainerRange_berryTreeId;
             u8 currentMetatileBehavior;
             u8 previousMetatileBehavior;
             u8 previousMovementDirection:4;
             u8 directionOverwrite:4;
             u8 directionSequenceIndex;
             u8 playerCopyableMovement;
             u8 spriteId;

};

struct ObjectEventGraphicsInfo
{
             u16 tileTag;
             u16 paletteTag;
             u16 reflectionPaletteTag;
             u16 size;
             s16 width;
             s16 height;
             u8 paletteSlot:4;
             u8 shadowSize:2;
             u8 inanimate:1;
             u8 compressed:1;
             u8 tracks;
             const struct OamData *oam;
             const struct SubspriteTable *subspriteTables;
             const union AnimCmd *const *anims;
             const struct SpriteFrameImage *images;
             const union AffineAnimCmd *const *affineAnims;
};

enum {
    PLAYER_AVATAR_STATE_NORMAL,
    PLAYER_AVATAR_STATE_MACH_BIKE,
    PLAYER_AVATAR_STATE_ACRO_BIKE,
    PLAYER_AVATAR_STATE_SURFING,
    PLAYER_AVATAR_STATE_UNDERWATER,
    PLAYER_AVATAR_STATE_FIELD_MOVE,
    PLAYER_AVATAR_STATE_FISHING,
    PLAYER_AVATAR_STATE_WATERING,
    PLAYER_AVATAR_STATE_VSSEEKER,
};
# 298 "include/global.fieldmap.h"
enum
{
    ACRO_BIKE_NORMAL,
    ACRO_BIKE_TURNING,
    ACRO_BIKE_WHEELIE_STANDING,
    ACRO_BIKE_BUNNY_HOP,
    ACRO_BIKE_WHEELIE_MOVING,
    ACRO_BIKE_STATE5,
    ACRO_BIKE_STATE6,
};

enum
{
    COLLISION_NONE,
    COLLISION_OUTSIDE_RANGE,
    COLLISION_IMPASSABLE,
    COLLISION_ELEVATION_MISMATCH,
    COLLISION_OBJECT_EVENT,
    COLLISION_STOP_SURFING,
    COLLISION_LEDGE_JUMP,
    COLLISION_PUSHED_BOULDER,
    COLLISION_ROTATING_GATE,
    COLLISION_WHEELIE_HOP,
    COLLISION_ISOLATED_VERTICAL_RAIL,
    COLLISION_ISOLATED_HORIZONTAL_RAIL,
    COLLISION_VERTICAL_RAIL,
    COLLISION_HORIZONTAL_RAIL,
    COLLISION_STAIR_WARP,
    COLLISION_SIDEWAYS_STAIRS_TO_RIGHT,
    COLLISION_SIDEWAYS_STAIRS_TO_LEFT
};


enum
{
    NOT_MOVING,
    TURN_DIRECTION,
    MOVING,
};


enum
{
    T_NOT_MOVING,
    T_TILE_TRANSITION,
    T_TILE_CENTER,
};

struct PlayerAvatar
{
             u8 flags;
             u8 transitionFlags;
             u8 runningState:7;
             u8 creeping:1;
             u8 tileTransitionState;
             u8 spriteId;
             u8 objectEventId;
             bool8 preventStep;
             u8 gender;
             u8 acroBikeState;
             u8 newDirBackup;
             u8 bikeFrameCounter;
             u8 bikeSpeed;

             u32 directionHistory;
             u32 abStartSelectHistory;

             u8 dirTimerHistory[8];
             u8 abStartSelectTimerHistory[8];
};

struct Camera
{
    bool8 active:1;
    s32 x;
    s32 y;
};

extern struct ObjectEvent gObjectEvents[16];
extern u8 gSelectedObjectEvent;
extern struct MapHeader gMapHeader;
extern struct PlayerAvatar gPlayerAvatar;
extern struct Camera gCamera;
# 677 "include/global.h" 2
# 1 "include/global.berry.h" 1






struct Berry
{
    const u8 name[6 + 1];
    u8 firmness:4;
    u8 color:4;
    u16 size:10;
    u16 weedsBonus:3;
    u16 pestsBonus:3;
    u8 maxYield;
    u8 minYield:4;
    u8 waterBonus:4;
    const u8 *description1;
    const u8 *description2;
    u8 growthDuration;
    u8 spicy;
    u8 dry;
    u8 sweet;
    u8 bitter;
    u8 sour;
    u8 smoothness;
    u8 drainRate;
};



struct Berry2
{
    u8 name[6 + 1];
    u8 firmness:4;
    u8 color:4;
    u16 size:10;
    u16 weedsBonus:3;
    u16 pestsBonus:3;
    u8 maxYield;
    u8 minYield:4;
    u8 waterBonus:4;
    u8 *description1;
    u8 *description2;
    u8 growthDuration;
    u8 spicy;
    u8 dry;
    u8 sweet;
    u8 bitter;
    u8 sour;
    u8 smoothness;
    u8 drainRate;
};

struct EnigmaBerry
{
    struct Berry2 berry;
    u8 itemEffect[18];
    u8 holdEffect;
    u8 holdEffectParam;
    u32 checksum;
};

struct BattleEnigmaBerry
{
             u8 name[6 + 1];
             u8 holdEffect;
             u8 itemEffect[18];
             u8 holdEffectParam;
};

struct BerryTree
{
    u8 berry:7;
    u8 weeds:1;
    u8 stage:3;
    u8 mulch:4;
    u8 stopGrowth:1;
    u16 minutesUntilNextStage:14;
    u16 mutationA:2;
    u8 berryYield:5;
    u8 pests:1;
    u8 mutationB:2;
    u8 regrowthCount:4;
    u8 watered:4;
    u16 moistureLevel:7;
    u16 moistureClock:7;
    u16 padding:2;
};
# 678 "include/global.h" 2
# 1 "include/global.tv.h" 1



# 1 "include/constants/tv.h" 1
# 5 "include/global.tv.h" 2

typedef union
{

    struct {
                 u8 kind;
                 bool8 active;
                 u8 data[26];
                 u8 srcTrainerId3Lo;
                 u8 srcTrainerId3Hi;
                 u8 srcTrainerId2Lo;
                 u8 srcTrainerId2Hi;
                 u8 srcTrainerIdLo;
                 u8 srcTrainerIdHi;
                 u8 trainerIdLo;
                 u8 trainerIdHi;
    } common;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 data[34];
    } commonInit;



    struct {
                 u8 kind;
                 bool8 active;
                 u16 species;
                 u16 words[6];
                 u8 playerName[7 + 1];
                 u8 language;

    } fanclubLetter;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 species;
                 u16 words[6];
                 u8 playerName[7 + 1];
                 u8 language;

    } recentHappenings;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 species;
                 u8 friendshipHighNybble:4;
                 u8 questionAsked:4;
                 u8 playerName[7 + 1];
                 u8 language;
                 u8 pokemonNameLanguage;
                 u8 filler_0F[1];
                 u8 nickname[7 + 1];
                 u16 words18[2];
                 u16 words[2];
    } fanclubOpinions;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 words[2];
                 u16 species;
                 u8 filler_08[3];
                 u8 name[12];
                 u8 language;
    } dummy;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 species;
                 u8 pokemonName[10 + 1];
                 u8 trainerName[7 + 1];
                 u8 unused[3];
                 u8 random;
                 u8 random2;
                 u16 randomSpecies;
                 u8 language;
                 u8 pokemonNameLanguage;
    } nameRaterShow;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 species;
                 u16 words[2];
                 u8 pokemonNickname[10 + 1];
                 u8 contestCategory:3;
                 u8 contestRank:2;
                 u8 contestResult:2;

                 u16 move;
                 u8 playerName[7 + 1];
                 u8 language;
                 u8 pokemonNameLanguage;
    } bravoTrainer;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 playerName[7 + 1];
                 u16 species;
                 u8 opponentName[7 + 1];
                 u16 defeatedSpecies;
                 u16 numFights;
                 u16 words[1];
                 u8 btLevel;
                 u8 interviewResponse;
                 bool8 wonTheChallenge;
                 u8 playerLanguage;
                 u8 opponentLanguage;

    } bravoTrainerTower;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 losingSpecies;
                 u8 losingTrainerName[7 + 1];
                 u8 loserAppealFlag;
                 u8 round1Placing;
                 u8 round2Placing;
                 u8 winnerAppealFlag;
                 u16 move;
                 u16 winningSpecies;
                 u8 winningTrainerName[7 + 1];
                 u8 category;
                 u8 winningTrainerLanguage;
                 u8 losingTrainerLanguage;

    } contestLiveUpdates;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 sheen;
                 u8 flavor:3;
                 u8 color:2;

                 u8 worstBlenderName[7 + 1];
                 u8 playerName[7 + 1];
                 u8 language;
                 u8 worstBlenderLanguage;
    } threeCheers;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 speciesOpponent;
                 u8 playerName[7 + 1];
                 u8 linkOpponentName[7 + 1];
                 u16 move;
                 u16 speciesPlayer;
                 u8 battleType;
                 u8 language;
                 u8 linkOpponentLanguage;

    } battleUpdate;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 playerName[7 + 1];
                 u8 idLo;
                 u8 idHi;
                 u8 idolName[7 + 1];
                 u16 words[1];
                 u8 score;
                 u8 language;
                 u8 idolNameLanguage;

    } fanClubSpecial;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 playerName[7 + 1];
                 u8 contestCategory;
                 u8 nickname[10 + 1];
                 u8 pokeblockState;
                 u8 language;
                 u8 pokemonNameLanguage;
    } contestLady;



    struct {
                 u8 kind;
                 bool8 active;
                 u8 language;
                 u8 language2;
                 u8 nickname[10 + 1];
                 u8 ball;
                 u16 species;
                 u8 nBallsUsed;
                 u8 playerName[7 + 1];

    } pokemonToday;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 priceReduced;
                 u8 language;
                 u8 filler_04[2];
                 u16 itemIds[3];
                 u16 itemAmounts[3];
                 mapsec_u8_t shopLocation;
                 u8 playerName[7 + 1];

    } smartshopperShow;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 language;
                 u8 filler_03[9];
                 u16 species;
                 u16 species2;
                 u8 nBallsUsed;
                 u8 outcome;
                 mapsec_u8_t location;
                 u8 playerName[7 + 1];

    } pokemonTodayFailed;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 nBites;
                 u8 nFails;
                 u16 species;
                 u8 language;
                 u8 filler_07[12];
                 u8 playerName[7 + 1];

    } pokemonAngler;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 numPokeCaught;
                 u16 caughtPoke;
                 u16 steps;
                 u16 species;
                 mapsec_u8_t location;
                 u8 language;
                 u8 filler_0C[7];
                 u8 playerName[7 + 1];

    } worldOfMasters;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 dexCount;
                 u8 badgeCount;
                 u8 nSilverSymbols;
                 u8 nGoldSymbols;
                 mapsec_u8_t location;
                 u16 battlePoints;
                 u16 mapLayoutId;
                 u8 language;
                 u8 filler_0D[6];
                 u8 playerName[7 + 1];

    } rivalTrainer;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 filler_02[2];
                 u16 words[2];
                 u8 gender;
                 u8 language;
                 u8 filler_0a[9];
                 u8 playerName[7 + 1];

    } trendWatcher;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 item;
                 mapsec_u8_t location;
                 u8 language;
                 u16 mapLayoutId;
                 u8 filler_08[11];
                 u8 playerName[7 + 1];

    } treasureInvestigators;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 won;
                 u8 whichGame;
                 u16 nCoins;
                 u8 filler_06[2];
                 u8 language;
                 u8 filler_09[10];
                 u8 playerName[7 + 1];

    } findThatGamer;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 lastOpponentSpecies;
                 mapsec_u8_t location;
                 u8 outcome;
                 u16 caughtMonBall;
                 u16 balls;
                 u16 poke1Species;
                 u16 lastUsedMove;
                 u8 language;
                 u8 filler_0f[4];
                 u8 playerName[7 + 1];

    } breakingNews;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 avgLevel;
                 u8 numDecorations;
                 u8 decorations[4];
                 u16 species;
                 u16 move;
                 u8 language;
                 u8 filler_0d[6];
                 u8 playerName[7 + 1];

    } secretBaseVisit;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 item;
                 u8 whichPrize;
                 u8 language;
                 u8 filler_06[13];
                 u8 playerName[7 + 1];

    } lottoWinner;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 move;
                 u16 foeSpecies;
                 u16 species;
                 u16 otherMoves[3];
                 u16 betterMove;
                 u8 nOtherMoves;
                 u8 language;
                 u8 filler_12[1];
                 u8 playerName[7 + 1];

    } battleSeminar;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 filler_02[2];
                 u16 words[2];
                 u8 language;
                 u8 filler_09[10];
                 u8 playerName[7 + 1];

    } trainerFanClub;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 nRibbons;
                 u8 selectedRibbon;
                 u8 nickname[10 + 1];
                 u8 language;
                 u8 pokemonNameLanguage;
                 u8 filler_12[2];
                 u8 playerName[7 + 1];
    } cuties;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 winStreak;
                 u16 species1;
                 u16 species2;
                 u16 species3;
                 u16 species4;
                 u8 language;
                 u8 facilityAndMode;
                 u8 filler_0e[5];
                 u8 playerName[7 + 1];

    } frontier;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 count;
                 u8 actionIdx;
                 u8 language;
                 u8 filler_06[13];
                 u8 playerName[7 + 1];

    } numberOne;


    struct {
                 u8 kind;
                 bool8 active;
                 u16 stepsInBase;
                 u8 baseOwnersName[7 + 1];
                 u32 flags;
                 u16 item;
                 u8 savedState;
                 u8 playerName[7 + 1];
                 u8 language;
                 u8 baseOwnersNameLanguage;

    } secretBaseSecrets;


    struct {
                 u8 kind;
                 bool8 active;
                 u8 monsCaught;
                 u8 pokeblocksUsed;
                 u8 language;
                 u8 filler_05[14];
                 u8 playerName[7 + 1];
    } safariFanClub;



    struct {
                 u8 kind;
                 bool8 active;
                 u8 unused1;
                 u8 unused3;
                 u16 moves[4];
                 u16 species;
                 u16 unused2;
                 u8 locationMapNum;
                 u8 locationMapGroup;
                 u8 unused4;
                 u8 probability;
                 u8 level;
                 u8 unused5;
                 u16 daysLeft;
                 u8 language;

    } massOutbreak;
} TVShow;

typedef struct
{
    u8 kind;
    u8 state;
    u16 dayCountdown;
} PokeNews;

struct GabbyAndTyData
{
             u16 mon1;
             u16 mon2;
             u16 lastMove;
             u16 quote[1];
             mapsec_u8_t mapnum;
             u8 battleNum;
             u8 battleTookMoreThanOneTurn:1;
             u8 playerLostAMon:1;
             u8 playerUsedHealingItem:1;
             u8 playerThrewABall:1;
             u8 onAir:1;
             u8 valA_5:3;
             u8 battleTookMoreThanOneTurn2:1;
             u8 playerLostAMon2:1;
             u8 playerUsedHealingItem2:1;
             u8 playerThrewABall2:1;
             u8 valB_4:4;
};
# 679 "include/global.h" 2
# 1 "include/pokemon.h" 1



# 1 "include/contest_effect.h" 1




struct ContestEffect
{
    u8 effectType;
    u8 appeal;
    u8 jam;
    const u8 *description;
    void (*function)(void);
};

extern const struct ContestEffect gContestEffects[];

bool8 AreMovesContestCombo(u16 lastMove, u16 nextMove);
# 5 "include/pokemon.h" 2
# 1 "include/sprite.h" 1
# 12 "include/sprite.h"
struct SpriteSheet
{
    const void *data;
    u16 size;
    u16 tag;
};

struct CompressedSpriteSheet
{
    const u32 *data;
    u16 size;
    u16 tag;
};

struct SpriteFrameImage
{
    const void *data;
    u16 size;
    bool8 relativeFrames;
};






struct SpritePalette
{
    const u16 *data;
    u16 tag;
};

struct AnimFrameCmd
{


    u32 imageValue:16;

    u32 duration:6;
    u32 hFlip:1;
    u32 vFlip:1;
};

struct AnimLoopCmd
{
    u32 type:16;
    u32 count:6;
};

struct AnimJumpCmd
{
    u32 type:16;
    u32 target:6;
};




union AnimCmd
{
    s16 type;
    struct AnimFrameCmd frame;
    struct AnimLoopCmd loop;
    struct AnimJumpCmd jump;
};
# 87 "include/sprite.h"
struct AffineAnimFrameCmd
{
    s16 xScale;
    s16 yScale;
    u8 rotation;
    u8 duration;
};

struct AffineAnimLoopCmd
{
    s16 type;
    s16 count;
};

struct AffineAnimJumpCmd
{
    s16 type;
    u16 target;
};

struct AffineAnimEndCmdAlt
{
    s16 type;
    u16 val;
};

union AffineAnimCmd
{
    s16 type;
    struct AffineAnimFrameCmd frame;
    struct AffineAnimLoopCmd loop;
    struct AffineAnimJumpCmd jump;
    struct AffineAnimEndCmdAlt end;
};
# 137 "include/sprite.h"
struct AffineAnimState
{
    u8 animNum;
    u8 animCmdIndex;
    u8 delayCounter;
    u8 loopCounter;
    s16 xScale;
    s16 yScale;
    u16 rotation;
};

enum
{
    SUBSPRITES_OFF,
    SUBSPRITES_ON,
    SUBSPRITES_IGNORE_PRIORITY,
};

struct Subsprite
{
    s8 x;
    s8 y;
    u16 shape:2;
    u16 size:2;
    u16 tileOffset:10;
    u16 priority:2;
};

struct SubspriteTable
{
    u8 subspriteCount;
    const struct Subsprite *subsprites;
};

struct Sprite;

typedef void (*SpriteCallback)(struct Sprite *);

struct SpriteTemplate
{
    u16 tileTag;
    u16 paletteTag;
    const struct OamData *oam;
    const union AnimCmd *const *anims;
    const struct SpriteFrameImage *images;
    const union AffineAnimCmd *const *affineAnims;
    SpriteCallback callback;
};





struct Sprite
{
             struct OamData oam;
             const union AnimCmd *const *anims;
             const struct SpriteFrameImage *images;
             const union AffineAnimCmd *const *affineAnims;
             const struct SpriteTemplate *template;
             const struct SubspriteTable *subspriteTables;
             SpriteCallback callback;

             s16 x, y;
             s16 x2, y2;
             s8 centerToCornerVecX;
             s8 centerToCornerVecY;

             u8 animNum;
             u8 animCmdIndex;
             u8 animDelayCounter:6;
             bool8 animPaused:1;
             bool8 affineAnimPaused:1;
             u8 animLoopCounter;


             s16 data[8];

             u16 inUse:1;
             u16 coordOffsetEnabled:1;
             u16 invisible:1;
             u16 flags_3:1;



             u16 sheetSpan:3;



             u16 flags_7:1;
             u16 hFlip:1;
             u16 vFlip:1;
             u16 animBeginning:1;
             u16 affineAnimBeginning:1;
             u16 animEnded:1;
             u16 affineAnimEnded:1;
             u16 usingSheet:1;
             u16 anchored:1;

             u16 sheetTileStart;

             u8 subspriteTableNum:6;
             u8 subspriteMode:2;

             u8 subpriority;
};

struct OamMatrix
{
    s16 a;
    s16 b;
    s16 c;
    s16 d;
};

extern const struct OamData gDummyOamData;
extern const union AnimCmd *const gDummySpriteAnimTable[];
extern const union AffineAnimCmd *const gDummySpriteAffineAnimTable[];
extern const struct SpriteTemplate gDummySpriteTemplate;

extern u8 gReservedSpritePaletteCount;
extern struct Sprite gSprites[64 + 1];
extern u8 gOamLimit;
extern u16 gReservedSpriteTileCount;
extern s16 gSpriteCoordOffsetX;
extern s16 gSpriteCoordOffsetY;
extern struct OamMatrix gOamMatrices[32];
extern bool8 gAffineAnimsDisabled;

void ResetSpriteData(void);
void AnimateSprites(void);
void BuildOamBuffer(void);
u32 CreateSprite(const struct SpriteTemplate *template, s16 x, s16 y, u32 subpriority);
u32 CreateSpriteAtEnd(const struct SpriteTemplate *template, s16 x, s16 y, u32 subpriority);
u32 CreateInvisibleSprite(void (*callback)(struct Sprite *));
u32 CreateSpriteAndAnimate(const struct SpriteTemplate *template, s16 x, s16 y, u32 subpriority);
void DestroySprite(struct Sprite *sprite);
void ResetOamRange(u32 start, u32 end);
void LoadOam(void);
void SetOamMatrix(u8 matrixNum, u16 a, u16 b, u16 c, u16 d);
void CalcCenterToCornerVec(struct Sprite *sprite, u8 shape, u8 size, u8 affineMode);
void SpriteCallbackDummy(struct Sprite *sprite);
void ProcessSpriteCopyRequests(void);
void RequestSpriteCopy(const u8 *src, u8 *dest, u16 size);
void FreeSpriteTiles(struct Sprite *sprite);
void FreeSpritePalette(struct Sprite *sprite);
void FreeSpriteOamMatrix(struct Sprite *sprite);
void DestroySpriteAndFreeResources(struct Sprite *sprite);
void AnimateSprite(struct Sprite *sprite);
void SetSpriteMatrixAnchor(struct Sprite *sprite, s16 x, s16 y);
void StartSpriteAnim(struct Sprite *sprite, u8 animNum);
void StartSpriteAnimIfDifferent(struct Sprite *sprite, u8 animNum);
void SeekSpriteAnim(struct Sprite *sprite, u8 animCmdIndex);
void StartSpriteAffineAnim(struct Sprite *sprite, u8 animNum);
void StartSpriteAffineAnimIfDifferent(struct Sprite *sprite, u8 animNum);
void ChangeSpriteAffineAnim(struct Sprite *sprite, u8 animNum);
void ChangeSpriteAffineAnimIfDifferent(struct Sprite *sprite, u8 animNum);
void SetSpriteSheetFrameTileNum(struct Sprite *sprite);
u8 AllocOamMatrix(void);
void FreeOamMatrix(u8 matrixNum);
void InitSpriteAffineAnim(struct Sprite *sprite);
void SetOamMatrixRotationScaling(u8 matrixNum, s16 xScale, s16 yScale, u16 rotation);
u16 LoadSpriteSheet(const struct SpriteSheet *sheet);
u16 LoadSpriteSheetByTemplate(const struct SpriteTemplate *template, u32 frame, s32 offset);
void LoadSpriteSheets(const struct SpriteSheet *sheets);
s16 AllocSpriteTiles(u16 tileCount);
void FreeSpriteTilesByTag(u16 tag);
void FreeSpriteTileRanges(void);
u16 GetSpriteTileStartByTag(u16 tag);
u16 GetSpriteTileTagByTileStart(u16 start);
void FreeAllSpritePalettes(void);
u32 LoadSpritePalette(const struct SpritePalette *palette);
u32 LoadSpritePaletteWithTag(const u16 *pal, u16 tag);
u8 LoadSpritePaletteInSlot(const struct SpritePalette *palette, u8 paletteNum);
void LoadSpritePalettes(const struct SpritePalette *palettes);
u32 AllocSpritePalette(u16 tag);
u32 IndexOfSpritePaletteTag(u16 tag);
u16 GetSpritePaletteTagByPaletteNum(u8 paletteNum);
void FreeSpritePaletteByTag(u16 tag);
void SetSubspriteTables(struct Sprite *sprite, const struct SubspriteTable *subspriteTables);
bool8 AddSpriteToOamBuffer(struct Sprite *sprite, u8 *oamIndex);
bool8 AddSubspritesToOamBuffer(struct Sprite *sprite, struct OamData *destOam, u8 *oamIndex);
void CopyToSprites(u8 *src);
void CopyFromSprites(u8 *dest);
u8 SpriteTileAllocBitmapOp(u16 bit, u8 op);
void ClearSpriteCopyRequests(void);
void ResetAffineAnimData(void);
u32 GetSpanPerImage(u32 shape, u32 size);
void RequestSpriteFrameImageCopy(u16 index, u16 tileNum, const struct SpriteFrameImage *images);
void SetSpriteOamFlipBits(struct Sprite *sprite, u8 hFlip, u8 vFlip);
u8 IndexOfSpriteTileTag(u16 tag);
# 6 "include/pokemon.h" 2
# 1 "include/constants/battle.h" 1



# 1 "include/constants/moves.h" 1
# 5 "include/constants/battle.h" 2
# 28 "include/constants/battle.h"
enum BattlerPosition
{
    B_POSITION_PLAYER_LEFT,
    B_POSITION_OPPONENT_LEFT,
    B_POSITION_PLAYER_RIGHT,
    B_POSITION_OPPONENT_RIGHT,
    MAX_POSITION_COUNT,
};

enum BattlerId
{
    B_BATTLER_0,
    B_BATTLER_1,
    B_BATTLER_2,
    B_BATTLER_3,
    MAX_BATTLERS_COUNT,
};
# 55 "include/constants/battle.h"
enum BattleSide
{
    B_SIDE_PLAYER = 0,
    B_SIDE_OPPONENT = 1,
    NUM_BATTLE_SIDES = 2,
};
# 156 "include/constants/battle.h"
enum VolatileFlags
{
    V_BATON_PASSABLE = (1 << 0),
};
# 230 "include/constants/battle.h"
enum Volatile
{
    VOLATILE_NONE,
    VOLATILE_CONFUSION, VOLATILE_FLINCHED, VOLATILE_UPROAR, VOLATILE_TORMENT, VOLATILE_BIDE, VOLATILE_LOCK_CONFUSE, VOLATILE_MULTIPLETURNS, VOLATILE_WRAPPED, VOLATILE_WRAPPED_BY, VOLATILE_WRAPPED_MOVE, VOLATILE_POWDER, VOLATILE_UNUSED, VOLATILE_INFATUATION, VOLATILE_DEFENSE_CURL, VOLATILE_TRANSFORMED, VOLATILE_RAGE, VOLATILE_SUBSTITUTE, VOLATILE_DESTINY_BOND, VOLATILE_ESCAPE_PREVENTION, VOLATILE_NIGHTMARE, VOLATILE_CURSED, VOLATILE_FORESIGHT, VOLATILE_DRAGON_CHEER, VOLATILE_FOCUS_ENERGY, VOLATILE_SEMI_INVULNERABLE, VOLATILE_ELECTRIFIED, VOLATILE_MUD_SPORT, VOLATILE_WATER_SPORT, VOLATILE_INFINITE_CONFUSION, VOLATILE_SALT_CURE, VOLATILE_SYRUP_BOMB, VOLATILE_STICKY_SYRUPED_BY, VOLATILE_GLAIVE_RUSH, VOLATILE_LEECH_SEED, VOLATILE_LOCK_ON, VOLATILE_PERISH_SONG, VOLATILE_MINIMIZE, VOLATILE_CHARGE, VOLATILE_ROOT, VOLATILE_YAWN, VOLATILE_IMPRISON, VOLATILE_GRUDGE, VOLATILE_GASTRO_ACID, VOLATILE_EMBARGO, VOLATILE_SMACK_DOWN, VOLATILE_TELEKINESIS, VOLATILE_MIRACLE_EYE, VOLATILE_MAGNET_RISE, VOLATILE_HEAL_BLOCK, VOLATILE_AQUA_RING, VOLATILE_LASER_FOCUS, VOLATILE_POWER_TRICK, VOLATILE_NO_RETREAT, VOLATILE_VESSEL_OF_RUIN, VOLATILE_SWORD_OF_RUIN, VOLATILE_TABLETS_OF_RUIN, VOLATILE_BEADS_OF_RUIN,

};





enum SemiInvulnerableState
{
    STATE_NONE,
    STATE_UNDERGROUND,
    STATE_UNDERWATER,
    STATE_ON_AIR,
    STATE_PHANTOM_FORCE,
    STATE_SKY_DROP,
    STATE_COMMANDER,
    SEMI_INVULNERABLE_COUNT,
};

enum SemiInvulnerableExclusion
{
    CHECK_ALL,
    EXCLUDE_COMMANDER,
};
# 301 "include/constants/battle.h"
enum Hazards
{
    HAZARDS_NONE,
    HAZARDS_SPIKES,
    HAZARDS_STICKY_WEB,
    HAZARDS_TOXIC_SPIKES,
    HAZARDS_STEALTH_ROCK,
    HAZARDS_STEELSURGE,
    HAZARDS_MAX_COUNT,
};


enum TypeSideHazard
{
    TYPE_SIDE_HAZARD_POINTED_STONES = TYPE_ROCK,
    TYPE_SIDE_HAZARD_SHARP_STEEL = TYPE_STEEL,
};
# 349 "include/constants/battle.h"
enum BattleWeather
{
    BATTLE_WEATHER_RAIN,
    BATTLE_WEATHER_RAIN_PRIMAL,
    BATTLE_WEATHER_RAIN_DOWNPOUR,
    BATTLE_WEATHER_SUN,
    BATTLE_WEATHER_SUN_PRIMAL,
    BATTLE_WEATHER_SANDSTORM,
    BATTLE_WEATHER_HAIL,
    BATTLE_WEATHER_SNOW,
    BATTLE_WEATHER_FOG,
    BATTLE_WEATHER_STRONG_WINDS,
    BATTLE_WEATHER_COUNT,
};
# 386 "include/constants/battle.h"
enum __attribute__((packed)) MoveEffect
{
    MOVE_EFFECT_NONE = 0,
    MOVE_EFFECT_SLEEP = 1,
    MOVE_EFFECT_POISON = 2,
    MOVE_EFFECT_BURN = 3,
    MOVE_EFFECT_FREEZE = 4,
    MOVE_EFFECT_PARALYSIS = 5,
    MOVE_EFFECT_TOXIC = 6,
    MOVE_EFFECT_FROSTBITE = 7,
    MOVE_EFFECT_CONFUSION,
    MOVE_EFFECT_FLINCH,
    MOVE_EFFECT_TRI_ATTACK,
    MOVE_EFFECT_UPROAR,
    MOVE_EFFECT_PAYDAY,
    MOVE_EFFECT_WRAP,
    MOVE_EFFECT_ATK_PLUS_1,
    MOVE_EFFECT_DEF_PLUS_1,
    MOVE_EFFECT_SPD_PLUS_1,
    MOVE_EFFECT_SP_ATK_PLUS_1,
    MOVE_EFFECT_SP_DEF_PLUS_1,
    MOVE_EFFECT_ACC_PLUS_1,
    MOVE_EFFECT_EVS_PLUS_1,
    MOVE_EFFECT_ATK_MINUS_1,
    MOVE_EFFECT_DEF_MINUS_1,
    MOVE_EFFECT_SPD_MINUS_1,
    MOVE_EFFECT_SP_ATK_MINUS_1,
    MOVE_EFFECT_SP_DEF_MINUS_1,
    MOVE_EFFECT_ACC_MINUS_1,
    MOVE_EFFECT_EVS_MINUS_1,
    MOVE_EFFECT_REMOVE_ARG_TYPE,
    MOVE_EFFECT_RECHARGE,
    MOVE_EFFECT_RAGE,
    MOVE_EFFECT_PREVENT_ESCAPE,
    MOVE_EFFECT_NIGHTMARE,
    MOVE_EFFECT_ALL_STATS_UP,
    MOVE_EFFECT_REMOVE_STATUS,
    MOVE_EFFECT_ATK_DEF_DOWN,
    MOVE_EFFECT_ATK_PLUS_2,
    MOVE_EFFECT_DEF_PLUS_2,
    MOVE_EFFECT_SPD_PLUS_2,
    MOVE_EFFECT_SP_ATK_PLUS_2,
    MOVE_EFFECT_SP_DEF_PLUS_2,
    MOVE_EFFECT_ACC_PLUS_2,
    MOVE_EFFECT_EVS_PLUS_2,
    MOVE_EFFECT_ATK_MINUS_2,
    MOVE_EFFECT_DEF_MINUS_2,
    MOVE_EFFECT_SPD_MINUS_2,
    MOVE_EFFECT_SP_ATK_MINUS_2,
    MOVE_EFFECT_SP_DEF_MINUS_2,
    MOVE_EFFECT_ACC_MINUS_2,
    MOVE_EFFECT_EVS_MINUS_2,
    MOVE_EFFECT_SCALE_SHOT,
    MOVE_EFFECT_THRASH,
    MOVE_EFFECT_DEF_SPDEF_DOWN,
    MOVE_EFFECT_CLEAR_SMOG,
    MOVE_EFFECT_FLAME_BURST,
    MOVE_EFFECT_FEINT,
    MOVE_EFFECT_V_CREATE,
    MOVE_EFFECT_HAPPY_HOUR,
    MOVE_EFFECT_CORE_ENFORCER,
    MOVE_EFFECT_THROAT_CHOP,
    MOVE_EFFECT_INCINERATE,
    MOVE_EFFECT_BUG_BITE,
    MOVE_EFFECT_RECOIL_HP_25,
    MOVE_EFFECT_TRAP_BOTH,
    MOVE_EFFECT_ROUND,
    MOVE_EFFECT_DIRE_CLAW,
    MOVE_EFFECT_SYRUP_BOMB,
    MOVE_EFFECT_FLORAL_HEALING,
    MOVE_EFFECT_SECRET_POWER,
    MOVE_EFFECT_PSYCHIC_NOISE,
    MOVE_EFFECT_TERA_BLAST,
    MOVE_EFFECT_ORDER_UP,
    MOVE_EFFECT_ION_DELUGE,
    MOVE_EFFECT_HAZE,
    MOVE_EFFECT_LEECH_SEED,
    MOVE_EFFECT_REFLECT,
    MOVE_EFFECT_LIGHT_SCREEN,
    MOVE_EFFECT_SALT_CURE,
    MOVE_EFFECT_EERIE_SPELL,





    MOVE_EFFECT_RAISE_TEAM_ATTACK,
    MOVE_EFFECT_RAISE_TEAM_DEFENSE,
    MOVE_EFFECT_RAISE_TEAM_SPEED,
    MOVE_EFFECT_RAISE_TEAM_SP_ATK,
    MOVE_EFFECT_RAISE_TEAM_SP_DEF,
    MOVE_EFFECT_LOWER_ATTACK_SIDE,
    MOVE_EFFECT_LOWER_DEFENSE_SIDE,
    MOVE_EFFECT_LOWER_SPEED_SIDE,
    MOVE_EFFECT_LOWER_SP_ATK_SIDE,
    MOVE_EFFECT_LOWER_SP_DEF_SIDE,
    MOVE_EFFECT_SUN,
    MOVE_EFFECT_RAIN,
    MOVE_EFFECT_SANDSTORM,
    MOVE_EFFECT_HAIL,
    MOVE_EFFECT_MISTY_TERRAIN,
    MOVE_EFFECT_GRASSY_TERRAIN,
    MOVE_EFFECT_ELECTRIC_TERRAIN,
    MOVE_EFFECT_PSYCHIC_TERRAIN,
    MOVE_EFFECT_VINE_LASH,
    MOVE_EFFECT_WILDFIRE,
    MOVE_EFFECT_CANNONADE,
    MOVE_EFFECT_EFFECT_SPORE_SIDE,
    MOVE_EFFECT_PARALYZE_SIDE,
    MOVE_EFFECT_CONFUSE_PAY_DAY_SIDE,
    MOVE_EFFECT_CRIT_PLUS_SIDE,
    MOVE_EFFECT_PREVENT_ESCAPE_SIDE,
    MOVE_EFFECT_AURORA_VEIL,
    MOVE_EFFECT_INFATUATE_SIDE,
    MOVE_EFFECT_RECYCLE_BERRIES,
    MOVE_EFFECT_POISON_SIDE,
    MOVE_EFFECT_DEFOG,
    MOVE_EFFECT_POISON_PARALYZE_SIDE,
    MOVE_EFFECT_HEAL_TEAM,
    MOVE_EFFECT_SPITE,
    MOVE_EFFECT_GRAVITY,
    MOVE_EFFECT_VOLCALITH,
    MOVE_EFFECT_SANDBLAST_SIDE,
    MOVE_EFFECT_YAWN_FOE,
    MOVE_EFFECT_LOWER_EVASIVENESS_SIDE,
    MOVE_EFFECT_AROMATHERAPY,
    MOVE_EFFECT_CONFUSE_SIDE,
    MOVE_EFFECT_STEELSURGE,
    MOVE_EFFECT_STEALTH_ROCK,
    MOVE_EFFECT_TORMENT_SIDE,
    MOVE_EFFECT_LOWER_SPEED_2_SIDE,
    MOVE_EFFECT_FIRE_SPIN_SIDE,
    MOVE_EFFECT_FIXED_POWER,


    NUM_MOVE_EFFECTS
};
# 533 "include/constants/battle.h"
enum BattleEnvironments
{
    BATTLE_ENVIRONMENT_GRASS,
    BATTLE_ENVIRONMENT_LONG_GRASS,
    BATTLE_ENVIRONMENT_SAND,
    BATTLE_ENVIRONMENT_UNDERWATER,
    BATTLE_ENVIRONMENT_WATER,
    BATTLE_ENVIRONMENT_POND,
    BATTLE_ENVIRONMENT_MOUNTAIN,
    BATTLE_ENVIRONMENT_CAVE,
    BATTLE_ENVIRONMENT_BUILDING,
    BATTLE_ENVIRONMENT_PLAIN,
    BATTLE_ENVIRONMENT_FRONTIER,
    BATTLE_ENVIRONMENT_GYM,
    BATTLE_ENVIRONMENT_LEADER,
    BATTLE_ENVIRONMENT_MAGMA,
    BATTLE_ENVIRONMENT_AQUA,
    BATTLE_ENVIRONMENT_SIDNEY,
    BATTLE_ENVIRONMENT_PHOEBE,
    BATTLE_ENVIRONMENT_GLACIA,
    BATTLE_ENVIRONMENT_DRAKE,
    BATTLE_ENVIRONMENT_CHAMPION,
    BATTLE_ENVIRONMENT_GROUDON,
    BATTLE_ENVIRONMENT_KYOGRE,
    BATTLE_ENVIRONMENT_RAYQUAZA,

    BATTLE_ENVIRONMENT_SOARING,
    BATTLE_ENVIRONMENT_SKY_PILLAR,
    BATTLE_ENVIRONMENT_BURIAL_GROUND,
    BATTLE_ENVIRONMENT_PUDDLE,
    BATTLE_ENVIRONMENT_MARSH,
    BATTLE_ENVIRONMENT_SWAMP,
    BATTLE_ENVIRONMENT_SNOW,
    BATTLE_ENVIRONMENT_ICE,
    BATTLE_ENVIRONMENT_VOLCANO,
    BATTLE_ENVIRONMENT_DISTORTION_WORLD,
    BATTLE_ENVIRONMENT_SPACE,
    BATTLE_ENVIRONMENT_ULTRA_SPACE,
    BATTLE_ENVIRONMENT_COUNT,
};
# 660 "include/constants/battle.h"
enum FaintedActions
{
    FAINTED_ACTIONS_NO_MONS_TO_SWITCH,
    FAINTED_ACTIONS_GIVE_EXP,
    FAINTED_ACTIONS_SET_ABSENT_FLAGS,
    FAINTED_ACTIONS_WAIT_STATE,
    FAINTED_ACTIONS_HANDLE_FAINTED_MON,
    FAINTED_ACTIONS_HANDLE_NEXT_BATTLER,
    FAINTED_ACTIONS_MAX_CASE,
};



enum StartingStatus
{
    STARTING_STATUS_NONE,
    STARTING_STATUS_ELECTRIC_TERRAIN,
    STARTING_STATUS_MISTY_TERRAIN,
    STARTING_STATUS_GRASSY_TERRAIN,
    STARTING_STATUS_PSYCHIC_TERRAIN,
    STARTING_STATUS_TRICK_ROOM,
    STARTING_STATUS_MAGIC_ROOM,
    STARTING_STATUS_WONDER_ROOM,
    STARTING_STATUS_TAILWIND_PLAYER,
    STARTING_STATUS_TAILWIND_OPPONENT,
    STARTING_STATUS_RAINBOW_PLAYER,
    STARTING_STATUS_RAINBOW_OPPONENT,
    STARTING_STATUS_SEA_OF_FIRE_PLAYER,
    STARTING_STATUS_SEA_OF_FIRE_OPPONENT,
    STARTING_STATUS_SWAMP_PLAYER,
    STARTING_STATUS_SWAMP_OPPONENT,
};

enum SlideMsgStates
{
    PRINT_SLIDE_MESSAGE,
    RESTORE_BATTLER_SLIDE_CONTROL,
};

enum MonState
{
    MON_IN_BATTLE,
    MON_OUTSIDE_BATTLE,
};

enum __attribute__((packed)) CalcDamageState
{
    CAN_DAMAGE,
    WILL_FAIL,
    CHECK_ACCURACY,
};

enum SubmoveState
{
    SUBMOVE_NO_EFFECT,
    SUBMOVE_SUCCESS,
    SUBMOVE_FAILURE,
};
# 7 "include/pokemon.h" 2
# 1 "include/constants/cries.h" 1



enum PokemonCry
{
    CRY_NONE,

    CRY_BULBASAUR,
    CRY_IVYSAUR,
    CRY_VENUSAUR,

    CRY_VENUSAUR_MEGA,



    CRY_CHARMANDER,
    CRY_CHARMELEON,
    CRY_CHARIZARD,

    CRY_CHARIZARD_MEGA_X,
    CRY_CHARIZARD_MEGA_Y,



    CRY_SQUIRTLE,
    CRY_WARTORTLE,
    CRY_BLASTOISE,

    CRY_BLASTOISE_MEGA,



    CRY_CATERPIE,
    CRY_METAPOD,
    CRY_BUTTERFREE,


    CRY_WEEDLE,
    CRY_KAKUNA,
    CRY_BEEDRILL,

    CRY_BEEDRILL_MEGA,



    CRY_PIDGEY,
    CRY_PIDGEOTTO,
    CRY_PIDGEOT,

    CRY_PIDGEOT_MEGA,



    CRY_RATTATA,
    CRY_RATICATE,


    CRY_SPEAROW,
    CRY_FEAROW,


    CRY_EKANS,
    CRY_ARBOK,



    CRY_PICHU,

    CRY_PIKACHU,
    CRY_RAICHU,


    CRY_SANDSHREW,
    CRY_SANDSLASH,


    CRY_NIDORAN_F,
    CRY_NIDORINA,
    CRY_NIDOQUEEN,
    CRY_NIDORAN_M,
    CRY_NIDORINO,
    CRY_NIDOKING,



    CRY_CLEFFA,

    CRY_CLEFAIRY,
    CRY_CLEFABLE,


    CRY_VULPIX,
    CRY_NINETALES,



    CRY_IGGLYBUFF,

    CRY_JIGGLYPUFF,
    CRY_WIGGLYTUFF,


    CRY_ZUBAT,
    CRY_GOLBAT,

    CRY_CROBAT,



    CRY_ODDISH,
    CRY_GLOOM,
    CRY_VILEPLUME,

    CRY_BELLOSSOM,



    CRY_PARAS,
    CRY_PARASECT,


    CRY_VENONAT,
    CRY_VENOMOTH,


    CRY_DIGLETT,
    CRY_DUGTRIO,


    CRY_MEOWTH,
    CRY_PERSIAN,

    CRY_PERRSERKER,



    CRY_PSYDUCK,
    CRY_GOLDUCK,


    CRY_MANKEY,
    CRY_PRIMEAPE,

    CRY_ANNIHILAPE,



    CRY_GROWLITHE,
    CRY_ARCANINE,


    CRY_POLIWAG,
    CRY_POLIWHIRL,
    CRY_POLIWRATH,

    CRY_POLITOED,



    CRY_ABRA,
    CRY_KADABRA,
    CRY_ALAKAZAM,

    CRY_ALAKAZAM_MEGA,



    CRY_MACHOP,
    CRY_MACHOKE,
    CRY_MACHAMP,


    CRY_BELLSPROUT,
    CRY_WEEPINBELL,
    CRY_VICTREEBEL,


    CRY_TENTACOOL,
    CRY_TENTACRUEL,


    CRY_GEODUDE,
    CRY_GRAVELER,
    CRY_GOLEM,


    CRY_PONYTA,
    CRY_RAPIDASH,


    CRY_SLOWPOKE,
    CRY_SLOWBRO,

    CRY_SLOWKING,


    CRY_SLOWBRO_MEGA,


    CRY_SLOWPOKE_GALAR,



    CRY_MAGNEMITE,
    CRY_MAGNETON,

    CRY_MAGNEZONE,



    CRY_FARFETCHD,

    CRY_SIRFETCHD,



    CRY_DODUO,
    CRY_DODRIO,


    CRY_SEEL,
    CRY_DEWGONG,


    CRY_GRIMER,
    CRY_MUK,


    CRY_SHELLDER,
    CRY_CLOYSTER,


    CRY_GASTLY,
    CRY_HAUNTER,
    CRY_GENGAR,

    CRY_GENGAR_MEGA,



    CRY_ONIX,

    CRY_STEELIX,

    CRY_STEELIX_MEGA,




    CRY_DROWZEE,
    CRY_HYPNO,


    CRY_KRABBY,
    CRY_KINGLER,


    CRY_VOLTORB,
    CRY_ELECTRODE,


    CRY_EXEGGCUTE,
    CRY_EXEGGUTOR,


    CRY_CUBONE,
    CRY_MAROWAK,



    CRY_TYROGUE,

    CRY_HITMONLEE,
    CRY_HITMONCHAN,

    CRY_HITMONTOP,



    CRY_LICKITUNG,

    CRY_LICKILICKY,



    CRY_KOFFING,
    CRY_WEEZING,


    CRY_RHYHORN,
    CRY_RHYDON,

    CRY_RHYPERIOR,




    CRY_HAPPINY,

    CRY_CHANSEY,

    CRY_BLISSEY,



    CRY_TANGELA,

    CRY_TANGROWTH,



    CRY_KANGASKHAN,

    CRY_KANGASKHAN_MEGA,



    CRY_HORSEA,
    CRY_SEADRA,

    CRY_KINGDRA,



    CRY_GOLDEEN,
    CRY_SEAKING,


    CRY_STARYU,
    CRY_STARMIE,



    CRY_MIME_JR,

    CRY_MR_MIME,

    CRY_MR_RIME,



    CRY_SCYTHER,

    CRY_SCIZOR,

    CRY_SCIZOR_MEGA,



    CRY_KLEAVOR,




    CRY_SMOOCHUM,

    CRY_JYNX,



    CRY_ELEKID,

    CRY_ELECTABUZZ,

    CRY_ELECTIVIRE,




    CRY_MAGBY,

    CRY_MAGMAR,

    CRY_MAGMORTAR,



    CRY_PINSIR,

    CRY_PINSIR_MEGA,



    CRY_TAUROS,


    CRY_MAGIKARP,
    CRY_GYARADOS,

    CRY_GYARADOS_MEGA,



    CRY_LAPRAS,


    CRY_DITTO,


    CRY_EEVEE,
    CRY_VAPOREON,
    CRY_JOLTEON,
    CRY_FLAREON,

    CRY_ESPEON,
    CRY_UMBREON,


    CRY_LEAFEON,
    CRY_GLACEON,


    CRY_SYLVEON,



    CRY_PORYGON,

    CRY_PORYGON2,

    CRY_PORYGON_Z,




    CRY_OMANYTE,
    CRY_OMASTAR,


    CRY_KABUTO,
    CRY_KABUTOPS,


    CRY_AERODACTYL,

    CRY_AERODACTYL_MEGA,




    CRY_MUNCHLAX,

    CRY_SNORLAX,


    CRY_ARTICUNO,


    CRY_ZAPDOS,


    CRY_MOLTRES,


    CRY_DRATINI,
    CRY_DRAGONAIR,
    CRY_DRAGONITE,


    CRY_MEWTWO,

    CRY_MEWTWO_MEGA_X,
    CRY_MEWTWO_MEGA_Y,



    CRY_MEW,


    CRY_CHIKORITA,
    CRY_BAYLEEF,
    CRY_MEGANIUM,


    CRY_CYNDAQUIL,
    CRY_QUILAVA,
    CRY_TYPHLOSION,


    CRY_TOTODILE,
    CRY_CROCONAW,
    CRY_FERALIGATR,


    CRY_SENTRET,
    CRY_FURRET,


    CRY_HOOTHOOT,
    CRY_NOCTOWL,


    CRY_LEDYBA,
    CRY_LEDIAN,


    CRY_SPINARAK,
    CRY_ARIADOS,


    CRY_CHINCHOU,
    CRY_LANTURN,


    CRY_TOGEPI,
    CRY_TOGETIC,

    CRY_TOGEKISS,



    CRY_NATU,
    CRY_XATU,


    CRY_MAREEP,
    CRY_FLAAFFY,
    CRY_AMPHAROS,

    CRY_AMPHAROS_MEGA,




    CRY_AZURILL,

    CRY_MARILL,
    CRY_AZUMARILL,


    CRY_BONSLY,
    CRY_SUDOWOODO,


    CRY_HOPPIP,
    CRY_SKIPLOOM,
    CRY_JUMPLUFF,


    CRY_AIPOM,
    CRY_AMBIPOM,


    CRY_SUNKERN,
    CRY_SUNFLORA,


    CRY_YANMA,

    CRY_YANMEGA,



    CRY_WOOPER,
    CRY_QUAGSIRE,

    CRY_CLODSIRE,



    CRY_MURKROW,
    CRY_HONCHKROW,


    CRY_MISDREAVUS,
    CRY_MISMAGIUS,


    CRY_UNOWN,



    CRY_WYNAUT,

    CRY_WOBBUFFET,


    CRY_GIRAFARIG,

    CRY_FARIGIRAF,



    CRY_PINECO,
    CRY_FORRETRESS,


    CRY_DUNSPARCE,

    CRY_DUDUNSPARCE,



    CRY_GLIGAR,

    CRY_GLISCOR,



    CRY_SNUBBULL,
    CRY_GRANBULL,


    CRY_QWILFISH,

    CRY_OVERQWIL,



    CRY_SHUCKLE,


    CRY_HERACROSS,

    CRY_HERACROSS_MEGA,



    CRY_SNEASEL,

    CRY_WEAVILE,


    CRY_SNEASLER,



    CRY_TEDDIURSA,
    CRY_URSARING,

    CRY_URSALUNA,



    CRY_SLUGMA,
    CRY_MAGCARGO,


    CRY_SWINUB,
    CRY_PILOSWINE,

    CRY_MAMOSWINE,



    CRY_CORSOLA,

    CRY_CURSOLA,



    CRY_REMORAID,
    CRY_OCTILLERY,


    CRY_DELIBIRD,



    CRY_MANTYKE,

    CRY_MANTINE,


    CRY_SKARMORY,


    CRY_HOUNDOUR,
    CRY_HOUNDOOM,

    CRY_HOUNDOOM_MEGA,



    CRY_PHANPY,
    CRY_DONPHAN,


    CRY_STANTLER,

    CRY_WYRDEER,



    CRY_SMEARGLE,


    CRY_MILTANK,


    CRY_RAIKOU,


    CRY_ENTEI,


    CRY_SUICUNE,


    CRY_LARVITAR,
    CRY_PUPITAR,
    CRY_TYRANITAR,

    CRY_TYRANITAR_MEGA,



    CRY_LUGIA,


    CRY_HO_OH,


    CRY_CELEBI,


    CRY_TREECKO,
    CRY_GROVYLE,
    CRY_SCEPTILE,

    CRY_SCEPTILE_MEGA,



    CRY_TORCHIC,
    CRY_COMBUSKEN,
    CRY_BLAZIKEN,

    CRY_BLAZIKEN_MEGA,



    CRY_MUDKIP,
    CRY_MARSHTOMP,
    CRY_SWAMPERT,

    CRY_SWAMPERT_MEGA,



    CRY_POOCHYENA,
    CRY_MIGHTYENA,


    CRY_ZIGZAGOON,
    CRY_LINOONE,

    CRY_OBSTAGOON,



    CRY_WURMPLE,
    CRY_SILCOON,
    CRY_BEAUTIFLY,
    CRY_CASCOON,
    CRY_DUSTOX,


    CRY_LOTAD,
    CRY_LOMBRE,
    CRY_LUDICOLO,


    CRY_SEEDOT,
    CRY_NUZLEAF,
    CRY_SHIFTRY,


    CRY_TAILLOW,
    CRY_SWELLOW,


    CRY_WINGULL,
    CRY_PELIPPER,


    CRY_RALTS,
    CRY_KIRLIA,
    CRY_GARDEVOIR,

    CRY_GARDEVOIR_MEGA,


    CRY_GALLADE,

    CRY_GALLADE_MEGA,




    CRY_SURSKIT,
    CRY_MASQUERAIN,


    CRY_SHROOMISH,
    CRY_BRELOOM,


    CRY_SLAKOTH,
    CRY_VIGOROTH,
    CRY_SLAKING,


    CRY_NINCADA,
    CRY_NINJASK,
    CRY_SHEDINJA,


    CRY_WHISMUR,
    CRY_LOUDRED,
    CRY_EXPLOUD,


    CRY_MAKUHITA,
    CRY_HARIYAMA,


    CRY_NOSEPASS,

    CRY_PROBOPASS,



    CRY_SKITTY,
    CRY_DELCATTY,


    CRY_SABLEYE,

    CRY_SABLEYE_MEGA,



    CRY_MAWILE,

    CRY_MAWILE_MEGA,



    CRY_ARON,
    CRY_LAIRON,
    CRY_AGGRON,

    CRY_AGGRON_MEGA,



    CRY_MEDITITE,
    CRY_MEDICHAM,

    CRY_MEDICHAM_MEGA,



    CRY_ELECTRIKE,
    CRY_MANECTRIC,

    CRY_MANECTRIC_MEGA,



    CRY_PLUSLE,


    CRY_MINUN,


    CRY_VOLBEAT,
    CRY_ILLUMISE,



    CRY_BUDEW,

    CRY_ROSELIA,

    CRY_ROSERADE,



    CRY_GULPIN,
    CRY_SWALOT,


    CRY_CARVANHA,
    CRY_SHARPEDO,

    CRY_SHARPEDO_MEGA,



    CRY_WAILMER,
    CRY_WAILORD,


    CRY_NUMEL,
    CRY_CAMERUPT,

    CRY_CAMERUPT_MEGA,



    CRY_TORKOAL,


    CRY_SPOINK,
    CRY_GRUMPIG,


    CRY_SPINDA,


    CRY_TRAPINCH,
    CRY_VIBRAVA,
    CRY_FLYGON,


    CRY_CACNEA,
    CRY_CACTURNE,


    CRY_SWABLU,
    CRY_ALTARIA,

    CRY_ALTARIA_MEGA,



    CRY_ZANGOOSE,


    CRY_SEVIPER,


    CRY_LUNATONE,


    CRY_SOLROCK,


    CRY_BARBOACH,
    CRY_WHISCASH,


    CRY_CORPHISH,
    CRY_CRAWDAUNT,


    CRY_BALTOY,
    CRY_CLAYDOL,


    CRY_LILEEP,
    CRY_CRADILY,


    CRY_ANORITH,
    CRY_ARMALDO,


    CRY_FEEBAS,
    CRY_MILOTIC,


    CRY_CASTFORM,


    CRY_KECLEON,


    CRY_SHUPPET,
    CRY_BANETTE,

    CRY_BANETTE_MEGA,



    CRY_DUSKULL,
    CRY_DUSCLOPS,

    CRY_DUSKNOIR,



    CRY_TROPIUS,



    CRY_CHINGLING,

    CRY_CHIMECHO,


    CRY_ABSOL,

    CRY_ABSOL_MEGA,



    CRY_SNORUNT,
    CRY_GLALIE,

    CRY_GLALIE_MEGA,


    CRY_FROSLASS,



    CRY_SPHEAL,
    CRY_SEALEO,
    CRY_WALREIN,


    CRY_CLAMPERL,
    CRY_HUNTAIL,
    CRY_GOREBYSS,


    CRY_RELICANTH,


    CRY_LUVDISC,


    CRY_BAGON,
    CRY_SHELGON,
    CRY_SALAMENCE,

    CRY_SALAMENCE_MEGA,



    CRY_BELDUM,
    CRY_METANG,
    CRY_METAGROSS,

    CRY_METAGROSS_MEGA,



    CRY_REGIROCK,


    CRY_REGICE,


    CRY_REGISTEEL,


    CRY_LATIAS,

    CRY_LATIAS_MEGA,



    CRY_LATIOS,

    CRY_LATIOS_MEGA,



    CRY_KYOGRE,

    CRY_KYOGRE_PRIMAL,



    CRY_GROUDON,

    CRY_GROUDON_PRIMAL,



    CRY_RAYQUAZA,

    CRY_RAYQUAZA_MEGA,



    CRY_JIRACHI,


    CRY_DEOXYS,


    CRY_TURTWIG,
    CRY_GROTLE,
    CRY_TORTERRA,


    CRY_CHIMCHAR,
    CRY_MONFERNO,
    CRY_INFERNAPE,


    CRY_PIPLUP,
    CRY_PRINPLUP,
    CRY_EMPOLEON,


    CRY_STARLY,
    CRY_STARAVIA,
    CRY_STARAPTOR,


    CRY_BIDOOF,
    CRY_BIBAREL,


    CRY_KRICKETOT,
    CRY_KRICKETUNE,


    CRY_SHINX,
    CRY_LUXIO,
    CRY_LUXRAY,


    CRY_CRANIDOS,
    CRY_RAMPARDOS,


    CRY_SHIELDON,
    CRY_BASTIODON,


    CRY_BURMY,
    CRY_WORMADAM,
    CRY_MOTHIM,


    CRY_COMBEE,
    CRY_VESPIQUEN,


    CRY_PACHIRISU,


    CRY_BUIZEL,
    CRY_FLOATZEL,


    CRY_CHERUBI,
    CRY_CHERRIM,


    CRY_SHELLOS,
    CRY_GASTRODON,


    CRY_DRIFLOON,
    CRY_DRIFBLIM,


    CRY_BUNEARY,
    CRY_LOPUNNY,

    CRY_LOPUNNY_MEGA,



    CRY_GLAMEOW,
    CRY_PURUGLY,


    CRY_STUNKY,
    CRY_SKUNTANK,


    CRY_BRONZOR,
    CRY_BRONZONG,


    CRY_CHATOT,


    CRY_SPIRITOMB,


    CRY_GIBLE,
    CRY_GABITE,
    CRY_GARCHOMP,

    CRY_GARCHOMP_MEGA,



    CRY_RIOLU,
    CRY_LUCARIO,

    CRY_LUCARIO_MEGA,



    CRY_HIPPOPOTAS,
    CRY_HIPPOWDON,


    CRY_SKORUPI,
    CRY_DRAPION,


    CRY_CROAGUNK,
    CRY_TOXICROAK,


    CRY_CARNIVINE,


    CRY_FINNEON,
    CRY_LUMINEON,


    CRY_SNOVER,
    CRY_ABOMASNOW,

    CRY_ABOMASNOW_MEGA,



    CRY_ROTOM,


    CRY_UXIE,


    CRY_MESPRIT,


    CRY_AZELF,


    CRY_DIALGA,


    CRY_PALKIA,


    CRY_HEATRAN,


    CRY_REGIGIGAS,


    CRY_GIRATINA,


    CRY_CRESSELIA,


    CRY_PHIONE,
    CRY_MANAPHY,


    CRY_DARKRAI,


    CRY_SHAYMIN_LAND,
    CRY_SHAYMIN_SKY,


    CRY_ARCEUS,


    CRY_VICTINI,


    CRY_SNIVY,
    CRY_SERVINE,
    CRY_SERPERIOR,


    CRY_TEPIG,
    CRY_PIGNITE,
    CRY_EMBOAR,


    CRY_OSHAWOTT,
    CRY_DEWOTT,
    CRY_SAMUROTT,


    CRY_PATRAT,
    CRY_WATCHOG,


    CRY_LILLIPUP,
    CRY_HERDIER,
    CRY_STOUTLAND,


    CRY_PURRLOIN,
    CRY_LIEPARD,


    CRY_PANSAGE,
    CRY_SIMISAGE,


    CRY_PANSEAR,
    CRY_SIMISEAR,


    CRY_PANPOUR,
    CRY_SIMIPOUR,


    CRY_MUNNA,
    CRY_MUSHARNA,


    CRY_PIDOVE,
    CRY_TRANQUILL,
    CRY_UNFEZANT,


    CRY_BLITZLE,
    CRY_ZEBSTRIKA,


    CRY_ROGGENROLA,
    CRY_BOLDORE,
    CRY_GIGALITH,


    CRY_WOOBAT,
    CRY_SWOOBAT,


    CRY_DRILBUR,
    CRY_EXCADRILL,


    CRY_AUDINO,

    CRY_AUDINO_MEGA,



    CRY_TIMBURR,
    CRY_GURDURR,
    CRY_CONKELDURR,


    CRY_TYMPOLE,
    CRY_PALPITOAD,
    CRY_SEISMITOAD,


    CRY_THROH,


    CRY_SAWK,


    CRY_SEWADDLE,
    CRY_SWADLOON,
    CRY_LEAVANNY,


    CRY_VENIPEDE,
    CRY_WHIRLIPEDE,
    CRY_SCOLIPEDE,


    CRY_COTTONEE,
    CRY_WHIMSICOTT,


    CRY_PETILIL,
    CRY_LILLIGANT,


    CRY_BASCULIN,

    CRY_BASCULEGION,



    CRY_SANDILE,
    CRY_KROKOROK,
    CRY_KROOKODILE,


    CRY_DARUMAKA,
    CRY_DARMANITAN,


    CRY_MARACTUS,


    CRY_DWEBBLE,
    CRY_CRUSTLE,


    CRY_SCRAGGY,
    CRY_SCRAFTY,


    CRY_SIGILYPH,


    CRY_YAMASK,
    CRY_COFAGRIGUS,

    CRY_RUNERIGUS,



    CRY_TIRTOUGA,
    CRY_CARRACOSTA,


    CRY_ARCHEN,
    CRY_ARCHEOPS,


    CRY_TRUBBISH,
    CRY_GARBODOR,


    CRY_ZORUA,
    CRY_ZOROARK,


    CRY_MINCCINO,
    CRY_CINCCINO,


    CRY_GOTHITA,
    CRY_GOTHORITA,
    CRY_GOTHITELLE,


    CRY_SOLOSIS,
    CRY_DUOSION,
    CRY_REUNICLUS,


    CRY_DUCKLETT,
    CRY_SWANNA,


    CRY_VANILLITE,
    CRY_VANILLISH,
    CRY_VANILLUXE,


    CRY_DEERLING,
    CRY_SAWSBUCK,


    CRY_EMOLGA,


    CRY_KARRABLAST,
    CRY_ESCAVALIER,


    CRY_FOONGUS,
    CRY_AMOONGUSS,


    CRY_FRILLISH,
    CRY_JELLICENT,


    CRY_ALOMOMOLA,


    CRY_JOLTIK,
    CRY_GALVANTULA,


    CRY_FERROSEED,
    CRY_FERROTHORN,


    CRY_KLINK,
    CRY_KLANG,
    CRY_KLINKLANG,


    CRY_TYNAMO,
    CRY_EELEKTRIK,
    CRY_EELEKTROSS,


    CRY_ELGYEM,
    CRY_BEHEEYEM,


    CRY_LITWICK,
    CRY_LAMPENT,
    CRY_CHANDELURE,


    CRY_AXEW,
    CRY_FRAXURE,
    CRY_HAXORUS,


    CRY_CUBCHOO,
    CRY_BEARTIC,


    CRY_CRYOGONAL,


    CRY_SHELMET,
    CRY_ACCELGOR,


    CRY_STUNFISK,


    CRY_MIENFOO,
    CRY_MIENSHAO,


    CRY_DRUDDIGON,


    CRY_GOLETT,
    CRY_GOLURK,


    CRY_PAWNIARD,
    CRY_BISHARP,

    CRY_KINGAMBIT,



    CRY_BOUFFALANT,


    CRY_RUFFLET,
    CRY_BRAVIARY,


    CRY_VULLABY,
    CRY_MANDIBUZZ,


    CRY_HEATMOR,


    CRY_DURANT,


    CRY_DEINO,
    CRY_ZWEILOUS,
    CRY_HYDREIGON,


    CRY_LARVESTA,
    CRY_VOLCARONA,


    CRY_COBALION,


    CRY_TERRAKION,


    CRY_VIRIZION,


    CRY_TORNADUS_INCARNATE,
    CRY_TORNADUS_THERIAN,


    CRY_THUNDURUS_INCARNATE,
    CRY_THUNDURUS_THERIAN,


    CRY_RESHIRAM,


    CRY_ZEKROM,


    CRY_LANDORUS_INCARNATE,
    CRY_LANDORUS_THERIAN,


    CRY_KYUREM,

    CRY_KYUREM_WHITE,
    CRY_KYUREM_BLACK,



    CRY_KELDEO,


    CRY_MELOETTA,


    CRY_GENESECT,


    CRY_CHESPIN,
    CRY_QUILLADIN,
    CRY_CHESNAUGHT,


    CRY_FENNEKIN,
    CRY_BRAIXEN,
    CRY_DELPHOX,


    CRY_FROAKIE,
    CRY_FROGADIER,
    CRY_GRENINJA,


    CRY_BUNNELBY,
    CRY_DIGGERSBY,


    CRY_FLETCHLING,
    CRY_FLETCHINDER,
    CRY_TALONFLAME,


    CRY_SCATTERBUG,
    CRY_SPEWPA,
    CRY_VIVILLON,


    CRY_LITLEO,
    CRY_PYROAR,


    CRY_FLABEBE,
    CRY_FLOETTE,
    CRY_FLOETTE_ETERNAL,
    CRY_FLORGES,


    CRY_SKIDDO,
    CRY_GOGOAT,


    CRY_PANCHAM,
    CRY_PANGORO,


    CRY_FURFROU,


    CRY_ESPURR,
    CRY_MEOWSTIC,


    CRY_HONEDGE,
    CRY_DOUBLADE,
    CRY_AEGISLASH,


    CRY_SPRITZEE,
    CRY_AROMATISSE,


    CRY_SWIRLIX,
    CRY_SLURPUFF,


    CRY_INKAY,
    CRY_MALAMAR,


    CRY_BINACLE,
    CRY_BARBARACLE,


    CRY_SKRELP,
    CRY_DRAGALGE,


    CRY_CLAUNCHER,
    CRY_CLAWITZER,


    CRY_HELIOPTILE,
    CRY_HELIOLISK,


    CRY_TYRUNT,
    CRY_TYRANTRUM,


    CRY_AMAURA,
    CRY_AURORUS,


    CRY_HAWLUCHA,


    CRY_DEDENNE,


    CRY_CARBINK,


    CRY_GOOMY,
    CRY_SLIGGOO,
    CRY_GOODRA,


    CRY_KLEFKI,


    CRY_PHANTUMP,
    CRY_TREVENANT,


    CRY_PUMPKABOO,
    CRY_PUMPKABOO_SUPER,
    CRY_GOURGEIST,
    CRY_GOURGEIST_SUPER,


    CRY_BERGMITE,
    CRY_AVALUGG,


    CRY_NOIBAT,
    CRY_NOIVERN,


    CRY_XERNEAS,


    CRY_YVELTAL,


    CRY_ZYGARDE_50,
    CRY_ZYGARDE_10,
    CRY_ZYGARDE_COMPLETE,


    CRY_DIANCIE,

    CRY_DIANCIE_MEGA,



    CRY_HOOPA_CONFINED,
    CRY_HOOPA_UNBOUND,


    CRY_VOLCANION,


    CRY_ROWLET,
    CRY_DARTRIX,
    CRY_DECIDUEYE,


    CRY_LITTEN,
    CRY_TORRACAT,
    CRY_INCINEROAR,


    CRY_POPPLIO,
    CRY_BRIONNE,
    CRY_PRIMARINA,


    CRY_PIKIPEK,
    CRY_TRUMBEAK,
    CRY_TOUCANNON,


    CRY_YUNGOOS,
    CRY_GUMSHOOS,


    CRY_GRUBBIN,
    CRY_CHARJABUG,
    CRY_VIKAVOLT,


    CRY_CRABRAWLER,
    CRY_CRABOMINABLE,


    CRY_ORICORIO_BAILE,
    CRY_ORICORIO_POM_POM,
    CRY_ORICORIO_PAU,
    CRY_ORICORIO_SENSU,


    CRY_CUTIEFLY,
    CRY_RIBOMBEE,


    CRY_ROCKRUFF,
    CRY_LYCANROC_MIDDAY,
    CRY_LYCANROC_MIDNIGHT,
    CRY_LYCANROC_DUSK,


    CRY_WISHIWASHI_SOLO,
    CRY_WISHIWASHI_SCHOOL,


    CRY_MAREANIE,
    CRY_TOXAPEX,


    CRY_MUDBRAY,
    CRY_MUDSDALE,


    CRY_DEWPIDER,
    CRY_ARAQUANID,


    CRY_FOMANTIS,
    CRY_LURANTIS,


    CRY_MORELULL,
    CRY_SHIINOTIC,


    CRY_SALANDIT,
    CRY_SALAZZLE,


    CRY_STUFFUL,
    CRY_BEWEAR,


    CRY_BOUNSWEET,
    CRY_STEENEE,
    CRY_TSAREENA,


    CRY_COMFEY,


    CRY_ORANGURU,


    CRY_PASSIMIAN,


    CRY_WIMPOD,
    CRY_GOLISOPOD,


    CRY_SANDYGAST,
    CRY_PALOSSAND,


    CRY_PYUKUMUKU,


    CRY_TYPE_NULL,
    CRY_SILVALLY,


    CRY_MINIOR,


    CRY_KOMALA,


    CRY_TURTONATOR,


    CRY_TOGEDEMARU,


    CRY_MIMIKYU,


    CRY_BRUXISH,


    CRY_DRAMPA,


    CRY_DHELMISE,


    CRY_JANGMO_O,
    CRY_HAKAMO_O,
    CRY_KOMMO_O,


    CRY_TAPU_KOKO,


    CRY_TAPU_LELE,


    CRY_TAPU_BULU,


    CRY_TAPU_FINI,


    CRY_COSMOG,
    CRY_COSMOEM,
    CRY_SOLGALEO,
    CRY_LUNALA,


    CRY_NIHILEGO,


    CRY_BUZZWOLE,


    CRY_PHEROMOSA,


    CRY_XURKITREE,


    CRY_CELESTEELA,


    CRY_KARTANA,


    CRY_GUZZLORD,


    CRY_NECROZMA,

    CRY_NECROZMA_DUSK_MANE,
    CRY_NECROZMA_DAWN_WINGS,

    CRY_NECROZMA_ULTRA,




    CRY_MAGEARNA,


    CRY_MARSHADOW,


    CRY_POIPOLE,
    CRY_NAGANADEL,


    CRY_STAKATAKA,


    CRY_BLACEPHALON,


    CRY_ZERAORA,


    CRY_MELTAN,
    CRY_MELMETAL,


    CRY_GROOKEY,
    CRY_THWACKEY,
    CRY_RILLABOOM,


    CRY_SCORBUNNY,
    CRY_RABOOT,
    CRY_CINDERACE,


    CRY_SOBBLE,
    CRY_DRIZZILE,
    CRY_INTELEON,


    CRY_SKWOVET,
    CRY_GREEDENT,


    CRY_ROOKIDEE,
    CRY_CORVISQUIRE,
    CRY_CORVIKNIGHT,


    CRY_BLIPBUG,
    CRY_DOTTLER,
    CRY_ORBEETLE,


    CRY_NICKIT,
    CRY_THIEVUL,


    CRY_GOSSIFLEUR,
    CRY_ELDEGOSS,


    CRY_WOOLOO,
    CRY_DUBWOOL,


    CRY_CHEWTLE,
    CRY_DREDNAW,


    CRY_YAMPER,
    CRY_BOLTUND,


    CRY_ROLYCOLY,
    CRY_CARKOL,
    CRY_COALOSSAL,


    CRY_APPLIN,
    CRY_FLAPPLE,
    CRY_APPLETUN,

    CRY_DIPPLIN,
    CRY_HYDRAPPLE,



    CRY_SILICOBRA,
    CRY_SANDACONDA,


    CRY_CRAMORANT,


    CRY_ARROKUDA,
    CRY_BARRASKEWDA,


    CRY_TOXEL,
    CRY_TOXTRICITY_AMPED,
    CRY_TOXTRICITY_LOW_KEY,


    CRY_SIZZLIPEDE,
    CRY_CENTISKORCH,


    CRY_CLOBBOPUS,
    CRY_GRAPPLOCT,


    CRY_SINISTEA,
    CRY_POLTEAGEIST,


    CRY_HATENNA,
    CRY_HATTREM,
    CRY_HATTERENE,


    CRY_IMPIDIMP,
    CRY_MORGREM,
    CRY_GRIMMSNARL,


    CRY_MILCERY,
    CRY_ALCREMIE,


    CRY_FALINKS,


    CRY_PINCURCHIN,


    CRY_SNOM,
    CRY_FROSMOTH,


    CRY_STONJOURNER,


    CRY_EISCUE_ICE,
    CRY_EISCUE_NOICE_FACE,


    CRY_INDEEDEE_M,
    CRY_INDEEDEE_F,


    CRY_MORPEKO_FULL_BELLY,
    CRY_MORPEKO_HANGRY,


    CRY_CUFANT,
    CRY_COPPERAJAH,


    CRY_DRACOZOLT,


    CRY_ARCTOZOLT,


    CRY_DRACOVISH,


    CRY_ARCTOVISH,


    CRY_DURALUDON,

    CRY_ARCHALUDON,



    CRY_DREEPY,
    CRY_DRAKLOAK,
    CRY_DRAGAPULT,


    CRY_ZACIAN_HERO,
    CRY_ZACIAN_CROWNED,


    CRY_ZAMAZENTA_HERO,
    CRY_ZAMAZENTA_CROWNED,


    CRY_ETERNATUS,
    CRY_ETERNATUS_ETERNAMAX,


    CRY_KUBFU,
    CRY_URSHIFU_SINGLE_STRIKE,
    CRY_URSHIFU_RAPID_STRIKE,


    CRY_ZARUDE,


    CRY_REGIELEKI,


    CRY_REGIDRAGO,


    CRY_GLASTRIER,


    CRY_SPECTRIER,


    CRY_CALYREX,

    CRY_CALYREX_ICE,
    CRY_CALYREX_SHADOW,



    CRY_ENAMORUS_INCARNATE,
    CRY_ENAMORUS_THERIAN,


    CRY_SPRIGATITO,
    CRY_FLORAGATO,
    CRY_MEOWSCARADA,


    CRY_FUECOCO,
    CRY_CROCALOR,
    CRY_SKELEDIRGE,


    CRY_QUAXLY,
    CRY_QUAXWELL,
    CRY_QUAQUAVAL,


    CRY_LECHONK,
    CRY_OINKOLOGNE_M,
    CRY_OINKOLOGNE_F,


    CRY_TAROUNTULA,
    CRY_SPIDOPS,


    CRY_NYMBLE,
    CRY_LOKIX,


    CRY_PAWMI,
    CRY_PAWMO,
    CRY_PAWMOT,


    CRY_TANDEMAUS,
    CRY_MAUSHOLD_THREE,
    CRY_MAUSHOLD_FOUR,


    CRY_FIDOUGH,
    CRY_DACHSBUN,


    CRY_SMOLIV,
    CRY_DOLLIV,
    CRY_ARBOLIVA,


    CRY_SQUAWKABILLY,


    CRY_NACLI,
    CRY_NACLSTACK,
    CRY_GARGANACL,


    CRY_CHARCADET,
    CRY_ARMAROUGE,
    CRY_CERULEDGE,


    CRY_TADBULB,
    CRY_BELLIBOLT,


    CRY_WATTREL,
    CRY_KILOWATTREL,


    CRY_MASCHIFF,
    CRY_MABOSSTIFF,


    CRY_SHROODLE,
    CRY_GRAFAIAI,


    CRY_BRAMBLIN,
    CRY_BRAMBLEGHAST,


    CRY_TOEDSCOOL,
    CRY_TOEDSCRUEL,


    CRY_KLAWF,


    CRY_CAPSAKID,
    CRY_SCOVILLAIN,


    CRY_RELLOR,
    CRY_RABSCA,


    CRY_FLITTLE,
    CRY_ESPATHRA,


    CRY_TINKATINK,
    CRY_TINKATUFF,
    CRY_TINKATON,


    CRY_WIGLETT,
    CRY_WUGTRIO,


    CRY_BOMBIRDIER,


    CRY_FINIZEN,
    CRY_PALAFIN_ZERO,
    CRY_PALAFIN_HERO,


    CRY_VAROOM,
    CRY_REVAVROOM,


    CRY_CYCLIZAR,


    CRY_ORTHWORM,


    CRY_GLIMMET,
    CRY_GLIMMORA,


    CRY_GREAVARD,
    CRY_HOUNDSTONE,


    CRY_FLAMIGO,


    CRY_CETODDLE,
    CRY_CETITAN,


    CRY_VELUZA,


    CRY_DONDOZO,


    CRY_TATSUGIRI_CURLY,
    CRY_TATSUGIRI_DROOPY,
    CRY_TATSUGIRI_STRETCHY,


    CRY_GREAT_TUSK,


    CRY_SCREAM_TAIL,


    CRY_BRUTE_BONNET,


    CRY_FLUTTER_MANE,


    CRY_SLITHER_WING,


    CRY_SANDY_SHOCKS,


    CRY_IRON_TREADS,


    CRY_IRON_BUNDLE,


    CRY_IRON_HANDS,


    CRY_IRON_JUGULIS,


    CRY_IRON_MOTH,


    CRY_IRON_THORNS,


    CRY_FRIGIBAX,
    CRY_ARCTIBAX,
    CRY_BAXCALIBUR,


    CRY_GIMMIGHOUL,
    CRY_GHOLDENGO,


    CRY_WO_CHIEN,


    CRY_CHIEN_PAO,


    CRY_TING_LU,


    CRY_CHI_YU,


    CRY_ROARING_MOON,


    CRY_IRON_VALIANT,


    CRY_KORAIDON,


    CRY_MIRAIDON,


    CRY_WALKING_WAKE,


    CRY_IRON_LEAVES,


    CRY_POLTCHAGEIST,
    CRY_SINISTCHA,


    CRY_OKIDOGI,


    CRY_MUNKIDORI,


    CRY_FEZANDIPITI,


    CRY_OGERPON,


    CRY_GOUGING_FIRE,


    CRY_RAGING_BOLT,


    CRY_IRON_BOULDER,


    CRY_IRON_CROWN,


    CRY_TERAPAGOS,


    CRY_PECHARUNT,

    CRY_COUNT,
};
# 8 "include/pokemon.h" 2
# 1 "include/constants/form_change_types.h" 1




enum FormChangeBattleHPPercentArguments
{
    HP_HIGHER_THAN = 1,
    HP_LOWER_EQ_THAN,
};

enum FormChangeMoveArguments
{
    WHEN_LEARNED,
    WHEN_FORGOTTEN,
};

enum FormChangeItemUseArguments
{
    DAY = 1,
    NIGHT,
};



enum FormChanges
{
    FORM_CHANGE_TERMINATOR,



    FORM_CHANGE_ITEM_HOLD,







    FORM_CHANGE_ITEM_USE,





    FORM_CHANGE_MOVE,


    FORM_CHANGE_WITHDRAW,




    FORM_CHANGE_FAINT,




    FORM_CHANGE_BEGIN_BATTLE,




    FORM_CHANGE_END_BATTLE,


    FORM_CHANGE_END_BATTLE_ENVIRONMENT,


    FORM_CHANGE_BATTLE_SWITCH,






    FORM_CHANGE_BATTLE_HP_PERCENT,



    FORM_CHANGE_BATTLE_MEGA_EVOLUTION_ITEM,



    FORM_CHANGE_BATTLE_MEGA_EVOLUTION_MOVE,




    FORM_CHANGE_BATTLE_PRIMAL_REVERSION,



    FORM_CHANGE_BATTLE_WEATHER,


    FORM_CHANGE_BATTLE_TURN_END,



    FORM_CHANGE_BATTLE_ULTRA_BURST,


    FORM_CHANGE_BATTLE_GIGANTAMAX,




    FORM_CHANGE_TIME_OF_DAY,


    FORM_CHANGE_ITEM_USE_MULTICHOICE,


    FORM_CHANGE_STATUS,

    FORM_CHANGE_HIT_BY_MOVE,


    FORM_CHANGE_BATTLE_TERASTALLIZATION,



    FORM_CHANGE_DAYS_PASSED,



    FORM_CHANGE_BATTLE_BEFORE_MOVE,


    FORM_CHANGE_BATTLE_AFTER_MOVE,



    FORM_CHANGE_BATTLE_BEFORE_MOVE_CATEGORY,


    FORM_CHANGE_OVERWORLD_WEATHER,

    FORM_CHANGE_DEPOSIT,
};
# 9 "include/pokemon.h" 2

# 1 "include/constants/map_groups.h" 1
# 11 "include/pokemon.h" 2
# 1 "include/constants/regions.h" 1




enum Region
{
    REGION_NONE,
    REGION_KANTO,
    REGION_JOHTO,
    REGION_HOENN,
    REGION_SINNOH,
    REGION_UNOVA,
    REGION_KALOS,
    REGION_ALOLA,
    REGION_GALAR,
    REGION_HISUI,
    REGION_PALDEA,
    REGIONS_COUNT,
};
# 12 "include/pokemon.h" 2
# 1 "include/constants/region_map_sections.h" 1







enum {
    MAPSEC_LITTLEROOT_TOWN,
    MAPSEC_OLDALE_TOWN,
    MAPSEC_DEWFORD_TOWN,
    MAPSEC_LAVARIDGE_TOWN,
    MAPSEC_FALLARBOR_TOWN,
    MAPSEC_VERDANTURF_TOWN,
    MAPSEC_PACIFIDLOG_TOWN,
    MAPSEC_PETALBURG_CITY,
    MAPSEC_SLATEPORT_CITY,
    MAPSEC_MAUVILLE_CITY,
    MAPSEC_RUSTBORO_CITY,
    MAPSEC_FORTREE_CITY,
    MAPSEC_LILYCOVE_CITY,
    MAPSEC_MOSSDEEP_CITY,
    MAPSEC_SOOTOPOLIS_CITY,
    MAPSEC_EVER_GRANDE_CITY,
    MAPSEC_ROUTE_101,
    MAPSEC_ROUTE_102,
    MAPSEC_ROUTE_103,
    MAPSEC_ROUTE_104,
    MAPSEC_ROUTE_105,
    MAPSEC_ROUTE_106,
    MAPSEC_ROUTE_107,
    MAPSEC_ROUTE_108,
    MAPSEC_ROUTE_109,
    MAPSEC_ROUTE_110,
    MAPSEC_ROUTE_111,
    MAPSEC_ROUTE_112,
    MAPSEC_ROUTE_113,
    MAPSEC_ROUTE_114,
    MAPSEC_ROUTE_115,
    MAPSEC_ROUTE_116,
    MAPSEC_ROUTE_117,
    MAPSEC_ROUTE_118,
    MAPSEC_ROUTE_119,
    MAPSEC_ROUTE_120,
    MAPSEC_ROUTE_121,
    MAPSEC_ROUTE_122,
    MAPSEC_ROUTE_123,
    MAPSEC_ROUTE_124,
    MAPSEC_ROUTE_125,
    MAPSEC_ROUTE_126,
    MAPSEC_ROUTE_127,
    MAPSEC_ROUTE_128,
    MAPSEC_ROUTE_129,
    MAPSEC_ROUTE_130,
    MAPSEC_ROUTE_131,
    MAPSEC_ROUTE_132,
    MAPSEC_ROUTE_133,
    MAPSEC_ROUTE_134,
    MAPSEC_UNDERWATER_124,
    MAPSEC_UNDERWATER_126,
    MAPSEC_UNDERWATER_127,
    MAPSEC_UNDERWATER_128,
    MAPSEC_UNDERWATER_SOOTOPOLIS,
    MAPSEC_GRANITE_CAVE,
    MAPSEC_MT_CHIMNEY,
    MAPSEC_SAFARI_ZONE,
    MAPSEC_BATTLE_FRONTIER,
    MAPSEC_PETALBURG_WOODS,
    MAPSEC_RUSTURF_TUNNEL,
    MAPSEC_ABANDONED_SHIP,
    MAPSEC_NEW_MAUVILLE,
    MAPSEC_METEOR_FALLS,
    MAPSEC_METEOR_FALLS2,
    MAPSEC_MT_PYRE,
    MAPSEC_AQUA_HIDEOUT_OLD,
    MAPSEC_SHOAL_CAVE,
    MAPSEC_SEAFLOOR_CAVERN,
    MAPSEC_UNDERWATER_SEAFLOOR_CAVERN,
    MAPSEC_VICTORY_ROAD,
    MAPSEC_MIRAGE_ISLAND,
    MAPSEC_CAVE_OF_ORIGIN,
    MAPSEC_SOUTHERN_ISLAND,
    MAPSEC_FIERY_PATH,
    MAPSEC_FIERY_PATH2,
    MAPSEC_JAGGED_PASS,
    MAPSEC_JAGGED_PASS2,
    MAPSEC_SEALED_CHAMBER,
    MAPSEC_UNDERWATER_SEALED_CHAMBER,
    MAPSEC_SCORCHED_SLAB,
    MAPSEC_ISLAND_CAVE,
    MAPSEC_DESERT_RUINS,
    MAPSEC_ANCIENT_TOMB,
    MAPSEC_INSIDE_OF_TRUCK,
    MAPSEC_SKY_PILLAR,
    MAPSEC_SECRET_BASE,
    MAPSEC_DYNAMIC,
    MAPSEC_TWIN_LEAF_TOWN,
    MAPSEC_SANDGEM_TOWN,
    MAPSEC_JUBILIFE_CITY,
    MAPSEC_OREBURGH_CITY,
    MAPSEC_FLOROMA_TOWN,
    MAPSEC_ETERNA_CITY,
    MAPSEC_HEARTHOME_CITY,
    MAPSEC_SOLACEON_TOWN,
    MAPSEC_VEILSTONE_CITY,
    MAPSEC_PASTORIA_CITY,
    MAPSEC_CELESTIC_TOWN,
    MAPSEC_CANALAVE_CITY,
    MAPSEC_SUNYSHORE_CITY,
    MAPSEC_VALLEY_WINDWORKS,
    MAPSEC_FUEGO_IRONWORKS,
    MAPSEC_ETERNA_FOREST,
    MAPSEC_SINNOH_POKEMON_LEAUGE,
    MAPSEC_VERITY_LAKEFRONT,
    MAPSEC_LAKE_VERITY,
    MAPSEC_VALOR_LAKEFRONT,
    MAPSEC_LAKE_VALOR,
    MAPSEC_IRON_ISLAND,
    MAPSEC_ROUTE_201,
    MAPSEC_ROUTE_202,
    MAPSEC_ROUTE_203,
    MAPSEC_ROUTE_204,
    MAPSEC_ROUTE_205,
    MAPSEC_ROUTE_206,
    MAPSEC_ROUTE_207,
    MAPSEC_ROUTE_208,
    MAPSEC_ROUTE_209,
    MAPSEC_ROUTE_210,
    MAPSEC_ROUTE_211,
    MAPSEC_ROUTE_212,
    MAPSEC_ROUTE_213,
    MAPSEC_ROUTE_214,
    MAPSEC_ROUTE_215,
    MAPSEC_ROUTE_218,
    MAPSEC_ROUTE_219,
    MAPSEC_ROUTE_220,
    MAPSEC_ROUTE_221,
    MAPSEC_ROUTE_222,
    MAPSEC_ROUTE_223,
    MAPSEC_OREBURGH_GATE,
    MAPSEC_RAVAGED_PATH,
    MAPSEC_OREBURGH_MINE,
    MAPSEC_WAYWARD_CAVE,
    MAPSEC_PALLET_TOWN,
    MAPSEC_SPECIAL_AREA,
    MAPSEC_AQUA_HIDEOUT,
    MAPSEC_MAGMA_HIDEOUT,
    MAPSEC_MIRAGE_TOWER,
    MAPSEC_BIRTH_ISLAND,
    MAPSEC_FARAWAY_ISLAND,
    MAPSEC_ARTISAN_CAVE,
    MAPSEC_MARINE_CAVE,
    MAPSEC_UNDERWATER_MARINE_CAVE,
    MAPSEC_TERRA_CAVE,
    MAPSEC_UNDERWATER_105,
    MAPSEC_UNDERWATER_125,
    MAPSEC_UNDERWATER_129,
    MAPSEC_DESERT_UNDERPASS,
    MAPSEC_ALTERING_CAVE,
    MAPSEC_NAVEL_ROCK,
    MAPSEC_TRAINER_HILL,
    MAPSEC_NONE,
    MAPSEC_COUNT
};
# 13 "include/pokemon.h" 2


# 1 "include/constants/abilities.h" 1



enum __attribute__((packed)) Ability
{
    ABILITY_NONE = 0,
    ABILITY_STENCH = 1,
    ABILITY_DRIZZLE = 2,
    ABILITY_SPEED_BOOST = 3,
    ABILITY_BATTLE_ARMOR = 4,
    ABILITY_STURDY = 5,
    ABILITY_DAMP = 6,
    ABILITY_LIMBER = 7,
    ABILITY_SAND_VEIL = 8,
    ABILITY_STATIC = 9,
    ABILITY_VOLT_ABSORB = 10,
    ABILITY_WATER_ABSORB = 11,
    ABILITY_OBLIVIOUS = 12,
    ABILITY_CLOUD_NINE = 13,
    ABILITY_COMPOUND_EYES = 14,
    ABILITY_INSOMNIA = 15,
    ABILITY_COLOR_CHANGE = 16,
    ABILITY_IMMUNITY = 17,
    ABILITY_FLASH_FIRE = 18,
    ABILITY_SHIELD_DUST = 19,
    ABILITY_OWN_TEMPO = 20,
    ABILITY_SUCTION_CUPS = 21,
    ABILITY_INTIMIDATE = 22,
    ABILITY_SHADOW_TAG = 23,
    ABILITY_ROUGH_SKIN = 24,
    ABILITY_WONDER_GUARD = 25,
    ABILITY_LEVITATE = 26,
    ABILITY_EFFECT_SPORE = 27,
    ABILITY_SYNCHRONIZE = 28,
    ABILITY_CLEAR_BODY = 29,
    ABILITY_NATURAL_CURE = 30,
    ABILITY_LIGHTNING_ROD = 31,
    ABILITY_SERENE_GRACE = 32,
    ABILITY_SWIFT_SWIM = 33,
    ABILITY_CHLOROPHYLL = 34,
    ABILITY_ILLUMINATE = 35,
    ABILITY_TRACE = 36,
    ABILITY_HUGE_POWER = 37,
    ABILITY_POISON_POINT = 38,
    ABILITY_INNER_FOCUS = 39,
    ABILITY_MAGMA_ARMOR = 40,
    ABILITY_WATER_VEIL = 41,
    ABILITY_MAGNET_PULL = 42,
    ABILITY_SOUNDPROOF = 43,
    ABILITY_RAIN_DISH = 44,
    ABILITY_SAND_STREAM = 45,
    ABILITY_PRESSURE = 46,
    ABILITY_THICK_FAT = 47,
    ABILITY_EARLY_BIRD = 48,
    ABILITY_FLAME_BODY = 49,
    ABILITY_RUN_AWAY = 50,
    ABILITY_KEEN_EYE = 51,
    ABILITY_HYPER_CUTTER = 52,
    ABILITY_PICKUP = 53,
    ABILITY_TRUANT = 54,
    ABILITY_HUSTLE = 55,
    ABILITY_CUTE_CHARM = 56,
    ABILITY_PLUS = 57,
    ABILITY_MINUS = 58,
    ABILITY_FORECAST = 59,
    ABILITY_STICKY_HOLD = 60,
    ABILITY_SHED_SKIN = 61,
    ABILITY_GUTS = 62,
    ABILITY_MARVEL_SCALE = 63,
    ABILITY_LIQUID_OOZE = 64,
    ABILITY_OVERGROW = 65,
    ABILITY_BLAZE = 66,
    ABILITY_TORRENT = 67,
    ABILITY_SWARM = 68,
    ABILITY_ROCK_HEAD = 69,
    ABILITY_DROUGHT = 70,
    ABILITY_ARENA_TRAP = 71,
    ABILITY_VITAL_SPIRIT = 72,
    ABILITY_WHITE_SMOKE = 73,
    ABILITY_PURE_POWER = 74,
    ABILITY_SHELL_ARMOR = 75,
    ABILITY_AIR_LOCK = 76,
    ABILITIES_COUNT_GEN3,


    ABILITY_TANGLED_FEET = ABILITIES_COUNT_GEN3,
    ABILITY_MOTOR_DRIVE = 78,
    ABILITY_RIVALRY = 79,
    ABILITY_STEADFAST = 80,
    ABILITY_SNOW_CLOAK = 81,
    ABILITY_GLUTTONY = 82,
    ABILITY_ANGER_POINT = 83,
    ABILITY_UNBURDEN = 84,
    ABILITY_HEATPROOF = 85,
    ABILITY_SIMPLE = 86,
    ABILITY_DRY_SKIN = 87,
    ABILITY_DOWNLOAD = 88,
    ABILITY_IRON_FIST = 89,
    ABILITY_POISON_HEAL = 90,
    ABILITY_ADAPTABILITY = 91,
    ABILITY_SKILL_LINK = 92,
    ABILITY_HYDRATION = 93,
    ABILITY_SOLAR_POWER = 94,
    ABILITY_QUICK_FEET = 95,
    ABILITY_NORMALIZE = 96,
    ABILITY_SNIPER = 97,
    ABILITY_MAGIC_GUARD = 98,
    ABILITY_NO_GUARD = 99,
    ABILITY_STALL = 100,
    ABILITY_TECHNICIAN = 101,
    ABILITY_LEAF_GUARD = 102,
    ABILITY_KLUTZ = 103,
    ABILITY_MOLD_BREAKER = 104,
    ABILITY_SUPER_LUCK = 105,
    ABILITY_AFTERMATH = 106,
    ABILITY_ANTICIPATION = 107,
    ABILITY_FOREWARN = 108,
    ABILITY_UNAWARE = 109,
    ABILITY_TINTED_LENS = 110,
    ABILITY_FILTER = 111,
    ABILITY_SLOW_START = 112,
    ABILITY_SCRAPPY = 113,
    ABILITY_STORM_DRAIN = 114,
    ABILITY_ICE_BODY = 115,
    ABILITY_SOLID_ROCK = 116,
    ABILITY_SNOW_WARNING = 117,
    ABILITY_HONEY_GATHER = 118,
    ABILITY_FRISK = 119,
    ABILITY_RECKLESS = 120,
    ABILITY_MULTITYPE = 121,
    ABILITY_FLOWER_GIFT = 122,
    ABILITY_BAD_DREAMS = 123,
    ABILITIES_COUNT_GEN4,


    ABILITY_PICKPOCKET = ABILITIES_COUNT_GEN4,
    ABILITY_SHEER_FORCE = 125,
    ABILITY_CONTRARY = 126,
    ABILITY_UNNERVE = 127,
    ABILITY_DEFIANT = 128,
    ABILITY_DEFEATIST = 129,
    ABILITY_CURSED_BODY = 130,
    ABILITY_HEALER = 131,
    ABILITY_FRIEND_GUARD = 132,
    ABILITY_WEAK_ARMOR = 133,
    ABILITY_HEAVY_METAL = 134,
    ABILITY_LIGHT_METAL = 135,
    ABILITY_MULTISCALE = 136,
    ABILITY_TOXIC_BOOST = 137,
    ABILITY_FLARE_BOOST = 138,
    ABILITY_HARVEST = 139,
    ABILITY_TELEPATHY = 140,
    ABILITY_MOODY = 141,
    ABILITY_OVERCOAT = 142,
    ABILITY_POISON_TOUCH = 143,
    ABILITY_REGENERATOR = 144,
    ABILITY_BIG_PECKS = 145,
    ABILITY_SAND_RUSH = 146,
    ABILITY_WONDER_SKIN = 147,
    ABILITY_ANALYTIC = 148,
    ABILITY_ILLUSION = 149,
    ABILITY_IMPOSTER = 150,
    ABILITY_INFILTRATOR = 151,
    ABILITY_MUMMY = 152,
    ABILITY_MOXIE = 153,
    ABILITY_JUSTIFIED = 154,
    ABILITY_RATTLED = 155,
    ABILITY_MAGIC_BOUNCE = 156,
    ABILITY_SAP_SIPPER = 157,
    ABILITY_PRANKSTER = 158,
    ABILITY_SAND_FORCE = 159,
    ABILITY_IRON_BARBS = 160,
    ABILITY_ZEN_MODE = 161,
    ABILITY_VICTORY_STAR = 162,
    ABILITY_TURBOBLAZE = 163,
    ABILITY_TERAVOLT = 164,
    ABILITIES_COUNT_GEN5,


    ABILITY_AROMA_VEIL = ABILITIES_COUNT_GEN5,
    ABILITY_FLOWER_VEIL = 166,
    ABILITY_CHEEK_POUCH = 167,
    ABILITY_PROTEAN = 168,
    ABILITY_FUR_COAT = 169,
    ABILITY_MAGICIAN = 170,
    ABILITY_BULLETPROOF = 171,
    ABILITY_COMPETITIVE = 172,
    ABILITY_STRONG_JAW = 173,
    ABILITY_REFRIGERATE = 174,
    ABILITY_SWEET_VEIL = 175,
    ABILITY_STANCE_CHANGE = 176,
    ABILITY_GALE_WINGS = 177,
    ABILITY_MEGA_LAUNCHER = 178,
    ABILITY_GRASS_PELT = 179,
    ABILITY_SYMBIOSIS = 180,
    ABILITY_TOUGH_CLAWS = 181,
    ABILITY_PIXILATE = 182,
    ABILITY_GOOEY = 183,
    ABILITY_AERILATE = 184,
    ABILITY_PARENTAL_BOND = 185,
    ABILITY_DARK_AURA = 186,
    ABILITY_FAIRY_AURA = 187,
    ABILITY_AURA_BREAK = 188,
    ABILITY_PRIMORDIAL_SEA = 189,
    ABILITY_DESOLATE_LAND = 190,
    ABILITY_DELTA_STREAM = 191,
    ABILITIES_COUNT_GEN6,


    ABILITY_STAMINA = ABILITIES_COUNT_GEN6,
    ABILITY_WIMP_OUT = 193,
    ABILITY_EMERGENCY_EXIT = 194,
    ABILITY_WATER_COMPACTION = 195,
    ABILITY_MERCILESS = 196,
    ABILITY_SHIELDS_DOWN = 197,
    ABILITY_STAKEOUT = 198,
    ABILITY_WATER_BUBBLE = 199,
    ABILITY_STEELWORKER = 200,
    ABILITY_BERSERK = 201,
    ABILITY_SLUSH_RUSH = 202,
    ABILITY_LONG_REACH = 203,
    ABILITY_LIQUID_VOICE = 204,
    ABILITY_TRIAGE = 205,
    ABILITY_GALVANIZE = 206,
    ABILITY_SURGE_SURFER = 207,
    ABILITY_SCHOOLING = 208,
    ABILITY_DISGUISE = 209,
    ABILITY_BATTLE_BOND = 210,
    ABILITY_POWER_CONSTRUCT = 211,
    ABILITY_CORROSION = 212,
    ABILITY_COMATOSE = 213,
    ABILITY_QUEENLY_MAJESTY = 214,
    ABILITY_INNARDS_OUT = 215,
    ABILITY_DANCER = 216,
    ABILITY_BATTERY = 217,
    ABILITY_FLUFFY = 218,
    ABILITY_DAZZLING = 219,
    ABILITY_SOUL_HEART = 220,
    ABILITY_TANGLING_HAIR = 221,
    ABILITY_RECEIVER = 222,
    ABILITY_POWER_OF_ALCHEMY = 223,
    ABILITY_BEAST_BOOST = 224,
    ABILITY_RKS_SYSTEM = 225,
    ABILITY_ELECTRIC_SURGE = 226,
    ABILITY_PSYCHIC_SURGE = 227,
    ABILITY_MISTY_SURGE = 228,
    ABILITY_GRASSY_SURGE = 229,
    ABILITY_FULL_METAL_BODY = 230,
    ABILITY_SHADOW_SHIELD = 231,
    ABILITY_PRISM_ARMOR = 232,
    ABILITY_NEUROFORCE = 233,
    ABILITIES_COUNT_GEN7,


    ABILITY_INTREPID_SWORD = ABILITIES_COUNT_GEN7,
    ABILITY_DAUNTLESS_SHIELD = 235,
    ABILITY_LIBERO = 236,
    ABILITY_BALL_FETCH = 237,
    ABILITY_COTTON_DOWN = 238,
    ABILITY_PROPELLER_TAIL = 239,
    ABILITY_MIRROR_ARMOR = 240,
    ABILITY_GULP_MISSILE = 241,
    ABILITY_STALWART = 242,
    ABILITY_STEAM_ENGINE = 243,
    ABILITY_PUNK_ROCK = 244,
    ABILITY_SAND_SPIT = 245,
    ABILITY_ICE_SCALES = 246,
    ABILITY_RIPEN = 247,
    ABILITY_ICE_FACE = 248,
    ABILITY_POWER_SPOT = 249,
    ABILITY_MIMICRY = 250,
    ABILITY_SCREEN_CLEANER = 251,
    ABILITY_STEELY_SPIRIT = 252,
    ABILITY_PERISH_BODY = 253,
    ABILITY_WANDERING_SPIRIT = 254,
    ABILITY_GORILLA_TACTICS = 255,
    ABILITY_NEUTRALIZING_GAS = 256,
    ABILITY_PASTEL_VEIL = 257,
    ABILITY_HUNGER_SWITCH = 258,
    ABILITY_QUICK_DRAW = 259,
    ABILITY_UNSEEN_FIST = 260,
    ABILITY_CURIOUS_MEDICINE = 261,
    ABILITY_TRANSISTOR = 262,
    ABILITY_DRAGONS_MAW = 263,
    ABILITY_CHILLING_NEIGH = 264,
    ABILITY_GRIM_NEIGH = 265,
    ABILITY_AS_ONE_ICE_RIDER = 266,
    ABILITY_AS_ONE_SHADOW_RIDER = 267,
    ABILITIES_COUNT_GEN8,


    ABILITY_LINGERING_AROMA = ABILITIES_COUNT_GEN8,
    ABILITY_SEED_SOWER = 269,
    ABILITY_THERMAL_EXCHANGE = 270,
    ABILITY_ANGER_SHELL = 271,
    ABILITY_PURIFYING_SALT = 272,
    ABILITY_WELL_BAKED_BODY = 273,
    ABILITY_WIND_RIDER = 274,
    ABILITY_GUARD_DOG = 275,
    ABILITY_ROCKY_PAYLOAD = 276,
    ABILITY_WIND_POWER = 277,
    ABILITY_ZERO_TO_HERO = 278,
    ABILITY_COMMANDER = 279,
    ABILITY_ELECTROMORPHOSIS = 280,
    ABILITY_PROTOSYNTHESIS = 281,
    ABILITY_QUARK_DRIVE = 282,
    ABILITY_GOOD_AS_GOLD = 283,
    ABILITY_VESSEL_OF_RUIN = 284,
    ABILITY_SWORD_OF_RUIN = 285,
    ABILITY_TABLETS_OF_RUIN = 286,
    ABILITY_BEADS_OF_RUIN = 287,
    ABILITY_ORICHALCUM_PULSE = 288,
    ABILITY_HADRON_ENGINE = 289,
    ABILITY_OPPORTUNIST = 290,
    ABILITY_CUD_CHEW = 291,
    ABILITY_SHARPNESS = 292,
    ABILITY_SUPREME_OVERLORD = 293,
    ABILITY_COSTAR = 294,
    ABILITY_TOXIC_DEBRIS = 295,
    ABILITY_ARMOR_TAIL = 296,
    ABILITY_EARTH_EATER = 297,
    ABILITY_MYCELIUM_MIGHT = 298,
    ABILITY_HOSPITALITY = 299,
    ABILITY_MINDS_EYE = 300,
    ABILITY_EMBODY_ASPECT_TEAL_MASK = 301,
    ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK = 302,
    ABILITY_EMBODY_ASPECT_WELLSPRING_MASK = 303,
    ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK = 304,
    ABILITY_TOXIC_CHAIN = 305,
    ABILITY_SUPERSWEET_SYRUP = 306,
    ABILITY_TERA_SHIFT = 307,
    ABILITY_TERA_SHELL = 308,
    ABILITY_TERAFORM_ZERO = 309,
    ABILITY_POISON_PUPPETEER = 310,
    ABILITIES_COUNT_GEN9,
    ABILITIES_COUNT = ABILITIES_COUNT_GEN9,
};
# 16 "include/pokemon.h" 2

# 1 "include/constants/trainers.h" 1




# 1 "include/constants/battle_frontier_trainers.h" 1
# 6 "include/constants/trainers.h" 2
# 288 "include/constants/trainers.h"
enum TrainerClassID
{
    TRAINER_CLASS_PKMN_TRAINER_1,
    TRAINER_CLASS_PKMN_TRAINER_2,
    TRAINER_CLASS_HIKER,
    TRAINER_CLASS_TEAM_AQUA,
    TRAINER_CLASS_PKMN_BREEDER,
    TRAINER_CLASS_COOLTRAINER,
    TRAINER_CLASS_BIRD_KEEPER,
    TRAINER_CLASS_COLLECTOR,
    TRAINER_CLASS_SWIMMER_M,
    TRAINER_CLASS_TEAM_MAGMA,
    TRAINER_CLASS_EXPERT,
    TRAINER_CLASS_AQUA_ADMIN,
    TRAINER_CLASS_BLACK_BELT,
    TRAINER_CLASS_AQUA_LEADER,
    TRAINER_CLASS_HEX_MANIAC,
    TRAINER_CLASS_AROMA_LADY,
    TRAINER_CLASS_RUIN_MANIAC,
    TRAINER_CLASS_INTERVIEWER,
    TRAINER_CLASS_TUBER_F,
    TRAINER_CLASS_TUBER_M,
    TRAINER_CLASS_LADY,
    TRAINER_CLASS_BEAUTY,
    TRAINER_CLASS_RICH_BOY,
    TRAINER_CLASS_POKEMANIAC,
    TRAINER_CLASS_GUITARIST,
    TRAINER_CLASS_KINDLER,
    TRAINER_CLASS_CAMPER,
    TRAINER_CLASS_PICNICKER,
    TRAINER_CLASS_BUG_MANIAC,
    TRAINER_CLASS_PSYCHIC,
    TRAINER_CLASS_GENTLEMAN,
    TRAINER_CLASS_ELITE_FOUR,
    TRAINER_CLASS_LEADER,
    TRAINER_CLASS_SCHOOL_KID,
    TRAINER_CLASS_SR_AND_JR,
    TRAINER_CLASS_WINSTRATE,
    TRAINER_CLASS_POKEFAN,
    TRAINER_CLASS_YOUNGSTER,
    TRAINER_CLASS_CHAMPION,
    TRAINER_CLASS_FISHERMAN,
    TRAINER_CLASS_TRIATHLETE,
    TRAINER_CLASS_DRAGON_TAMER,
    TRAINER_CLASS_NINJA_BOY,
    TRAINER_CLASS_BATTLE_GIRL,
    TRAINER_CLASS_PARASOL_LADY,
    TRAINER_CLASS_SWIMMER_F,
    TRAINER_CLASS_TWINS,
    TRAINER_CLASS_SAILOR,
    TRAINER_CLASS_COOLTRAINER_2,
    TRAINER_CLASS_MAGMA_ADMIN,
    TRAINER_CLASS_RIVAL,
    TRAINER_CLASS_BUG_CATCHER,
    TRAINER_CLASS_PKMN_RANGER,
    TRAINER_CLASS_MAGMA_LEADER,
    TRAINER_CLASS_LASS,
    TRAINER_CLASS_YOUNG_COUPLE,
    TRAINER_CLASS_OLD_COUPLE,
    TRAINER_CLASS_SIS_AND_BRO,
    TRAINER_CLASS_SALON_MAIDEN,
    TRAINER_CLASS_DOME_ACE,
    TRAINER_CLASS_PALACE_MAVEN,
    TRAINER_CLASS_ARENA_TYCOON,
    TRAINER_CLASS_FACTORY_HEAD,
    TRAINER_CLASS_PIKE_QUEEN,
    TRAINER_CLASS_PYRAMID_KING,
    TRAINER_CLASS_RS_PROTAG,
    TRAINER_CLASS_COUNT,
};
# 18 "include/pokemon.h" 2





enum MonData {
    MON_DATA_PERSONALITY,
    MON_DATA_STATUS,
    MON_DATA_OT_ID,
    MON_DATA_LANGUAGE,
    MON_DATA_SANITY_IS_BAD_EGG,
    MON_DATA_SANITY_HAS_SPECIES,
    MON_DATA_SANITY_IS_EGG,
    MON_DATA_OT_NAME,
    MON_DATA_MARKINGS,
    MON_DATA_CHECKSUM,
    MON_DATA_HP,
    MON_DATA_IS_SHINY,
    MON_DATA_HIDDEN_NATURE,
    MON_DATA_HP_LOST,
    MON_DATA_DAYS_SINCE_FORM_CHANGE,
    MON_DATA_ENCRYPT_SEPARATOR,
    MON_DATA_NICKNAME,
    MON_DATA_NICKNAME10,
    MON_DATA_SPECIES,
    MON_DATA_HELD_ITEM,
    MON_DATA_MOVE1,
    MON_DATA_MOVE2,
    MON_DATA_MOVE3,
    MON_DATA_MOVE4,
    MON_DATA_PP1,
    MON_DATA_PP2,
    MON_DATA_PP3,
    MON_DATA_PP4,
    MON_DATA_PP_BONUSES,
    MON_DATA_COOL,
    MON_DATA_BEAUTY,
    MON_DATA_CUTE,
    MON_DATA_EXP,
    MON_DATA_HP_EV,
    MON_DATA_ATK_EV,
    MON_DATA_DEF_EV,
    MON_DATA_SPEED_EV,
    MON_DATA_SPATK_EV,
    MON_DATA_SPDEF_EV,
    MON_DATA_FRIENDSHIP,
    MON_DATA_SMART,
    MON_DATA_POKERUS,
    MON_DATA_MET_LOCATION,
    MON_DATA_MET_LEVEL,
    MON_DATA_MET_GAME,
    MON_DATA_POKEBALL,
    MON_DATA_HP_IV,
    MON_DATA_ATK_IV,
    MON_DATA_DEF_IV,
    MON_DATA_SPEED_IV,
    MON_DATA_SPATK_IV,
    MON_DATA_SPDEF_IV,
    MON_DATA_IS_EGG,
    MON_DATA_ABILITY_NUM,
    MON_DATA_TOUGH,
    MON_DATA_SHEEN,
    MON_DATA_OT_GENDER,
    MON_DATA_COOL_RIBBON,
    MON_DATA_BEAUTY_RIBBON,
    MON_DATA_CUTE_RIBBON,
    MON_DATA_SMART_RIBBON,
    MON_DATA_TOUGH_RIBBON,
    MON_DATA_LEVEL,
    MON_DATA_MAX_HP,
    MON_DATA_ATK,
    MON_DATA_DEF,
    MON_DATA_SPEED,
    MON_DATA_SPATK,
    MON_DATA_SPDEF,
    MON_DATA_MAIL,
    MON_DATA_SPECIES_OR_EGG,
    MON_DATA_IVS,
    MON_DATA_CHAMPION_RIBBON,
    MON_DATA_WINNING_RIBBON,
    MON_DATA_VICTORY_RIBBON,
    MON_DATA_ARTIST_RIBBON,
    MON_DATA_EFFORT_RIBBON,
    MON_DATA_MARINE_RIBBON,
    MON_DATA_LAND_RIBBON,
    MON_DATA_SKY_RIBBON,
    MON_DATA_COUNTRY_RIBBON,
    MON_DATA_NATIONAL_RIBBON,
    MON_DATA_EARTH_RIBBON,
    MON_DATA_WORLD_RIBBON,
    MON_DATA_MODERN_FATEFUL_ENCOUNTER,
    MON_DATA_KNOWN_MOVES,
    MON_DATA_RIBBON_COUNT,
    MON_DATA_RIBBONS,
    MON_DATA_ATK2,
    MON_DATA_DEF2,
    MON_DATA_SPEED2,
    MON_DATA_SPATK2,
    MON_DATA_SPDEF2,
    MON_DATA_HYPER_TRAINED_HP,
    MON_DATA_HYPER_TRAINED_ATK,
    MON_DATA_HYPER_TRAINED_DEF,
    MON_DATA_HYPER_TRAINED_SPEED,
    MON_DATA_HYPER_TRAINED_SPATK,
    MON_DATA_HYPER_TRAINED_SPDEF,
    MON_DATA_IS_SHADOW,
    MON_DATA_DYNAMAX_LEVEL,
    MON_DATA_GIGANTAMAX_FACTOR,
    MON_DATA_TERA_TYPE,
    MON_DATA_EVOLUTION_TRACKER,
};

struct PokemonSubstruct0
{
    u16 species:11;
    enum Type teraType:5;
    u16 heldItem:10;
    u16 unused_02:6;
    u32 experience:21;
    u32 nickname11:8;
    u32 unused_04:3;
    u8 ppBonuses;
    u8 friendship;
    u16 pokeball:6;
    u16 nickname12:8;
    u16 unused_0A:2;
};

struct PokemonSubstruct1
{
    u16 move1:11;
    u16 evolutionTracker1:5;
    u16 move2:11;
    u16 evolutionTracker2:5;
    u16 move3:11;
    u16 unused_04:5;
    u16 move4:11;
    u16 unused_06:3;
    u16 hyperTrainedHP:1;
    u16 hyperTrainedAttack:1;
    u8 pp1:7;
    u8 hyperTrainedDefense:1;
    u8 pp2:7;
    u8 hyperTrainedSpeed:1;
    u8 pp3:7;
    u8 hyperTrainedSpAttack:1;
    u8 pp4:7;
    u8 hyperTrainedSpDefense:1;
};

struct PokemonSubstruct2
{
    u8 hpEV;
    u8 attackEV;
    u8 defenseEV;
    u8 speedEV;
    u8 spAttackEV;
    u8 spDefenseEV;
    u8 cool;
    u8 beauty;
    u8 cute;
    u8 smart;
    u8 tough;
    u8 sheen;
};

struct PokemonSubstruct3
{
    u8 pokerus;
    u8 metLocation;
    u16 metLevel:7;
    u16 metGame:4;
    u16 dynamaxLevel:4;
    u16 otGender:1;
    u32 hpIV:5;
    u32 attackIV:5;
    u32 defenseIV:5;
    u32 speedIV:5;
    u32 spAttackIV:5;
    u32 spDefenseIV:5;
    u32 isEgg:1;
    u32 gigantamaxFactor:1;
    u32 coolRibbon:3;
    u32 beautyRibbon:3;
    u32 cuteRibbon:3;
    u32 smartRibbon:3;
    u32 toughRibbon:3;
    u32 championRibbon:1;
    u32 winningRibbon:1;
    u32 victoryRibbon:1;
    u32 artistRibbon:1;
    u32 effortRibbon:1;
    u32 marineRibbon:1;
    u32 landRibbon:1;
    u32 skyRibbon:1;
    u32 countryRibbon:1;
    u32 nationalRibbon:1;
    u32 earthRibbon:1;
    u32 worldRibbon:1;
    u32 isShadow:1;
    u32 unused_0B:1;
    u32 abilityNum:2;







    u32 modernFatefulEncounter:1;
};
# 239 "include/pokemon.h"
enum SubstructType
{
    SUBSTRUCT_TYPE_0,
    SUBSTRUCT_TYPE_1,
    SUBSTRUCT_TYPE_2,
    SUBSTRUCT_TYPE_3,
};

union PokemonSubstruct
{
    struct PokemonSubstruct0 type0;
    struct PokemonSubstruct1 type1;
    struct PokemonSubstruct2 type2;
    struct PokemonSubstruct3 type3;
    u16 raw[(((sizeof(struct PokemonSubstruct0)) >= (((sizeof(struct PokemonSubstruct1)) >= (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))) ? (sizeof(struct PokemonSubstruct1)) : (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))))) ? (sizeof(struct PokemonSubstruct0)) : (((sizeof(struct PokemonSubstruct1)) >= (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))) ? (sizeof(struct PokemonSubstruct1)) : (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))))))) / 2];
};

struct BoxPokemon
{
    u32 personality;
    u32 otId;
    u8 nickname[((10) < (12) ? (10) : (12))];
    u8 language:3;
    u8 hiddenNatureModifier:5;
    u8 isBadEgg:1;
    u8 hasSpecies:1;
    u8 isEgg:1;
    u8 blockBoxRS:1;
    u8 daysSinceFormChange:3;
    u8 unused_13:1;
    u8 otName[7];
    u8 markings:4;
    u8 compressedStatus:4;
    u16 checksum;
    u16 hpLost:14;
    u16 shinyModifier:1;
    u16 unused_1E:1;

    union
    {
        u32 raw[((((sizeof(struct PokemonSubstruct0)) >= (((sizeof(struct PokemonSubstruct1)) >= (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))) ? (sizeof(struct PokemonSubstruct1)) : (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))))) ? (sizeof(struct PokemonSubstruct0)) : (((sizeof(struct PokemonSubstruct1)) >= (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))) ? (sizeof(struct PokemonSubstruct1)) : (((sizeof(struct PokemonSubstruct2)) >= (sizeof(struct PokemonSubstruct3)) ? (sizeof(struct PokemonSubstruct2)) : (sizeof(struct PokemonSubstruct3)))))))) * 4) / 4];
        union PokemonSubstruct substructs[4];
    } secure;
};

struct Pokemon
{
    struct BoxPokemon box;
    u32 status;
    u8 level;
    u8 mail;
    u16 hp;
    u16 maxHP;
    u16 attack;
    u16 defense;
    u16 speed;
    u16 spAttack;
    u16 spDefense;
};

struct MonSpritesGfxManager
{
    u32 numSprites:4;
    u32 numSprites2:4;
    u32 numFrames:8;
    u32 active:8;
    u32 dataSize:4;
    u32 mode:4;
    void *spriteBuffer;
    u8 **spritePointers;
    struct SpriteTemplate *templates;
    struct SpriteFrameImage *frameImages;
};

enum {
    MON_SPR_GFX_MODE_NORMAL,
    MON_SPR_GFX_MODE_BATTLE,
    MON_SPR_GFX_MODE_FULL_PARTY,
};

enum {
    MON_SPR_GFX_MANAGER_A,
    MON_SPR_GFX_MANAGER_B,
    MON_SPR_GFX_MANAGERS_COUNT
};




struct Volatiles
{
    u32 confusionTurns:((6) < (1 << 0) ? 0 : (6) < (1 << 1) ? 1 : (6) < (1 << 2) ? 2 : (6) < (1 << 3) ? 3 : (6) < (1 << 4) ? 4 : (6) < (1 << 5) ? 5 : (6) < (1 << 6) ? 6 : (6) < (1 << 7) ? 7 : (6) < (1 << 8) ? 8 : (6) < (1 << 9) ? 9 : (6) < (1 << 10) ? 10 : (6) < (1 << 11) ? 11 : (6) < (1 << 12) ? 12 : (6) < (1 << 13) ? 13 : (6) < (1 << 14) ? 14 : (6) < (1 << 15) ? 15 : (6) < (1 << 16) ? 16 : (6) < (1 << 17) ? 17 : (6) < (1 << 18) ? 18 : (6) < (1 << 19) ? 19 : (6) < (1 << 20) ? 20 : (6) < (1 << 21) ? 21 : (6) < (1 << 22) ? 22 : (6) < (1 << 23) ? 23 : (6) < (1 << 24) ? 24 : (6) < (1 << 25) ? 25 : (6) < (1 << 26) ? 26 : (6) < (1 << 27) ? 27 : (6) < (1 << 28) ? 28 : (6) < (1 << 29) ? 29 : (6) < (1 << 30) ? 30 : (6) < (1 << 31) ? 31 : 32); u32 flinched:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 uproarTurns:((5) < (1 << 0) ? 0 : (5) < (1 << 1) ? 1 : (5) < (1 << 2) ? 2 : (5) < (1 << 3) ? 3 : (5) < (1 << 4) ? 4 : (5) < (1 << 5) ? 5 : (5) < (1 << 6) ? 6 : (5) < (1 << 7) ? 7 : (5) < (1 << 8) ? 8 : (5) < (1 << 9) ? 9 : (5) < (1 << 10) ? 10 : (5) < (1 << 11) ? 11 : (5) < (1 << 12) ? 12 : (5) < (1 << 13) ? 13 : (5) < (1 << 14) ? 14 : (5) < (1 << 15) ? 15 : (5) < (1 << 16) ? 16 : (5) < (1 << 17) ? 17 : (5) < (1 << 18) ? 18 : (5) < (1 << 19) ? 19 : (5) < (1 << 20) ? 20 : (5) < (1 << 21) ? 21 : (5) < (1 << 22) ? 22 : (5) < (1 << 23) ? 23 : (5) < (1 << 24) ? 24 : (5) < (1 << 25) ? 25 : (5) < (1 << 26) ? 26 : (5) < (1 << 27) ? 27 : (5) < (1 << 28) ? 28 : (5) < (1 << 29) ? 29 : (5) < (1 << 30) ? 30 : (5) < (1 << 31) ? 31 : 32); u32 torment:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 bideTurns:((3) < (1 << 0) ? 0 : (3) < (1 << 1) ? 1 : (3) < (1 << 2) ? 2 : (3) < (1 << 3) ? 3 : (3) < (1 << 4) ? 4 : (3) < (1 << 5) ? 5 : (3) < (1 << 6) ? 6 : (3) < (1 << 7) ? 7 : (3) < (1 << 8) ? 8 : (3) < (1 << 9) ? 9 : (3) < (1 << 10) ? 10 : (3) < (1 << 11) ? 11 : (3) < (1 << 12) ? 12 : (3) < (1 << 13) ? 13 : (3) < (1 << 14) ? 14 : (3) < (1 << 15) ? 15 : (3) < (1 << 16) ? 16 : (3) < (1 << 17) ? 17 : (3) < (1 << 18) ? 18 : (3) < (1 << 19) ? 19 : (3) < (1 << 20) ? 20 : (3) < (1 << 21) ? 21 : (3) < (1 << 22) ? 22 : (3) < (1 << 23) ? 23 : (3) < (1 << 24) ? 24 : (3) < (1 << 25) ? 25 : (3) < (1 << 26) ? 26 : (3) < (1 << 27) ? 27 : (3) < (1 << 28) ? 28 : (3) < (1 << 29) ? 29 : (3) < (1 << 30) ? 30 : (3) < (1 << 31) ? 31 : 32); u32 lockConfusionTurns:((3) < (1 << 0) ? 0 : (3) < (1 << 1) ? 1 : (3) < (1 << 2) ? 2 : (3) < (1 << 3) ? 3 : (3) < (1 << 4) ? 4 : (3) < (1 << 5) ? 5 : (3) < (1 << 6) ? 6 : (3) < (1 << 7) ? 7 : (3) < (1 << 8) ? 8 : (3) < (1 << 9) ? 9 : (3) < (1 << 10) ? 10 : (3) < (1 << 11) ? 11 : (3) < (1 << 12) ? 12 : (3) < (1 << 13) ? 13 : (3) < (1 << 14) ? 14 : (3) < (1 << 15) ? 15 : (3) < (1 << 16) ? 16 : (3) < (1 << 17) ? 17 : (3) < (1 << 18) ? 18 : (3) < (1 << 19) ? 19 : (3) < (1 << 20) ? 20 : (3) < (1 << 21) ? 21 : (3) < (1 << 22) ? 22 : (3) < (1 << 23) ? 23 : (3) < (1 << 24) ? 24 : (3) < (1 << 25) ? 25 : (3) < (1 << 26) ? 26 : (3) < (1 << 27) ? 27 : (3) < (1 << 28) ? 28 : (3) < (1 << 29) ? 29 : (3) < (1 << 30) ? 30 : (3) < (1 << 31) ? 31 : 32); u32 multipleTurns:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 wrapped:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); enum BattlerId wrappedBy:(((0xFFFFFFFF >> (32 - 4))) < (1 << 0) ? 0 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 1) ? 1 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 2) ? 2 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 3) ? 3 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 4) ? 4 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 5) ? 5 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 6) ? 6 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 7) ? 7 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 8) ? 8 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 9) ? 9 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 10) ? 10 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 11) ? 11 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 12) ? 12 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 13) ? 13 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 14) ? 14 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 15) ? 15 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 16) ? 16 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 17) ? 17 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 18) ? 18 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 19) ? 19 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 20) ? 20 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 21) ? 21 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 22) ? 22 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 23) ? 23 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 24) ? 24 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 25) ? 25 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 26) ? 26 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 27) ? 27 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 28) ? 28 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 29) ? 29 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 30) ? 30 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 31) ? 31 : 32); u32 wrappedMove:((((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 0) ? 0 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 1) ? 1 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 2) ? 2 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 3) ? 3 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 4) ? 4 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 5) ? 5 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 6) ? 6 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 7) ? 7 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 8) ? 8 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 9) ? 9 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 10) ? 10 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 11) ? 11 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 12) ? 12 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 13) ? 13 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 14) ? 14 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 15) ? 15 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 16) ? 16 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 17) ? 17 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 18) ? 18 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 19) ? 19 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 20) ? 20 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 21) ? 21 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 22) ? 22 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 23) ? 23 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 24) ? 24 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 25) ? 25 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 26) ? 26 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 27) ? 27 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 28) ? 28 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 29) ? 29 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 30) ? 30 : (((((848 + 34) + 1) + 51) + 1) - 1) < (1 << 31) ? 31 : 32); u32 powder:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 padding:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); enum BattlerId infatuation:(((0xFFFFFFFF >> (32 - 4))) < (1 << 0) ? 0 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 1) ? 1 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 2) ? 2 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 3) ? 3 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 4) ? 4 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 5) ? 5 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 6) ? 6 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 7) ? 7 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 8) ? 8 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 9) ? 9 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 10) ? 10 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 11) ? 11 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 12) ? 12 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 13) ? 13 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 14) ? 14 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 15) ? 15 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 16) ? 16 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 17) ? 17 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 18) ? 18 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 19) ? 19 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 20) ? 20 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 21) ? 21 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 22) ? 22 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 23) ? 23 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 24) ? 24 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 25) ? 25 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 26) ? 26 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 27) ? 27 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 28) ? 28 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 29) ? 29 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 30) ? 30 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 31) ? 31 : 32); u32 defenseCurl:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 transformed:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 rage:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 substitute:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 destinyBond:((2) < (1 << 0) ? 0 : (2) < (1 << 1) ? 1 : (2) < (1 << 2) ? 2 : (2) < (1 << 3) ? 3 : (2) < (1 << 4) ? 4 : (2) < (1 << 5) ? 5 : (2) < (1 << 6) ? 6 : (2) < (1 << 7) ? 7 : (2) < (1 << 8) ? 8 : (2) < (1 << 9) ? 9 : (2) < (1 << 10) ? 10 : (2) < (1 << 11) ? 11 : (2) < (1 << 12) ? 12 : (2) < (1 << 13) ? 13 : (2) < (1 << 14) ? 14 : (2) < (1 << 15) ? 15 : (2) < (1 << 16) ? 16 : (2) < (1 << 17) ? 17 : (2) < (1 << 18) ? 18 : (2) < (1 << 19) ? 19 : (2) < (1 << 20) ? 20 : (2) < (1 << 21) ? 21 : (2) < (1 << 22) ? 22 : (2) < (1 << 23) ? 23 : (2) < (1 << 24) ? 24 : (2) < (1 << 25) ? 25 : (2) < (1 << 26) ? 26 : (2) < (1 << 27) ? 27 : (2) < (1 << 28) ? 28 : (2) < (1 << 29) ? 29 : (2) < (1 << 30) ? 30 : (2) < (1 << 31) ? 31 : 32); u32 escapePrevention:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 nightmare:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 cursed:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 foresight:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 dragonCheer:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 focusEnergy:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 semiInvulnerable:((SEMI_INVULNERABLE_COUNT - 1) < (1 << 0) ? 0 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 1) ? 1 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 2) ? 2 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 3) ? 3 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 4) ? 4 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 5) ? 5 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 6) ? 6 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 7) ? 7 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 8) ? 8 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 9) ? 9 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 10) ? 10 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 11) ? 11 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 12) ? 12 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 13) ? 13 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 14) ? 14 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 15) ? 15 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 16) ? 16 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 17) ? 17 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 18) ? 18 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 19) ? 19 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 20) ? 20 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 21) ? 21 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 22) ? 22 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 23) ? 23 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 24) ? 24 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 25) ? 25 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 26) ? 26 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 27) ? 27 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 28) ? 28 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 29) ? 29 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 30) ? 30 : (SEMI_INVULNERABLE_COUNT - 1) < (1 << 31) ? 31 : 32); u32 electrified:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 mudSport:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 waterSport:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 infiniteConfusion:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 saltCure:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 syrupBomb:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); enum BattlerId stickySyrupedBy:(((0xFFFFFFFF >> (32 - 4))) < (1 << 0) ? 0 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 1) ? 1 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 2) ? 2 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 3) ? 3 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 4) ? 4 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 5) ? 5 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 6) ? 6 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 7) ? 7 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 8) ? 8 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 9) ? 9 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 10) ? 10 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 11) ? 11 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 12) ? 12 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 13) ? 13 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 14) ? 14 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 15) ? 15 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 16) ? 16 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 17) ? 17 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 18) ? 18 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 19) ? 19 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 20) ? 20 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 21) ? 21 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 22) ? 22 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 23) ? 23 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 24) ? 24 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 25) ? 25 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 26) ? 26 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 27) ? 27 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 28) ? 28 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 29) ? 29 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 30) ? 30 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 31) ? 31 : 32); u32 glaiveRush:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); enum BattlerId leechSeed:(((0xFFFFFFFF >> (32 - 4))) < (1 << 0) ? 0 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 1) ? 1 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 2) ? 2 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 3) ? 3 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 4) ? 4 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 5) ? 5 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 6) ? 6 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 7) ? 7 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 8) ? 8 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 9) ? 9 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 10) ? 10 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 11) ? 11 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 12) ? 12 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 13) ? 13 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 14) ? 14 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 15) ? 15 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 16) ? 16 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 17) ? 17 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 18) ? 18 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 19) ? 19 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 20) ? 20 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 21) ? 21 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 22) ? 22 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 23) ? 23 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 24) ? 24 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 25) ? 25 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 26) ? 26 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 27) ? 27 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 28) ? 28 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 29) ? 29 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 30) ? 30 : ((0xFFFFFFFF >> (32 - 4))) < (1 << 31) ? 31 : 32); u32 lockOn:((2) < (1 << 0) ? 0 : (2) < (1 << 1) ? 1 : (2) < (1 << 2) ? 2 : (2) < (1 << 3) ? 3 : (2) < (1 << 4) ? 4 : (2) < (1 << 5) ? 5 : (2) < (1 << 6) ? 6 : (2) < (1 << 7) ? 7 : (2) < (1 << 8) ? 8 : (2) < (1 << 9) ? 9 : (2) < (1 << 10) ? 10 : (2) < (1 << 11) ? 11 : (2) < (1 << 12) ? 12 : (2) < (1 << 13) ? 13 : (2) < (1 << 14) ? 14 : (2) < (1 << 15) ? 15 : (2) < (1 << 16) ? 16 : (2) < (1 << 17) ? 17 : (2) < (1 << 18) ? 18 : (2) < (1 << 19) ? 19 : (2) < (1 << 20) ? 20 : (2) < (1 << 21) ? 21 : (2) < (1 << 22) ? 22 : (2) < (1 << 23) ? 23 : (2) < (1 << 24) ? 24 : (2) < (1 << 25) ? 25 : (2) < (1 << 26) ? 26 : (2) < (1 << 27) ? 27 : (2) < (1 << 28) ? 28 : (2) < (1 << 29) ? 29 : (2) < (1 << 30) ? 30 : (2) < (1 << 31) ? 31 : 32); u32 perishSong:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 minimize:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 charge:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 root:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 yawn:((2) < (1 << 0) ? 0 : (2) < (1 << 1) ? 1 : (2) < (1 << 2) ? 2 : (2) < (1 << 3) ? 3 : (2) < (1 << 4) ? 4 : (2) < (1 << 5) ? 5 : (2) < (1 << 6) ? 6 : (2) < (1 << 7) ? 7 : (2) < (1 << 8) ? 8 : (2) < (1 << 9) ? 9 : (2) < (1 << 10) ? 10 : (2) < (1 << 11) ? 11 : (2) < (1 << 12) ? 12 : (2) < (1 << 13) ? 13 : (2) < (1 << 14) ? 14 : (2) < (1 << 15) ? 15 : (2) < (1 << 16) ? 16 : (2) < (1 << 17) ? 17 : (2) < (1 << 18) ? 18 : (2) < (1 << 19) ? 19 : (2) < (1 << 20) ? 20 : (2) < (1 << 21) ? 21 : (2) < (1 << 22) ? 22 : (2) < (1 << 23) ? 23 : (2) < (1 << 24) ? 24 : (2) < (1 << 25) ? 25 : (2) < (1 << 26) ? 26 : (2) < (1 << 27) ? 27 : (2) < (1 << 28) ? 28 : (2) < (1 << 29) ? 29 : (2) < (1 << 30) ? 30 : (2) < (1 << 31) ? 31 : 32); u32 imprison:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 grudge:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 gastroAcid:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 embargo:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 smackDown:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 telekinesis:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 miracleEye:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 magnetRise:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 healBlock:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 aquaRing:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 laserFocus:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 powerTrick:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 noRetreat:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 vesselOfRuin:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 swordOfRuin:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 tabletsOfRuin:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32); u32 beadsOfRuin:((1) < (1 << 0) ? 0 : (1) < (1 << 1) ? 1 : (1) < (1 << 2) ? 2 : (1) < (1 << 3) ? 3 : (1) < (1 << 4) ? 4 : (1) < (1 << 5) ? 5 : (1) < (1 << 6) ? 6 : (1) < (1 << 7) ? 7 : (1) < (1 << 8) ? 8 : (1) < (1 << 9) ? 9 : (1) < (1 << 10) ? 10 : (1) < (1 << 11) ? 11 : (1) < (1 << 12) ? 12 : (1) < (1 << 13) ? 13 : (1) < (1 << 14) ? 14 : (1) < (1 << 15) ? 15 : (1) < (1 << 16) ? 16 : (1) < (1 << 17) ? 17 : (1) < (1 << 18) ? 18 : (1) < (1 << 19) ? 19 : (1) < (1 << 20) ? 20 : (1) < (1 << 21) ? 21 : (1) < (1 << 22) ? 22 : (1) < (1 << 23) ? 23 : (1) < (1 << 24) ? 24 : (1) < (1 << 25) ? 25 : (1) < (1 << 26) ? 26 : (1) < (1 << 27) ? 27 : (1) < (1 << 28) ? 28 : (1) < (1 << 29) ? 29 : (1) < (1 << 30) ? 30 : (1) < (1 << 31) ? 31 : 32);
# 355 "include/pokemon.h"
};

struct BattlePokemon
{
             u16 species;
             u16 attack;
             u16 defense;
             u16 speed;
             u16 spAttack;
             u16 spDefense;
             u16 moves[4];
             u32 hpIV:5;
             u32 attackIV:5;
             u32 defenseIV:5;
             u32 speedIV:5;
             u32 spAttackIV:5;
             u32 spDefenseIV:5;
             u32 abilityNum:2;
             s8 statStages[(NUM_STATS + 2)];
             enum Ability ability;
             enum Type types[3];
             u8 pp[4];
             u16 hp;
             u8 level;
             u8 friendship;
             u16 maxHP;
             u16 item;
             u8 nickname[12 + 1];
             u8 ppBonuses;
             u8 otName[7 + 1];
             u32 experience;
             u32 personality;
             u32 status1;
             struct Volatiles volatiles;
             u32 otId;
             u8 metLevel;
             bool8 isShiny;
};

struct EvolutionParam
{
    u16 condition;
    u16 arg1;
    u16 arg2;
    u16 arg3;
};

struct Evolution
{
    u16 method;
    u16 param;
    u16 targetSpecies;
    const struct EvolutionParam *params;
};

struct SpeciesInfo
{
    u8 baseHP;
    u8 baseAttack;
    u8 baseDefense;
    u8 baseSpeed;
    u8 baseSpAttack;
    u8 baseSpDefense;
    enum Type types[2];
    u8 catchRate;
    u8 forceTeraType;
    u16 expYield;
    u16 evYield_HP:2;
    u16 evYield_Attack:2;
    u16 evYield_Defense:2;
    u16 evYield_Speed:2;
    u16 evYield_SpAttack:2;
    u16 evYield_SpDefense:2;
    u16 padding2:4;
    u16 itemCommon;
    u16 itemRare;
    u8 genderRatio;
    u8 eggCycles;
    u8 friendship;
    u8 growthRate;
    u8 eggGroups[2];
    enum Ability abilities[(2 + 1)];
    u8 safariZoneFleeRate;


    u8 categoryName[13];
    u8 speciesName[12 + 1];
    enum PokemonCry cryId:16;
    enum NationalDexOrder natDexNum:16;
    u16 height;
    u16 weight;
    u16 pokemonScale;
    u16 pokemonOffset;
    u16 trainerScale;
    u16 trainerOffset;
    const u8 *description;
    enum BodyColor bodyColor:7;

    u8 noFlip:1;
    u8 frontAnimDelay;
    u8 frontAnimId;
    u8 backAnimId;
    const union AnimCmd *const *frontAnimFrames;
    const u32 *frontPic;
    const u32 *backPic;
    const u16 *palette;
    const u16 *shinyPalette;
    const u8 *iconSprite;

    const u32 *frontPicFemale;
    const u32 *backPicFemale;
    const u16 *paletteFemale;
    const u16 *shinyPaletteFemale;
    const u8 *iconSpriteFemale;


    const u8 *footprint;


    u8 frontPicSize;
    u8 frontPicYOffset;
    u8 backPicSize;
    u8 backPicYOffset;

    u8 frontPicSizeFemale;
    u8 backPicSizeFemale;

    u8 iconPalIndex:3;

    u8 iconPalIndexFemale:3;



    u8 pokemonJumpType:2;
    u8 enemyMonElevation;

    u32 isLegendary:1;
    u32 isMythical:1;
    u32 isUltraBeast:1;
    u32 isParadox:1;
    u32 isTotem:1;
    u32 isMegaEvolution:1;
    u32 isPrimalReversion:1;
    u32 isUltraBurst:1;
    u32 isGigantamax:1;
    u32 isTeraForm:1;
    u32 isAlolanForm:1;
    u32 isGalarianForm:1;
    u32 isHisuianForm:1;
    u32 isPaldeanForm:1;
    u32 cannotBeTraded:1;
    u32 perfectIVCount:3;
    u32 dexForceRequired:1;
    u32 tmIlliterate:1;
    u32 isFrontierBanned:1;
    u32 padding4:11;

    s8 enemyShadowXOffset;
    s8 enemyShadowYOffset;
    u16 enemyShadowSize:3;
    u16 suppressEnemyShadow:1;
    u16 padding5:12;

    const struct LevelUpMove *levelUpLearnset;
    const u16 *teachableLearnset;
    const u16 *eggMoveLearnset;
    const struct Evolution *evolutions;
    const u16 *formSpeciesIdTable;
    const struct FormChange *formChangeTable;

    struct ObjectEventGraphicsInfo overworldData;

    struct ObjectEventGraphicsInfo overworldDataFemale;


    const void* overworldPalette;
    const void* overworldShinyPalette;

    const void* overworldPaletteFemale;
    const void* overworldShinyPaletteFemale;



};

struct AbilityInfo
{
    u8 name[16 + 1];
    const u8 *description;
    s8 aiRating;
    u8 cantBeCopied:1;
    u8 cantBeSwapped:1;
    u8 cantBeTraced:1;
    u8 cantBeSuppressed:1;
    u8 cantBeOverwritten:1;
    u8 breakable:1;
    u8 failsOnImposter:1;
};

enum {
    AFFINE_NONE,
    AFFINE_TURN_UP,
    AFFINE_TURN_UP_AND_DOWN,
    AFFINE_TURN_DOWN,
    AFFINE_TURN_DOWN_SLOW,
    AFFINE_TURN_DOWN_SLIGHT,
    AFFINE_TURN_UP_HIGH,
    AFFINE_UNUSED_1,
    AFFINE_UNUSED_2,
    AFFINE_UNUSED_3,
    NUM_MON_AFFINES,
};
# 601 "include/pokemon.h"
struct NatureInfo
{
    const u8 *name;
    enum Stat statUp;
    enum Stat statDown;
    u8 backAnim;
    u8 pokeBlockAnim[2];
    u8 battlePalacePercents[4];
    u8 battlePalaceFlavorText;
    u8 battlePalaceSmokescreen;
    const u8 *natureGirlMessage;
};




struct SpindaSpot
{
    u8 x, y;
    u16 image[16];
};

struct LevelUpMove
{
    u16 move;
    u16 level;
};

struct FormChange
{
    u16 method;
    u16 targetSpecies;
    u16 param1;
    u16 param2;
    u16 param3;
};

enum FusionExtraMoveHandling
{
    FORGET_EXTRA_MOVES,
    SWAP_EXTRA_MOVES_KYUREM_WHITE,
    SWAP_EXTRA_MOVES_KYUREM_BLACK
};

struct Fusion
{
    u16 fusionStorageIndex;
    u16 itemId;
    u16 targetSpecies1;
    u16 targetSpecies2;
    u16 fusingIntoMon;
    u16 fusionMove;
    enum FusionExtraMoveHandling extraMoveHandling;
};

extern const struct Fusion *const gFusionTablePointers[(1549 + 1)];




extern const u16 gKyuremWhiteSwapMoveTable[][2];


extern const u16 gKyuremBlackSwapMoveTable[][2];
# 680 "include/pokemon.h"
extern u8 gPlayerPartyCount;
extern struct Pokemon gPlayerParty[6];
extern u8 gEnemyPartyCount;
extern struct Pokemon gEnemyParty[6];
extern struct SpriteTemplate gMultiuseSpriteTemplate;
extern u16 gFollowerSteps;
extern bool32 consumeItem;
extern u32 removeBagItem;
extern u32 removeBagItemCount;

extern const u16 gFacilityClassToPicIndex[];
extern const enum TrainerClassID gFacilityClassToTrainerClass[];
extern const struct SpeciesInfo gSpeciesInfo[];
extern const u32 gExperienceTables[][100 + 1];
extern const u8 gPPUpGetMask[];
extern const u8 gPPUpClearMask[];
extern const u8 gPPUpAddValues[];
extern const u8 gStatStageRatios[12 + 1][2];
extern const u16 gUnionRoomFacilityClasses[];
extern const struct SpriteTemplate gBattlerSpriteTemplates[];
extern const u32 sExpCandyExperienceTable[];
extern const struct AbilityInfo gAbilitiesInfo[];
extern const struct NatureInfo gNaturesInfo[];




void ZeroBoxMonData(struct BoxPokemon *boxMon);
void ZeroMonData(struct Pokemon *mon);
void ZeroPlayerPartyMons(void);
void ZeroEnemyPartyMons(void);
void CreateMon(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateBoxMon(struct BoxPokemon *boxMon, u16 species, u8 level, u8 fixedIV, u8 hasFixedPersonality, u32 fixedPersonality, u8 otIdType, u32 fixedOtId);
void CreateMonWithNature(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 nature);
void CreateMonWithGenderNatureLetter(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 gender, u8 nature, u8 unownLetter);
void CreateMaleMon(struct Pokemon *mon, u16 species, u8 level);
void CreateMonWithIVsPersonality(struct Pokemon *mon, u16 species, u8 level, u32 ivs, u32 personality);
void CreateMonWithIVsOTID(struct Pokemon *mon, u16 species, u8 level, u8 *ivs, u32 otId);
void CreateMonWithEVSpread(struct Pokemon *mon, u16 species, u8 level, u8 fixedIV, u8 evSpread);
void CreateBattleTowerMon(struct Pokemon *mon, struct BattleTowerPokemon *src);
void CreateBattleTowerMon_HandleLevel(struct Pokemon *mon, struct BattleTowerPokemon *src, bool8 lvl50);
void CreateApprenticeMon(struct Pokemon *mon, const struct Apprentice *src, u8 monId);
void CreateMonWithEVSpreadNatureOTID(struct Pokemon *mon, u16 species, u8 level, u8 nature, u8 fixedIV, u8 evSpread, u32 otId);
void ConvertPokemonToBattleTowerPokemon(struct Pokemon *mon, struct BattleTowerPokemon *dest);
bool8 ShouldIgnoreDeoxysForm(u8 caseId, u8 battler);
u16 GetUnionRoomTrainerPic(void);
enum TrainerClassID GetUnionRoomTrainerClass(void);
void CreateEnemyEventMon(void);
void CalculateMonStats(struct Pokemon *mon);
void BoxMonToMon(const struct BoxPokemon *src, struct Pokemon *dest);
u8 GetLevelFromMonExp(struct Pokemon *mon);
u8 GetLevelFromBoxMonExp(struct BoxPokemon *boxMon);
u16 GiveMoveToMon(struct Pokemon *mon, u16 move);
u16 GiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
u16 GiveMoveToBattleMon(struct BattlePokemon *mon, u16 move);
void SetMonMoveSlot(struct Pokemon *mon, u16 move, u8 slot);
void SetBattleMonMoveSlot(struct BattlePokemon *mon, u16 move, u8 slot);
void GiveMonInitialMoveset(struct Pokemon *mon);
void GiveBoxMonInitialMoveset(struct BoxPokemon *boxMon);
u16 MonTryLearningNewMoveAtLevel(struct Pokemon *mon, bool32 firstMove, u32 level);
u16 MonTryLearningNewMove(struct Pokemon *mon, bool8 firstMove);
void DeleteFirstMoveAndGiveMoveToMon(struct Pokemon *mon, u16 move);
void DeleteFirstMoveAndGiveMoveToBoxMon(struct BoxPokemon *boxMon, u16 move);
u8 CountAliveMonsInBattle(u8 caseId, u32 battler);
u8 GetDefaultMoveTarget(u8 battler);
u8 GetMonGender(struct Pokemon *mon);
u8 GetBoxMonGender(struct BoxPokemon *boxMon);
u8 GetGenderFromSpeciesAndPersonality(u16 species, u32 personality);
bool32 IsPersonalityFemale(u16 species, u32 personality);
u32 GetUnownSpeciesId(u32 personality);
void SetMultiuseSpriteTemplateToPokemon(u16 speciesTag, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainerBack(u16 trainerPicId, u8 battlerPosition);
void SetMultiuseSpriteTemplateToTrainerFront(u16 trainerPicId, u8 battlerPosition);
# 761 "include/pokemon.h"
u32 GetMonData3(struct Pokemon *mon, s32 field, u8 *data);
u32 GetMonData2(struct Pokemon *mon, s32 field);
u32 GetBoxMonData3(struct BoxPokemon *boxMon, s32 field, u8 *data);
u32 GetBoxMonData2(struct BoxPokemon *boxMon, s32 field);

void SetMonData(struct Pokemon *mon, s32 field, const void *dataArg);
void SetBoxMonData(struct BoxPokemon *boxMon, s32 field, const void *dataArg);
void CopyMon(void *dest, void *src, size_t size);
u8 GiveMonToPlayer(struct Pokemon *mon);
u8 CopyMonToPC(struct Pokemon *mon);
u8 CalculatePlayerPartyCount(void);
u8 CalculateEnemyPartyCount(void);
u8 CalculateEnemyPartyCountInSide(u32 battler);
u8 GetMonsStateToDoubles(void);
u8 GetMonsStateToDoubles_2(void);
enum Ability GetAbilityBySpecies(u16 species, u8 abilityNum);
enum Ability GetMonAbility(struct Pokemon *mon);
void CreateSecretBaseEnemyParty(struct SecretBase *secretBaseRecord);
u8 GetSecretBaseTrainerPicIndex(void);
enum TrainerClassID GetSecretBaseTrainerClass(void);
bool8 IsPlayerPartyAndPokemonStorageFull(void);
bool8 IsPokemonStorageFull(void);
const u8 *GetSpeciesName(u16 species);
const u8 *GetSpeciesCategory(u16 species);
const u8 *GetSpeciesPokedexDescription(u16 species);
u32 GetSpeciesHeight(u16 species);
u32 GetSpeciesWeight(u16 species);
enum Type GetSpeciesType(u16 species, u8 slot);
enum Ability GetSpeciesAbility(u16 species, u8 slot);
u32 GetSpeciesBaseHP(u16 species);
u32 GetSpeciesBaseAttack(u16 species);
u32 GetSpeciesBaseDefense(u16 species);
u32 GetSpeciesBaseSpAttack(u16 species);
u32 GetSpeciesBaseSpDefense(u16 species);
u32 GetSpeciesBaseSpeed(u16 species);
u32 GetSpeciesBaseStat(u16 species, u32 statIndex);
const struct LevelUpMove *GetSpeciesLevelUpLearnset(u16 species);
const u16 *GetSpeciesTeachableLearnset(u16 species);
const u16 *GetSpeciesEggMoves(u16 species);
const struct Evolution *GetSpeciesEvolutions(u16 species);
const u16 *GetSpeciesFormTable(u16 species);
const struct FormChange *GetSpeciesFormChanges(u16 species);
u8 CalculatePPWithBonus(u16 move, u8 ppBonuses, u8 moveIndex);
void RemoveMonPPBonus(struct Pokemon *mon, u8 moveIndex);
void RemoveBattleMonPPBonus(struct BattlePokemon *mon, u8 moveIndex);
void PokemonToBattleMon(struct Pokemon *src, struct BattlePokemon *dst);
void CopyPartyMonToBattleData(u32 battler, u32 partyIndex);
bool8 ExecuteTableBasedItemEffect(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex);
bool8 PokemonUseItemEffects(struct Pokemon *mon, u16 item, u8 partyIndex, u8 moveIndex, u8 usedByAI);
bool8 HealStatusConditions(struct Pokemon *mon, u32 healMask, u8 battler);
u8 GetItemEffectParamOffset(u32 battler, u16 itemId, u8 effectByte, u8 effectBit);
u8 *UseStatIncreaseItem(u16 itemId);
u8 GetNature(struct Pokemon *mon);
u8 GetNatureFromPersonality(u32 personality);
u32 GetGMaxTargetSpecies(u32 species);
bool32 DoesMonMeetAdditionalConditions(struct Pokemon *mon, const struct EvolutionParam *params, struct Pokemon *tradePartner, u32 partyId, bool32 *canStopEvo, enum EvoState evoState);
u32 GetEvolutionTargetSpecies(struct Pokemon *mon, enum EvolutionMode mode, u16 evolutionItem, struct Pokemon *tradePartner, bool32 *canStopEvo, enum EvoState evoState);
bool8 IsMonPastEvolutionLevel(struct Pokemon *mon);
u16 NationalPokedexNumToSpecies(enum NationalDexOrder nationalNum);
enum HoennDexOrder NationalToHoennOrder(enum NationalDexOrder nationalNum);
enum NationalDexOrder SpeciesToNationalPokedexNum(u16 species);
enum HoennDexOrder SpeciesToHoennPokedexNum(u16 species);
enum NationalDexOrder HoennToNationalOrder(enum HoennDexOrder hoennNum);
void DrawSpindaSpots(u32 personality, u8 *dest, bool32 isSecondFrame);
void EvolutionRenameMon(struct Pokemon *mon, u16 oldSpecies, u16 newSpecies);
u8 GetPlayerFlankId(void);
u16 GetLinkTrainerFlankId(u8 linkPlayerId);
s32 GetBattlerMultiplayerId(u16 id);
u8 GetTrainerEncounterMusicId(u16 trainerOpponentId);
u16 ModifyStatByNature(u8 nature, u16 stat, enum Stat statIndex);
void AdjustFriendship(struct Pokemon *mon, u8 event);
void MonGainEVs(struct Pokemon *mon, u16 defeatedSpecies);
u16 GetMonEVCount(struct Pokemon *mon);
void RandomlyGivePartyPokerus(struct Pokemon *party);
u8 CheckPartyPokerus(struct Pokemon *party, u8 selection);
u8 CheckPartyHasHadPokerus(struct Pokemon *party, u8 selection);
void UpdatePartyPokerusTime(u16 days);
void PartySpreadPokerus(struct Pokemon *party);
bool8 TryIncrementMonLevel(struct Pokemon *mon);
u8 CanLearnTeachableMove(u16 species, u16 move);
u8 GetRelearnerLevelUpMoves(struct Pokemon *mon, u16 *moves);
u8 GetRelearnerEggMoves(struct Pokemon *mon, u16 *moves);
u8 GetRelearnerTMMoves(struct Pokemon *mon, u16 *moves);
u8 GetRelearnerTutorMoves(struct Pokemon *mon, u16 *moves);
u8 GetNumberOfLevelUpMoves(struct Pokemon *mon);
u8 GetNumberOfEggMoves(struct Pokemon *mon);
u8 GetNumberOfTMMoves(struct Pokemon *mon);
u8 GetNumberOfTutorMoves(struct Pokemon *mon);
u8 GetLevelUpMovesBySpecies(u16 species, u16 *moves);
u16 SpeciesToPokedexNum(u16 species);
bool32 IsSpeciesInHoennDex(u16 species);
u16 GetBattleBGM(void);
void PlayBattleBGM(void);
void PlayMapChosenOrBattleBGM(u16 songId);
void CreateTask_PlayMapChosenOrBattleBGM(u16 songId);
const u16 *GetMonFrontSpritePal(struct Pokemon *mon);
const u16 *GetMonSpritePalFromSpeciesAndPersonality(u16 species, bool32 isShiny, u32 personality);
const u16 *GetMonSpritePalFromSpecies(u16 species, bool32 isShiny, bool32 isFemale);
bool32 IsMoveHM(u16 move);
bool32 CannotForgetMove(u16 move);
bool8 IsMonSpriteNotFlipped(u16 species);
s8 GetMonFlavorRelation(struct Pokemon *mon, u8 flavor);
s8 GetFlavorRelationByPersonality(u32 personality, u8 flavor);
bool8 IsTradedMon(struct Pokemon *mon);
bool8 IsOtherTrainer(u32 otId, u8 *otName);
void MonRestorePP(struct Pokemon *mon);
void BoxMonRestorePP(struct BoxPokemon *boxMon);
void SetMonPreventsSwitchingString(void);
void SetWildMonHeldItem(void);
bool8 IsMonShiny(struct Pokemon *mon);
const u8 *GetTrainerPartnerName(void);
void BattleAnimateFrontSprite(struct Sprite *sprite, u16 species, bool8 noCry, u8 panMode);
void DoMonFrontSpriteAnimation(struct Sprite *sprite, u16 species, bool8 noCry, u8 panModeAnimFlag);
void PokemonSummaryDoMonAnimation(struct Sprite *sprite, u16 species, bool8 oneFrame);
void StopPokemonAnimationDelayTask(void);
void BattleAnimateBackSprite(struct Sprite *sprite, u16 species);
u8 GetOpposingLinkMultiBattlerId(bool8 rightSide, u8 multiplayerId);
u16 FacilityClassToPicIndex(u16 facilityClass);
u16 PlayerGenderToFrontTrainerPicId(u8 playerGender);
void HandleSetPokedexFlag(enum NationalDexOrder nationalNum, u8 caseId, u32 personality);
void HandleSetPokedexFlagFromMon(struct Pokemon *mon, u32 caseId);
bool8 HasTwoFramesAnimation(u16 species);
struct MonSpritesGfxManager *CreateMonSpritesGfxManager(u8 managerId, u8 mode);
void DestroyMonSpritesGfxManager(u8 managerId);
u8 *MonSpritesGfxManager_GetSpritePtr(u8 managerId, u8 spriteNum);
u16 GetFormSpeciesId(u16 speciesId, u8 formId);
u8 GetFormIdFromFormSpeciesId(u16 formSpeciesId);
u32 GetFormChangeTargetSpecies(struct Pokemon *mon, enum FormChanges method, u32 arg);
u32 GetFormChangeTargetSpeciesBoxMon(struct BoxPokemon *boxMon, enum FormChanges method, u32 arg);
bool32 DoesSpeciesHaveFormChangeMethod(u16 species, enum FormChanges method);
u16 MonTryLearningNewMoveEvolution(struct Pokemon *mon, bool8 firstMove);
void RemoveIVIndexFromList(u8 *ivs, u8 selectedIv);
void TrySpecialOverworldEvo(void);
bool32 SpeciesHasGenderDifferences(u16 species);
bool32 TryFormChange(u32 monId, enum BattleSide side, enum FormChanges method);
void TryToSetBattleFormChangeMoves(struct Pokemon *mon, enum FormChanges method);
u32 GetMonFriendshipScore(struct Pokemon *pokemon);
u32 GetMonAffectionHearts(struct Pokemon *pokemon);
void UpdateMonPersonality(struct BoxPokemon *boxMon, u32 personality);
u8 CalculatePartyCount(struct Pokemon *party);
u16 SanitizeSpeciesId(u16 species);
bool32 IsSpeciesEnabled(u16 species);
enum PokemonCry GetCryIdBySpecies(u16 species);
u16 GetSpeciesPreEvolution(u16 species);
void HealPokemon(struct Pokemon *mon);
void HealBoxPokemon(struct BoxPokemon *boxMon);
void UpdateDaysPassedSinceFormChange(u16 days);
void TrySetDayLimitToFormChange(struct Pokemon *mon);
enum Type CheckDynamicMoveType(struct Pokemon *mon, u32 move, u32 battler, enum MonState state);
uq4_12_t GetDynamaxLevelHPMultiplier(u32 dynamaxLevel, bool32 inverseMultiplier);
u32 GetRegionalFormByRegion(u32 species, u32 region);
bool32 IsSpeciesForeignRegionalForm(u32 species, u32 currentRegion);
enum Type GetTeraTypeFromPersonality(struct Pokemon *mon);
bool8 ShouldSkipFriendshipChange(void);
struct Pokemon *GetSavedPlayerPartyMon(u32 index);
u8 *GetSavedPlayerPartyCount(void);
void SavePlayerPartyMon(u32 index, struct Pokemon *mon);
bool32 IsSpeciesOfType(u32 species, enum Type type);
# 680 "include/global.h" 2

struct WarpData
{
    s8 mapGroup;
    s8 mapNum;
    s8 warpId;

    s16 x, y;
};

struct ItemSlot
{
    u16 itemId;
    u16 quantity;
};

struct Pokeblock
{
    u8 color;
    u8 spicy;
    u8 dry;
    u8 sweet;
    u8 bitter;
    u8 sour;
    u8 feel;
};

struct Roamer
{
             u32 ivs;
             u32 personality;
             u16 species;
             u16 hp;
             u8 level;
             u8 statusA;
             u8 cool;
             u8 beauty;
             u8 cute;
             u8 smart;
             u8 tough;
             bool8 active;
             u8 statusB;
             bool8 shiny;
             u8 filler[0x6];
};

struct RamScriptData
{
    u8 magic;
    u8 mapGroup;
    u8 mapNum;
    u8 localId;
    u8 script[995];

};

struct RamScript
{
    u32 checksum;
    struct RamScriptData data;
};


struct DewfordTrend
{
    u16 trendiness:7;
    u16 maxTrendiness:7;
    u16 gainingTrendiness:1;

    u16 rand;
    u16 words[2];
};

struct MauvilleManCommon
{
    u8 id;
};

struct MauvilleManBard
{
             u8 id;

             u16 songLyrics[6];
             u16 newSongLyrics[6];
             u8 playerName[7 + 1];
             u8 filler_2DB6[0x3];
             u8 playerTrainerId[4];
             bool8 hasChangedSong;
             u8 language;

};

struct MauvilleManStoryteller
{
    u8 id;
    bool8 alreadyRecorded;
    u8 filler2[2];
    u8 gameStatIDs[4];
    u8 trainerNames[4][7];
    u8 statValues[4][4];
    u8 language[4];
};

struct MauvilleManGiddy
{
             u8 id;
             u8 taleCounter;
             u8 questionNum;

             u16 randomWords[10];
             u8 questionList[8];
             u8 language;

};

struct MauvilleManHipster
{
    u8 id;
    bool8 taughtWord;
    u8 language;
};

struct MauvilleOldManTrader
{
    u8 id;
    u8 decorations[4];
    u8 playerNames[4][11];
    u8 alreadyTraded;
    u8 language[4];
};

typedef union OldMan
{
    struct MauvilleManCommon common;
    struct MauvilleManBard bard;
    struct MauvilleManGiddy giddy;
    struct MauvilleManHipster hipster;
    struct MauvilleOldManTrader trader;
    struct MauvilleManStoryteller storyteller;
    u8 filler[0x40];
} OldMan;



struct LinkBattleRecord
{
    u8 name[7 + 1];
    u16 trainerId;
    u16 wins;
    u16 losses;
    u16 draws;
};

struct LinkBattleRecords
{
    struct LinkBattleRecord entries[5];
    u8 languages[5];

};

struct RecordMixingGiftData
{
    u8 unk0;
    u8 quantity;
    u16 itemId;
    u8 filler4[8];
};

struct RecordMixingGift
{
    int checksum;
    struct RecordMixingGiftData data;
};

struct ContestWinner
{
    u32 personality;
    u32 trainerId;
    u16 species;
    u8 contestCategory;
    u8 monName[10 + 1];
    u8 trainerName[7 + 1];
    u8 contestRank:7;
    bool8 isShiny:1;

};

struct Mail
{
             u16 words[9];
             u8 playerName[7 + 1];
             u8 trainerId[4];
             u16 species;
             u16 itemId;
};

struct DaycareMail
{
    struct Mail message;
    u8 otName[7 + 1];
    u8 monName[10 + 1];
    u8 gameLanguage:4;
    u8 monLanguage:4;
};

struct DaycareMon
{
    struct BoxPokemon mon;
    struct DaycareMail mail;
    u32 steps;
};

struct DayCare
{
    struct DaycareMon mons[2];
    u32 offspringPersonality;
    u32 stepCounter;
};

struct LilycoveLadyQuiz
{
              u8 id;
              u8 state;
              u16 question[9];
              u16 correctAnswer;
              u16 playerAnswer;
              u8 playerName[7 + 1];
              u16 playerTrainerId[4];
              u16 prize;
              bool8 waitingForChallenger;
              u8 questionId;
              u8 prevQuestionId;
              u8 language;
};

struct LilycoveLadyFavor
{
              u8 id;
              u8 state;
              bool8 likedItem;
              u8 numItemsGiven;
              u8 playerName[7 + 1];
              u8 favorId;

              u16 itemId;
              u16 bestItem;
              u8 language;

};

struct LilycoveLadyContest
{
              u8 id;
              bool8 givenPokeblock;
              u8 numGoodPokeblocksGiven;
              u8 numOtherPokeblocksGiven;
              u8 playerName[7 + 1];
              u8 maxSheen;
              u8 category;
              u8 language;
};

typedef union
{
    struct LilycoveLadyQuiz quiz;
    struct LilycoveLadyFavor favor;
    struct LilycoveLadyContest contest;
    u8 id;
    u8 filler[0x40];
} LilycoveLady;

struct WaldaPhrase
{
    u16 colors[2];
    u8 text[16];
    u8 iconId;
    u8 patternId;
    bool8 patternUnlocked;

};

struct TrainerNameRecord
{
    u32 trainerId;
    u8 __attribute__((aligned(2))) trainerName[7 + 1];
};

struct TrainerHillSave
{
               u32 timer;
               u32 bestTime;
               u8 unk_3D6C;
               u8 unused;
               u16 receivedPrize:1;
               u16 checkedFinalTime:1;
               u16 spokeToOwner:1;
               u16 hasLost:1;
               u16 maybeECardScanDuringChallenge:1;
               u16 field_3D6E_0f:1;
               u16 mode:2;

};

struct WonderNewsMetadata
{
    u8 newsType:2;
    u8 sentRewardCounter:3;
    u8 rewardCounter:3;
    u8 berry;

};

struct WonderNews
{
    u16 id;
    u8 sendType;
    u8 bgType;
    u8 titleText[40];
    u8 bodyText[10][40];
};

struct WonderCard
{
    u16 flagId;
    u16 iconSpecies;
    u32 idNumber;
    u8 type:2;
    u8 bgType:4;
    u8 sendType:2;
    u8 maxStamps;
    u8 titleText[40];
    u8 subtitleText[40];
    u8 bodyText[4][40];
    u8 footerLine1Text[40];
    u8 footerLine2Text[40];

};

struct WonderCardMetadata
{
    u16 battlesWon;
    u16 battlesLost;
    u16 numTrades;
    u16 iconSpecies;
    u16 stampData[2][7];
};

struct MysteryGiftSave
{
    u32 newsCrc;
    struct WonderNews news;
    u32 cardCrc;
    struct WonderCard card;
    u32 cardMetadataCrc;
    struct WonderCardMetadata cardMetadata;
    u16 questionnaireWords[4];
    struct WonderNewsMetadata newsMetadata;
    u32 trainerIds[2][5];
};



struct ExternalEventData
{
    u8 unknownExternalDataFields1[7];
    u32 unknownExternalDataFields2:8;
    u32 currentPokeCoupons:24;
    u32 gotGoldPokeCouponTitleReward:1;
    u32 gotSilverPokeCouponTitleReward:1;
    u32 gotBronzePokeCouponTitleReward:1;
    u32 receivedAgetoCelebi:1;
    u32 unknownExternalDataFields3:4;
    u32 totalEarnedPokeCoupons:24;
    u8 unknownExternalDataFields4[5];
} __attribute__((packed));



struct ExternalEventFlags
{
    u8 usedBoxRS:1;
    u8 boxRSEggsUnlocked:2;

    u8 unknownFlag1;
    u8 receivedGCNJirachi;
    u8 unknownFlag3;
    u8 unknownFlag4;
    u8 unknownFlag5;
    u8 unknownFlag6;
    u8 unknownFlag7;
    u8 unknownFlag8;
    u8 unknownFlag9;
    u8 unknownFlag10;
    u8 unknownFlag11;
    u8 unknownFlag12;
    u8 unknownFlag13;
    u8 unknownFlag14;
    u8 unknownFlag15;
    u8 unknownFlag16;
    u8 unknownFlag17;
    u8 unknownFlag18;
    u8 unknownFlag19;
    u8 unknownFlag20;

} __attribute__((packed));

struct Bag
{
    struct ItemSlot items[30];
    struct ItemSlot keyItems[30];
    struct ItemSlot pokeBalls[16];
    struct ItemSlot TMsHMs[64];
    struct ItemSlot berries[46];
};

struct SaveBlock1
{
             struct Coords16 pos;
             struct WarpData location;
             struct WarpData continueGameWarp;
             struct WarpData dynamicWarp;
             struct WarpData lastHealLocation;
             struct WarpData escapeWarp;
             u16 savedMusic;
             u8 weather;
             u8 weatherCycleStage;
             u8 flashLevel;

             u16 mapLayoutId;
             u16 mapView[0x100];
              u8 playerPartyCount;

              struct Pokemon playerParty[6];
              u32 money;
              u16 coins;
              u16 registeredItemCompat;
              struct ItemSlot pcItems[50];

              struct Bag bag;
              struct Pokeblock pokeblocks[40];



              u16 berryBlenderRecords[3];
              u8 unused_9C2[6];

              u16 trainerRematchStepCounter;
              u8 trainerRematches[92];



              u16 registeredItems[4];

              struct ObjectEvent objectEvents[16];
              struct ObjectEventTemplate objectEventTemplates[64];
               u8 flags[((((((((((0x500 + 864 - 1) + 1) + 0xBF) + (8 - (((0x500 + 864 - 1) + 1) + 0xBF) % 8)) + 0x3F) + (7 - (((((0x500 + 864 - 1) + 1) + 0xBF) + (8 - (((0x500 + 864 - 1) + 1) + 0xBF) % 8)) + 0x3F) % 8)) + 1)) / (8)) + ((((((((((0x500 + 864 - 1) + 1) + 0xBF) + (8 - (((0x500 + 864 - 1) + 1) + 0xBF) % 8)) + 0x3F) + (7 - (((((0x500 + 864 - 1) + 1) + 0xBF) + (8 - (((0x500 + 864 - 1) + 1) + 0xBF) % 8)) + 0x3F) % 8)) + 1)) % (8)) ? 1 : 0))];
               u16 vars[(0x40FF - 0x4000 + 1)];
               u32 gameStats[64];
               struct BerryTree berryTrees[128];
               struct SecretBase secretBases[20];
               u8 playerRoomDecorations[12];
               u8 playerRoomDecorationPositions[12];
               u8 decorationDesks[10];
               u8 decorationChairs[10];
               u8 decorationPlants[10];
               u8 decorationOrnaments[30];
               u8 decorationMats[30];
               u8 decorationPosters[10];
               u8 decorationDolls[40];
               u8 decorationCushions[10];
               TVShow tvShows[(5 + 20)];

               PokeNews pokeNews[16];
               u16 outbreakPokemonSpecies;
               u8 outbreakLocationMapNum;
               u8 outbreakLocationMapGroup;
               u8 outbreakPokemonLevel;
               u8 outbreakUnused1;
               u16 outbreakUnused2;
               u16 outbreakPokemonMoves[4];
               u8 outbreakUnused3;
               u8 outbreakPokemonProbability;
               u16 outbreakDaysLeft;
               struct GabbyAndTyData gabbyAndTyData;
               u16 easyChatProfile[6];
               u16 easyChatBattleStart[6];
               u16 easyChatBattleWon[6];
               u16 easyChatBattleLost[6];
               struct Mail mail[(10 + 6)];
               u8 unlockedTrendySayings[(((33) / (8)) + (((33) % (8)) ? 1 : 0))];

               OldMan oldMan;
               struct DewfordTrend dewfordTrends[5];
               struct ContestWinner contestWinners[13];
               struct DayCare daycare;



               u8 giftRibbons[11];
               struct ExternalEventData externalEventData;
               struct ExternalEventFlags externalEventFlags;
               struct Roamer roamer[1];






               u8 dexSeen[((((NATIONAL_DEX_PECHARUNT + 1)) / (8)) + ((((NATIONAL_DEX_PECHARUNT + 1)) % (8)) ? 1 : 0))];
               u8 dexCaught[((((NATIONAL_DEX_PECHARUNT + 1)) / (8)) + ((((NATIONAL_DEX_PECHARUNT + 1)) % (8)) ? 1 : 0))];






               struct RecordMixingGift recordMixingGift;
               LilycoveLady lilycoveLady;
               struct TrainerNameRecord trainerNameRecords[20];






               struct WaldaPhrase waldaPhrase;

};

extern struct SaveBlock1 *gSaveBlock1Ptr;

struct MapPosition
{
    s16 x;
    s16 y;
    s8 elevation;
};
# 2 "src/map_name_popup.c" 2
# 1 "include/battle_pyramid.h" 1



# 1 "include/constants/battle_pyramid.h" 1
# 5 "include/battle_pyramid.h" 2

void CallBattlePyramidFunction(void);
u16 LocalIdToPyramidTrainerId(u8 localId);
bool8 GetBattlePyramidTrainerFlag(u8 eventId);
void MarkApproachingPyramidTrainersAsBattled(void);
void GenerateBattlePyramidWildMon(void);
u8 GetPyramidRunMultiplier(void);
u8 CurrentBattlePyramidLocation(void);
bool8 InBattlePyramid_(void);
void PausePyramidChallenge(void);
void SoftResetInBattlePyramid(void);
void CopyPyramidTrainerSpeechBefore(u16 trainerId);
void CopyPyramidTrainerWinSpeech(u16 trainerId);
void CopyPyramidTrainerLoseSpeech(u16 trainerId);
u8 GetTrainerEncounterMusicIdInBattlePyramid(u16 trainerId);
void GenerateBattlePyramidFloorLayout(u16 *backupMapData, bool8 setPlayerPosition);
void LoadBattlePyramidObjectEventTemplates(void);
void LoadBattlePyramidFloorObjectEventScripts(void);
u8 GetNumBattlePyramidObjectEvents(void);
u16 GetBattlePyramidPickupItemId(void);
# 3 "src/map_name_popup.c" 2
# 1 "include/bg.h" 1



enum
{
    BG_ATTR_CHARBASEINDEX = 1,
    BG_ATTR_MAPBASEINDEX,
    BG_ATTR_SCREENSIZE,
    BG_ATTR_PALETTEMODE,
    BG_ATTR_MOSAIC,
    BG_ATTR_WRAPAROUND,
    BG_ATTR_PRIORITY,
    BG_ATTR_METRIC,
    BG_ATTR_TYPE,
    BG_ATTR_BASETILE,
};

enum {
    BG_TYPE_NORMAL,
    BG_TYPE_AFFINE,
    BG_TYPE_NONE = 0xFFFF
};


enum {
    BG_COORD_SET,
    BG_COORD_ADD,
    BG_COORD_SUB,
};


enum {
    BG_MOSAIC_SET_HV,
    BG_MOSAIC_SET_H,
    BG_MOSAIC_ADD_H,
    BG_MOSAIC_SUB_H,
    BG_MOSAIC_SET_V,
    BG_MOSAIC_ADD_V,
    BG_MOSAIC_SUB_V,
};

struct BgTemplate
{
    u16 bg:2;
    u16 charBaseIndex:2;
    u16 mapBaseIndex:5;
    u16 screenSize:2;
    u16 paletteMode:1;
    u16 priority:2;
    u16 baseTile:10;
};

void ResetBgs(void);
u32 GetBgMode(void);
void ResetBgControlStructs(void);
void Unused_ResetBgControlStruct(u32 bg);
u8 LoadBgVram(u32 bg, const void *src, u16 size, u16 destOffset, u32 mode);
void SetTextModeAndHideBgs(void);
bool32 IsInvalidBg(u32 bg);
int BgTileAllocOp(int bg, int offset, int count, int mode);
void ResetBgsAndClearDma3BusyFlags(u32 leftoverFireRedLeafGreenVariable);
void InitBgsFromTemplates(u32 bgMode, const struct BgTemplate *templates, u8 numTemplates);
void InitBgFromTemplate(const struct BgTemplate *template);
void SetBgMode(u32 bgMode);
u16 LoadBgTiles(u32 bg, const void *src, u16 size, u16 destOffset);
u16 LoadBgTilemap(u32 bg, const void *src, u16 size, u16 destOffset);
u16 Unused_LoadBgPalette(u32 bg, const void *src, u16 size, u16 destOffset);
bool32 IsDma3ManagerBusyWithBgCopy(void);
void ShowBg(u32 bg);
void HideBg(u32 bg);
void SetBgAttribute(u32 bg, u32 attributeId, u8 value);
u16 GetBgAttribute(u32 bg, u32 attributeId);
s32 ChangeBgX(u32 bg, s32 value, u8 op);
s32 GetBgX(u32 bg);
s32 ChangeBgY(u32 bg, s32 value, u8 op);
s32 ChangeBgY_ScreenOff(u32 bg, s32 value, u8 op);
s32 GetBgY(u32 bg);
void SetBgAffine(u32 bg, s32 srcCenterX, s32 srcCenterY, s16 dispCenterX, s16 dispCenterY, s16 scaleX, s16 scaleY, u16 rotationAngle);
u8 Unused_AdjustBgMosaic(u8 val, u32 mode);
void SetBgTilemapBuffer(u32 bg, void *tilemap);
void UnsetBgTilemapBuffer(u32 bg);
void *GetBgTilemapBuffer(u32 bg);
void CopyToBgTilemapBuffer(u32 bg, const void *src, u32 mode, u32 destOffset);
void DecompressAndCopyToBgTilemapBuffer(u32 bg, const u32 *src, u32 mode, u32 destOffset);
void CopyBgTilemapBufferToVram(u32 bg);
void CopyToBgTilemapBufferRect(u32 bg, const void *src, u8 destX, u8 destY, u8 width, u8 height);
void CopyToBgTilemapBufferRect_ChangePalette(u32 bg, const void *src, u8 destX, u8 destY, u8 rectWidth, u8 rectHeight, u8 palette);
void CopyRectToBgTilemapBufferRect(u32 bg, const void *src, u8 srcX, u8 srcY, u8 srcWidth, u8 srcHeight, u8 destX, u8 destY, u8 rectWidth, u8 rectHeight, u8 palette1, s16 tileOffset, s16 palette2);
void FillBgTilemapBufferRect_Palette0(u32 bg, u16 tileNum, u8 x, u8 y, u8 width, u8 height);
void FillBgTilemapBufferRect(u32 bg, u16 tileNum, u8 x, u8 y, u8 width, u8 height, u8 palette);
void WriteSequenceToBgTilemapBuffer(u32 bg, u16 firstTileNum, u8 x, u8 y, u8 width, u8 height, u8 paletteSlot, s16 tileNumDelta);
u16 GetBgMetricTextMode(u32 bg, u32 whichMetric);
u32 GetBgMetricAffineMode(u32 bg, u32 whichMetric);
u32 GetTileMapIndexFromCoords(s32 x, s32 y, s32 screenSize, u32 screenWidth, u32 screenHeight);
void CopyTileMapEntry(const u16 *src, u16 *dest, s32 palette1, s32 tileOffset, s32 palette2);
bool32 IsTileMapOutsideWram(u32 bg);
# 4 "src/map_name_popup.c" 2
# 1 "include/event_data.h" 1



void InitEventData(void);
void ClearTempFieldEventData(void);
void ClearDailyFlags(void);
void DisableNationalPokedex(void);
void EnableNationalPokedex(void);
bool32 IsNationalPokedexEnabled(void);
void DisableMysteryEvent(void);
void EnableMysteryEvent(void);
bool32 IsMysteryEventEnabled(void);
void DisableMysteryGift(void);
void EnableMysteryGift(void);
bool32 IsMysteryGiftEnabled(void);
void ClearMysteryGiftFlags(void);
void ClearMysteryGiftVars(void);
void DisableResetRTC(void);
void EnableResetRTC(void);
bool32 CanResetRTC(void);
u16 *GetVarPointer(u16 id);
u16 VarGet(u16 id);
u16 VarGetIfExist(u16 id);
bool8 VarSet(u16 id, u16 value);
u16 VarGetObjectEventGraphicsId(u8 id);
u8 *GetFlagPointer(u16 id);
u8 FlagSet(u16 id);
u8 FlagToggle(u16 id);
u8 FlagClear(u16 id);
bool8 FlagGet(u16 id);

extern u16 gSpecialVar_0x8000;
extern u16 gSpecialVar_0x8001;
extern u16 gSpecialVar_0x8002;
extern u16 gSpecialVar_0x8003;
extern u16 gSpecialVar_0x8004;
extern u16 gSpecialVar_0x8005;
extern u16 gSpecialVar_0x8006;
extern u16 gSpecialVar_0x8007;
extern u16 gSpecialVar_0x8008;
extern u16 gSpecialVar_0x8009;
extern u16 gSpecialVar_0x800A;
extern u16 gSpecialVar_0x800B;
extern u16 gSpecialVar_Result;
extern u16 gSpecialVar_LastTalked;
extern u16 gSpecialVar_Facing;
extern u16 gSpecialVar_MonBoxId;
extern u16 gSpecialVar_MonBoxPos;
extern u16 gSpecialVar_Unused_0x8014;

extern const u16 gBadgeFlags[(1 + (((0x500 + 864 - 1) + 1) + 0xE) - (((0x500 + 864 - 1) + 1) + 0x7))];
# 5 "src/map_name_popup.c" 2
# 1 "include/field_weather.h" 1




# 1 "include/constants/field_weather.h" 1






enum ColorMapType
{
    COLOR_MAP_NONE,
    COLOR_MAP_DARK_CONTRAST,
    COLOR_MAP_CONTRAST,
};
# 6 "include/field_weather.h" 2


enum {
    GFXTAG_CLOUD = 0x1200,
    GFXTAG_FOG_H,
    GFXTAG_ASH,
    GFXTAG_FOG_D,
    GFXTAG_SANDSTORM,
    GFXTAG_BUBBLE,
    GFXTAG_RAIN,
};
enum {
    PALTAG_WEATHER = 0x1200,
    PALTAG_WEATHER_2
};



struct Weather
{
    union
    {
        struct
        {
            struct Sprite *rainSprites[24];
            struct Sprite *snowflakeSprites[101];
            struct Sprite *cloudSprites[3];
        } s1;
        struct
        {
            struct Sprite *fogHSprites[20];
            struct Sprite *ashSprites[20];
            struct Sprite *fogDSprites[20];
            struct Sprite *sandstormSprites1[20];
            struct Sprite *sandstormSprites2[5];
        } s2;
    } sprites;
    s8 colorMapIndex;
    s8 targetColorMapIndex;
    u8 colorMapStepDelay;
    u8 colorMapStepCounter;
    u16 fadeDestColor:15;
    u16 noShadows:1;
    u8 palProcessingState;
    u8 fadeScreenCounter;
    bool8 readyForInit;
    u8 taskId;
    u8 fadeInFirstFrame;
    u8 fadeInTimer;
    u16 initStep;
    u16 finishStep;
    u8 currWeather;
    u8 nextWeather;
    u8 weatherGfxLoaded;
    bool8 weatherChangeComplete;
    u8 weatherPicSpritePalIndex;
    u8 contrastColorMapSpritePalIndex;

    u16 rainSpriteVisibleCounter;
    u8 curRainSpriteIndex;
    u8 targetRainSpriteCount;
    u8 rainSpriteCount;
    u8 rainSpriteVisibleDelay;
    u8 isDownpour;
    u8 rainStrength;
    u8 cloudSpritesCreated;

    u16 snowflakeVisibleCounter;
    u16 snowflakeTimer;
    u8 snowflakeSpriteCount;
    u8 targetSnowflakeSpriteCount;

    u16 thunderTimer;
    u16 thunderSETimer;
    bool8 thunderAllowEnd;
    bool8 thunderLongBolt;
    u8 thunderShortBolts;
    bool8 thunderEnqueued;

    u16 fogHScrollPosX;
    u16 fogHScrollCounter;
    u16 fogHScrollOffset;
    u8 lightenedFogSpritePals[6];
    u8 lightenedFogSpritePalsCount;
    u8 fogHSpritesCreated;

    u16 ashBaseSpritesX;
    u16 ashUnused;
    u8 ashSpritesCreated;

    u32 sandstormXOffset;
    u32 sandstormYOffset;
    u16 sandstormUnused;
    u16 sandstormBaseSpritesX;
    u16 sandstormPosY;
    u16 sandstormWaveIndex;
    u16 sandstormWaveCounter;
    u8 sandstormSpritesCreated;
    u8 sandstormSwirlSpritesCreated;

    u16 fogDBaseSpritesX;
    u16 fogDPosY;
    u16 fogDScrollXCounter;
    u16 fogDScrollYCounter;
    u16 fogDXOffset;
    u16 fogDYOffset;
    u8 fogDSpritesCreated;

    u16 bubblesDelayCounter;
    u16 bubblesDelayIndex;
    u16 bubblesCoordsIndex;
    u16 bubblesSpriteCount;
    u8 bubblesSpritesCreated;

    u16 currBlendEVA;
    u16 currBlendEVB;
    u16 targetBlendEVA;
    u16 targetBlendEVB;
    u8 blendUpdateCounter;
    u8 blendFrameCounter;
    u8 blendDelay;

    s16 droughtBrightnessStage;
    s16 droughtLastBrightnessStage;
    s16 droughtTimer;
    s16 droughtState;
    u8 loadDroughtPalsIndex;
    u8 loadDroughtPalsOffset;
};


extern struct Weather gWeather;
extern struct Weather *const gWeatherPtr;
extern const u16 gFogPalette[];


extern const u8 gWeatherFogHorizontalTiles[];

void StartWeather(void);
void SetNextWeather(u8 weather);
void SetCurrentAndNextWeather(u8 weather);
void SetCurrentAndNextWeatherNoDelay(u8 weather);
void ApplyWeatherColorMapIfIdle(s8 colorMapIndex);
void ApplyWeatherColorMapIfIdle_Gradual(u8 colorMapIndex, u8 targetColorMapIndex, u8 colorMapStepDelay);
void FadeScreen(u8 mode, s8 delay);
void FadeScreenHardware(u32 mode, s32 delay);
bool8 IsWeatherNotFadingIn(void);
void UpdateSpritePaletteWithWeather(u8 spritePaletteIndex, bool8 allowFog);
void ApplyWeatherColorMapToPals(u8 startPalIndex, u8 numPalettes);
void LoadCustomWeatherSpritePalette(const u16 *palette);
void ResetDroughtWeatherPaletteLoading(void);
bool8 LoadDroughtWeatherPalettes(void);
void DroughtStateInit(void);
void DroughtStateRun(void);
void Weather_SetBlendCoeffs(u8 eva, u8 evb);
void Weather_SetTargetBlendCoeffs(u8 eva, u8 evb, int delay);
bool8 Weather_UpdateBlend(void);
u8 GetCurrentWeather(void);
void SetRainStrengthFromSoundEffect(u16 soundEffect);
void PlayRainStoppingSoundEffect(void);
u8 IsWeatherChangeComplete(void);
void SetWeatherScreenFadeOut(void);
void SetWeatherPalStateIdle(void);
const u8 *SetPaletteColorMapType(u8 paletteIndex, enum ColorMapType colorMapType);
void PreservePaletteInWeather(u8 preservedPalIndex);
void ResetPaletteColorMapType(u8 paletteIndex);
void ResetPreservedPalettesInWeather(void);
bool32 IsWeatherAlphaBlend(void);


void Clouds_InitVars(void);
void Clouds_Main(void);
void Clouds_InitAll(void);
bool8 Clouds_Finish(void);
void Sunny_InitVars(void);
void Sunny_Main(void);
void Sunny_InitAll(void);
bool8 Sunny_Finish(void);
void Rain_InitVars(void);
void Rain_Main(void);
void Rain_InitAll(void);
bool8 Rain_Finish(void);
void Snow_InitVars(void);
void Snow_Main(void);
void Snow_InitAll(void);
bool8 Snow_Finish(void);
void Thunderstorm_InitVars(void);
void Thunderstorm_Main(void);
void Thunderstorm_InitAll(void);
bool8 Thunderstorm_Finish(void);
void FogHorizontal_InitVars(void);
u8 UpdateShadowColor(u16 color);
void FogHorizontal_Main(void);
void FogHorizontal_InitAll(void);
bool8 FogHorizontal_Finish(void);
void Ash_InitVars(void);
void Ash_Main(void);
void Ash_InitAll(void);
bool8 Ash_Finish(void);
void Sandstorm_InitVars(void);
void Sandstorm_Main(void);
void Sandstorm_InitAll(void);
bool8 Sandstorm_Finish(void);
void FogDiagonal_InitVars(void);
void FogDiagonal_Main(void);
void FogDiagonal_InitAll(void);
bool8 FogDiagonal_Finish(void);
void Shade_InitVars(void);
void Shade_Main(void);
void Shade_InitAll(void);
bool8 Shade_Finish(void);
void Drought_InitVars(void);
void Drought_Main(void);
void Drought_InitAll(void);
bool8 Drought_Finish(void);
void Downpour_InitVars(void);
void Downpour_InitAll(void);
void Bubbles_InitVars(void);
void Bubbles_Main(void);
void Bubbles_InitAll(void);
bool8 Bubbles_Finish(void);

u8 GetSavedWeather(void);
void SetSavedWeather(u32 weather);
void SetSavedWeatherFromCurrMapHeader(void);
void SetWeather(u32 weather);
void DoCurrentWeather(void);
void UpdateWeatherPerDay(u16 increment);
void ResumePausedWeather(void);
# 6 "src/map_name_popup.c" 2
# 1 "include/gpu_regs.h" 1
# 9 "include/gpu_regs.h"
void InitGpuRegManager(void);
void CopyBufferedValuesToGpuRegs(void);
void SetGpuReg(u8 regOffset, u16 value);
void SetGpuReg_ForcedBlank(u8 regOffset, u16 value);
u16 GetGpuReg(u8 regOffset);
void SetGpuRegBits(u8 regOffset, u16 mask);
void ClearGpuRegBits(u8 regOffset, u16 mask);
void EnableInterrupts(u16 mask);
void DisableInterrupts(u16 mask);
# 7 "src/map_name_popup.c" 2
# 1 "include/graphics.h" 1




extern const u8 gSignpostWindow_Gfx[];
extern const u8 gMessageBox_Gfx[];
extern const u16 gMessageBox_Pal[];


extern const u32 gBallGfx_Strange[];
extern const u16 gBallPal_Strange[];
extern const u32 gBallGfx_Poke[];
extern const u16 gBallPal_Poke[];
extern const u32 gBallGfx_Great[];
extern const u16 gBallPal_Great[];
extern const u32 gBallGfx_Ultra[];
extern const u16 gBallPal_Ultra[];
extern const u32 gBallGfx_Master[];
extern const u16 gBallPal_Master[];
extern const u32 gBallGfx_Premier[];
extern const u16 gBallPal_Premier[];
extern const u32 gBallGfx_Heal[];
extern const u16 gBallPal_Heal[];
extern const u32 gBallGfx_Net[];
extern const u16 gBallPal_Net[];
extern const u32 gBallGfx_Nest[];
extern const u16 gBallPal_Nest[];
extern const u32 gBallGfx_Dive[];
extern const u16 gBallPal_Dive[];
extern const u32 gBallGfx_Dusk[];
extern const u16 gBallPal_Dusk[];
extern const u32 gBallGfx_Timer[];
extern const u16 gBallPal_Timer[];
extern const u32 gBallGfx_Quick[];
extern const u16 gBallPal_Quick[];
extern const u32 gBallGfx_Repeat[];
extern const u16 gBallPal_Repeat[];
extern const u32 gBallGfx_Luxury[];
extern const u16 gBallPal_Luxury[];
extern const u32 gBallGfx_Level[];
extern const u16 gBallPal_Level[];
extern const u32 gBallGfx_Lure[];
extern const u16 gBallPal_Lure[];
extern const u32 gBallGfx_Moon[];
extern const u16 gBallPal_Moon[];
extern const u32 gBallGfx_Friend[];
extern const u16 gBallPal_Friend[];
extern const u32 gBallGfx_Love[];
extern const u16 gBallPal_Love[];
extern const u32 gBallGfx_Fast[];
extern const u16 gBallPal_Fast[];
extern const u32 gBallGfx_Heavy[];
extern const u16 gBallPal_Heavy[];
extern const u32 gBallGfx_Dream[];
extern const u16 gBallPal_Dream[];
extern const u32 gBallGfx_Safari[];
extern const u16 gBallPal_Safari[];
extern const u32 gBallGfx_Sport[];
extern const u16 gBallPal_Sport[];
extern const u32 gBallGfx_Park[];
extern const u16 gBallPal_Park[];
extern const u32 gBallGfx_Beast[];
extern const u16 gBallPal_Beast[];
extern const u32 gBallGfx_Cherish[];
extern const u16 gBallPal_Cherish[];
extern const u32 gOpenPokeballGfx[];


extern const u16 gMonIconPalettes[][16];


extern const u32 gMenuPokeblock_Gfx[];
extern const u16 gMenuPokeblock_Pal[];
extern const u32 gMenuPokeblock_Tilemap[];
extern const u32 gMenuPokeblockDevice_Gfx[];
extern const u16 gMenuPokeblockDevice_Pal[];
extern const u16 gPokeblockRed_Pal[];
extern const u16 gPokeblockBlue_Pal[];
extern const u16 gPokeblockPink_Pal[];
extern const u16 gPokeblockGreen_Pal[];
extern const u16 gPokeblockYellow_Pal[];
extern const u16 gPokeblockPurple_Pal[];
extern const u16 gPokeblockIndigo_Pal[];
extern const u16 gPokeblockBrown_Pal[];
extern const u16 gPokeblockLiteBlue_Pal[];
extern const u16 gPokeblockOlive_Pal[];
extern const u16 gPokeblockGray_Pal[];
extern const u16 gPokeblockBlack_Pal[];
extern const u16 gPokeblockWhite_Pal[];
extern const u16 gPokeblockGold_Pal[];
extern const u32 gPokeblock_Gfx[];

extern const u32 gItemIcon_QuestionMark[];
extern const u16 gItemIconPalette_QuestionMark[];


extern const u32 gDecorIcon_HeavyDesk[];
extern const u16 gDecorIconPalette_HeavyDesk[];
extern const u32 gDecorIcon_RaggedDesk[];
extern const u16 gDecorIconPalette_RaggedDesk[];
extern const u32 gDecorIcon_ComfortDesk[];
extern const u16 gDecorIconPalette_ComfortDesk[];
extern const u32 gDecorIcon_PrettyDesk[];
extern const u16 gDecorIconPalette_PrettyDesk[];
extern const u32 gDecorIcon_BrickDesk[];
extern const u16 gDecorIconPalette_BrickDesk[];
extern const u32 gDecorIcon_CampDesk[];
extern const u16 gDecorIconPalette_CampDesk[];
extern const u32 gDecorIcon_HardDesk[];
extern const u16 gDecorIconPalette_HardDesk[];
extern const u32 gDecorIcon_RedPlant[];
extern const u16 gDecorIconPalette_RedPlant[];
extern const u32 gDecorIcon_TropicalPlant[];
extern const u16 gDecorIconPalette_TropicalPlant[];
extern const u32 gDecorIcon_PrettyFlowers[];
extern const u16 gDecorIconPalette_PrettyFlowers[];
extern const u32 gDecorIcon_ColorfulPlant[];
extern const u16 gDecorIconPalette_ColorfulPlant[];
extern const u32 gDecorIcon_BigPlant[];
extern const u16 gDecorIconPalette_BigPlant[];
extern const u32 gDecorIcon_GorgeousPlant[];
extern const u16 gDecorIconPalette_GorgeousPlant[];
extern const u32 gDecorIcon_RedBrick[];
extern const u16 gDecorIconPalette_RedBrick[];
extern const u32 gDecorIcon_YellowBrick[];
extern const u16 gDecorIconPalette_YellowBrick[];
extern const u32 gDecorIcon_BlueBrick[];
extern const u16 gDecorIconPalette_BlueBrick[];
extern const u32 gDecorIcon_RedTent[];
extern const u16 gDecorIconPalette_RedTent[];
extern const u32 gDecorIcon_BlueTent[];
extern const u16 gDecorIconPalette_BlueTent[];
extern const u32 gDecorIcon_SolidBoard[];
extern const u16 gDecorIconPalette_SolidBoard[];
extern const u32 gDecorIcon_Slide[];
extern const u16 gDecorIconPalette_Slide[];
extern const u32 gDecorIcon_Tire[];
extern const u16 gDecorIconPalette_Tire[];
extern const u32 gDecorIcon_Stand[];
extern const u16 gDecorIconPalette_Stand[];
extern const u32 gDecorIcon_BreakableDoor[];
extern const u16 gDecorIconPalette_BreakableDoor[];
extern const u32 gDecorIcon_SandOrnament[];
extern const u16 gDecorIconPalette_SandOrnament[];
extern const u32 gDecorIcon_GlassOrnament[];
extern const u16 gDecorIconPalette_GlassOrnament[];
extern const u32 gDecorIcon_SurfMat[];
extern const u16 gDecorIconPalette_SurfMat[];
extern const u32 gDecorIcon_ThunderMat[];
extern const u16 gDecorIconPalette_ThunderMat[];
extern const u32 gDecorIcon_FireBlastMat[];
extern const u16 gDecorIconPalette_FireBlastMat[];
extern const u32 gDecorIcon_PowderSnowMat[];
extern const u16 gDecorIconPalette_PowderSnowMat[];
extern const u32 gDecorIcon_AttractMat[];
extern const u16 gDecorIconPalette_AttractMat[];
extern const u32 gDecorIcon_FissureMat[];
extern const u16 gDecorIconPalette_FissureMat[];
extern const u32 gDecorIcon_SpikesMat[];
extern const u16 gDecorIconPalette_SpikesMat[];
extern const u32 gDecorIcon_SnorlaxDoll[];
extern const u16 gDecorIconPalette_SnorlaxDoll[];
extern const u32 gDecorIcon_RhydonDoll[];
extern const u16 gDecorIconPalette_RhydonDoll[];
extern const u32 gDecorIcon_LaprasDoll[];
extern const u16 gDecorIconPalette_LaprasDoll[];
extern const u32 gDecorIcon_VenusaurDoll[];
extern const u16 gDecorIconPalette_VenusaurDoll[];
extern const u32 gDecorIcon_CharizardDoll[];
extern const u16 gDecorIconPalette_CharizardDoll[];
extern const u32 gDecorIcon_BlastoiseDoll[];
extern const u16 gDecorIconPalette_BlastoiseDoll[];
extern const u32 gDecorIcon_WailmerDoll[];
extern const u16 gDecorIconPalette_WailmerDoll[];
extern const u32 gDecorIcon_RegirockDoll[];
extern const u16 gDecorIconPalette_RegirockDoll[];
extern const u32 gDecorIcon_RegiceDoll[];
extern const u16 gDecorIconPalette_RegiceDoll[];
extern const u32 gDecorIcon_RegisteelDoll[];
extern const u16 gDecorIconPalette_RegisteelDoll[];

extern const u32 gWallClock_Gfx[];
extern const u16 gWallClockMale_Pal[];
extern const u16 gWallClockFemale_Pal[];
extern const u32 gWallClockStart_Tilemap[];
extern const u32 gWallClockView_Tilemap[];

extern const u32 gBerryFixGbaConnect_Gfx[];
extern const u32 gBerryFixGbaConnect_Tilemap[];
extern const u16 gBerryFixGbaConnect_Pal[];
extern const u32 gBerryFixGameboyLogo_Gfx[];
extern const u32 gBerryFixGameboyLogo_Tilemap[];
extern const u16 gBerryFixGameboyLogo_Pal[];
extern const u32 gBerryFixGbaTransfer_Gfx[];
extern const u32 gBerryFixGbaTransfer_Tilemap[];
extern const u16 gBerryFixGbaTransfer_Pal[];
extern const u32 gBerryFixGbaTransferHighlight_Gfx[];
extern const u32 gBerryFixGbaTransferHighlight_Tilemap[];
extern const u16 gBerryFixGbaTransferHighlight_Pal[];
extern const u32 gBerryFixGbaTransferError_Gfx[];
extern const u32 gBerryFixGbaTransferError_Tilemap[];
extern const u16 gBerryFixGbaTransferError_Pal[];
extern const u32 gBerryFixWindow_Gfx[];
extern const u32 gBerryFixWindow_Tilemap[];
extern const u16 gBerryFixWindow_Pal[];

extern const u32 gBattleTextboxTiles[];
extern const u32 gBattleTextboxTilemap[];
extern const u16 gBattleTextboxPalette[];
extern const u32 gVsLettersGfx[];
extern const u32 gBattleVSFrame_Gfx[];
extern const u16 gBattleVSFrame_Pal[];
extern const u32 gBattleVSFrame_Tilemap[];
extern const u32 gMultiBattleIntroBg_Opponent_Tilemap[];
extern const u32 gMultiBattleIntroBg_Player_Tilemap[];


extern const u32 gBattleEnvironmentTiles_TallGrass[];
extern const u32 gBattleEnvironmentTilemap_TallGrass[];
extern const u32 gBattleEnvironmentAnimTiles_TallGrass[];
extern const u32 gBattleEnvironmentAnimTilemap_TallGrass[];
extern const u16 gBattleEnvironmentPalette_TallGrass[];
extern const u32 gBattleEnvironmentTiles_LongGrass[];
extern const u32 gBattleEnvironmentTilemap_LongGrass[];
extern const u32 gBattleEnvironmentAnimTiles_LongGrass[];
extern const u32 gBattleEnvironmentAnimTilemap_LongGrass[];
extern const u16 gBattleEnvironmentPalette_LongGrass[];
extern const u32 gBattleEnvironmentTiles_Sand[];
extern const u32 gBattleEnvironmentTilemap_Sand[];
extern const u32 gBattleEnvironmentAnimTiles_Sand[];
extern const u32 gBattleEnvironmentAnimTilemap_Sand[];
extern const u16 gBattleEnvironmentPalette_Sand[];
extern const u32 gBattleEnvironmentTiles_Underwater[];
extern const u32 gBattleEnvironmentTilemap_Underwater[];
extern const u32 gBattleEnvironmentAnimTiles_Underwater[];
extern const u32 gBattleEnvironmentAnimTilemap_Underwater[];
extern const u16 gBattleEnvironmentPalette_Underwater[];
extern const u32 gBattleEnvironmentTiles_Water[];
extern const u32 gBattleEnvironmentTilemap_Water[];
extern const u32 gBattleEnvironmentAnimTiles_Water[];
extern const u32 gBattleEnvironmentAnimTilemap_Water[];
extern const u16 gBattleEnvironmentPalette_Water[];
extern const u32 gBattleEnvironmentTiles_PondWater[];
extern const u32 gBattleEnvironmentTilemap_PondWater[];
extern const u32 gBattleEnvironmentAnimTiles_PondWater[];
extern const u32 gBattleEnvironmentAnimTilemap_PondWater[];
extern const u16 gBattleEnvironmentPalette_PondWater[];
extern const u32 gBattleEnvironmentTiles_Rock[];
extern const u32 gBattleEnvironmentTilemap_Rock[];
extern const u32 gBattleEnvironmentAnimTiles_Rock[];
extern const u32 gBattleEnvironmentAnimTilemap_Rock[];
extern const u16 gBattleEnvironmentPalette_Rock[];
extern const u32 gBattleEnvironmentTiles_Cave[];
extern const u32 gBattleEnvironmentTilemap_Cave[];
extern const u32 gBattleEnvironmentAnimTiles_Cave[];
extern const u32 gBattleEnvironmentAnimTilemap_Cave[];
extern const u16 gBattleEnvironmentPalette_Cave[];
extern const u32 gBattleEnvironmentTiles_Building[];
extern const u32 gBattleEnvironmentTilemap_Building[];
extern const u32 gBattleEnvironmentAnimTiles_Building[];
extern const u32 gBattleEnvironmentAnimTilemap_Building[];
extern const u16 gBattleEnvironmentPalette_Building[];
extern const u16 gBattleEnvironmentPalette_Plain[];
extern const u16 gBattleEnvironmentPalette_Frontier[];
extern const u32 gBattleEnvironmentTiles_Stadium[];
extern const u32 gBattleEnvironmentTilemap_Stadium[];
extern const u32 gBattleEnvironmentTiles_Rayquaza[];
extern const u32 gBattleEnvironmentTilemap_Rayquaza[];
extern const u32 gBattleEnvironmentAnimTiles_Rayquaza[];
extern const u32 gBattleEnvironmentAnimTilemap_Rayquaza[];
extern const u16 gBattleEnvironmentPalette_Rayquaza[];
extern const u16 gBattleEnvironmentPalette_Kyogre[];
extern const u16 gBattleEnvironmentPalette_Groudon[];
extern const u16 gBattleEnvironmentPalette_BuildingGym[];
extern const u16 gBattleEnvironmentPalette_BuildingLeader[];
extern const u16 gBattleEnvironmentPalette_StadiumAqua[];
extern const u16 gBattleEnvironmentPalette_StadiumMagma[];
extern const u16 gBattleEnvironmentPalette_StadiumSidney[];
extern const u16 gBattleEnvironmentPalette_StadiumPhoebe[];
extern const u16 gBattleEnvironmentPalette_StadiumGlacia[];
extern const u16 gBattleEnvironmentPalette_StadiumDrake[];
extern const u16 gBattleEnvironmentPalette_StadiumWallace[];


extern const u32 gPokedexInterface_Gfx[];
extern const u16 gPokedexBgHoenn_Pal[];
extern const u32 gPokedexMenu_Gfx[];
extern const u32 gPokedexList_Tilemap[];
extern const u32 gPokedexListUnderlay_Tilemap[];
extern const u32 gPokedexStartMenuMain_Tilemap[];
extern const u32 gPokedexStartMenuSearchResults_Tilemap[];
extern const u16 gPokedexSearchResults_Pal[];
extern const u16 gPokedexBgNational_Pal[];
extern const u32 gPokedexInfoScreen_Tilemap[];
extern const u32 gPokedexCryScreen_Tilemap[];
extern const u32 gPokedexSizeScreen_Tilemap[];
extern const u32 gPokedexScreenSelectBarMain_Tilemap[];
extern const u32 gPokedexScreenSelectBarSubmenu_Tilemap[];
extern const u16 gPokedexCaughtScreen_Pal[];
extern const u32 gPokedexSearchMenu_Gfx[];
extern const u32 gPokedexSearchMenuHoenn_Tilemap[];
extern const u32 gPokedexSearchMenuNational_Tilemap[];
extern const u16 gPokedexSearchMenu_Pal[];


extern const u32 gBerryCheck_Gfx[];
extern const u16 gBerryCheck_Pal[];
extern const u32 gBerryTag_Gfx[];
extern const u32 gBerryTag_Tilemap[];


extern const u32 gRaySceneDuoFight_Groudon_Gfx[];
extern const u32 gRaySceneDuoFight_GroudonShoulder_Gfx[];
extern const u32 gRaySceneDuoFight_GroudonClaw_Gfx[];
extern const u32 gRaySceneDuoFight_Kyogre_Gfx[];
extern const u32 gRaySceneDuoFight_KyogrePectoralFin_Gfx[];
extern const u32 gRaySceneDuoFight_KyogreDorsalFin_Gfx[];
extern const u16 gRaySceneDuoFight_Groudon_Pal[];
extern const u16 gRaySceneDuoFight_Kyogre_Pal[];
extern const u32 gRaySceneDuoFight_Clouds_Gfx[];
extern const u16 gRaySceneDuoFight_Clouds_Pal[];
extern const u32 gRaySceneDuoFight_Clouds1_Tilemap[];
extern const u32 gRaySceneDuoFight_Clouds2_Tilemap[];
extern const u32 gRaySceneDuoFight_Clouds3_Tilemap[];
extern const u32 gRaySceneTakesFlight_Smoke_Gfx[];
extern const u16 gRaySceneTakesFlight_Smoke_Pal[];
extern const u16 gRaySceneTakesFlight_Rayquaza_Pal[];
extern const u32 gRaySceneTakesFlight_Bg_Gfx[];
extern const u32 gRaySceneTakesFlight_Bg_Tilemap[];
extern const u32 gRaySceneTakesFlight_Rayquaza_Gfx[];
extern const u32 gRaySceneTakesFlight_Rayquaza_Tilemap[];
extern const u32 gRaySceneDescends_Rayquaza_Gfx[];
extern const u32 gRaySceneDescends_RayquazaTail_Gfx[];
extern const u32 gRaySceneDescends_Light_Gfx[];
extern const u32 gRaySceneDescends_Light_Tilemap[];
extern const u32 gRaySceneDescends_Bg_Gfx[];
extern const u32 gRaySceneDescends_Bg_Tilemap[];
extern const u16 gRaySceneDescends_Bg_Pal[];
extern const u32 gRaySceneCharges_Rayquaza_Gfx[];
extern const u32 gRaySceneCharges_Streaks_Gfx[];
extern const u32 gRaySceneCharges_Bg_Gfx[];
extern const u32 gRaySceneCharges_Orbs_Tilemap[];
extern const u32 gRaySceneCharges_Rayquaza_Tilemap[];
extern const u32 gRaySceneCharges_Streaks_Tilemap[];
extern const u32 gRaySceneCharges_Bg_Tilemap[];
extern const u16 gRaySceneCharges_Bg_Pal[];
extern const u32 gRaySceneChasesAway_Groudon_Gfx[];
extern const u32 gRaySceneChasesAway_GroudonTail_Gfx[];
extern const u32 gRaySceneChasesAway_Kyogre_Gfx[];
extern const u32 gRaySceneChasesAway_Rayquaza_Gfx[];
extern const u32 gRaySceneChasesAway_RayquazaTail_Gfx[];
extern const u32 gRaySceneChasesAway_KyogreSplash_Gfx[];
extern const u16 gRaySceneChasesAway_Groudon_Pal[];
extern const u16 gRaySceneChasesAway_Kyogre_Pal[];
extern const u16 gRaySceneChasesAway_Rayquaza_Pal[];
extern const u16 gRaySceneChasesAway_KyogreSplash_Pal[];
extern const u32 gRaySceneChasesAway_Bg_Tilemap[];
extern const u32 gRaySceneChasesAway_Light_Tilemap[];
extern const u32 gRaySceneChasesAway_Ring_Tilemap[];
extern const u16 gRaySceneChasesAway_Bg_Pal[];
extern const u32 gRaySceneChasesAway_Light_Gfx[];
extern const u32 gRaySceneChasesAway_Ring_Gfx[];


extern const u32 gItemIcon_StrangeBall[];
extern const u16 gItemIconPalette_StrangeBall[];
extern const u32 gItemIcon_PokeBall[];
extern const u16 gItemIconPalette_PokeBall[];
extern const u32 gItemIcon_GreatBall[];
extern const u16 gItemIconPalette_GreatBall[];
extern const u32 gItemIcon_UltraBall[];
extern const u16 gItemIconPalette_UltraBall[];
extern const u32 gItemIcon_MasterBall[];
extern const u16 gItemIconPalette_MasterBall[];
extern const u32 gItemIcon_PremierBall[];
extern const u32 gItemIcon_HealBall[];
extern const u16 gItemIconPalette_HealBall[];
extern const u32 gItemIcon_NetBall[];
extern const u16 gItemIconPalette_NetBall[];
extern const u32 gItemIcon_NestBall[];
extern const u16 gItemIconPalette_NestBall[];
extern const u32 gItemIcon_DiveBall[];
extern const u16 gItemIconPalette_DiveBall[];
extern const u32 gItemIcon_DuskBall[];
extern const u16 gItemIconPalette_DuskBall[];
extern const u32 gItemIcon_TimerBall[];
extern const u32 gItemIcon_QuickBall[];
extern const u16 gItemIconPalette_QuickBall[];
extern const u32 gItemIcon_RepeatBall[];
extern const u16 gItemIconPalette_RepeatBall[];
extern const u32 gItemIcon_LuxuryBall[];
extern const u16 gItemIconPalette_LuxuryBall[];
extern const u32 gItemIcon_LevelBall[];
extern const u16 gItemIconPalette_LevelBall[];
extern const u32 gItemIcon_LureBall[];
extern const u16 gItemIconPalette_LureBall[];
extern const u32 gItemIcon_MoonBall[];
extern const u16 gItemIconPalette_MoonBall[];
extern const u32 gItemIcon_FriendBall[];
extern const u16 gItemIconPalette_FriendBall[];
extern const u32 gItemIcon_LoveBall[];
extern const u16 gItemIconPalette_LoveBall[];
extern const u32 gItemIcon_FastBall[];
extern const u16 gItemIconPalette_FastBall[];
extern const u32 gItemIcon_HeavyBall[];
extern const u16 gItemIconPalette_HeavyBall[];
extern const u32 gItemIcon_DreamBall[];
extern const u16 gItemIconPalette_DreamBall[];
extern const u32 gItemIcon_SafariBall[];
extern const u16 gItemIconPalette_SafariBall[];
extern const u32 gItemIcon_SportBall[];
extern const u16 gItemIconPalette_SportBall[];
extern const u32 gItemIcon_ParkBall[];
extern const u16 gItemIconPalette_ParkBall[];
extern const u32 gItemIcon_BeastBall[];
extern const u16 gItemIconPalette_BeastBall[];
extern const u32 gItemIcon_CherishBall[];
extern const u16 gItemIconPalette_CherishBall[];

extern const u32 gItemIcon_Potion[];
extern const u16 gItemIconPalette_Potion[];
extern const u16 gItemIconPalette_SuperPotion[];
extern const u16 gItemIconPalette_HyperPotion[];
extern const u32 gItemIcon_LargePotion[];
extern const u16 gItemIconPalette_MaxPotion[];
extern const u16 gItemIconPalette_FullRestore[];
extern const u32 gItemIcon_Revive[];
extern const u16 gItemIconPalette_Revive[];
extern const u32 gItemIcon_MaxRevive[];
extern const u32 gItemIcon_FreshWater[];
extern const u16 gItemIconPalette_FreshWater[];
extern const u32 gItemIcon_SodaPop[];
extern const u16 gItemIconPalette_SodaPop[];
extern const u32 gItemIcon_Lemonade[];
extern const u16 gItemIconPalette_Lemonade[];
extern const u32 gItemIcon_MoomooMilk[];
extern const u16 gItemIconPalette_MoomooMilk[];
extern const u32 gItemIcon_Powder[];
extern const u16 gItemIconPalette_EnergyPowder[];
extern const u32 gItemIcon_EnergyRoot[];
extern const u16 gItemIconPalette_EnergyRoot[];
extern const u16 gItemIconPalette_HealPowder[];
extern const u32 gItemIcon_RevivalHerb[];
extern const u16 gItemIconPalette_RevivalHerb[];
extern const u32 gItemIcon_Antidote[];
extern const u16 gItemIconPalette_Antidote[];
extern const u32 gItemIcon_StatusHeal[];
extern const u16 gItemIconPalette_ParalyzeHeal[];
extern const u16 gItemIconPalette_BurnHeal[];
extern const u16 gItemIconPalette_IceHeal[];
extern const u16 gItemIconPalette_Awakening[];
extern const u32 gItemIcon_FullHeal[];
extern const u16 gItemIconPalette_FullHeal[];
extern const u32 gItemIcon_Ether[];
extern const u16 gItemIconPalette_Ether[];
extern const u16 gItemIconPalette_MaxEther[];
extern const u16 gItemIconPalette_Elixir[];
extern const u16 gItemIconPalette_MaxElixir[];
extern const u32 gItemIcon_BerryJuice[];
extern const u16 gItemIconPalette_BerryJuice[];
extern const u32 gItemIcon_SacredAsh[];
extern const u16 gItemIconPalette_SacredAsh[];
extern const u32 gItemIcon_SweetHeart[];
extern const u16 gItemIconPalette_SweetHeart[];
extern const u32 gItemIcon_MaxHoney[];
extern const u16 gItemIconPalette_MaxHoney[];

extern const u32 gItemIcon_PewterCrunchies[];
extern const u16 gItemIconPalette_PewterCrunchies[];
extern const u32 gItemIcon_RageCandyBar[];
extern const u16 gItemIconPalette_RageCandyBar[];
extern const u32 gItemIcon_LavaCookie[];
extern const u16 gItemIconPalette_LavaCookieAndLetter[];
extern const u32 gItemIcon_OldGateau[];
extern const u16 gItemIconPalette_OldGateau[];
extern const u32 gItemIcon_Casteliacone[];
extern const u16 gItemIconPalette_Casteliacone[];
extern const u32 gItemIcon_LumioseGalette[];
extern const u16 gItemIconPalette_LumioseGalette[];
extern const u32 gItemIcon_ShalourSable[];
extern const u16 gItemIconPalette_ShalourSable[];
extern const u32 gItemIcon_BigMalasada[];
extern const u16 gItemIconPalette_BigMalasada[];

extern const u32 gItemIcon_HPUp[];
extern const u16 gItemIconPalette_HPUp[];
extern const u32 gItemIcon_Vitamin[];
extern const u16 gItemIconPalette_Protein[];
extern const u16 gItemIconPalette_Iron[];
extern const u16 gItemIconPalette_Calcium[];
extern const u16 gItemIconPalette_Zinc[];
extern const u16 gItemIconPalette_Carbos[];
extern const u32 gItemIcon_PPUp[];
extern const u16 gItemIconPalette_PPUp[];
extern const u32 gItemIcon_PPMax[];
extern const u16 gItemIconPalette_PPMax[];

extern const u32 gItemIcon_HealthFeather[];
extern const u16 gItemIconPalette_HealthFeather[];
extern const u32 gItemIcon_MuscleFeather[];
extern const u16 gItemIconPalette_MuscleFeather[];
extern const u32 gItemIcon_ResistFeather[];
extern const u16 gItemIconPalette_ResistFeather[];
extern const u32 gItemIcon_GeniusFeather[];
extern const u16 gItemIconPalette_GeniusFeather[];
extern const u32 gItemIcon_CleverFeather[];
extern const u16 gItemIconPalette_CleverFeather[];
extern const u32 gItemIcon_SwiftFeather[];
extern const u16 gItemIconPalette_SwiftFeather[];

extern const u32 gItemIcon_AbilityCapsule[];
extern const u16 gItemIconPalette_AbilityCapsule[];
extern const u32 gItemIcon_AbilityPatch[];
extern const u16 gItemIconPalette_AbilityPatch[];

extern const u32 gItemIcon_Mint[];
extern const u16 gItemIconPalette_RedMint[];
extern const u16 gItemIconPalette_BlueMint[];
extern const u16 gItemIconPalette_LightBlueMint[];
extern const u16 gItemIconPalette_PinkMint[];
extern const u16 gItemIconPalette_GreenMint[];
extern const u16 gItemIconPalette_YellowMint[];

extern const u32 gItemIcon_RareCandy[];
extern const u16 gItemIconPalette_RareCandy[];
extern const u32 gItemIcon_ExpCandyXS[];
extern const u32 gItemIcon_ExpCandyS[];
extern const u32 gItemIcon_ExpCandyM[];
extern const u32 gItemIcon_ExpCandyL[];
extern const u32 gItemIcon_ExpCandyXL[];
extern const u16 gItemIconPalette_ExpCandies[];
extern const u32 gItemIcon_DynamaxCandy[];
extern const u16 gItemIconPalette_DynamaxCandy[];

extern const u32 gItemIcon_Flute[];
extern const u16 gItemIconPalette_BlueFlute[];
extern const u16 gItemIconPalette_YellowFlute[];
extern const u16 gItemIconPalette_RedFlute[];

extern const u16 gItemIconPalette_BlackFlute[];
extern const u16 gItemIconPalette_WhiteFlute[];

extern const u32 gItemIcon_Repel[];
extern const u16 gItemIconPalette_Repel[];
extern const u16 gItemIconPalette_SuperRepel[];
extern const u16 gItemIconPalette_MaxRepel[];
extern const u32 gItemIcon_Lure[];
extern const u16 gItemIconPalette_Lure[];
extern const u16 gItemIconPalette_SuperLure[];
extern const u16 gItemIconPalette_MaxLure[];
extern const u32 gItemIcon_EscapeRope[];
extern const u16 gItemIconPalette_EscapeRope[];

extern const u32 gItemIcon_BattleStatItem[];
extern const u16 gItemIconPalette_XAttack[];
extern const u16 gItemIconPalette_XDefend[];
extern const u16 gItemIconPalette_XSpecial[];
extern const u32 gItemIcon_XSpecialDefense[];
extern const u16 gItemIconPalette_XSpecialDefense[];
extern const u16 gItemIconPalette_XSpeed[];
extern const u16 gItemIconPalette_XAccuracy[];
extern const u16 gItemIconPalette_DireHit[];
extern const u16 gItemIconPalette_GuardSpec[];

extern const u32 gItemIcon_PokeDoll[];
extern const u16 gItemIconPalette_PokeDoll[];
extern const u32 gItemIcon_FluffyTail[];
extern const u16 gItemIconPalette_FluffyTail[];
extern const u32 gItemIcon_PokeToy[];
extern const u16 gItemIconPalette_PokeToy[];
extern const u32 gItemIcon_MaxMushrooms[];
extern const u16 gItemIconPalette_MaxMushrooms[];

extern const u32 gItemIcon_BottleCap[];
extern const u16 gItemIconPalette_BottleCap[];
extern const u16 gItemIconPalette_GoldBottleCap[];
extern const u32 gItemIcon_Nugget[];
extern const u16 gItemIconPalette_Nugget[];
extern const u32 gItemIcon_BigNugget[];
extern const u16 gItemIconPalette_BigNugget[];
extern const u32 gItemIcon_TinyMushroom[];
extern const u16 gItemIconPalette_Mushroom[];
extern const u32 gItemIcon_BigMushroom[];
extern const u32 gItemIcon_BalmMushroom[];
extern const u16 gItemIconPalette_BalmMushroom[];
extern const u32 gItemIcon_Pearl[];
extern const u16 gItemIconPalette_Pearl[];
extern const u32 gItemIcon_BigPearl[];
extern const u32 gItemIcon_PearlString[];
extern const u16 gItemIconPalette_PearlString[];
extern const u32 gItemIcon_Stardust[];
extern const u16 gItemIconPalette_Star[];
extern const u32 gItemIcon_StarPiece[];
extern const u32 gItemIcon_CometShard[];
extern const u16 gItemIconPalette_CometShard[];
extern const u16 gItemIconPalette_ShoalSalt[];
extern const u32 gItemIcon_ShoalShell[];
extern const u16 gItemIconPalette_Shell[];
extern const u32 gItemIcon_Shard[];
extern const u16 gItemIconPalette_RedShard[];
extern const u16 gItemIconPalette_BlueShard[];
extern const u16 gItemIconPalette_YellowShard[];
extern const u16 gItemIconPalette_GreenShard[];
extern const u32 gItemIcon_HeartScale[];
extern const u16 gItemIconPalette_HeartScale[];
extern const u32 gItemIcon_Honey[];
extern const u16 gItemIconPalette_Honey[];
extern const u32 gItemIcon_RareBone[];
extern const u16 gItemIconPalette_RareBone[];
extern const u32 gItemIcon_OddKeystone[];
extern const u16 gItemIconPalette_OddKeystone[];
extern const u32 gItemIcon_PrettyFeather[];
extern const u16 gItemIconPalette_PrettyFeather[];
extern const u32 gItemIcon_RelicCoin[];
extern const u16 gItemIconPalette_RelicCopper[];
extern const u16 gItemIconPalette_RelicSilver[];
extern const u16 gItemIconPalette_RelicGold[];
extern const u32 gItemIcon_RelicVase[];
extern const u16 gItemIconPalette_Relics[];
extern const u32 gItemIcon_RelicBand[];
extern const u32 gItemIcon_RelicStatue[];
extern const u32 gItemIcon_RelicCrown[];
extern const u32 gItemIcon_StrangeSouvenir[];
extern const u16 gItemIconPalette_StrangeSouvenir[];

extern const u32 gItemIcon_HelixFossil[];
extern const u16 gItemIconPalette_KantoFossil[];
extern const u32 gItemIcon_DomeFossil[];
extern const u32 gItemIcon_OldAmber[];
extern const u16 gItemIconPalette_OldAmber[];
extern const u32 gItemIcon_RootFossil[];
extern const u16 gItemIconPalette_HoennFossil[];
extern const u32 gItemIcon_ClawFossil[];
extern const u32 gItemIcon_ArmorFossil[];
extern const u16 gItemIconPalette_ArmorFossil[];
extern const u32 gItemIcon_SkullFossil[];
extern const u16 gItemIconPalette_SkullFossil[];
extern const u32 gItemIcon_CoverFossil[];
extern const u16 gItemIconPalette_CoverFossil[];
extern const u32 gItemIcon_PlumeFossil[];
extern const u16 gItemIconPalette_PlumeFossil[];
extern const u32 gItemIcon_JawFossil[];
extern const u16 gItemIconPalette_JawFossil[];
extern const u32 gItemIcon_SailFossil[];
extern const u16 gItemIconPalette_SailFossil[];
extern const u32 gItemIcon_FossilizedBird[];
extern const u16 gItemIconPalette_FossilizedBird[];
extern const u32 gItemIcon_FossilizedFish[];
extern const u16 gItemIconPalette_FossilizedFish[];
extern const u32 gItemIcon_FossilizedDrake[];
extern const u16 gItemIconPalette_FossilizedDrake[];
extern const u32 gItemIcon_FossilizedDino[];
extern const u16 gItemIconPalette_FossilizedDino[];

extern const u32 gItemIcon_Mulch[];
extern const u16 gItemIconPalette_GrowthMulch[];
extern const u16 gItemIconPalette_DampMulch[];
extern const u32 gItemIcon_StableMulch[];
extern const u16 gItemIconPalette_StableMulch[];
extern const u16 gItemIconPalette_GooeyMulch[];
extern const u16 gItemIconPalette_RichMulch[];
extern const u16 gItemIconPalette_SurpriseMulch[];
extern const u16 gItemIconPalette_BoostMulch[];
extern const u16 gItemIconPalette_AmazeMulch[];

extern const u32 gItemIcon_RedApricorn[];
extern const u16 gItemIconPalette_RedApricorn[];
extern const u32 gItemIcon_BlueApricorn[];
extern const u16 gItemIconPalette_BlueApricorn[];
extern const u32 gItemIcon_YellowApricorn[];
extern const u16 gItemIconPalette_YellowApricorn[];
extern const u32 gItemIcon_GreenApricorn[];
extern const u16 gItemIconPalette_GreenApricorn[];
extern const u32 gItemIcon_PinkApricorn[];
extern const u16 gItemIconPalette_PinkApricorn[];
extern const u32 gItemIcon_WhiteApricorn[];
extern const u16 gItemIconPalette_WhiteApricorn[];
extern const u32 gItemIcon_BlackApricorn[];
extern const u16 gItemIconPalette_BlackApricorn[];
extern const u32 gItemIcon_WishingPiece[];
extern const u16 gItemIconPalette_WishingPiece[];
extern const u32 gItemIcon_GalaricaTwig[];
extern const u16 gItemIconPalette_GalaricaItem[];
extern const u32 gItemIcon_ArmoriteOre[];
extern const u16 gItemIconPalette_ArmoriteOre[];
extern const u32 gItemIcon_DyniteOre[];
extern const u16 gItemIconPalette_DyniteOre[];

extern const u32 gItemIcon_OrangeMail[];
extern const u16 gItemIconPalette_OrangeMail[];
extern const u32 gItemIcon_HarborMail[];
extern const u16 gItemIconPalette_HarborMail[];
extern const u32 gItemIcon_GlitterMail[];
extern const u16 gItemIconPalette_GlitterMail[];
extern const u32 gItemIcon_MechMail[];
extern const u16 gItemIconPalette_MechMail[];
extern const u32 gItemIcon_WoodMail[];
extern const u16 gItemIconPalette_WoodMail[];
extern const u32 gItemIcon_WaveMail[];
extern const u16 gItemIconPalette_WaveMail[];
extern const u32 gItemIcon_BeadMail[];
extern const u16 gItemIconPalette_BeadMail[];
extern const u32 gItemIcon_ShadowMail[];
extern const u16 gItemIconPalette_ShadowMail[];
extern const u32 gItemIcon_TropicMail[];
extern const u16 gItemIconPalette_TropicMail[];
extern const u32 gItemIcon_DreamMail[];
extern const u16 gItemIconPalette_DreamMail[];
extern const u32 gItemIcon_FabMail[];
extern const u16 gItemIconPalette_FabMail[];
extern const u32 gItemIcon_RetroMail[];
extern const u16 gItemIconPalette_RetroMail[];

extern const u32 gItemIcon_FireStone[];
extern const u16 gItemIconPalette_FireStone[];
extern const u32 gItemIcon_WaterStone[];
extern const u16 gItemIconPalette_WaterStone[];
extern const u32 gItemIcon_ThunderStone[];
extern const u16 gItemIconPalette_ThunderStone[];
extern const u32 gItemIcon_LeafStone[];
extern const u16 gItemIconPalette_LeafStone[];
extern const u32 gItemIcon_IceStone[];
extern const u16 gItemIconPalette_IceStone[];
extern const u32 gItemIcon_SunStone[];
extern const u16 gItemIconPalette_SunStone[];
extern const u32 gItemIcon_MoonStone[];
extern const u16 gItemIconPalette_MoonStone[];
extern const u32 gItemIcon_ShinyStone[];
extern const u16 gItemIconPalette_ShinyStone[];
extern const u32 gItemIcon_DuskStone[];
extern const u16 gItemIconPalette_DuskStone[];
extern const u32 gItemIcon_DawnStone[];
extern const u16 gItemIconPalette_DawnStone[];
extern const u32 gItemIcon_SweetApple[];
extern const u16 gItemIconPalette_SweetApple[];
extern const u32 gItemIcon_TartApple[];
extern const u16 gItemIconPalette_TartApple[];
extern const u32 gItemIcon_CrackedPot[];
extern const u32 gItemIcon_ChippedPot[];
extern const u16 gItemIconPalette_Pot[];
extern const u32 gItemIcon_GalaricaCuff[];
extern const u32 gItemIcon_GalaricaWreath[];
extern const u32 gItemIcon_DragonScale[];
extern const u16 gItemIconPalette_DragonScale[];
extern const u32 gItemIcon_Upgrade[];
extern const u16 gItemIconPalette_Upgrade[];
extern const u32 gItemIcon_Protector[];
extern const u16 gItemIconPalette_Protector[];
extern const u32 gItemIcon_Electirizer[];
extern const u16 gItemIconPalette_Electirizer[];
extern const u32 gItemIcon_Magmarizer[];
extern const u16 gItemIconPalette_Magmarizer[];
extern const u32 gItemIcon_DubiousDisc[];
extern const u16 gItemIconPalette_DubiousDisc[];
extern const u32 gItemIcon_ReaperCloth[];
extern const u16 gItemIconPalette_ReaperCloth[];
extern const u32 gItemIcon_PrismScale[];
extern const u16 gItemIconPalette_PrismScale[];
extern const u32 gItemIcon_WhippedDream[];
extern const u16 gItemIconPalette_WhippedDream[];
extern const u32 gItemIcon_Sachet[];
extern const u16 gItemIconPalette_Sachet[];
extern const u32 gItemIcon_OvalStone[];
extern const u16 gItemIconPalette_OvalStone[];
extern const u32 gItemIcon_StrawberrySweet[];
extern const u16 gItemIconPalette_StrawberrySweet[];
extern const u32 gItemIcon_LoveSweet[];
extern const u16 gItemIconPalette_LoveSweet[];
extern const u32 gItemIcon_BerrySweet[];
extern const u16 gItemIconPalette_BerrySweet[];
extern const u32 gItemIcon_CloverSweet[];
extern const u16 gItemIconPalette_CloverSweet[];
extern const u32 gItemIcon_FlowerSweet[];
extern const u16 gItemIconPalette_FlowerSweet[];
extern const u32 gItemIcon_StarSweet[];
extern const u16 gItemIconPalette_StarSweet[];
extern const u32 gItemIcon_RibbonSweet[];
extern const u16 gItemIconPalette_RibbonSweet[];
extern const u32 gItemIcon_Everstone[];
extern const u16 gItemIconPalette_Everstone[];
extern const u32 gItemIcon_BlackAugurite[];
extern const u16 gItemIconPalette_BlackAugurite[];
extern const u32 gItemIcon_LinkingCord[];
extern const u16 gItemIconPalette_LinkingCord[];
extern const u32 gItemIcon_PeatBlock[];
extern const u16 gItemIconPalette_PeatBlock[];
extern const u32 gItemIcon_SyrupyApple[];
extern const u16 gItemIconPalette_SyrupyApple[];
extern const u32 gItemIcon_UnremarkableTeacup[];
extern const u16 gItemIconPalette_UnremarkableTeacup[];
extern const u32 gItemIcon_MasterpieceTeacup[];
extern const u16 gItemIconPalette_MasterpieceTeacup[];
extern const u32 gItemIcon_MetalAlloy[];
extern const u16 gItemIconPalette_MetalAlloy[];

extern const u32 gItemIcon_RedNectar[];
extern const u16 gItemIconPalette_RedNectar[];
extern const u32 gItemIcon_YellowNectar[];
extern const u16 gItemIconPalette_YellowNectar[];
extern const u32 gItemIcon_PinkNectar[];
extern const u16 gItemIconPalette_PinkNectar[];
extern const u32 gItemIcon_PurpleNectar[];
extern const u16 gItemIconPalette_PurpleNectar[];

extern const u32 gItemIcon_FlamePlate[];
extern const u16 gItemIconPalette_FlamePlate[];
extern const u32 gItemIcon_SplashPlate[];
extern const u16 gItemIconPalette_SplashPlate[];
extern const u32 gItemIcon_ZapPlate[];
extern const u16 gItemIconPalette_ZapPlate[];
extern const u32 gItemIcon_MeadowPlate[];
extern const u16 gItemIconPalette_MeadowPlate[];
extern const u32 gItemIcon_IciclePlate[];
extern const u16 gItemIconPalette_IciclePlate[];
extern const u32 gItemIcon_FistPlate[];
extern const u16 gItemIconPalette_FistPlate[];
extern const u32 gItemIcon_ToxicPlate[];
extern const u16 gItemIconPalette_ToxicPlate[];
extern const u32 gItemIcon_EarthPlate[];
extern const u16 gItemIconPalette_EarthPlate[];
extern const u32 gItemIcon_SkyPlate[];
extern const u16 gItemIconPalette_SkyPlate[];
extern const u32 gItemIcon_MindPlate[];
extern const u16 gItemIconPalette_MindPlate[];
extern const u32 gItemIcon_InsectPlate[];
extern const u16 gItemIconPalette_InsectPlate[];
extern const u32 gItemIcon_StonePlate[];
extern const u16 gItemIconPalette_StonePlate[];
extern const u32 gItemIcon_SpookyPlate[];
extern const u16 gItemIconPalette_SpookyPlate[];
extern const u32 gItemIcon_DracoPlate[];
extern const u16 gItemIconPalette_DracoPlate[];
extern const u32 gItemIcon_DreadPlate[];
extern const u16 gItemIconPalette_DreadPlate[];
extern const u32 gItemIcon_IronPlate[];
extern const u16 gItemIconPalette_IronPlate[];
extern const u32 gItemIcon_PixiePlate[];
extern const u16 gItemIconPalette_PixiePlate[];

extern const u32 gItemIcon_DouseDrive[];
extern const u16 gItemIconPalette_DouseDrive[];
extern const u32 gItemIcon_ShockDrive[];
extern const u16 gItemIconPalette_ShockDrive[];
extern const u32 gItemIcon_BurnDrive[];
extern const u16 gItemIconPalette_BurnDrive[];
extern const u32 gItemIcon_ChillDrive[];
extern const u16 gItemIconPalette_ChillDrive[];

extern const u32 gItemIcon_FireMemory[];
extern const u16 gItemIconPalette_FireMemory[];
extern const u32 gItemIcon_WaterMemory[];
extern const u16 gItemIconPalette_WaterMemory[];
extern const u32 gItemIcon_ElectricMemory[];
extern const u16 gItemIconPalette_ElectricMemory[];
extern const u32 gItemIcon_GrassMemory[];
extern const u16 gItemIconPalette_GrassMemory[];
extern const u32 gItemIcon_IceMemory[];
extern const u16 gItemIconPalette_IceMemory[];
extern const u32 gItemIcon_FightingMemory[];
extern const u16 gItemIconPalette_FightingMemory[];
extern const u32 gItemIcon_PoisonMemory[];
extern const u16 gItemIconPalette_PoisonMemory[];
extern const u32 gItemIcon_GroundMemory[];
extern const u16 gItemIconPalette_GroundMemory[];
extern const u32 gItemIcon_FlyingMemory[];
extern const u16 gItemIconPalette_FlyingMemory[];
extern const u32 gItemIcon_PsychicMemory[];
extern const u16 gItemIconPalette_PsychicMemory[];
extern const u32 gItemIcon_BugMemory[];
extern const u16 gItemIconPalette_BugMemory[];
extern const u32 gItemIcon_RockMemory[];
extern const u16 gItemIconPalette_RockMemory[];
extern const u32 gItemIcon_GhostMemory[];
extern const u16 gItemIconPalette_GhostMemory[];
extern const u32 gItemIcon_DragonMemory[];
extern const u16 gItemIconPalette_DragonMemory[];
extern const u32 gItemIcon_DarkMemory[];
extern const u16 gItemIconPalette_DarkMemory[];
extern const u32 gItemIcon_SteelMemory[];
extern const u16 gItemIconPalette_SteelMemory[];
extern const u32 gItemIcon_FairyMemory[];
extern const u16 gItemIconPalette_FairyMemory[];
extern const u32 gItemIcon_RustedSword[];
extern const u32 gItemIcon_RustedShield[];
extern const u16 gItemIconPalette_RustedWeapons[];

extern const u32 gItemIcon_RedOrb[];
extern const u16 gItemIconPalette_RedOrb[];
extern const u32 gItemIcon_BlueOrb[];
extern const u16 gItemIconPalette_BlueOrb[];

extern const u32 gItemIcon_Venusaurite[];
extern const u16 gItemIconPalette_Venusaurite[];
extern const u32 gItemIcon_CharizarditeX[];
extern const u16 gItemIconPalette_CharizarditeX[];
extern const u32 gItemIcon_CharizarditeY[];
extern const u16 gItemIconPalette_CharizarditeY[];
extern const u32 gItemIcon_Blastoisinite[];
extern const u16 gItemIconPalette_Blastoisinite[];
extern const u32 gItemIcon_Beedrillite[];
extern const u16 gItemIconPalette_Beedrillite[];
extern const u32 gItemIcon_Pidgeotite[];
extern const u16 gItemIconPalette_Pidgeotite[];
extern const u32 gItemIcon_Alakazite[];
extern const u16 gItemIconPalette_Alakazite[];
extern const u32 gItemIcon_Slowbronite[];
extern const u16 gItemIconPalette_Slowbronite[];
extern const u32 gItemIcon_Gengarite[];
extern const u16 gItemIconPalette_Gengarite[];
extern const u32 gItemIcon_Kangaskhanite[];
extern const u16 gItemIconPalette_Kangaskhanite[];
extern const u32 gItemIcon_Pinsirite[];
extern const u16 gItemIconPalette_Pinsirite[];
extern const u32 gItemIcon_Gyaradosite[];
extern const u16 gItemIconPalette_Gyaradosite[];
extern const u32 gItemIcon_Aerodactylite[];
extern const u16 gItemIconPalette_Aerodactylite[];
extern const u32 gItemIcon_MewtwoniteX[];
extern const u16 gItemIconPalette_MewtwoniteX[];
extern const u32 gItemIcon_MewtwoniteY[];
extern const u16 gItemIconPalette_MewtwoniteY[];
extern const u32 gItemIcon_Ampharosite[];
extern const u16 gItemIconPalette_Ampharosite[];
extern const u32 gItemIcon_Steelixite[];
extern const u16 gItemIconPalette_Steelixite[];
extern const u32 gItemIcon_Scizorite[];
extern const u16 gItemIconPalette_Scizorite[];
extern const u32 gItemIcon_Heracronite[];
extern const u16 gItemIconPalette_Heracronite[];
extern const u32 gItemIcon_Houndoominite[];
extern const u16 gItemIconPalette_Houndoominite[];
extern const u32 gItemIcon_Tyranitarite[];
extern const u16 gItemIconPalette_Tyranitarite[];
extern const u32 gItemIcon_Sceptilite[];
extern const u16 gItemIconPalette_Sceptilite[];
extern const u32 gItemIcon_Blazikenite[];
extern const u16 gItemIconPalette_Blazikenite[];
extern const u32 gItemIcon_Swampertite[];
extern const u16 gItemIconPalette_Swampertite[];
extern const u32 gItemIcon_Gardevoirite[];
extern const u16 gItemIconPalette_Gardevoirite[];
extern const u32 gItemIcon_Sablenite[];
extern const u16 gItemIconPalette_Sablenite[];
extern const u32 gItemIcon_Mawilite[];
extern const u16 gItemIconPalette_Mawilite[];
extern const u32 gItemIcon_Aggronite[];
extern const u16 gItemIconPalette_Aggronite[];
extern const u32 gItemIcon_Medichamite[];
extern const u16 gItemIconPalette_Medichamite[];
extern const u32 gItemIcon_Manectite[];
extern const u16 gItemIconPalette_Manectite[];
extern const u32 gItemIcon_Sharpedonite[];
extern const u16 gItemIconPalette_Sharpedonite[];
extern const u32 gItemIcon_Cameruptite[];
extern const u16 gItemIconPalette_Cameruptite[];
extern const u32 gItemIcon_Altarianite[];
extern const u16 gItemIconPalette_Altarianite[];
extern const u32 gItemIcon_Banettite[];
extern const u16 gItemIconPalette_Banettite[];
extern const u32 gItemIcon_Absolite[];
extern const u16 gItemIconPalette_Absolite[];
extern const u32 gItemIcon_Glalitite[];
extern const u16 gItemIconPalette_Glalitite[];
extern const u32 gItemIcon_Salamencite[];
extern const u16 gItemIconPalette_Salamencite[];
extern const u32 gItemIcon_Metagrossite[];
extern const u16 gItemIconPalette_Metagrossite[];
extern const u32 gItemIcon_Latiasite[];
extern const u16 gItemIconPalette_Latiasite[];
extern const u32 gItemIcon_Latiosite[];
extern const u16 gItemIconPalette_Latiosite[];
extern const u32 gItemIcon_Lopunnite[];
extern const u16 gItemIconPalette_Lopunnite[];
extern const u32 gItemIcon_Garchompite[];
extern const u16 gItemIconPalette_Garchompite[];
extern const u32 gItemIcon_Lucarionite[];
extern const u16 gItemIconPalette_Lucarionite[];
extern const u32 gItemIcon_Abomasite[];
extern const u16 gItemIconPalette_Abomasite[];
extern const u32 gItemIcon_Galladite[];
extern const u16 gItemIconPalette_Galladite[];
extern const u32 gItemIcon_Audinite[];
extern const u16 gItemIconPalette_Audinite[];
extern const u32 gItemIcon_Diancite[];
extern const u16 gItemIconPalette_Diancite[];

extern const u32 gItemIcon_NormalGem[];
extern const u16 gItemIconPalette_NormalGem[];
extern const u32 gItemIcon_FireGem[];
extern const u16 gItemIconPalette_FireGem[];
extern const u32 gItemIcon_WaterGem[];
extern const u16 gItemIconPalette_WaterGem[];
extern const u32 gItemIcon_ElectricGem[];
extern const u16 gItemIconPalette_ElectricGem[];
extern const u32 gItemIcon_GrassGem[];
extern const u16 gItemIconPalette_GrassGem[];
extern const u32 gItemIcon_IceGem[];
extern const u16 gItemIconPalette_IceGem[];
extern const u32 gItemIcon_FightingGem[];
extern const u16 gItemIconPalette_FightingGem[];
extern const u32 gItemIcon_PoisonGem[];
extern const u16 gItemIconPalette_PoisonGem[];
extern const u32 gItemIcon_GroundGem[];
extern const u16 gItemIconPalette_GroundGem[];
extern const u32 gItemIcon_FlyingGem[];
extern const u16 gItemIconPalette_FlyingGem[];
extern const u32 gItemIcon_PsychicGem[];
extern const u16 gItemIconPalette_PsychicGem[];
extern const u32 gItemIcon_BugGem[];
extern const u16 gItemIconPalette_BugGem[];
extern const u32 gItemIcon_RockGem[];
extern const u16 gItemIconPalette_RockGem[];
extern const u32 gItemIcon_GhostGem[];
extern const u16 gItemIconPalette_GhostGem[];
extern const u32 gItemIcon_DragonGem[];
extern const u16 gItemIconPalette_DragonGem[];
extern const u32 gItemIcon_DarkGem[];
extern const u16 gItemIconPalette_DarkGem[];
extern const u32 gItemIcon_SteelGem[];
extern const u16 gItemIconPalette_SteelGem[];
extern const u32 gItemIcon_FairyGem[];
extern const u16 gItemIconPalette_FairyGem[];

extern const u32 gItemIcon_NormaliumZ[];
extern const u16 gItemIconPalette_NormaliumZ[];
extern const u32 gItemIcon_FiriumZ[];
extern const u16 gItemIconPalette_FiriumZ[];
extern const u32 gItemIcon_WateriumZ[];
extern const u16 gItemIconPalette_WateriumZ[];
extern const u32 gItemIcon_ElectriumZ[];
extern const u16 gItemIconPalette_ElectriumZ[];
extern const u32 gItemIcon_GrassiumZ[];
extern const u16 gItemIconPalette_GrassiumZ[];
extern const u32 gItemIcon_IciumZ[];
extern const u16 gItemIconPalette_IciumZ[];
extern const u32 gItemIcon_FightiniumZ[];
extern const u16 gItemIconPalette_FightiniumZ[];
extern const u32 gItemIcon_PoisoniumZ[];
extern const u16 gItemIconPalette_PoisoniumZ[];
extern const u32 gItemIcon_GroundiumZ[];
extern const u16 gItemIconPalette_GroundiumZ[];
extern const u32 gItemIcon_FlyiniumZ[];
extern const u16 gItemIconPalette_FlyiniumZ[];
extern const u32 gItemIcon_PsychiumZ[];
extern const u16 gItemIconPalette_PsychiumZ[];
extern const u32 gItemIcon_BuginiumZ[];
extern const u16 gItemIconPalette_BuginiumZ[];
extern const u32 gItemIcon_RockiumZ[];
extern const u16 gItemIconPalette_RockiumZ[];
extern const u32 gItemIcon_GhostiumZ[];
extern const u16 gItemIconPalette_GhostiumZ[];
extern const u32 gItemIcon_DragoniumZ[];
extern const u16 gItemIconPalette_DragoniumZ[];
extern const u32 gItemIcon_DarkiniumZ[];
extern const u16 gItemIconPalette_DarkiniumZ[];
extern const u32 gItemIcon_SteeliumZ[];
extern const u16 gItemIconPalette_SteeliumZ[];
extern const u32 gItemIcon_FairiumZ[];
extern const u16 gItemIconPalette_FairiumZ[];
extern const u32 gItemIcon_PikaniumZ[];
extern const u16 gItemIconPalette_PikaniumZ[];
extern const u32 gItemIcon_EeviumZ[];
extern const u16 gItemIconPalette_EeviumZ[];
extern const u32 gItemIcon_SnorliumZ[];
extern const u16 gItemIconPalette_SnorliumZ[];
extern const u32 gItemIcon_MewniumZ[];
extern const u16 gItemIconPalette_MewniumZ[];
extern const u32 gItemIcon_DecidiumZ[];
extern const u16 gItemIconPalette_DecidiumZ[];
extern const u32 gItemIcon_InciniumZ[];
extern const u16 gItemIconPalette_InciniumZ[];
extern const u32 gItemIcon_PrimariumZ[];
extern const u16 gItemIconPalette_PrimariumZ[];
extern const u32 gItemIcon_LycaniumZ[];
extern const u16 gItemIconPalette_LycaniumZ[];
extern const u32 gItemIcon_MimikiumZ[];
extern const u16 gItemIconPalette_MimikiumZ[];
extern const u32 gItemIcon_KommoniumZ[];
extern const u16 gItemIconPalette_KommoniumZ[];
extern const u32 gItemIcon_TapuniumZ[];
extern const u16 gItemIconPalette_TapuniumZ[];
extern const u32 gItemIcon_SolganiumZ[];
extern const u16 gItemIconPalette_SolganiumZ[];
extern const u32 gItemIcon_LunaliumZ[];
extern const u16 gItemIconPalette_LunaliumZ[];
extern const u32 gItemIcon_MarshadiumZ[];
extern const u16 gItemIconPalette_MarshadiumZ[];
extern const u32 gItemIcon_AloraichiumZ[];
extern const u16 gItemIconPalette_AloraichiumZ[];
extern const u32 gItemIcon_PikashuniumZ[];
extern const u16 gItemIconPalette_PikashuniumZ[];
extern const u32 gItemIcon_UltranecroziumZ[];
extern const u16 gItemIconPalette_UltranecroziumZ[];

extern const u32 gItemIcon_LightBall[];
extern const u16 gItemIconPalette_LightBall[];
extern const u32 gItemIcon_Leek[];
extern const u16 gItemIconPalette_Leek[];
extern const u32 gItemIcon_ThickClub[];
extern const u16 gItemIconPalette_ThickClub[];
extern const u32 gItemIcon_LuckyPunch[];
extern const u16 gItemIconPalette_LuckyPunch[];
extern const u32 gItemIcon_MetalPowder[];
extern const u16 gItemIconPalette_MetalPowder[];
extern const u32 gItemIcon_QuickPowder[];
extern const u16 gItemIconPalette_QuickPowder[];
extern const u32 gItemIcon_DeepSeaScale[];
extern const u16 gItemIconPalette_DeepSeaScale[];
extern const u32 gItemIcon_DeepSeaTooth[];
extern const u16 gItemIconPalette_DeepSeaTooth[];
extern const u32 gItemIcon_SoulDew[];
extern const u16 gItemIconPalette_SoulDew[];
extern const u32 gItemIcon_AdamantOrb[];
extern const u16 gItemIconPalette_AdamantOrb[];
extern const u32 gItemIcon_LustrousOrb[];
extern const u16 gItemIconPalette_LustrousOrb[];
extern const u32 gItemIcon_GriseousOrb[];
extern const u16 gItemIconPalette_GriseousOrb[];

extern const u32 gItemIcon_SeaIncense[];
extern const u16 gItemIconPalette_SeaIncense[];
extern const u32 gItemIcon_LaxIncense[];
extern const u16 gItemIconPalette_LaxIncense[];
extern const u32 gItemIcon_OddIncense[];
extern const u16 gItemIconPalette_OddIncense[];
extern const u32 gItemIcon_RockIncense[];
extern const u16 gItemIconPalette_RockIncense[];
extern const u32 gItemIcon_FullIncense[];
extern const u16 gItemIconPalette_FullIncense[];
extern const u32 gItemIcon_WaveIncense[];
extern const u16 gItemIconPalette_WaveIncense[];
extern const u32 gItemIcon_RoseIncense[];
extern const u16 gItemIconPalette_RoseIncense[];
extern const u32 gItemIcon_LuckIncense[];
extern const u16 gItemIconPalette_LuckIncense[];
extern const u32 gItemIcon_PureIncense[];
extern const u16 gItemIconPalette_PureIncense[];

extern const u32 gItemIcon_Scarf[];
extern const u16 gItemIconPalette_RedScarf[];
extern const u16 gItemIconPalette_BlueScarf[];
extern const u16 gItemIconPalette_PinkScarf[];
extern const u16 gItemIconPalette_GreenScarf[];
extern const u16 gItemIconPalette_YellowScarf[];

extern const u32 gItemIcon_MachoBrace[];
extern const u16 gItemIconPalette_MachoBrace[];
extern const u32 gItemIcon_PowerWeight[];
extern const u16 gItemIconPalette_PowerWeight[];
extern const u32 gItemIcon_PowerBracer[];
extern const u16 gItemIconPalette_PowerBracer[];
extern const u32 gItemIcon_PowerBelt[];
extern const u16 gItemIconPalette_PowerBelt[];
extern const u32 gItemIcon_PowerLens[];
extern const u16 gItemIconPalette_PowerLens[];
extern const u32 gItemIcon_PowerBand[];
extern const u16 gItemIconPalette_PowerBand[];
extern const u32 gItemIcon_PowerAnklet[];
extern const u16 gItemIconPalette_PowerAnklet[];

extern const u32 gItemIcon_SilkScarf[];
extern const u16 gItemIconPalette_SilkScarf[];
extern const u32 gItemIcon_Charcoal[];
extern const u16 gItemIconPalette_Charcoal[];
extern const u32 gItemIcon_MysticWater[];
extern const u16 gItemIconPalette_MysticWater[];
extern const u32 gItemIcon_Magnet[];
extern const u16 gItemIconPalette_Magnet[];
extern const u32 gItemIcon_MiracleSeed[];
extern const u16 gItemIconPalette_MiracleSeed[];
extern const u32 gItemIcon_NeverMeltIce[];
extern const u16 gItemIconPalette_NeverMeltIce[];
extern const u32 gItemIcon_BlackBelt[];
extern const u16 gItemIconPalette_BlackTypeEnhancingItem[];
extern const u32 gItemIcon_PoisonBarb[];
extern const u16 gItemIconPalette_PoisonBarb[];
extern const u32 gItemIcon_SoftSand[];
extern const u16 gItemIconPalette_SoftSand[];
extern const u32 gItemIcon_SharpBeak[];
extern const u16 gItemIconPalette_SharpBeak[];
extern const u32 gItemIcon_TwistedSpoon[];
extern const u16 gItemIconPalette_TwistedSpoon[];
extern const u32 gItemIcon_SilverPowder[];
extern const u16 gItemIconPalette_SilverPowder[];
extern const u32 gItemIcon_HardStone[];
extern const u16 gItemIconPalette_HardStone[];
extern const u32 gItemIcon_SpellTag[];
extern const u16 gItemIconPalette_SpellTag[];
extern const u32 gItemIcon_DragonFang[];
extern const u16 gItemIconPalette_DragonFang[];
extern const u32 gItemIcon_BlackGlasses[];
extern const u32 gItemIcon_MetalCoat[];
extern const u16 gItemIconPalette_MetalCoat[];

extern const u32 gItemIcon_ChoiceBand[];
extern const u16 gItemIconPalette_ChoiceBand[];
extern const u32 gItemIcon_ChoiceSpecs[];
extern const u16 gItemIconPalette_ChoiceSpecs[];
extern const u32 gItemIcon_ChoiceScarf[];
extern const u16 gItemIconPalette_ChoiceScarf[];

extern const u32 gItemIcon_FlameOrb[];
extern const u16 gItemIconPalette_FlameOrb[];
extern const u32 gItemIcon_ToxicOrb[];
extern const u16 gItemIconPalette_ToxicOrb[];

extern const u32 gItemIcon_DampRock[];
extern const u16 gItemIconPalette_DampRock[];
extern const u32 gItemIcon_HeatRock[];
extern const u16 gItemIconPalette_HeatRock[];
extern const u32 gItemIcon_SmoothRock[];
extern const u16 gItemIconPalette_SmoothRock[];
extern const u32 gItemIcon_IcyRock[];
extern const u16 gItemIconPalette_IcyRock[];

extern const u32 gItemIcon_ElectricSeed[];
extern const u16 gItemIconPalette_ElectricSeed[];
extern const u32 gItemIcon_PsychicSeed[];
extern const u16 gItemIconPalette_PsychicSeed[];
extern const u32 gItemIcon_MistySeed[];
extern const u16 gItemIconPalette_MistySeed[];
extern const u32 gItemIcon_GrassySeed[];
extern const u16 gItemIconPalette_GrassySeed[];

extern const u32 gItemIcon_AbsorbBulb[];
extern const u16 gItemIconPalette_AbsorbBulb[];
extern const u32 gItemIcon_CellBattery[];
extern const u16 gItemIconPalette_CellBattery[];
extern const u32 gItemIcon_LuminousMoss[];
extern const u16 gItemIconPalette_LuminousMoss[];
extern const u32 gItemIcon_Snowball[];
extern const u16 gItemIconPalette_Snowball[];

extern const u32 gItemIcon_BrightPowder[];
extern const u16 gItemIconPalette_BrightPowder[];
extern const u32 gItemIcon_InBattleHerb[];
extern const u16 gItemIconPalette_WhiteHerb[];
extern const u32 gItemIcon_ExpShare[];
extern const u16 gItemIconPalette_ExpShare[];
extern const u32 gItemIcon_QuickClaw[];
extern const u16 gItemIconPalette_QuickClaw[];
extern const u32 gItemIcon_SootheBell[];
extern const u16 gItemIconPalette_SootheBell[];
extern const u16 gItemIconPalette_MentalHerb[];
extern const u32 gItemIcon_KingsRock[];
extern const u16 gItemIconPalette_KingsRock[];
extern const u32 gItemIcon_AmuletCoin[];
extern const u16 gItemIconPalette_AmuletCoin[];
extern const u32 gItemIcon_CleanseTag[];
extern const u16 gItemIconPalette_CleanseTag[];
extern const u32 gItemIcon_SmokeBall[];
extern const u16 gItemIconPalette_SmokeBall[];
extern const u32 gItemIcon_FocusBand[];
extern const u16 gItemIconPalette_FocusBand[];
extern const u32 gItemIcon_LuckyEgg[];
extern const u16 gItemIconPalette_LuckyEgg[];
extern const u32 gItemIcon_ScopeLens[];
extern const u16 gItemIconPalette_ScopeLens[];
extern const u32 gItemIcon_Leftovers[];
extern const u16 gItemIconPalette_Leftovers[];
extern const u32 gItemIcon_ShellBell[];
extern const u32 gItemIcon_WideLens[];
extern const u16 gItemIconPalette_WideLens[];
extern const u32 gItemIcon_MuscleBand[];
extern const u16 gItemIconPalette_MuscleBand[];
extern const u32 gItemIcon_WiseGlasses[];
extern const u16 gItemIconPalette_WiseGlasses[];
extern const u32 gItemIcon_ExpertBelt[];
extern const u16 gItemIconPalette_ExpertBelt[];
extern const u32 gItemIcon_LightClay[];
extern const u16 gItemIconPalette_LightClay[];
extern const u32 gItemIcon_LifeOrb[];
extern const u16 gItemIconPalette_LifeOrb[];
extern const u32 gItemIcon_PowerHerb[];
extern const u16 gItemIconPalette_PowerHerb[];
extern const u32 gItemIcon_FocusSash[];
extern const u16 gItemIconPalette_FocusSash[];
extern const u32 gItemIcon_ZoomLens[];
extern const u16 gItemIconPalette_ZoomLens[];
extern const u32 gItemIcon_Metronome[];
extern const u16 gItemIconPalette_Metronome[];
extern const u32 gItemIcon_IronBall[];
extern const u16 gItemIconPalette_IronBall[];
extern const u32 gItemIcon_LaggingTail[];
extern const u16 gItemIconPalette_LaggingTail[];
extern const u32 gItemIcon_DestinyKnot[];
extern const u16 gItemIconPalette_DestinyKnot[];
extern const u32 gItemIcon_BlackSludge[];
extern const u16 gItemIconPalette_BlackSludge[];
extern const u32 gItemIcon_GripClaw[];
extern const u16 gItemIconPalette_GripClaw[];
extern const u32 gItemIcon_StickyBarb[];
extern const u16 gItemIconPalette_StickyBarb[];
extern const u32 gItemIcon_ShedShell[];
extern const u16 gItemIconPalette_ShedShell[];
extern const u32 gItemIcon_BigRoot[];
extern const u16 gItemIconPalette_BigRoot[];
extern const u32 gItemIcon_RazorClaw[];
extern const u16 gItemIconPalette_RazorClaw[];
extern const u32 gItemIcon_RazorFang[];
extern const u16 gItemIconPalette_RazorFang[];
extern const u32 gItemIcon_Eviolite[];
extern const u16 gItemIconPalette_Eviolite[];
extern const u32 gItemIcon_FloatStone[];
extern const u16 gItemIconPalette_FloatStone[];
extern const u32 gItemIcon_RockyHelmet[];
extern const u16 gItemIconPalette_RockyHelmet[];
extern const u32 gItemIcon_AirBalloon[];
extern const u16 gItemIconPalette_AirBalloon[];
extern const u32 gItemIcon_RedCard[];
extern const u16 gItemIconPalette_RedCard[];
extern const u32 gItemIcon_RingTarget[];
extern const u16 gItemIconPalette_RingTarget[];
extern const u32 gItemIcon_BindingBand[];
extern const u16 gItemIconPalette_BindingBand[];
extern const u32 gItemIcon_EjectButton[];
extern const u16 gItemIconPalette_EjectButton[];
extern const u32 gItemIcon_WeaknessPolicy[];
extern const u16 gItemIconPalette_WeaknessPolicy[];
extern const u32 gItemIcon_AssaultVest[];
extern const u16 gItemIconPalette_AssaultVest[];
extern const u32 gItemIcon_SafetyGoggles[];
extern const u16 gItemIconPalette_SafetyGoggles[];
extern const u32 gItemIcon_AdrenalineOrb[];
extern const u16 gItemIconPalette_AdrenalineOrb[];
extern const u32 gItemIcon_TerrainExtender[];
extern const u16 gItemIconPalette_TerrainExtender[];
extern const u32 gItemIcon_ProtectivePads[];
extern const u16 gItemIconPalette_ProtectivePads[];
extern const u32 gItemIcon_ThroatSpray[];
extern const u16 gItemIconPalette_ThroatSpray[];
extern const u32 gItemIcon_EjectPack[];
extern const u16 gItemIconPalette_EjectPack[];
extern const u32 gItemIcon_HeavyDutyBoots[];
extern const u16 gItemIconPalette_HeavyDutyBoots[];
extern const u32 gItemIcon_BlunderPolicy[];
extern const u16 gItemIconPalette_BlunderPolicy[];
extern const u32 gItemIcon_RoomService[];
extern const u16 gItemIconPalette_RoomService[];
extern const u32 gItemIcon_UtilityUmbrella[];
extern const u16 gItemIconPalette_UtilityUmbrella[];

extern const u32 gItemIcon_CheriBerry[];
extern const u16 gItemIconPalette_CheriBerry[];
extern const u32 gItemIcon_ChestoBerry[];
extern const u16 gItemIconPalette_ChestoBerry[];
extern const u32 gItemIcon_PechaBerry[];
extern const u16 gItemIconPalette_PechaBerry[];
extern const u32 gItemIcon_RawstBerry[];
extern const u16 gItemIconPalette_RawstBerry[];
extern const u32 gItemIcon_AspearBerry[];
extern const u16 gItemIconPalette_AspearBerry[];
extern const u32 gItemIcon_LeppaBerry[];
extern const u16 gItemIconPalette_LeppaBerry[];
extern const u32 gItemIcon_OranBerry[];
extern const u16 gItemIconPalette_OranBerry[];
extern const u32 gItemIcon_PersimBerry[];
extern const u16 gItemIconPalette_PersimBerry[];
extern const u32 gItemIcon_LumBerry[];
extern const u16 gItemIconPalette_LumBerry[];
extern const u32 gItemIcon_SitrusBerry[];
extern const u16 gItemIconPalette_SitrusBerry[];
extern const u32 gItemIcon_FigyBerry[];
extern const u16 gItemIconPalette_FigyBerry[];
extern const u32 gItemIcon_WikiBerry[];
extern const u16 gItemIconPalette_WikiBerry[];
extern const u32 gItemIcon_MagoBerry[];
extern const u16 gItemIconPalette_MagoBerry[];
extern const u32 gItemIcon_AguavBerry[];
extern const u16 gItemIconPalette_AguavBerry[];
extern const u32 gItemIcon_IapapaBerry[];
extern const u16 gItemIconPalette_IapapaBerry[];
extern const u32 gItemIcon_RazzBerry[];
extern const u16 gItemIconPalette_RazzBerry[];
extern const u32 gItemIcon_BlukBerry[];
extern const u16 gItemIconPalette_BlukBerry[];
extern const u32 gItemIcon_NanabBerry[];
extern const u16 gItemIconPalette_NanabBerry[];
extern const u32 gItemIcon_WepearBerry[];
extern const u16 gItemIconPalette_WepearBerry[];
extern const u32 gItemIcon_PinapBerry[];
extern const u16 gItemIconPalette_PinapBerry[];
extern const u32 gItemIcon_PomegBerry[];
extern const u16 gItemIconPalette_PomegBerry[];
extern const u32 gItemIcon_KelpsyBerry[];
extern const u16 gItemIconPalette_KelpsyBerry[];
extern const u32 gItemIcon_QualotBerry[];
extern const u16 gItemIconPalette_QualotBerry[];
extern const u32 gItemIcon_HondewBerry[];
extern const u16 gItemIconPalette_HondewBerry[];
extern const u32 gItemIcon_GrepaBerry[];
extern const u16 gItemIconPalette_GrepaBerry[];
extern const u32 gItemIcon_TamatoBerry[];
extern const u16 gItemIconPalette_TamatoBerry[];
extern const u32 gItemIcon_CornnBerry[];
extern const u16 gItemIconPalette_CornnBerry[];
extern const u32 gItemIcon_MagostBerry[];
extern const u16 gItemIconPalette_MagostBerry[];
extern const u32 gItemIcon_RabutaBerry[];
extern const u16 gItemIconPalette_RabutaBerry[];
extern const u32 gItemIcon_NomelBerry[];
extern const u16 gItemIconPalette_NomelBerry[];
extern const u32 gItemIcon_SpelonBerry[];
extern const u16 gItemIconPalette_SpelonBerry[];
extern const u32 gItemIcon_PamtreBerry[];
extern const u16 gItemIconPalette_PamtreBerry[];
extern const u32 gItemIcon_WatmelBerry[];
extern const u16 gItemIconPalette_WatmelBerry[];
extern const u32 gItemIcon_DurinBerry[];
extern const u16 gItemIconPalette_DurinBerry[];
extern const u32 gItemIcon_BelueBerry[];
extern const u16 gItemIconPalette_BelueBerry[];
extern const u32 gItemIcon_ChilanBerry[];
extern const u16 gItemIconPalette_ChilanBerry[];
extern const u32 gItemIcon_OccaBerry[];
extern const u16 gItemIconPalette_OccaBerry[];
extern const u32 gItemIcon_PasshoBerry[];
extern const u16 gItemIconPalette_PasshoBerry[];
extern const u32 gItemIcon_WacanBerry[];
extern const u16 gItemIconPalette_WacanBerry[];
extern const u32 gItemIcon_RindoBerry[];
extern const u16 gItemIconPalette_RindoBerry[];
extern const u32 gItemIcon_YacheBerry[];
extern const u16 gItemIconPalette_YacheBerry[];
extern const u32 gItemIcon_ChopleBerry[];
extern const u16 gItemIconPalette_ChopleBerry[];
extern const u32 gItemIcon_KebiaBerry[];
extern const u16 gItemIconPalette_KebiaBerry[];
extern const u32 gItemIcon_ShucaBerry[];
extern const u16 gItemIconPalette_ShucaBerry[];
extern const u32 gItemIcon_CobaBerry[];
extern const u16 gItemIconPalette_CobaBerry[];
extern const u32 gItemIcon_PayapaBerry[];
extern const u16 gItemIconPalette_PayapaBerry[];
extern const u32 gItemIcon_TangaBerry[];
extern const u16 gItemIconPalette_TangaBerry[];
extern const u32 gItemIcon_ChartiBerry[];
extern const u16 gItemIconPalette_ChartiBerry[];
extern const u32 gItemIcon_KasibBerry[];
extern const u16 gItemIconPalette_KasibBerry[];
extern const u32 gItemIcon_HabanBerry[];
extern const u16 gItemIconPalette_HabanBerry[];
extern const u32 gItemIcon_ColburBerry[];
extern const u16 gItemIconPalette_ColburBerry[];
extern const u32 gItemIcon_BabiriBerry[];
extern const u16 gItemIconPalette_BabiriBerry[];
extern const u32 gItemIcon_RoseliBerry[];
extern const u16 gItemIconPalette_RoseliBerry[];
extern const u32 gItemIcon_LiechiBerry[];
extern const u16 gItemIconPalette_LiechiBerry[];
extern const u32 gItemIcon_GanlonBerry[];
extern const u16 gItemIconPalette_GanlonBerry[];
extern const u32 gItemIcon_SalacBerry[];
extern const u16 gItemIconPalette_SalacBerry[];
extern const u32 gItemIcon_PetayaBerry[];
extern const u16 gItemIconPalette_PetayaBerry[];
extern const u32 gItemIcon_ApicotBerry[];
extern const u16 gItemIconPalette_ApicotBerry[];
extern const u32 gItemIcon_LansatBerry[];
extern const u16 gItemIconPalette_LansatBerry[];
extern const u32 gItemIcon_StarfBerry[];
extern const u16 gItemIconPalette_StarfBerry[];
extern const u32 gItemIcon_EnigmaBerry[];
extern const u16 gItemIconPalette_EnigmaBerry[];
extern const u32 gItemIcon_MicleBerry[];
extern const u16 gItemIconPalette_MicleBerry[];
extern const u32 gItemIcon_CustapBerry[];
extern const u16 gItemIconPalette_CustapBerry[];
extern const u32 gItemIcon_JabocaBerry[];
extern const u16 gItemIconPalette_JabocaBerry[];
extern const u32 gItemIcon_RowapBerry[];
extern const u16 gItemIconPalette_RowapBerry[];
extern const u32 gItemIcon_KeeBerry[];
extern const u16 gItemIconPalette_KeeBerry[];
extern const u32 gItemIcon_MarangaBerry[];
extern const u16 gItemIconPalette_MarangaBerry[];

extern const u32 gItemIcon_TM[];
extern const u32 gItemIcon_HM[];
extern const u16 gItemIconPalette_NormalTMHM[];
extern const u16 gItemIconPalette_FireTMHM[];
extern const u16 gItemIconPalette_WaterTMHM[];
extern const u16 gItemIconPalette_ElectricTMHM[];
extern const u16 gItemIconPalette_GrassTMHM[];
extern const u16 gItemIconPalette_IceTMHM[];
extern const u16 gItemIconPalette_FightingTMHM[];
extern const u16 gItemIconPalette_PoisonTMHM[];
extern const u16 gItemIconPalette_GroundTMHM[];
extern const u16 gItemIconPalette_FlyingTMHM[];
extern const u16 gItemIconPalette_PsychicTMHM[];
extern const u16 gItemIconPalette_BugTMHM[];
extern const u16 gItemIconPalette_RockTMHM[];
extern const u16 gItemIconPalette_GhostTMHM[];
extern const u16 gItemIconPalette_DragonTMHM[];
extern const u16 gItemIconPalette_DarkTMHM[];
extern const u16 gItemIconPalette_SteelTMHM[];
extern const u16 gItemIconPalette_FairyTMHM[];

extern const u32 gItemIcon_OvalCharm[];
extern const u16 gItemIconPalette_OvalCharm[];
extern const u32 gItemIcon_ShinyCharm[];
extern const u16 gItemIconPalette_ShinyCharm[];
extern const u32 gItemIcon_CatchingCharm[];
extern const u16 gItemIconPalette_CatchingCharm[];
extern const u32 gItemIcon_ExpCharm[];
extern const u16 gItemIconPalette_ExpCharm[];
extern const u32 gItemIcon_GlimmeringCharm[];
extern const u16 gItemIconPalette_GlimmeringCharm[];

extern const u32 gItemIcon_RotomCatalog[];
extern const u16 gItemIconPalette_RotomCatalog[];
extern const u32 gItemIcon_Gracidea[];
extern const u16 gItemIconPalette_Gracidea[];
extern const u32 gItemIcon_RevealGlass[];
extern const u16 gItemIconPalette_RevealGlass[];
extern const u32 gItemIcon_DNASplicers[];
extern const u16 gItemIconPalette_DNASplicers[];
extern const u32 gItemIcon_ZygardeCube[];
extern const u16 gItemIconPalette_ZygardeCube[];
extern const u32 gItemIcon_PrisonBottle[];
extern const u16 gItemIconPalette_PrisonBottle[];
extern const u32 gItemIcon_NecrozmaFuser[];
extern const u16 gItemIconPalette_NSolarizer[];
extern const u16 gItemIconPalette_NLunarizer[];
extern const u32 gItemIcon_ReinsOfUnity[];
extern const u16 gItemIconPalette_ReinsOfUnity[];

extern const u32 gItemIcon_MegaRing[];
extern const u16 gItemIconPalette_MegaRing[];
extern const u32 gItemIcon_ZPowerRing[];
extern const u16 gItemIconPalette_ZPowerRing[];
extern const u32 gItemIcon_DynamaxBand[];
extern const u16 gItemIconPalette_DynamaxBand[];

extern const u32 gItemIcon_Bicycle[];
extern const u16 gItemIconPalette_Bicycle[];
extern const u32 gItemIcon_MachBike[];
extern const u16 gItemIconPalette_MachBike[];
extern const u32 gItemIcon_AcroBike[];
extern const u16 gItemIconPalette_AcroBike[];
extern const u32 gItemIcon_OldRod[];
extern const u16 gItemIconPalette_OldRod[];
extern const u32 gItemIcon_GoodRod[];
extern const u16 gItemIconPalette_GoodRod[];
extern const u32 gItemIcon_SuperRod[];
extern const u16 gItemIconPalette_SuperRod[];
extern const u32 gItemIcon_DowsingMachine[];
extern const u16 gItemIconPalette_DowsingMachine[];
extern const u32 gItemIcon_TownMap[];
extern const u16 gItemIconPalette_TownMap[];
extern const u32 gItemIcon_VsSeeker[];
extern const u16 gItemIconPalette_VsSeeker[];
extern const u32 gItemIcon_TMCase[];
extern const u16 gItemIconPalette_TMCase[];
extern const u32 gItemIcon_BerryPouch[];
extern const u16 gItemIconPalette_BerryPouch[];
extern const u32 gItemIcon_PokemonBoxLink[];
extern const u16 gItemIconPalette_PokemonBoxLink[];
extern const u32 gItemIcon_CoinCase[];
extern const u16 gItemIconPalette_CoinCase[];
extern const u32 gItemIcon_PowderJar[];
extern const u16 gItemIconPalette_PowderJar[];
extern const u32 gItemIcon_WailmerPail[];
extern const u16 gItemIconPalette_WailmerPail[];
extern const u32 gItemIcon_PokeRadar[];
extern const u16 gItemIconPalette_PokeRadar[];
extern const u32 gItemIcon_PokeblockCase[];
extern const u16 gItemIconPalette_PokeblockCase[];
extern const u32 gItemIcon_SootSack[];
extern const u16 gItemIconPalette_SootSack[];
extern const u32 gItemIcon_PokeFlute[];
extern const u16 gItemIconPalette_PokeFlute[];
extern const u32 gItemIcon_FameChecker[];
extern const u16 gItemIconPalette_FameChecker[];
extern const u32 gItemIcon_TeachyTV[];
extern const u16 gItemIconPalette_TeachyTV[];

extern const u32 gItemIcon_SSTicket[];
extern const u16 gItemIconPalette_SSTicket[];
extern const u32 gItemIcon_EonTicket[];
extern const u16 gItemIconPalette_EonTicket[];
extern const u32 gItemIcon_MysticTicket[];
extern const u16 gItemIconPalette_MysticTicket[];
extern const u32 gItemIcon_AuroraTicket[];
extern const u16 gItemIconPalette_AuroraTicket[];
extern const u32 gItemIcon_OldSeaMap[];
extern const u16 gItemIconPalette_OldSeaMap[];
extern const u32 gItemIcon_Letter[];
extern const u32 gItemIcon_DevonParts[];
extern const u16 gItemIconPalette_DevonParts[];
extern const u32 gItemIcon_GoGoggles[];
extern const u16 gItemIconPalette_GoGoggles[];
extern const u32 gItemIcon_DevonScope[];
extern const u16 gItemIconPalette_DevonScope[];
extern const u32 gItemIcon_BasementKey[];
extern const u16 gItemIconPalette_OldKey[];
extern const u32 gItemIcon_Scanner[];
extern const u16 gItemIconPalette_Scanner[];
extern const u32 gItemIcon_StorageKey[];
extern const u32 gItemIcon_KeyToRoom1[];
extern const u16 gItemIconPalette_Key[];
extern const u32 gItemIcon_KeyToRoom2[];
extern const u32 gItemIcon_KeyToRoom4[];
extern const u32 gItemIcon_KeyToRoom6[];
extern const u32 gItemIcon_Meteorite[];
extern const u16 gItemIconPalette_Meteorite[];
extern const u32 gItemIcon_MagmaEmblem[];
extern const u16 gItemIconPalette_MagmaEmblem[];
extern const u32 gItemIcon_ContestPass[];
extern const u16 gItemIconPalette_ContestPass[];
extern const u32 gItemIcon_Parcel[];
extern const u16 gItemIconPalette_Parcel[];
extern const u32 gItemIcon_SecretKey[];
extern const u16 gItemIconPalette_SecretKey[];
extern const u32 gItemIcon_BikeVoucher[];
extern const u16 gItemIconPalette_BikeVoucher[];
extern const u32 gItemIcon_GoldTeeth[];
extern const u16 gItemIconPalette_GoldTeeth[];
extern const u32 gItemIcon_CardKey[];
extern const u16 gItemIconPalette_CardKey[];
extern const u32 gItemIcon_LiftKey[];
extern const u32 gItemIcon_SilphScope[];
extern const u16 gItemIconPalette_SilphScope[];
extern const u32 gItemIcon_TriPass[];
extern const u16 gItemIconPalette_TriPass[];
extern const u32 gItemIcon_RainbowPass[];
extern const u16 gItemIconPalette_RainbowPass[];
extern const u32 gItemIcon_Tea[];
extern const u16 gItemIconPalette_Tea[];
extern const u32 gItemIcon_Gem[];
extern const u16 gItemIconPalette_Ruby[];
extern const u16 gItemIconPalette_Sapphire[];


extern const u32 gItemIcon_AbilityShield[];
extern const u16 gItemIconPalette_AbilityShield[];
extern const u32 gItemIcon_ClearAmulet[];
extern const u16 gItemIconPalette_ClearAmulet[];
extern const u32 gItemIcon_AuspiciousArmor[];
extern const u16 gItemIconPalette_AuspiciousArmor[];
extern const u32 gItemIcon_BigBambooShoot[];
extern const u16 gItemIconPalette_BigBambooShoot[];
extern const u32 gItemIcon_BoosterEnergy[];
extern const u16 gItemIconPalette_BoosterEnergy[];
extern const u32 gItemIcon_CovertCloak[];
extern const u16 gItemIconPalette_CovertCloak[];
extern const u32 gItemIcon_GimmighoulCoin[];
extern const u16 gItemIconPalette_GimmighoulCoin[];
extern const u32 gItemIcon_LeadersCrest[];
extern const u16 gItemIconPalette_LeadersCrest[];
extern const u32 gItemIcon_LoadedDice[];
extern const u16 gItemIconPalette_LoadedDice[];
extern const u32 gItemIcon_MaliciousArmor[];
extern const u16 gItemIconPalette_MaliciousArmor[];
extern const u32 gItemIcon_MirrorHerb[];
extern const u16 gItemIconPalette_MirrorHerb[];
extern const u32 gItemIcon_PunchingGlove[];
extern const u16 gItemIconPalette_PunchingGlove[];
extern const u32 gItemIcon_ScrollOfDarkness[];
extern const u16 gItemIconPalette_ScrollOfDarkness[];
extern const u32 gItemIcon_ScrollOfWaters[];
extern const u16 gItemIconPalette_ScrollOfWaters[];
extern const u32 gItemIcon_TeraOrb[];
extern const u16 gItemIconPalette_TeraOrb[];
extern const u32 gItemIcon_TinyBambooShoot[];
extern const u16 gItemIconPalette_TinyBambooShoot[];


extern const u32 gItemIcon_TeraShard[];
extern const u16 gItemIconPalette_NormalTeraShard[];
extern const u16 gItemIconPalette_FireTeraShard[];
extern const u16 gItemIconPalette_WaterTeraShard[];
extern const u16 gItemIconPalette_GrassTeraShard[];
extern const u16 gItemIconPalette_ElectricTeraShard[];
extern const u16 gItemIconPalette_IceTeraShard[];
extern const u16 gItemIconPalette_FightingTeraShard[];
extern const u16 gItemIconPalette_PoisonTeraShard[];
extern const u16 gItemIconPalette_GroundTeraShard[];
extern const u16 gItemIconPalette_FlyingTeraShard[];
extern const u16 gItemIconPalette_PsychicTeraShard[];
extern const u16 gItemIconPalette_BugTeraShard[];
extern const u16 gItemIconPalette_RockTeraShard[];
extern const u16 gItemIconPalette_GhostTeraShard[];
extern const u16 gItemIconPalette_DarkTeraShard[];
extern const u16 gItemIconPalette_DragonTeraShard[];
extern const u16 gItemIconPalette_SteelTeraShard[];
extern const u16 gItemIconPalette_FairyTeraShard[];

extern const u32 gItemIcon_StellarTeraShard[];
extern const u16 gItemIconPalette_StellarTeraShard[];

extern const u32 gItemIcon_AdamantCrystal[];
extern const u16 gItemIconPalette_AdamantCrystal[];
extern const u32 gItemIcon_GriseousCore[];
extern const u16 gItemIconPalette_GriseousCore[];
extern const u32 gItemIcon_LustrousGlobe[];
extern const u16 gItemIconPalette_LustrousGlobe[];
extern const u32 gItemIcon_BerserkGene[];
extern const u16 gItemIconPalette_BerserkGene[];

extern const u32 gItemIcon_FairyFeather[];
extern const u16 gItemIconPalette_FairyFeather[];

extern const u32 gItemIcon_Mochi[];
extern const u16 gItemIconPalette_HealthMochi[];
extern const u16 gItemIconPalette_MuscleMochi[];
extern const u16 gItemIconPalette_ResistMochi[];
extern const u16 gItemIconPalette_GeniusMochi[];
extern const u16 gItemIconPalette_CleverMochi[];
extern const u16 gItemIconPalette_SwiftMochi[];
extern const u16 gItemIconPalette_FreshStartMochi[];

extern const u32 gItemIcon_WellspringMask[];
extern const u16 gItemIconPalette_WellspringMask[];
extern const u32 gItemIcon_HearthflameMask[];
extern const u16 gItemIconPalette_HearthflameMask[];
extern const u32 gItemIcon_CornerstoneMask[];
extern const u16 gItemIconPalette_CornerstoneMask[];

extern const u32 gItemIcon_Remedy[];
extern const u16 gItemIconPalette_Remedy[];
extern const u32 gItemIcon_FineRemedy[];
extern const u16 gItemIconPalette_FineRemedy[];
extern const u32 gItemIcon_SuperbRemedy[];
extern const u16 gItemIconPalette_SuperbRemedy[];
extern const u32 gItemIcon_AuxBottle[];
extern const u16 gItemIconPalette_AuxEvasion[];
extern const u16 gItemIconPalette_AuxGuard[];
extern const u16 gItemIconPalette_AuxPower[];
extern const u32 gItemIcon_AuxPowerguard[];
extern const u16 gItemIconPalette_AuxPowerguard[];
extern const u32 gItemIcon_ChoiceDumpling[];
extern const u16 gItemIconPalette_ChoiceDumpling[];
extern const u32 gItemIcon_JubilifeMuffin[];
extern const u16 gItemIconPalette_JubilifeMuffin[];
extern const u32 gItemIcon_PokeshiDoll[];
extern const u16 gItemIconPalette_PokeshiDoll[];
extern const u32 gItemIcon_SwapSnack[];
extern const u16 gItemIconPalette_SwapSnack[];
extern const u32 gItemIcon_TwiceSpicedRadish[];
extern const u16 gItemIconPalette_TwiceSpicedRadish[];

extern const u32 gItemIcon_ReturnToFieldArrow[];
extern const u16 gItemIconPalette_ReturnToFieldArrow[];


extern const u16 gMenuInfoElements1_Pal[16];
extern const u16 gMenuInfoElements2_Pal[16];
extern const u16 gMenuInfoElements3_Pal[16];
extern const u8 gMenuInfoElements_Gfx[];


extern const u32 gBagScreen_Gfx[];
extern const u32 gBagScreen_GfxTileMap[];
extern const u16 gBagScreenFemale_Pal[];
extern const u16 gBagScreenMale_Pal[];
extern const u8 gBagMenuHMIcon_Gfx[];


extern const u32 gBagMaleTiles[];
extern const u32 gBagFemaleTiles[];
extern const u16 gBagPalette[];
extern const u32 gBerryCheckCircle_Gfx[];


extern const u32 gIntroSparkle_Gfx[];
extern const u32 gIntroFlygonSilhouette_Gfx[];
extern const u32 gIntroLightning_Gfx[];
extern const u16 gIntroLightning_Pal[];
extern const u32 gIntroCopyright_Gfx[];
extern const u32 gIntroCopyright_Tilemap[];
extern const u16 gIntroCopyright_Pal[16];
extern const u32 gIntroVolbeat_Gfx[];
extern const u16 gIntroVolbeat_Pal[];
extern const u32 gIntroTorchic_Gfx[];
extern const u16 gIntroTorchic_Pal[];
extern const u32 gIntroManectric_Gfx[];
extern const u16 gIntroManectric_Pal[];
extern const u32 gIntroBubbles_Gfx[];
extern const u16 gIntroBubbles_Pal[];
extern const u32 gIntroGroudon_Gfx[];
extern const u32 gIntroGroudon_Tilemap[];
extern const u32 gIntroLegendBg_Gfx[];
extern const u32 gIntroGroudonBg_Tilemap[];
extern const u16 gIntro3Bg_Pal[16][16];
extern const u32 gIntroKyogre_Gfx[];
extern const u32 gIntroKyogre_Tilemap[];
extern const u32 gIntroKyogreBg_Tilemap[];
extern const u32 gIntroClouds_Gfx[];
extern const u32 gIntroCloudsLeft_Tilemap[];
extern const u32 gIntroCloudsRight_Tilemap[];
extern const u32 gIntroCloudsSun_Tilemap[];
extern const u32 gIntroRayquaza_Tilemap[];
extern const u32 gIntroRayquaza_Gfx[];
extern const u32 gIntroRayquazaClouds_Gfx[];
extern const u32 gIntroRayquazaClouds_Tilemap[];
extern const u16 gIntroGameFreakTextFade_Pal[];
extern const u32 gIntroBrendan_Gfx[];
extern const u32 gIntroMay_Gfx[];
extern const u16 gIntroPlayer_Pal[];
extern const u16 gIntroFlygon_Pal[];
extern const u32 gIntroFlygon_Gfx[];


extern const u32 gPartyMenuBg_Gfx[];
extern const u32 gPartyMenuBg_Tilemap[];
extern const u16 gPartyMenuBg_Pal[];


extern const u32 gBerryPic_Cheri[];
extern const u32 gBerryPic_Chesto[];
extern const u32 gBerryPic_Pecha[];
extern const u32 gBerryPic_Rawst[];
extern const u32 gBerryPic_Aspear[];
extern const u32 gBerryPic_Leppa[];
extern const u32 gBerryPic_Oran[];
extern const u32 gBerryPic_Persim[];
extern const u32 gBerryPic_Lum[];
extern const u32 gBerryPic_Sitrus[];
extern const u32 gBerryPic_Figy[];
extern const u32 gBerryPic_Wiki[];
extern const u32 gBerryPic_Mago[];
extern const u32 gBerryPic_Aguav[];
extern const u32 gBerryPic_Iapapa[];
extern const u32 gBerryPic_Razz[];
extern const u32 gBerryPic_Bluk[];
extern const u32 gBerryPic_Nanab[];
extern const u32 gBerryPic_Wepear[];
extern const u32 gBerryPic_Pinap[];
extern const u32 gBerryPic_Pomeg[];
extern const u32 gBerryPic_Kelpsy[];
extern const u32 gBerryPic_Qualot[];
extern const u32 gBerryPic_Hondew[];
extern const u32 gBerryPic_Grepa[];
extern const u32 gBerryPic_Tamato[];
extern const u32 gBerryPic_Cornn[];
extern const u32 gBerryPic_Magost[];
extern const u32 gBerryPic_Rabuta[];
extern const u32 gBerryPic_Nomel[];
extern const u32 gBerryPic_Spelon[];
extern const u32 gBerryPic_Pamtre[];
extern const u32 gBerryPic_Watmel[];
extern const u32 gBerryPic_Durin[];
extern const u32 gBerryPic_Belue[];
extern const u32 gBerryPic_Chilan[];
extern const u32 gBerryPic_Occa[];
extern const u32 gBerryPic_Passho[];
extern const u32 gBerryPic_Wacan[];
extern const u32 gBerryPic_Rindo[];
extern const u32 gBerryPic_Yache[];
extern const u32 gBerryPic_Chople[];
extern const u32 gBerryPic_Kebia[];
extern const u32 gBerryPic_Shuca[];
extern const u32 gBerryPic_Coba[];
extern const u32 gBerryPic_Payapa[];
extern const u32 gBerryPic_Tanga[];
extern const u32 gBerryPic_Charti[];
extern const u32 gBerryPic_Kasib[];
extern const u32 gBerryPic_Haban[];
extern const u32 gBerryPic_Colbur[];
extern const u32 gBerryPic_Babiri[];
extern const u32 gBerryPic_Roseli[];
extern const u32 gBerryPic_Liechi[];
extern const u32 gBerryPic_Ganlon[];
extern const u32 gBerryPic_Salac[];
extern const u32 gBerryPic_Petaya[];
extern const u32 gBerryPic_Apicot[];
extern const u32 gBerryPic_Lansat[];
extern const u32 gBerryPic_Starf[];
extern const u32 gBerryPic_Enigma[];
extern const u32 gBerryPic_Micle[];
extern const u32 gBerryPic_Custap[];
extern const u32 gBerryPic_Jaboca[];
extern const u32 gBerryPic_Rowap[];
extern const u32 gBerryPic_Kee[];
extern const u32 gBerryPic_Maranga[];
extern const u16 gBerryPalette_Cheri[];
extern const u16 gBerryPalette_Chesto[];
extern const u16 gBerryPalette_Pecha[];
extern const u16 gBerryPalette_Rawst[];
extern const u16 gBerryPalette_Aspear[];
extern const u16 gBerryPalette_Leppa[];
extern const u16 gBerryPalette_Oran[];
extern const u16 gBerryPalette_Persim[];
extern const u16 gBerryPalette_Lum[];
extern const u16 gBerryPalette_Sitrus[];
extern const u16 gBerryPalette_Figy[];
extern const u16 gBerryPalette_Wiki[];
extern const u16 gBerryPalette_Mago[];
extern const u16 gBerryPalette_Aguav[];
extern const u16 gBerryPalette_Iapapa[];
extern const u16 gBerryPalette_Razz[];
extern const u16 gBerryPalette_Bluk[];
extern const u16 gBerryPalette_Nanab[];
extern const u16 gBerryPalette_Wepear[];
extern const u16 gBerryPalette_Pinap[];
extern const u16 gBerryPalette_Pomeg[];
extern const u16 gBerryPalette_Kelpsy[];
extern const u16 gBerryPalette_Qualot[];
extern const u16 gBerryPalette_Hondew[];
extern const u16 gBerryPalette_Grepa[];
extern const u16 gBerryPalette_Tamato[];
extern const u16 gBerryPalette_Cornn[];
extern const u16 gBerryPalette_Magost[];
extern const u16 gBerryPalette_Rabuta[];
extern const u16 gBerryPalette_Nomel[];
extern const u16 gBerryPalette_Spelon[];
extern const u16 gBerryPalette_Pamtre[];
extern const u16 gBerryPalette_Watmel[];
extern const u16 gBerryPalette_Durin[];
extern const u16 gBerryPalette_Belue[];
extern const u16 gBerryPalette_Chilan[];
extern const u16 gBerryPalette_Occa[];
extern const u16 gBerryPalette_Passho[];
extern const u16 gBerryPalette_Wacan[];
extern const u16 gBerryPalette_Rindo[];
extern const u16 gBerryPalette_Yache[];
extern const u16 gBerryPalette_Chople[];
extern const u16 gBerryPalette_Kebia[];
extern const u16 gBerryPalette_Shuca[];
extern const u16 gBerryPalette_Coba[];
extern const u16 gBerryPalette_Payapa[];
extern const u16 gBerryPalette_Tanga[];
extern const u16 gBerryPalette_Charti[];
extern const u16 gBerryPalette_Kasib[];
extern const u16 gBerryPalette_Haban[];
extern const u16 gBerryPalette_Colbur[];
extern const u16 gBerryPalette_Babiri[];
extern const u16 gBerryPalette_Roseli[];
extern const u16 gBerryPalette_Liechi[];
extern const u16 gBerryPalette_Ganlon[];
extern const u16 gBerryPalette_Salac[];
extern const u16 gBerryPalette_Petaya[];
extern const u16 gBerryPalette_Apicot[];
extern const u16 gBerryPalette_Lansat[];
extern const u16 gBerryPalette_Starf[];
extern const u16 gBerryPalette_Enigma[];
extern const u16 gBerryPalette_Micle[];
extern const u16 gBerryPalette_Custap[];
extern const u16 gBerryPalette_Jaboca[];
extern const u16 gBerryPalette_Rowap[];
extern const u16 gBerryPalette_Kee[];
extern const u16 gBerryPalette_Maranga[];


extern const u16 gPokenavCondition_Pal[];
extern const u32 gPokenavCondition_Gfx[];
extern const u32 gPokenavCondition_Tilemap[];
extern const u16 gPokenavOptions_Tilemap[];
extern const u32 gPokenavOptions_Gfx[];
extern const u16 gPokenavOptions_Pal[];
extern const u16 gPokenavLeftHeader_Pal[];
extern const u16 gPokenavHeader_Pal[];
extern const u32 gPokenavHeader_Gfx[];
extern const u32 gPokenavHeader_Tilemap[];
extern const u32 gPokenavLeftHeaderHoennMap_Gfx[];
extern const u32 gPokenavLeftHeaderMainMenu_Gfx[];
extern const u32 gPokenavLeftHeaderCondition_Gfx[];
extern const u32 gPokenavLeftHeaderRibbons_Gfx[];
extern const u32 gPokenavLeftHeaderMatchCall_Gfx[];
extern const u32 gPokenavLeftHeaderParty_Gfx[];
extern const u32 gPokenavLeftHeaderSearch_Gfx[];
extern const u32 gPokenavLeftHeaderCool_Gfx[];
extern const u32 gPokenavLeftHeaderBeauty_Gfx[];
extern const u32 gPokenavLeftHeaderCute_Gfx[];
extern const u32 gPokenavLeftHeaderSmart_Gfx[];
extern const u32 gPokenavLeftHeaderTough_Gfx[];
extern const u16 gPokenavRibbonsSummaryBg_Pal[];
extern const u32 gPokenavRibbonsSummaryBg_Gfx[];
extern const u32 gPokenavRibbonsSummaryBg_Tilemap[];

extern const u32 gSummaryScreen_Gfx[];
extern const u16 gSummaryScreen_Pal[];
extern const u32 gSummaryPage_Info_Tilemap[];
extern const u32 gSummaryPage_InfoEgg_Tilemap[];
extern const u32 gSummaryPage_Skills_Tilemap[];
extern const u32 gSummaryPage_BattleMoves_Tilemap[];
extern const u32 gSummaryPage_ContestMoves_Tilemap[];
extern const u16 gPPTextPalette[];
extern const u16 gMoveTypes_Pal[];

extern const u16 gSummaryScreen_MoveEffect_Battle_Tilemap[];
extern const u16 gSummaryScreen_MoveEffect_Contest_Tilemap[];
extern const u16 gSummaryScreen_MoveEffect_Cancel_Tilemap[];

extern const u32 gMoveTypes_Gfx[];
extern const u32 gSummaryMoveSelect_Gfx[];
extern const u16 gSummaryMoveSelect_Pal[];
extern const u32 gStatusGfx_Icons[];
extern const u16 gStatusPal_Icons[];
extern const u16 gCategoryIcons_Pal[];
extern const u32 gCategoryIcons_Gfx[];

extern const u32 gShopMenu_Gfx[];
extern const u32 gShopMenu_Tilemap[];
extern const u16 gShopMenu_Pal[];
extern const u32 gShopMenuMoney_Gfx[];

extern const u32 gBattleInterface_BallStatusBarGfx[];
extern const u8 gBattleInterface_BallDisplayGfx[];
extern const u16 gBattleInterface_BallStatusBarPal[];
extern const u16 gBattleInterface_BallDisplayPal[];
extern const u8 gHealthboxElementsGfxTable[][32];

extern const u16 gNamingScreenMenu_Pal[6][16];
extern const u32 gNamingScreenMenu_Gfx[];
extern const u32 gNamingScreenBackground_Tilemap[];
extern const u32 gNamingScreenKeyboardUpper_Tilemap[];
extern const u32 gNamingScreenKeyboardLower_Tilemap[];
extern const u32 gNamingScreenKeyboardSymbols_Tilemap[];
extern const u32 gNamingScreenPageSwapFrame_Gfx[];
extern const u32 gNamingScreenBackButton_Gfx[];
extern const u32 gNamingScreenOKButton_Gfx[];
extern const u32 gNamingScreenPageSwapButton_Gfx[];
extern const u32 gNamingScreenPageSwapUpper_Gfx[];
extern const u32 gNamingScreenPageSwapLower_Gfx[];
extern const u32 gNamingScreenPageSwapOthers_Gfx[];
extern const u32 gNamingScreenCursor_Gfx[];
extern const u32 gNamingScreenCursorSquished_Gfx[];
extern const u32 gNamingScreenCursorFilled_Gfx[];
extern const u32 gNamingScreenInputArrow_Gfx[];
extern const u32 gNamingScreenUnderscore_Gfx[];

extern const u32 gPokeblockFeedBg_Tilemap[];

extern const u32 gConfetti_Gfx[];
extern const u16 gConfetti_Pal[];

extern const u32 gBattleInterfaceGfx_BattleBar[];
extern const u32 gBattleAnimSpriteGfx_Substitute[];
extern const u32 gBattleAnimSpriteGfx_SubstituteBack[];
extern const u16 gBattleAnimSpritePal_Substitute[];
extern const u32 gHealthboxSinglesPlayerGfx[];
extern const u32 gHealthboxSinglesOpponentGfx[];
extern const u32 gHealthboxDoublesPlayerGfx[];
extern const u32 gHealthboxDoublesOpponentGfx[];
extern const u32 gHealthboxSafariGfx[];
extern const u32 gBlankGfxCompressed[];
extern const u16 gBattleInterface_BallStatusBarPal[];
extern const u16 gBattleInterface_BallDisplayPal[];

extern const u32 gSwapLineGfx[];
extern const u16 gSwapLinePal[];

extern const u32 gBattlePyramidBag_Gfx[];
extern const u16 gBattlePyramidBag_Pal[];
extern const u32 gBattlePyramidBagTilemap[];
extern const u16 gBattlePyramidBagInterface_Pal[];
extern const u16 gBattlePyramidFloor_Pal[][16];

extern const u16 gStandardMenuPalette[];

extern const u32 gTitleScreenEmeraldVersionGfx[];
extern const u32 gTitleScreenPressStartGfx[];
extern const u32 gTitleScreenPokemonLogoGfx[];
extern const u32 gTitleScreenPokemonLogoTilemap[];
extern const u32 gTitleScreenCloudsTilemap[];
extern const u16 gTitleScreenBgPalettes[];
extern const u16 gTitleScreenPressStartPal[];
extern const u16 gTitleScreenEmeraldVersionPal[];


extern const u32 gDomeTourneyInfoCard_Gfx[];
extern const u32 gDomeTourneyInfoCard_Tilemap[];
extern const u32 gDomeTourneyInfoCardBg_Tilemap[];
extern const u16 gDomeTourneyTree_Pal[];
extern const u16 gDomeTourneyTreeButtons_Pal[];
extern const u16 gDomeTourneyMatchCardBg_Pal[];
extern const u32 gDomeTourneyTree_Gfx[];
extern const u32 gDomeTourneyLine_Gfx[];
extern const u32 gDomeTourneyLineDown_Tilemap[];
extern const u32 gDomeTourneyLineUp_Tilemap[];
extern const u32 gDomeTourneyTree_Tilemap[];
extern const u32 gDomeTourneyTreeButtons_Gfx[];
extern const u16 gTilesetAnims_BattleDomePals0_0[];
extern const u16 gTilesetAnims_BattleDomePals0_1[];
extern const u16 gTilesetAnims_BattleDomePals0_2[];
extern const u16 gTilesetAnims_BattleDomePals0_3[];

extern const u32 gBattleArenaJudgmentSymbolsGfx[];
extern const u16 gBattleArenaJudgmentSymbolsPalette[];

extern const u16 gBattleWindowTextPalette[];

extern const u16 gContest2Pal[];

extern const u32 gSmokescreenImpactTiles[];
extern const u16 gSmokescreenImpactPalette[];

extern const u32 gBattleAnimSpriteGfx_Bone[];
extern const u32 gBattleAnimSpriteGfx_Spark[];
extern const u32 gBattleAnimSpriteGfx_Pencil[];
extern const u32 gBattleAnimSpriteGfx_AirWave[];
extern const u32 gBattleAnimSpriteGfx_Orb[];
extern const u32 gBattleAnimSpriteGfx_Sword[];
extern const u32 gBattleAnimSpriteGfx_Seed[];
extern const u32 gBattleAnimSpriteGfx_SeedBrown[];
extern const u32 gBattleAnimSpriteGfx_Feint[];
extern const u32 gBattleAnimSpriteGfx_Explosion6[];
extern const u32 gBattleAnimSpriteGfx_PinkOrb[];
extern const u32 gBattleAnimSpriteGfx_Gust[];
extern const u32 gBattleAnimSpriteGfx_IceCube[];
extern const u32 gBattleAnimSpriteGfx_Spark2[];
extern const u32 gBattleAnimSpriteGfx_Orange[];
extern const u32 gBattleAnimSpriteGfx_YellowBall[];
extern const u32 gBattleAnimSpriteGfx_LockOn[];
extern const u32 gBattleAnimSpriteGfx_TiedBag[];
extern const u32 gBattleAnimSpriteGfx_BlackSmoke[];
extern const u32 gBattleAnimSpriteGfx_BlackBall[];
extern const u32 gBattleAnimSpriteGfx_Conversion[];
extern const u32 gBattleAnimSpriteGfx_Glass[];
extern const u32 gBattleAnimSpriteGfx_HornHit[];
extern const u32 gBattleAnimSpriteGfx_Hit[];
extern const u32 gBattleAnimSpriteGfx_Hit[];
extern const u32 gBattleAnimSpriteGfx_BlueShards[];
extern const u32 gBattleAnimSpriteGfx_ClosingEye[];
extern const u32 gBattleAnimSpriteGfx_WavingHand[];
extern const u32 gBattleAnimSpriteGfx_HitDuplicate[];
extern const u32 gBattleAnimSpriteGfx_Leer[];
extern const u32 gBattleAnimSpriteGfx_BlueBurst[];
extern const u32 gBattleAnimSpriteGfx_SmallEmber[];
extern const u32 gBattleAnimSpriteGfx_GraySmoke[];
extern const u32 gBattleAnimSpriteGfx_BlueStar[];
extern const u32 gBattleAnimSpriteGfx_BubbleBurst[];
extern const u32 gBattleAnimSpriteGfx_Fire[];
extern const u32 gBattleAnimSpriteGfx_SpinningFire[];
extern const u32 gBattleAnimSpriteGfx_FirePlume[];
extern const u32 gBattleAnimSpriteGfx_Lightning2[];
extern const u32 gBattleAnimSpriteGfx_Lightning[];
extern const u32 gBattleAnimSpriteGfx_ClawSlash2[];
extern const u32 gBattleAnimSpriteGfx_ClawSlash[];
extern const u32 gBattleAnimSpriteGfx_Scratch3[];
extern const u32 gBattleAnimSpriteGfx_Scratch2[];
extern const u32 gBattleAnimSpriteGfx_BubbleBurst2[];
extern const u32 gBattleAnimSpriteGfx_IceChunk[];
extern const u32 gBattleAnimSpriteGfx_Glass2[];
extern const u32 gBattleAnimSpriteGfx_PinkHeart2[];
extern const u32 gBattleAnimSpriteGfx_SapDrip[];
extern const u32 gBattleAnimSpriteGfx_SapDrip[];
extern const u32 gBattleAnimSpriteGfx_Sparkle1[];
extern const u32 gBattleAnimSpriteGfx_Sparkle1[];
extern const u32 gBattleAnimSpriteGfx_HumanoidFoot[];
extern const u32 gBattleAnimSpriteGfx_MonsterFoot[];
extern const u32 gBattleAnimSpriteGfx_HumanoidHand[];
extern const u32 gBattleAnimSpriteGfx_NoiseLine[];
extern const u32 UnusedLevelupAnimationGfx[];
extern const u32 UnusedLevelupAnimationTilemap[];
extern const u32 gBattleAnimSpriteGfx_YellowUnk[];
extern const u32 gBattleAnimSpriteGfx_RedFist[];
extern const u32 gBattleAnimSpriteGfx_SlamHit[];
extern const u32 gBattleAnimSpriteGfx_Ring[];
extern const u32 gBattleAnimSpriteGfx_Rocks[];
extern const u32 gBattleAnimSpriteGfx_Z[];
extern const u32 gBattleAnimSpriteGfx_YellowUnk2[];
extern const u32 gBattleAnimSpriteGfx_AirSlash[];
extern const u32 gBattleAnimSpriteGfx_SpinningGreenOrbs[];
extern const u32 gBattleAnimSpriteGfx_Leaf[];
extern const u32 gBattleAnimSpriteGfx_Finger[];
extern const u32 gBattleAnimSpriteGfx_PoisonPowder[];
extern const u32 gBattleAnimSpriteGfx_BrownTriangle[];
extern const u32 gBattleAnimSpriteGfx_Sparkle3[];
extern const u32 gBattleAnimSpriteGfx_Sparkle4[];
extern const u32 gBattleAnimSpriteGfx_MusicNotes[];
extern const u32 gBattleAnimSpriteGfx_Duck[];
extern const u32 gBattleAnimSpriteGfx_MudSand[];
extern const u32 gBattleAnimSpriteGfx_Alert[];
extern const u32 gBattleAnimSpriteGfx_BlueFlames[];
extern const u32 gBattleAnimSpriteGfx_BlueFlames2[];
extern const u32 gBattleAnimSpriteGfx_Shock4[];
extern const u32 gBattleAnimSpriteGfx_Shock[];
extern const u32 gBattleAnimSpriteGfx_Bell2[];
extern const u32 gBattleAnimSpriteGfx_PinkGlove[];
extern const u32 gBattleAnimSpriteGfx_BlueLines[];
extern const u32 gBattleAnimSpriteGfx_Impact3[];
extern const u32 gBattleAnimSpriteGfx_Impact2[];
extern const u32 gBattleAnimSpriteGfx_Reticle[];
extern const u32 gBattleAnimSpriteGfx_Breath[];
extern const u32 gBattleAnimSpriteGfx_Anger[];
extern const u32 gBattleAnimSpriteGfx_Snowball[];
extern const u32 gBattleAnimSpriteGfx_Vine[];
extern const u32 gBattleAnimSpriteGfx_Sword2[];
extern const u32 gBattleAnimSpriteGfx_Clapping[];
extern const u32 gBattleAnimSpriteGfx_RedTube[];
extern const u32 gBattleAnimSpriteGfx_Amnesia[];
extern const u32 gBattleAnimSpriteGfx_String2[];
extern const u32 gBattleAnimSpriteGfx_Pencil2[];
extern const u32 gBattleAnimSpriteGfx_Petal[];
extern const u32 gBattleAnimSpriteGfx_BentSpoon[];
extern const u32 gBattleAnimSpriteGfx_Web[];
extern const u32 gBattleAnimSpriteGfx_MilkBottle[];
extern const u32 gBattleAnimSpriteGfx_Coin[];
extern const u32 gBattleAnimSpriteGfx_CrackedEgg[];
extern const u32 gBattleAnimSpriteGfx_HatchedEgg[];
extern const u32 gBattleAnimSpriteGfx_FreshEgg[];
extern const u32 gBattleAnimSpriteGfx_Fangs[];
extern const u32 gBattleAnimSpriteGfx_Explosion2[];
extern const u32 gBattleAnimSpriteGfx_Explosion3[];
extern const u32 gBattleAnimSpriteGfx_WaterDroplet[];
extern const u32 gBattleAnimSpriteGfx_WaterDroplet2[];
extern const u32 gBattleAnimSpriteGfx_Seed2[];
extern const u32 gBattleAnimSpriteGfx_Sprout[];
extern const u32 gBattleAnimSpriteGfx_RedWand[];
extern const u32 gBattleAnimSpriteGfx_PurpleGreenUnk[];
extern const u32 gBattleAnimSpriteGfx_WaterColumn[];
extern const u32 gBattleAnimSpriteGfx_MudUnk[];
extern const u32 gBattleAnimSpriteGfx_RainDrops[];
extern const u32 gBattleAnimSpriteGfx_FurySwipes[];
extern const u32 gBattleAnimSpriteGfx_Vine2[];
extern const u32 gBattleAnimSpriteGfx_Teeth[];
extern const u32 gBattleAnimSpriteGfx_Bone2[];
extern const u32 gBattleAnimSpriteGfx_WhiteBag[];
extern const u32 gBattleAnimSpriteGfx_Unknown[];
extern const u32 gBattleAnimSpriteGfx_PurpleCoral[];
extern const u32 gBattleAnimSpriteGfx_PurpleDroplet[];
extern const u32 gBattleAnimSpriteGfx_Shock2[];
extern const u32 gBattleAnimSpriteGfx_ClosingEye2[];
extern const u32 gBattleAnimSpriteGfx_MetalBall[];
extern const u32 gBattleAnimSpriteGfx_MonsterDoll[];
extern const u32 gBattleAnimSpriteGfx_Whirlwind[];
extern const u32 gBattleAnimSpriteGfx_Whirlwind2[];
extern const u32 gBattleAnimSpriteGfx_Explosion4[];
extern const u32 gBattleAnimSpriteGfx_Explosion5[];
extern const u32 gBattleAnimSpriteGfx_Tongue[];
extern const u32 gBattleAnimSpriteGfx_Smoke[];
extern const u32 gBattleAnimSpriteGfx_Smoke2[];
extern const u32 gBattleAnimSpriteGfx_Impact[];
extern const u32 gBattleAnimSpriteGfx_Particles[];
extern const u32 gBattleAnimSpriteGfx_Particles2[];
extern const u32 gBattleAnimSpriteGfx_CircleImpact[];
extern const u32 gBattleAnimSpriteGfx_Scratch[];
extern const u32 gBattleAnimSpriteGfx_Cut[];
extern const u32 gBattleAnimSpriteGfx_SharpTeeth[];
extern const u32 gBattleAnimSpriteGfx_RainbowRings[];
extern const u32 gBattleAnimSpriteGfx_IceCrystals[];
extern const u32 gBattleAnimSpriteGfx_IceSpikes[];
extern const u32 gBattleAnimSpriteGfx_HandsAndFeet[];
extern const u32 gBattleAnimSpriteGfx_MistCloud[];
extern const u32 gBattleAnimSpriteGfx_Clamp[];

extern const u32 gBattleAnimSpriteGfx_Bubble[];
extern const u32 gBattleAnimSpriteGfx_Orbs[];
extern const u32 gBattleAnimSpriteGfx_WaterImpact[];
extern const u32 gBattleAnimSpriteGfx_WaterOrb[];
extern const u32 gBattleAnimSpriteGfx_PoisonBubble[];
extern const u32 gBattleAnimSpriteGfx_ToxicBubble[];
extern const u32 gBattleAnimSpriteGfx_Spikes[];
extern const u32 gBattleAnimSpriteGfx_HornHit2[];
extern const u32 gBattleAnimSpriteGfx_AirWave2[];
extern const u32 gBattleAnimSpriteGfx_SmallBubbles[];
extern const u32 gBattleAnimSpriteGfx_RoundShadow[];
extern const u32 gBattleAnimSpriteGfx_Sunlight[];
extern const u32 gBattleAnimSpriteGfx_Spore[];
extern const u32 gBattleAnimSpriteGfx_Flower[];
extern const u32 gBattleAnimSpriteGfx_RazorLeaf[];
extern const u32 gBattleAnimSpriteGfx_Needle[];
extern const u32 gBattleAnimSpriteGfx_WhirlwindLines[];
extern const u32 gBattleAnimSpriteGfx_GoldRing[];
extern const u32 gBattleAnimSpriteGfx_GreenLightWall[];
extern const u32 gBattleAnimSpriteGfx_BlackBall2[];
extern const u32 gBattleAnimSpriteGfx_SparkH[];
extern const u32 gBattleAnimSpriteGfx_YellowStar[];
extern const u32 gBattleAnimSpriteGfx_LargeFreshEgg[];
extern const u32 gBattleAnimSpriteGfx_ShadowBall[];
extern const u32 gBattleAnimSpriteGfx_Lick[];
extern const u32 gBattleAnimSpriteGfx_VoidLines[];
extern const u32 gBattleAnimSpriteGfx_String[];
extern const u32 gBattleAnimSpriteGfx_WebThread[];
extern const u32 gBattleAnimSpriteGfx_SpiderWeb[];
extern const u32 gBattleAnimSpriteGfx_Lightbulb[];
extern const u32 gBattleAnimSpriteGfx_Slash[];
extern const u32 gBattleAnimSpriteGfx_FocusEnergy[];
extern const u32 gBattleAnimSpriteGfx_SphereToCube[];
extern const u32 gBattleAnimSpriteGfx_Tendrils[];
extern const u32 gBattleAnimSpriteGfx_Eye[];
extern const u32 gBattleAnimSpriteGfx_WhiteShadow[];
extern const u32 gBattleAnimSpriteGfx_TealAlert[];
extern const u32 gBattleAnimSpriteGfx_OpeningEye[];
extern const u32 gBattleAnimSpriteGfx_RoundWhiteHalo[];
extern const u32 gBattleAnimSpriteGfx_FangAttack[];
extern const u32 gBattleAnimSpriteGfx_PurpleHandOutline[];
extern const u32 gBattleAnimSpriteGfx_Moon[];
extern const u32 gBattleAnimSpriteGfx_GreenSparkle[];
extern const u32 gBattleAnimSpriteGfx_Spiral[];
extern const u32 gBattleAnimSpriteGfx_SnoreZ[];
extern const u32 gBattleAnimSpriteGfx_Explosion[];
extern const u32 gBattleAnimSpriteGfx_Nail[];
extern const u32 gBattleAnimSpriteGfx_GhostlySpirit[];
extern const u32 gBattleAnimSpriteGfx_WarmRock[];
extern const u32 gBattleAnimSpriteGfx_BreakingEgg[];
extern const u32 gBattleAnimSpriteGfx_ThinRing[];
extern const u32 gBattleAnimSpriteGfx_PunchImpact[];
extern const u32 gBattleAnimSpriteGfx_Bell[];
extern const u32 gBattleAnimSpriteGfx_MusicNotes2[];
extern const u32 gBattleAnimSpriteGfx_SpeedDust[];
extern const u32 gBattleAnimSpriteGfx_TornMetal[];
extern const u32 gBattleAnimSpriteGfx_ThoughtBubble[];
extern const u32 gBattleAnimSpriteGfx_MagentaHeart[];
extern const u32 gBattleAnimSpriteGfx_ElectricOrbs[];
extern const u32 gBattleAnimSpriteGfx_CircleOfLight[];
extern const u32 gBattleAnimSpriteGfx_Electricity[];
extern const u32 gBattleAnimSpriteGfx_Finger2[];
extern const u32 gBattleAnimSpriteGfx_MovementWaves[];
extern const u32 gBattleAnimSpriteGfx_MagentaHeart[];
extern const u32 gBattleAnimSpriteGfx_RedOrb[];
extern const u32 gBattleAnimSpriteGfx_EyeSparkle[];
extern const u32 gBattleAnimSpriteGfx_MagentaHeart[];
extern const u32 gBattleAnimSpriteGfx_Angel[];
extern const u32 gBattleAnimSpriteGfx_Devil[];
extern const u32 gBattleAnimSpriteGfx_Swipe[];
extern const u32 gBattleAnimSpriteGfx_Roots[];
extern const u32 gBattleAnimSpriteGfx_ItemBag[];
extern const u32 gBattleAnimSpriteGfx_JaggedMusicNote[];
extern const u32 gBattleAnimSpriteGfx_Pokeball[];
extern const u32 gBattleAnimSpriteGfx_Spotlight[];
extern const u32 gBattleAnimSpriteGfx_LetterZ[];
extern const u32 gBattleAnimSpriteGfx_RapidSpin[];
extern const u32 gBattleAnimSpriteGfx_TriAttackTriangle[];
extern const u32 gBattleAnimSpriteGfx_WispOrb[];
extern const u32 gBattleAnimSpriteGfx_WispFire[];
extern const u32 gBattleAnimSpriteGfx_GoldStars[];
extern const u32 gBattleAnimSpriteGfx_EclipsingOrb[];
extern const u32 gBattleAnimSpriteGfx_GrayOrb[];
extern const u32 gBattleAnimSpriteGfx_GrayOrb[];
extern const u32 gBattleAnimSpriteGfx_GrayOrb[];
extern const u32 gBattleAnimSpriteGfx_PinkPetal[];
extern const u32 gBattleAnimSpriteGfx_PainSplit[];
extern const u32 gBattleAnimSpriteGfx_Confetti[];
extern const u32 gBattleAnimSpriteGfx_GreenStar[];
extern const u32 gBattleAnimSpriteGfx_PinkCloud[];
extern const u32 gBattleAnimSpriteGfx_SweatDrop[];
extern const u32 gBattleAnimSpriteGfx_GuardRing[];
extern const u32 gBattleAnimSpriteGfx_PurpleScratch[];
extern const u32 gBattleAnimSpriteGfx_PurpleSwipe[];
extern const u32 gBattleAnimSpriteGfx_TagHand[];
extern const u32 gBattleAnimSpriteGfx_SmallRedEye[];
extern const u32 gBattleAnimSpriteGfx_HollowOrb[];
extern const u32 gBattleAnimSpriteGfx_XSign[];
extern const u32 gBattleAnimSpriteGfx_BluegreenOrb[];
extern const u32 gBattleAnimSpriteGfx_PawPrint[];
extern const u32 gBattleAnimSpriteGfx_PurpleFlame[];
extern const u32 gBattleAnimSpriteGfx_RedBall[];
extern const u32 gBattleAnimSpriteGfx_SmellingsaltEffect[];
extern const u32 gBattleAnimSpriteGfx_Meteor[];
extern const u32 gBattleAnimSpriteGfx_FlatRock[];
extern const u32 gBattleAnimSpriteGfx_MagnifyingGlass[];
extern const u32 gBattleAnimSpriteGfx_MetalSoundWaves[];
extern const u32 gBattleAnimSpriteGfx_FlyingDirt[];
extern const u32 gBattleAnimSpriteGfx_IcicleSpear[];
extern const u32 gBattleAnimSpriteGfx_Hail[];
extern const u32 gBattleAnimSpriteGfx_GlowyRedOrb[];
extern const u32 gBattleAnimSpriteGfx_GreenSpike[];
extern const u32 gBattleAnimSpriteGfx_Pokeblock[];
extern const u32 gBattleAnimSpriteGfx_WhiteFeather[];
extern const u32 gBattleAnimSpriteGfx_Sparkle6[];
extern const u32 gBattleAnimSpriteGfx_Splash[];
extern const u32 gBattleAnimSpriteGfx_SweatBead[];
extern const u32 gBattleAnimSpriteGfx_Gem1[];
extern const u32 gBattleAnimSpriteGfx_Gem2[];
extern const u32 gBattleAnimSpriteGfx_Gem3[];
extern const u32 gBattleAnimSpriteGfx_SlamHit2[];
extern const u32 gBattleAnimSpriteGfx_Recycle[];
extern const u32 gBattleAnimSpriteGfx_RedParticles[];
extern const u32 gBattleAnimSpriteGfx_Protect[];
extern const u32 gBattleAnimSpriteGfx_DirtMound[];
extern const u32 gBattleAnimSpriteGfx_Shock3[];
extern const u32 gBattleAnimSpriteGfx_WeatherBall[];
extern const u32 gBattleAnimBgTilemap_ScaryFacePlayer[];
extern const u32 gBattleAnimBgTilemap_ScaryFaceOpponent[];
extern const u32 gBattleAnimBgTilemap_ScaryFaceContest[];
extern const u32 gBattleAnimSpriteGfx_Bird[];
extern const u32 gBattleAnimSpriteGfx_CrossImpact[];
extern const u32 gBattleAnimSpriteGfx_TrumpCard[];
extern const u32 gBattleAnimSpriteGfx_TrumpCardParticles[];
extern const u32 gBattleAnimSpriteGfx_Acupressure[];
extern const u32 gBattleAnimSpriteGfx_WringOut[];
extern const u32 gBattleAnimSpriteGfx_ColoredOrbs[];
extern const u32 gBattleAnimSpriteGfx_WorrySeed[];
extern const u32 gBattleAnimSpriteGfx_SmallCloud[];
extern const u32 gBattleAnimSpriteGfx_AttackOrder[];
extern const u32 gBattleAnimSpriteGfx_DragonPulse[];
extern const u32 gBattleAnimSpriteGfx_WoodHammer[];
extern const u32 gBattleAnimSpriteGfx_PsychoCut[];
extern const u32 gBattleAnimSpriteGfx_PowerGem[];
extern const u32 gBattleAnimSpriteGfx_StoneEdge[];
extern const u32 gBattleAnimSpriteGfx_StealthRock[];
extern const u32 gBattleAnimSpriteGfx_PoisonJab[];

extern const u16 gBattleAnimSpritePal_Bone[];
extern const u16 gBattleAnimSpritePal_Spark[];
extern const u16 gBattleAnimSpritePal_Pencil[];
extern const u16 gBattleAnimSpritePal_AirWave[];
extern const u16 gBattleAnimSpritePal_Orb[];
extern const u16 gBattleAnimSpritePal_Sword[];
extern const u16 gBattleAnimSpritePal_Seed[];
extern const u16 gBattleAnimSpritePal_SeedBrown[];
extern const u16 gBattleAnimSpritePal_Feint[];
extern const u16 gBattleAnimSpritePal_Explosion6[];
extern const u16 gBattleAnimSpritePal_PinkOrb[];
extern const u16 gBattleAnimSpritePal_Gust[];
extern const u16 gBattleAnimSpritePal_IceCube[];
extern const u16 gBattleAnimSpritePal_Spark2[];
extern const u16 gBattleAnimSpritePal_Orange[];
extern const u16 gBattleAnimSpritePal_YellowBall[];
extern const u16 gBattleAnimSpritePal_LockOn[];
extern const u16 gBattleAnimSpritePal_TiedBag[];
extern const u16 gBattleAnimSpritePal_BlackSmoke[];
extern const u16 gBattleAnimSpritePal_BlackSmoke[];
extern const u16 gBattleAnimSpritePal_Conversion[];
extern const u16 gBattleAnimSpritePal_Glass[];
extern const u16 gBattleAnimSpritePal_HornHit[];
extern const u16 gBattleAnimSpritePal_Hit[];
extern const u16 gBattleAnimSpritePal_Hit2[];
extern const u16 gBattleAnimSpritePal_BlueShards[];
extern const u16 gBattleAnimSpritePal_ClosingEye[];
extern const u16 gBattleAnimSpritePal_WavingHand[];
extern const u16 gBattleAnimSpritePal_HitDuplicate[];
extern const u16 gBattleAnimSpritePal_Leer[];
extern const u16 gBattleAnimSpritePal_BlueBurst[];
extern const u16 gBattleAnimSpritePal_SmallEmber[];
extern const u16 gBattleAnimSpritePal_GraySmoke[];
extern const u16 gBattleAnimSpritePal_BlueStar[];
extern const u16 gBattleAnimSpritePal_BubbleBurst[];
extern const u16 gBattleAnimSpritePal_Fire[];
extern const u16 gBattleAnimSpritePal_Fire[];
extern const u16 gBattleAnimSpritePal_Fire[];
extern const u16 gBattleAnimSpritePal_Lightning2[];
extern const u16 gBattleAnimSpritePal_Lightning2[];
extern const u16 gBattleAnimSpritePal_ClawSlash2[];
extern const u16 gBattleAnimSpritePal_ClawSlash[];
extern const u16 gBattleAnimSpritePal_ClawSlash2[];
extern const u16 gBattleAnimSpritePal_ClawSlash2[];
extern const u16 gBattleAnimSpritePal_BubbleBurst2[];
extern const u16 gBattleAnimSpritePal_IceChunk[];
extern const u16 gBattleAnimSpritePal_Glass2[];
extern const u16 gBattleAnimSpritePal_PinkHeart2[];
extern const u16 gBattleAnimSpritePal_SapDrip[];
extern const u16 gBattleAnimSpritePal_SapDrip2[];
extern const u16 gBattleAnimSpritePal_Sparkle1[];
extern const u16 gBattleAnimSpritePal_Sparkle2[];
extern const u16 gBattleAnimSpritePal_HumanoidFoot[];
extern const u16 gBattleAnimSpritePal_HumanoidFoot[];
extern const u16 gBattleAnimSpritePal_HumanoidFoot[];
extern const u16 gBattleAnimSpritePal_HitDuplicate[];
extern const u16 gBattleAnimSpritePal_YellowUnk[];
extern const u16 gBattleAnimSpritePal_HumanoidFoot[];
extern const u16 gBattleAnimSpritePal_SlamHit[];
extern const u16 gBattleAnimSpritePal_Ring[];
extern const u16 gBattleAnimSpritePal_Rocks[];
extern const u16 gBattleAnimSpritePal_Z[];
extern const u16 gBattleAnimSpritePal_YellowUnk2[];
extern const u16 gBattleAnimSpritePal_AirSlash[];
extern const u16 gBattleAnimSpritePal_SpinningGreenOrbs[];
extern const u16 gBattleAnimSpritePal_Leaf[];
extern const u16 gBattleAnimSpritePal_Finger[];
extern const u16 gBattleAnimSpritePal_PoisonPowder[];
extern const u16 gBattleAnimSpritePal_BrownTriangle[];
extern const u16 gBattleAnimSpritePal_SleepPowder[];
extern const u16 gBattleAnimSpritePal_StunSpore[];
extern const u16 gBattleAnimSpritePal_PoisonPowder[];
extern const u16 gBattleAnimSpritePal_Sparkle3[];
extern const u16 gBattleAnimSpritePal_Sparkle3[];
extern const u16 gBattleAnimSpritePal_MusicNotes[];
extern const u16 gBattleAnimSpritePal_Duck[];
extern const u16 gBattleAnimSpritePal_MudSand[];
extern const u16 gBattleAnimSpritePal_Alert[];
extern const u16 gBattleAnimSpritePal_BlueFlames[];
extern const u16 gBattleAnimSpritePal_BlueFlames[];
extern const u16 gBattleAnimSpritePal_Shock4[];
extern const u16 gBattleAnimSpritePal_Shock4[];
extern const u16 gBattleAnimSpritePal_Bell2[];
extern const u16 gBattleAnimSpritePal_PinkGlove[];
extern const u16 gBattleAnimSpritePal_BlueLines[];
extern const u16 gBattleAnimSpritePal_Impact3[];
extern const u16 gBattleAnimSpritePal_Impact2[];
extern const u16 gBattleAnimSpritePal_Reticle[];
extern const u16 gBattleAnimSpritePal_Breath[];
extern const u16 gBattleAnimSpritePal_Anger[];
extern const u16 gBattleAnimSpritePal_Snowball[];
extern const u16 gBattleAnimSpritePal_Vine[];
extern const u16 gBattleAnimSpritePal_Sword2[];
extern const u16 gBattleAnimSpritePal_Clapping[];
extern const u16 gBattleAnimSpritePal_RedTube[];
extern const u16 gBattleAnimSpritePal_Amnesia[];
extern const u16 gBattleAnimSpritePal_String2[];
extern const u16 gBattleAnimSpritePal_Pencil2[];
extern const u16 gBattleAnimSpritePal_Petal[];
extern const u16 gBattleAnimSpritePal_BentSpoon[];
extern const u16 gBattleAnimSpritePal_String2[];
extern const u16 gBattleAnimSpritePal_MilkBottle[];
extern const u16 gBattleAnimSpritePal_Coin[];
extern const u16 gBattleAnimSpritePal_CrackedEgg[];
extern const u16 gBattleAnimSpritePal_CrackedEgg[];
extern const u16 gBattleAnimSpritePal_FreshEgg[];
extern const u16 gBattleAnimSpritePal_Fangs[];
extern const u16 gBattleAnimSpritePal_Explosion2[];
extern const u16 gBattleAnimSpritePal_Explosion2[];
extern const u16 gBattleAnimSpritePal_WaterDroplet[];
extern const u16 gBattleAnimSpritePal_WaterDroplet[];
extern const u16 gBattleAnimSpritePal_Seed2[];
extern const u16 gBattleAnimSpritePal_Seed2[];
extern const u16 gBattleAnimSpritePal_RedWand[];
extern const u16 gBattleAnimSpritePal_PurpleGreenUnk[];
extern const u16 gBattleAnimSpritePal_WaterColumn[];
extern const u16 gBattleAnimSpritePal_MudUnk[];
extern const u16 gBattleAnimSpritePal_RainDrops[];
extern const u16 gBattleAnimSpritePal_FurySwipes[];
extern const u16 gBattleAnimSpritePal_Vine2[];
extern const u16 gBattleAnimSpritePal_Teeth[];
extern const u16 gBattleAnimSpritePal_Bone2[];
extern const u16 gBattleAnimSpritePal_WhiteBag[];
extern const u16 gBattleAnimSpritePal_Unknown[];
extern const u16 gBattleAnimSpritePal_PurpleCoral[];
extern const u16 gBattleAnimSpritePal_PurpleCoral[];
extern const u16 gBattleAnimSpritePal_Shock2[];
extern const u16 gBattleAnimSpritePal_ClosingEye2[];
extern const u16 gBattleAnimSpritePal_MetalBall[];
extern const u16 gBattleAnimSpritePal_MonsterDoll[];
extern const u16 gBattleAnimSpritePal_Whirlwind[];
extern const u16 gBattleAnimSpritePal_Whirlwind[];
extern const u16 gBattleAnimSpritePal_Explosion4[];
extern const u16 gBattleAnimSpritePal_Explosion4[];
extern const u16 gBattleAnimSpritePal_Tongue[];
extern const u16 gBattleAnimSpritePal_Smoke[];
extern const u16 gBattleAnimSpritePal_Smoke[];
extern const u16 gBattleAnimSpritePal_Impact[];
extern const u16 gBattleAnimSpritePal_Particles2[];
extern const u16 gBattleAnimSpritePal_CircleImpact[];
extern const u16 gBattleAnimSpritePal_Impact[];
extern const u16 gBattleAnimSpritePal_Impact[];
extern const u16 gBattleAnimSpritePal_SharpTeeth[];
extern const u16 gBattleAnimSpritePal_RainbowRings[];
extern const u16 gBattleAnimSpritePal_IceCrystals[];
extern const u16 gBattleAnimSpritePal_IceCrystals[];
extern const u16 gBattleAnimSpritePal_HandsAndFeet[];
extern const u16 gBattleAnimSpritePal_MistCloud[];
extern const u16 gBattleAnimSpritePal_SharpTeeth[];
extern const u16 gBattleAnimSpritePal_RainDrops[];
extern const u16 gBattleAnimSpritePal_Orbs[];
extern const u16 gBattleAnimSpritePal_WaterImpact[];
extern const u16 gBattleAnimSpritePal_WaterImpact[];
extern const u16 gBattleAnimSpritePal_PoisonBubble[];
extern const u16 gBattleAnimSpritePal_PoisonBubble[];
extern const u16 gBattleAnimSpritePal_Spikes[];
extern const u16 gBattleAnimSpritePal_HornHit2[];
extern const u16 gBattleAnimSpritePal_AirWave2[];
extern const u16 gBattleAnimSpritePal_SmallBubbles[];
extern const u16 gBattleAnimSpritePal_RoundShadow[];
extern const u16 gBattleAnimSpritePal_Sunlight[];
extern const u16 gBattleAnimSpritePal_Spore[];
extern const u16 gBattleAnimSpritePal_Flower[];
extern const u16 gBattleAnimSpritePal_RazorLeaf[];
extern const u16 gBattleAnimSpritePal_Needle[];
extern const u16 gBattleAnimSpritePal_WhirlwindLines[];
extern const u16 gBattleAnimSpritePal_GoldRing[];
extern const u16 gBattleAnimSpritePal_PurpleRing[];
extern const u16 gBattleAnimSpritePal_BlueRing[];
extern const u16 gBattleAnimSpritePal_GreenLightWall[];
extern const u16 gBattleAnimSpritePal_BlueLightWall[];
extern const u16 gBattleAnimSpritePal_RedLightWall[];
extern const u16 gBattleAnimSpritePal_GrayLightWall[];
extern const u16 gBattleAnimSpritePal_OrangeLightWall[];
extern const u16 gBattleAnimSpritePal_BlackBall2[];
extern const u16 gBattleAnimSpritePal_PurpleGasCloud[];
extern const u16 gBattleAnimSpritePal_YellowStar[];
extern const u16 gBattleAnimSpritePal_LargeFreshEgg[];
extern const u16 gBattleAnimSpritePal_ShadowBall[];
extern const u16 gBattleAnimSpritePal_Lick[];
extern const u16 gBattleAnimSpritePal_VoidLines[];
extern const u16 gBattleAnimSpritePal_String[];
extern const u16 gBattleAnimSpritePal_Lightbulb[];
extern const u16 gBattleAnimSpritePal_Slash[];
extern const u16 gBattleAnimSpritePal_FocusEnergy[];
extern const u16 gBattleAnimSpritePal_SphereToCube[];
extern const u16 gBattleAnimSpritePal_Tendrils[];
extern const u16 gBattleAnimSpritePal_Eye[];
extern const u16 gBattleAnimSpritePal_WhiteShadow[];
extern const u16 gBattleAnimSpritePal_TealAlert[];
extern const u16 gBattleAnimSpritePal_OpeningEye[];
extern const u16 gBattleAnimSpritePal_RoundWhiteHalo[];
extern const u16 gBattleAnimSpritePal_FangAttack[];
extern const u16 gBattleAnimSpritePal_PurpleHandOutline[];
extern const u16 gBattleAnimSpritePal_Moon[];
extern const u16 gBattleAnimSpritePal_GreenSparkle[];
extern const u16 gBattleAnimSpritePal_Spiral[];
extern const u16 gBattleAnimSpritePal_SnoreZ[];
extern const u16 gBattleAnimSpritePal_Explosion[];
extern const u16 gBattleAnimSpritePal_Nail[];
extern const u16 gBattleAnimSpritePal_GhostlySpirit[];
extern const u16 gBattleAnimSpritePal_WarmRock[];
extern const u16 gBattleAnimSpritePal_BreakingEgg[];
extern const u16 gBattleAnimSpritePal_ThinRing[];
extern const u16 gBattleAnimSpritePal_PunchImpact[];
extern const u16 gBattleAnimSpritePal_Bell[];
extern const u16 gBattleAnimSpritePal_MusicNotes2[];
extern const u16 gBattleAnimSpritePal_SpeedDust[];
extern const u16 gBattleAnimSpritePal_ThoughtBubble[];
extern const u16 gBattleAnimSpritePal_MagentaHeart[];
extern const u16 gBattleAnimSpritePal_ElectricOrbs[];
extern const u16 gBattleAnimSpritePal_MovementWaves[];
extern const u16 gBattleAnimBgPalette_ScaryFace[];
extern const u32 gBattleAnimBgImage_ScaryFace[];
extern const u16 gBattleAnimSpritePal_RedHeart[];
extern const u16 gBattleAnimSpritePal_RedOrb[];
extern const u16 gBattleAnimSpritePal_EyeSparkle[];
extern const u16 gBattleAnimSpritePal_PinkHeart[];
extern const u32 gBattleAnimBgImage_Attract[];
extern const u16 gBattleAnimBgPalette_Attract[];
extern const u32 gBattleAnimBgTilemap_Attract[];
extern const u16 gBattleAnimSpritePal_Angel[];
extern const u16 gBattleAnimSpritePal_Devil[];
extern const u16 gBattleAnimSpritePal_Swipe[];
extern const u16 gBattleAnimSpritePal_Roots[];
extern const u16 gBattleAnimSpritePal_ItemBag[];
extern const u16 gBattleAnimSpritePal_JaggedMusicNote[];
extern const u16 gBattleAnimSpritePal_Pokeball[];
extern const u16 gBattleAnimSpritePal_LetterZ[];
extern const u16 gBattleAnimSpritePal_RapidSpin[];
extern const u16 gBattleAnimSpritePal_TriAttackTriangle[];
extern const u16 gBattleAnimSpritePal_WispOrb[];
extern const u16 gBattleAnimSpritePal_GoldStars[];
extern const u16 gBattleAnimSpritePal_EclipsingOrb[];
extern const u16 gBattleAnimSpritePal_GrayOrb[];
extern const u16 gBattleAnimSpritePal_BlueOrb[];
extern const u16 gBattleAnimSpritePal_RedOrb2[];
extern const u16 gBattleAnimSpritePal_PinkPetal[];
extern const u16 gBattleAnimSpritePal_PainSplit[];
extern const u16 gBattleAnimSpritePal_Confetti[];
extern const u16 gBattleAnimSpritePal_GreenStar[];
extern const u16 gBattleAnimSpritePal_PinkCloud[];
extern const u16 gBattleAnimSpritePal_SweatDrop[];
extern const u16 gBattleAnimSpritePal_GuardRing[];
extern const u32 gCureBubblesGfx[];
extern const u16 gCureBubblesPal[];
extern const u32 gCureBubblesTilemap[];
extern const u16 gBattleAnimSpritePal_PurpleScratch[];
extern const u16 gBattleAnimSpritePal_SmallRedEye[];
extern const u16 gBattleAnimSpritePal_HollowOrb[];
extern const u16 gBattleAnimSpritePal_BluegreenOrb[];
extern const u16 gBattleAnimSpritePal_PawPrint[];
extern const u16 gBattleAnimSpritePal_PurpleFlame[];
extern const u16 gBattleAnimSpritePal_RedBall[];
extern const u16 gBattleAnimSpritePal_SmellingsaltEffect[];
extern const u16 gBattleAnimSpritePal_Meteor[];
extern const u16 gBattleAnimSpritePal_FlatRock[];
extern const u16 gBattleAnimSpritePal_MagnifyingGlass[];
extern const u16 gBattleAnimSpritePal_BrownOrb[];
extern const u16 gBattleAnimSpritePal_MetalSoundWaves[];
extern const u16 gBattleAnimSpritePal_FlyingDirt[];
extern const u16 gBattleAnimSpritePal_Windstorm[];
extern const u16 gBattleAnimSpritePal_IcicleSpear[];
extern const u16 gBattleAnimSpritePal_Hail[];
extern const u16 gBattleAnimSpritePal_GlowyRedOrb[];
extern const u16 gBattleAnimSpritePal_GlowyGreenOrb[];
extern const u16 gBattleAnimSpritePal_GreenSpike[];
extern const u16 gBattleAnimSpritePal_WhiteCircleOfLight[];
extern const u16 gBattleAnimSpritePal_GlowyBlueOrb[];
extern const u16 gBattleAnimSpritePal_Pokeblock[];
extern const u16 gBattleAnimSpritePal_WhiteFeather[];
extern const u16 gBattleAnimSpritePal_Sparkle6[];
extern const u16 gBattleAnimSpritePal_Splash[];
extern const u16 gBattleAnimSpritePal_Gem1[];
extern const u16 gBattleAnimSpritePal_SlamHit2[];
extern const u16 gBattleAnimSpritePal_Recycle[];
extern const u16 gBattleAnimSpritePal_RedParticles[];
extern const u16 gBattleAnimSpritePal_Protect[];
extern const u16 gBattleAnimSpritePal_DirtMound[];
extern const u16 gBattleAnimSpritePal_Shock3[];
extern const u16 gBattleAnimSpritePal_WeatherBall[];
extern const u16 gBattleAnimSpritePal_Bird[];
extern const u16 gBattleAnimSpritePal_CrossImpact[];
extern const u16 gBattleAnimSpritePal_Slash2[];
extern const u16 gBattleAnimSpritePal_WhipHit[];
extern const u16 gBattleAnimSpritePal_BlueRing2[];
extern const u16 gBattleAnimSpritePal_TrumpCard[];
extern const u16 gBattleAnimSpritePal_TrumpCardParticles[];
extern const u16 gBattleAnimSpritePal_Acupressure[];
extern const u16 gBattleAnimSpritePal_WringOut[];
extern const u16 gBattleAnimSpritePal_ColoredOrbs[];
extern const u16 gBattleAnimSpritePal_WorrySeed[];
extern const u16 gBattleAnimSpritePal_SmallCloud[];
extern const u16 gBattleAnimSpritePal_AttackOrder[];
extern const u16 gBattleAnimSpritePal_DragonPulse[];
extern const u16 gBattleAnimSpritePal_WoodHammer[];
extern const u16 gBattleAnimSpritePal_PsychoCut[];
extern const u16 gBattleAnimSpritePal_PowerGem[];
extern const u16 gBattleAnimSpritePal_StoneEdge[];
extern const u16 gBattleAnimSpritePal_StealthRock[];
extern const u16 gBattleAnimSpritePal_PoisonJab[];

extern const u32 gBattleAnimSpriteGfx_WhiteStreak[];
extern const u16 gBattleAnimSpritePal_WhiteStreak[];
extern const u32 gBattleAnimSpriteGfx_PurpleJab[];
extern const u16 gBattleAnimSpritePal_PurpleJab[];
extern const u16 gBattleAnimSpritePal_ToxicSpikes[];
extern const u32 gBattleAnimSpriteGfx_EnergyBall[];
extern const u16 gBattleAnimSpritePal_EnergyBall[];
extern const u32 gBattleAnimSpriteGfx_MegaStone[];
extern const u16 gBattleAnimSpritePal_MegaStone[];
extern const u32 gBattleAnimSpriteGfx_MegaParticles[];
extern const u16 gBattleAnimSpritePal_MegaParticles[];
extern const u32 gBattleAnimSpriteGfx_MegaSymbol[];
extern const u16 gBattleAnimSpritePal_MegaSymbol[];
extern const u32 gBattleAnimSpriteGfx_TeraSymbol[];
extern const u16 gBattleAnimSpritePal_TeraSymbol[];
extern const u32 gBattleAnimSpriteGfx_FlashCannonBall[];
extern const u16 gBattleAnimSpritePal_FlashCannonBall[];
extern const u32 gBattleAnimSpriteGfx_WaterGun[];
extern const u16 gBattleAnimSpritePal_WaterGun[];
extern const u32 gBattleAnimSpriteGfx_Punishment[];
extern const u16 gBattleAnimSpritePal_Punishment[];
extern const u32 gBattleAnimSpriteGfx_QuickGuard[];
extern const u16 gBattleAnimSpritePal_QuickGuard[];
extern const u32 gBattleAnimSpriteGfx_TeraCrystal[];
extern const u16 gBattleAnimSpritePal_TeraCrystal[];
extern const u32 gBattleAnimSpriteGfx_TeraShatter[];
extern const u16 gBattleAnimSpritePal_TeraShatter[];
extern const u32 gBattleAnimSpriteGfx_TatsugiriCurly[];
extern const u16 gBattleAnimSpritePal_TatsugiriCurly[];
extern const u32 gBattleAnimSpriteGfx_TatsugiriDroopy[];
extern const u16 gBattleAnimSpritePal_TatsugiriDroopy[];
extern const u32 gBattleAnimSpriteGfx_TatsugiriStretchy[];
extern const u16 gBattleAnimSpritePal_TatsugiriStretchy[];


extern const u32 gBattleAnimSpriteGfx_AlphaStone[];
extern const u16 gBattleAnimSpritePal_AlphaStone[];
extern const u32 gBattleAnimSpriteGfx_AlphaSymbol[];
extern const u16 gBattleAnimSpritePal_AlphaSymbol[];
extern const u32 gBattleAnimSpriteGfx_Anchor[];
extern const u32 gBattleAnimSpriteGfx_Apple[];
extern const u16 gBattleAnimSpritePal_Apple[];
extern const u32 gBattleAnimSpriteGfx_Arrows[];
extern const u32 gBattleAnimSpriteGfx_AssuranceHand[];
extern const u16 gBattleAnimSpritePal_AssuranceHand[];
extern const u32 gBattleAnimSpriteGfx_AuraSphere[];
extern const u16 gBattleAnimSpritePal_AuraSphere[];
extern const u16 gBattleAnimSpritePal_AvalancheRocks[];
extern const u32 gBattleAnimSpriteGfx_NewPokeball[];
extern const u16 gBattleAnimSpritePal_NewPokeball[];
extern const u32 gBattleAnimSpriteGfx_Beam[];
extern const u16 gBattleAnimSpritePal_Beam[];
extern const u32 gBattleAnimSpriteGfx_BerryEaten[];
extern const u16 gBattleAnimSpritePal_BerryEaten[];
extern const u32 gBattleAnimSpriteGfx_BerryNormal[];
extern const u16 gBattleAnimSpritePal_BerryNormal[];
extern const u32 gBattleAnimSpriteGfx_BigRock[];
extern const u16 gBattleAnimSpritePal_BigRock[];
extern const u32 gBattleAnimSpriteGfx_BlacephalonHead[];
extern const u16 gBattleAnimSpritePal_BlacephalonHead[];
extern const u32 gBattleAnimSpriteGfx_BloodMoon[];
extern const u16 gBattleAnimSpritePal_BloodMoon[];
extern const u16 gBattleAnimSpritePal_BlueFlare[];
extern const u32 gBattleAnimSpriteGfx_Branch[];
extern const u16 gBattleAnimSpritePal_Branch[];
extern const u32 gBattleAnimSpriteGfx_Brine[];
extern const u16 gBattleAnimSpritePal_Brine[];
extern const u32 gBattleAnimSpriteGfx_ChainLink[];
extern const u16 gBattleAnimSpritePal_ChainLink[];
extern const u32 gBattleAnimSpriteGfx_Chop[];
extern const u16 gBattleAnimSpritePal_Chop[];
extern const u32 gBattleAnimSpriteGfx_Cacoon[];
extern const u16 gBattleAnimSpritePal_Cacoon[];
extern const u32 gBattleAnimSpriteGfx_Confide[];
extern const u16 gBattleAnimSpritePal_Confide[];
extern const u32 gBattleAnimSpriteGfx_CraftyShield[];
extern const u16 gBattleAnimSpritePal_CraftyShield[];
extern const u32 gBattleAnimSpriteGfx_NewNail[];
extern const u16 gBattleAnimSpritePal_NewNail[];
extern const u16 gBattleAnimSpritePal_DracoMeteor[];
extern const u32 gBattleAnimSpriteGfx_DragonPulseRing[];
extern const u16 gBattleAnimSpritePal_DragonPulseRing[];
extern const u32 gBattleAnimSpriteGfx_DreepyMissile[];
extern const u16 gBattleAnimSpritePal_DreepyMissile[];
extern const u32 gBattleAnimSpriteGfx_DreepyMissileShiny[];
extern const u16 gBattleAnimSpritePal_DreepyMissileShiny[];
extern const u32 gBattleAnimSpriteGfx_Drill[];
extern const u16 gBattleAnimSpritePal_Drill[];
extern const u32 gBattleAnimSpriteGfx_NewEmbers[];
extern const u16 gBattleAnimSpritePal_NewEmbers[];
extern const u32 gBattleAnimSpriteGfx_FairyLockChains[];
extern const u32 gBattleAnimSpriteGfx_Fishies[];
extern const u16 gBattleAnimSpritePal_Fishies[];
extern const u32 gBattleAnimSpriteGfx_NewFly[];
extern const u16 gBattleAnimSpritePal_NewFly[];
extern const u16 gBattleAnimSpritePal_FusionFlare[];
extern const u16 gBattleAnimSpritePal_GarbagePoisonPillar[];
extern const u32 gBattleAnimSpriteGfx_Gear[];
extern const u16 gBattleAnimSpritePal_Gear[];
extern const u32 gBattleAnimSpriteGfx_GigavoltHavocSpear[];
extern const u16 gBattleAnimSpritePal_GigavoltHavocSpear[];
extern const u32 gBattleAnimSpriteGfx_GoldenApple[];
extern const u16 gBattleAnimSpritePal_GoldenApple[];
extern const u16 gBattleAnimSpritePal_GreenDrake[];
extern const u32 gBattleAnimSpriteGfx_NewGreenStar[];
extern const u16 gBattleAnimSpritePal_NewGreenStar[];
extern const u32 gBattleAnimSpriteGfx_HeartStamp[];
extern const u16 gBattleAnimSpritePal_HeartStamp[];
extern const u32 gBattleAnimSpriteGfx_ZygardeHexes[];
extern const u16 gBattleAnimSpritePal_ZygardeHexes[];
extern const u32 gBattleAnimSpriteGfx_HoopaHand[];
extern const u16 gBattleAnimSpritePal_HoopaHand[];
extern const u32 gBattleAnimSpriteGfx_HoopaRing[];
extern const u16 gBattleAnimSpritePal_HoopaRing[];
extern const u32 gBattleAnimSpriteGfx_NewHornHit[];
extern const u16 gBattleAnimSpritePal_NewHornHit[];
extern const u32 gBattleAnimSpriteGfx_HornLeech[];
extern const u16 gBattleAnimSpritePal_HornLeech[];
extern const u32 gBattleAnimSpriteGfx_HorseshoeFist[];
extern const u16 gBattleAnimSpritePal_HorseshoeFist[];
extern const u32 gBattleAnimSpriteGfx_HydroPump[];
extern const u16 gBattleAnimSpritePal_HydroPump[];
extern const u32 gBattleAnimSpriteGfx_IceRock[];
extern const u16 gBattleAnimSpritePal_IceRock[];
extern const u32 gBattleAnimSpriteGfx_LargeSpike[];
extern const u16 gBattleAnimSpritePal_LargeSpike[];
extern const u32 gBattleAnimSpriteGfx_NewLeaf[];
extern const u16 gBattleAnimSpritePal_NewLeaf[];
extern const u32 gBattleAnimSpriteGfx_NewLeechSeed[];
extern const u16 gBattleAnimSpritePal_NewLeechSeed[];
extern const u32 gBattleAnimSpriteGfx_LightningRain[];
extern const u16 gBattleAnimSpritePal_LightningRain[];
extern const u32 gBattleAnimSpriteGfx_NewEye[];
extern const u16 gBattleAnimSpritePal_NewEye[];
extern const u32 gBattleAnimSpriteGfx_MetalBits[];
extern const u32 gBattleAnimSpriteGfx_MudBomb[];
extern const u16 gBattleAnimSpritePal_MudBomb[];
extern const u32 gBattleAnimSpriteGfx_Mushroom[];
extern const u16 gBattleAnimSpritePal_Mushroom[];
extern const u16 gBattleAnimSpritePal_NaturalGiftRing[];
extern const u32 gBattleAnimSpriteGfx_NecrozmaStar[];
extern const u16 gBattleAnimSpritePal_NecrozmaStar[];
extern const u16 gBattleAnimSpritePal_NewImpact[];
extern const u32 gBattleAnimSpriteGfx_Obstruct[];
extern const u16 gBattleAnimSpritePal_Obstruct[];
extern const u32 gBattleAnimSpriteGfx_OmegaStone[];
extern const u16 gBattleAnimSpritePal_OmegaStone[];
extern const u32 gBattleAnimSpriteGfx_OmegaSymbol[];
extern const u16 gBattleAnimSpritePal_OmegaSymbol[];
extern const u32 gBattleAnimSpriteGfx_PinkDiamond[];
extern const u16 gBattleAnimSpritePal_PinkDiamond[];
extern const u32 gBattleAnimSpriteGfx_PoisonColumn[];
extern const u16 gBattleAnimSpritePal_PoisonColumn[];
extern const u32 gBattleAnimSpriteGfx_PowerTrick[];
extern const u16 gBattleAnimSpritePal_PowerTrick[];
extern const u32 gBattleAnimSpriteGfx_PurpleChain[];
extern const u16 gBattleAnimSpritePal_PurpleChain[];
extern const u32 gBattleAnimSpriteGfx_PurpleDrake[];
extern const u16 gBattleAnimSpritePal_PurpleDrake[];
extern const u32 gBattleAnimSpriteGfx_QuickGuard[];
extern const u16 gBattleAnimSpritePal_QuickGuard[];
extern const u32 gBattleAnimSpriteGfx_RazorShell[];
extern const u16 gBattleAnimSpritePal_RazorShell[];
extern const u32 gBattleAnimSpriteGfx_RedExplosion[];
extern const u16 gBattleAnimSpritePal_RedExplosion[];
extern const u32 gBattleAnimSpriteGfx_RocksSmall[];
extern const u32 gBattleAnimSpriteGfx_NewRocks[];
extern const u16 gBattleAnimSpritePal_NewRocks[];
extern const u32 gBattleAnimSpriteGfx_ShellLeft[];
extern const u16 gBattleAnimSpritePal_ShellLeft[];
extern const u32 gBattleAnimSpriteGfx_ShellRight[];
extern const u16 gBattleAnimSpritePal_SpacialRendSlices[];
extern const u32 gBattleAnimSpriteGfx_NewSpikes[];
extern const u16 gBattleAnimSpritePal_NewSpikes[];
extern const u32 gBattleAnimSpriteGfx_SpiritShackleArrow[];
extern const u16 gBattleAnimSpritePal_SpiritShackleArrow[];
extern const u32 gBattleAnimSpriteGfx_SteamEruption[];
extern const u16 gBattleAnimSpritePal_SteamEruption[];
extern const u32 gBattleAnimSpriteGfx_Steamroller[];
extern const u16 gBattleAnimSpritePal_Steamroller[];
extern const u32 gBattleAnimSpriteGfx_StonePillar[];
extern const u16 gBattleAnimSpritePal_StonePillar[];
extern const u32 gBattleAnimSpriteGfx_StraightBeam[];
extern const u16 gBattleAnimSpritePal_StraightBeam[];
extern const u16 gBattleAnimSpritePal_Poltergeist[];
extern const u16 gBattleAnimSpritePal_NewSurf[];
extern const u32 gBattleAnimSpriteGfx_NewSword[];
extern const u16 gBattleAnimSpritePal_NewSword[];
extern const u32 gBattleAnimSpriteGfx_NewTeeth[];
extern const u16 gBattleAnimSpritePal_NewTeeth[];
extern const u32 gBattleAnimSpriteGfx_NewHandsAndFeet[];
extern const u16 gBattleAnimSpritePal_NewHandsAndFeet[];
extern const u32 gBattleAnimSpriteGfx_Tornado[];
extern const u16 gBattleAnimSpritePal_Tornado[];
extern const u32 gBattleAnimSpriteGfx_ZMoveSymbol[];
extern const u16 gBattleAnimSpritePal_ZMoveSymbol[];
extern const u32 gBattleAnimSpriteGfx_Teapot[];
extern const u16 gBattleAnimSpritePal_Teapot[];
extern const u32 gBattleAnimSpriteGfx_WoodHammerHammer[];
extern const u16 gBattleAnimSpritePal_WoodHammerHammer[];
extern const u32 gBattleAnimSpriteGfx_Snowflakes[];
extern const u16 gBattleAnimSpritePal_Snowflakes[];
extern const u32 gBattleAnimSpriteGfx_SyrupBlob[];
extern const u32 gBattleAnimSpriteGfx_SyrupShell[];
extern const u32 gBattleAnimSpriteGfx_SyrupSplat[];
extern const u16 gBattleAnimSpritePal_SyrupRed[];
extern const u16 gBattleAnimSpritePal_SyrupYellow[];
extern const u32 gBattleAnimSpriteGfx_IvyCudgel[];
extern const u16 gBattleAnimSpritePal_IvyCudgelGrass[];
extern const u16 gBattleAnimSpritePal_IvyCudgelFire[];
extern const u16 gBattleAnimSpritePal_IvyCudgelRock[];
extern const u16 gBattleAnimSpritePal_IvyCudgelWater[];
extern const u32 gBattleAnimSpriteGfx_PinkVioletOrb[];
extern const u16 gBattleAnimSpritePal_PinkVioletOrb[];
extern const u32 gBattleAnimSpriteGfx_TeraStarstormBeam[];
extern const u16 gBattleAnimSpritePal_TeraStarstormBeam[];
extern const u32 gBattleAnimSpriteGfx_SaltParticle[];
extern const u16 gBattleAnimSpritePal_SaltParticle[];

extern const u32 gBattleAnimBgImage_Dark[];
extern const u32 gBattleAnimBgImage_Ghost[];
extern const u32 gBattleAnimBgImage_Psychic[];
extern const u32 gBattleAnimBgImage_Impact[];
extern const u32 gBattleAnimBgImage_Drill[];
extern const u32 gBattleAnimBgImage_Highspeed[];
extern const u32 gBattleAnimBgImage_Thunder[];
extern const u32 gBattleAnimBgImage_Guillotine[];
extern const u32 gBattleAnimBgImage_Ice[];
extern const u32 gBattleAnimBgImage_Cosmic[];
extern const u32 gBattleAnimBgImage_InAir[];
extern const u32 gBattleAnimBgImage_Aurora[];
extern const u32 gBattleAnimBgImage_Fissure[];
extern const u32 gBattleAnimBgImage_TrickRoom[];
extern const u32 gBattleAnimBgImage_Hurricane[];
extern const u16 gBattleAnimBgPalette_Hurricane[];
extern const u32 gBattleAnimBgTilemap_Hurricane[];
extern const u16 gBattleAnimBgPalette_RockWrecker[];
extern const u32 gBattleAnimBgTilemap_GigaImpactPlayer[];
extern const u32 gBattleAnimBgTilemap_GigaImpactOpponent[];
extern const u32 gBattleAnimBgTilemap_GigaImpactContest[];
extern const u32 gBattleAnimBgImage_GigaImpact[];
extern const u32 gBattleAnimBgImage_GigaImpactContest[];
extern const u16 gBattleAnimBgPalette_GigaImpact[];
extern const u32 gBattleAnimBgImage_SpacialRend[];
extern const u16 gBattleAnimBgPalette_SpacialRend[];
extern const u16 gBattleAnimBgPalette_DarkVoid[];
extern const u32 gBattleAnimBgTilemap_DarkVoid[];
extern const u16 gBattleAnimBgPalette_Dark[];
extern const u16 gBattleAnimBgPalette_Ghost[];
extern const u16 gBattleAnimBgPalette_Psychic[];
extern const u16 gBattleAnimBgPalette_Impact[];
extern const u16 gBattleAnimBgPalette_Drill[];
extern const u16 gBattleAnimBgPalette_Highspeed[];
extern const u16 gBattleAnimBgPalette_Thunder[];
extern const u16 gBattleAnimBgPalette_Guillotine[];
extern const u16 gBattleAnimBgPalette_Ice[];
extern const u16 gBattleAnimBgPalette_Cosmic[];
extern const u16 gBattleAnimBgPalette_InAir[];
extern const u16 gBattleAnimBgPalette_Sky[];
extern const u16 gBattleAnimBgPalette_Aurora[];
extern const u16 gBattleAnimBgPalette_Fissure[];
extern const u16 gBattleAnimBgPalette_Bug[];
extern const u16 gBattleAnimBgPalette_SolarBeam[];
extern const u16 gBattleAnimBgPalette_MagmaStorm[];
extern const u16 gBattleAnimBgPalette_TrickRoom[];
extern const u32 gBattleAnimBgTilemap_Dark[];
extern const u32 gBattleAnimBgTilemap_Ghost[];
extern const u32 gBattleAnimBgTilemap_Psychic[];
extern const u32 gBattleAnimBgTilemap_ImpactOpponent[];
extern const u32 gBattleAnimBgTilemap_ImpactPlayer[];
extern const u32 gBattleAnimBgTilemap_ImpactContests[];
extern const u32 gBattleAnimBgTilemap_Drill[];
extern const u32 gBattleAnimBgTilemap_DrillContests[];
extern const u32 gBattleAnimBgTilemap_HighspeedOpponent[];
extern const u32 gBattleAnimBgTilemap_HighspeedPlayer[];
extern const u32 gBattleAnimBgTilemap_TrickRoom[];
extern const u32 gBattleAnimMaskImage_LightBeam[];
extern const u16 gBattleAnimMaskPalette_LightBeam[];
extern const u32 gBattleAnimMaskTilemap_LightBeam[];
extern const u32 gBattleAnimBgTilemap_Thunder[];
extern const u32 gBattleAnimBgTilemap_GuillotineOpponent[];
extern const u32 gBattleAnimBgTilemap_GuillotinePlayer[];
extern const u32 gBattleAnimBgTilemap_GuillotineContests[];
extern const u32 gBattleAnimBgTilemap_Ice[];
extern const u32 gBattleAnimBgTilemap_Cosmic[];
extern const u32 gBattleAnimBgTilemap_InAir[];
extern const u32 gBattleAnimBgTilemap_Aurora[];
extern const u32 gBattleAnimBgTilemap_Fissure[];
extern const u16 gBattleAnimBgPalette_SludgeWave[];
extern const u32 gBattleAnimBgImage_Aeroblast[];
extern const u16 gBattleAnimBgPalette_Aeroblast[];
extern const u32 gBattleAnimBgTilemap_Aeroblast[];
extern const u16 gBattleAnimBgPalette_AuraSphere[];
extern const u32 gBattleAnimBgImage_BlackholeEclipse[];
extern const u16 gBattleAnimBgPalette_BlackholeEclipse[];
extern const u32 gBattleAnimBgTilemap_BlackholeEclipse[];
extern const u32 gBattleAnimBgImage_BloomDoom[];
extern const u16 gBattleAnimBgPalette_BloomDoom[];
extern const u32 gBattleAnimBgTilemap_BloomDoom[];
extern const u32 gBattleAnimBgImage_BoltStrike[];
extern const u16 gBattleAnimBgPalette_BoltStrike[];
extern const u32 gBattleAnimBgTilemap_BoltStrike[];
extern const u32 gBattleAnimBgImage_ClangorousSoulblaze[];
extern const u16 gBattleAnimBgPalette_ClangorousSoulblaze[];
extern const u32 gBattleAnimBgTilemap_ClangorousSoulblaze[];
extern const u16 gBattleAnimBgPalette_DynamaxCannon[];
extern const u32 gBattleAnimBgImage_ElectricTerrain[];
extern const u16 gBattleAnimBgPalette_ElectricTerrain[];
extern const u32 gBattleAnimBgTilemap_ElectricTerrain[];
extern const u32 gBattleAnimBgImage_Fire1[];
extern const u16 gBattleAnimBgPalette_Fire1[];
extern const u32 gBattleAnimBgTilemap_Fire1[];
extern const u16 gBattleAnimBgPalette_Fire2[];
extern const u32 gBattleAnimBgImage_FocusBlast[];
extern const u16 gBattleAnimBgPalette_FocusBlast[];
extern const u32 gBattleAnimBgTilemap_FocusBlast[];
extern const u16 gBattleAnimBgPalette_GarbageFalls[];
extern const u32 gBattleAnimBgImage_GrassyTerrain[];
extern const u16 gBattleAnimBgPalette_GrassyTerrain[];
extern const u32 gBattleAnimBgTilemap_GrassyTerrain[];
extern const u16 gBattleAnimBgPalette_GunkShot[];
extern const u32 gBattleAnimBgImage_HydroCannon[];
extern const u16 gBattleAnimBgPalette_HydroCannon[];
extern const u32 gBattleAnimBgTilemap_HydroCannon[];
extern const u16 gBattleAnimBgPalette_Chloroblast[];
extern const u32 gBattleAnimBgImage_HydroPump[];
extern const u16 gBattleAnimBgPalette_HydroPump[];
extern const u32 gBattleAnimBgTilemap_HydroPump[];
extern const u16 gBattleAnimBgPalette_HyperBeam[];
extern const u16 gBattleAnimBgPalette_HyperspaceFury[];
extern const u32 gBattleAnimBgImage_InfernoOverdrive[];
extern const u16 gBattleAnimBgPalette_InfernoOverdrive[];
extern const u32 gBattleAnimBgTilemap_InfernoOverdrive[];
extern const u32 gBattleAnimBgImage_LeafStorm[];
extern const u16 gBattleAnimBgPalette_LeafStorm[];
extern const u32 gBattleAnimBgTilemap_LeafStorm[];
extern const u16 gBattleAnimBgPalette_MagicRoom[];
extern const u32 gBattleAnimBgImage_MaliciousMoonsault[];
extern const u16 gBattleAnimBgPalette_MaliciousMoonsault[];
extern const u32 gBattleAnimBgTilemap_MaliciousMoonsault[];
extern const u32 gBattleAnimBgImage_MaxLightning[];
extern const u16 gBattleAnimBgPalette_MaxLightning[];
extern const u32 gBattleAnimBgTilemap_MaxLightning[];
extern const u32 gBattleAnimBgImage_MistyTerrain[];
extern const u16 gBattleAnimBgPalette_MistyTerrain[];
extern const u32 gBattleAnimBgTilemap_MistyTerrain[];
extern const u32 gBattleAnimBgImage_NeverendingNightmare[];
extern const u16 gBattleAnimBgPalette_NeverendingNightmare[];
extern const u32 gBattleAnimBgTilemap_NeverendingNightmare[];
extern const u32 gBattleAnimBgImage_Nightmare[];
extern const u16 gBattleAnimBgPalette_Nightmare[];
extern const u32 gBattleAnimBgTilemap_Nightmare[];
extern const u16 gBattleAnimBgPalette_PoisonFalls[];
extern const u16 gBattleAnimBgPalette_PsychicNew[];
extern const u32 gBattleAnimBgImage_PsychicTerrain[];
extern const u16 gBattleAnimBgPalette_PsychicTerrain[];
extern const u32 gBattleAnimBgTilemap_PsychicTerrain[];
extern const u32 gBattleAnimBgImage_ShatteredPsyche[];
extern const u16 gBattleAnimBgPalette_ShatteredPsyche[];
extern const u32 gBattleAnimBgTilemap_ShatteredPsyche[];
extern const u32 gBattleAnimBgImage_RockField[];
extern const u16 gBattleAnimBgPalette_RockDay[];
extern const u32 gBattleAnimBgTilemap_RockField[];
extern const u16 gBattleAnimBgPalette_RockAfternoon[];
extern const u16 gBattleAnimBgPalette_RockNight[];
extern const u32 gBattleAnimBgImage_SnuggleForever[];
extern const u16 gBattleAnimBgPalette_SnuggleForever[];
extern const u32 gBattleAnimBgTilemap_SnuggleForever[];
extern const u32 gBattleAnimBgImage_SoulStealing7StarStrike[];
extern const u16 gBattleAnimBgPalette_SoulStealing7StarStrike[];
extern const u32 gBattleAnimBgTilemap_SoulStealing7StarStrike[];
extern const u16 gBattleAnimBgPalette_TectonicRage[];
extern const u32 gBattleAnimBgImage_TwinkleTackle[];
extern const u16 gBattleAnimBgPalette_TwinkleTackle[];
extern const u32 gBattleAnimBgTilemap_TwinkleTackle[];
extern const u32 gBattleAnimBgImage_WaterPulse[];
extern const u16 gBattleAnimBgPalette_WaterPulse[];
extern const u32 gBattleAnimBgTilemap_WaterPulse[];
extern const u32 gBattleAnimBgImage_Waterfall[];
extern const u16 gBattleAnimBgPalette_Waterfall[];
extern const u32 gBattleAnimBgTilemap_Waterfall[];
extern const u16 gBattleAnimBgPalette_WonderRoom[];
extern const u32 gBattleAnimBgImage_ZMoveActivate[];
extern const u16 gBattleAnimBgPalette_ZMoveActivate[];
extern const u32 gBattleAnimBgTilemap_ZMoveActivate[];
extern const u32 gBattleAnimBgImage_ZMoveMountain[];
extern const u16 gBattleAnimBgPalette_ZMoveMountain[];
extern const u32 gBattleAnimBgTilemap_ZMoveMountain[];
extern const u16 gBattleAnimSpritePal_SteelBeam[];
extern const u16 gBattleAnimBgPalette_SteelBeam[];

extern const u32 gMetalShineGfx[];
extern const u16 gMetalShinePalette[];
extern const u32 gMetalShineTilemap[];

extern const u32 gBattleAnimMaskImage_Curse[];
extern const u32 gBattleAnimMaskTilemap_Curse[];

extern const u32 gStatAnim_Gfx[];
extern const u32 gStatAnim_Increase_Tilemap[];
extern const u32 gStatAnim_Decrease_Tilemap[];
extern const u16 gStatAnim_Defense_Pal[];
extern const u16 gStatAnim_Attack_Pal[];
extern const u16 gStatAnim_Accuracy_Pal[];
extern const u16 gStatAnim_Speed_Pal[];
extern const u16 gStatAnim_Multiple_Pal[];
extern const u16 gStatAnim_Evasion_Pal[];
extern const u16 gStatAnim_SpAttack_Pal[];
extern const u16 gStatAnim_SpDefense_Pal[];

extern const u32 gContestInterfaceGfx[];
extern const u32 gContestAudienceGfx[];
extern const u8 gContestApplauseMeterGfx[];
extern const u8 gContestNextTurnNumbersGfx[];
extern const u8 gContestNextTurnRandomGfx[];
extern const u32 gContestAudienceTilemap[];
extern const u16 gContestInterfaceAudiencePalette[];
extern const u32 gContestInterfaceTilemap[];
extern const u32 gContestCurtainTilemap[];
extern const u8 gContestSliderHeart_Gfx[];
extern const u32 gContestNextTurnGfx[];
extern const u16 gContestPal[];
extern const u32 gContestFaces_Gfx[];
extern const u32 gContestApplauseGfx[];
extern const u32 gContestJudgeGfx[];
extern const u32 gContestJudgeSymbolsGfx[];
extern const u16 gContestJudgeSymbolsPal[];

extern const u32 gBattleAnimBgTilemap_SurfOpponent[];
extern const u32 gBattleAnimBgTilemap_SurfPlayer[];
extern const u32 gBattleAnimBgTilemap_SurfContest[];
extern const u32 gBattleAnimBgImage_Surf[];
extern const u16 gBattleAnimBgPalette_Surf[];
extern const u16 gBattleAnimBackgroundImageMuddyWater_Pal[];

extern const u32 gEnemyMonShadow_Gfx[];
extern const u32 gEnemyMonShadowsSized_Gfx[];

extern const u32 gBattleAnimFogTilemap[];

extern const u32 gUsePokeblockGraph_Gfx[];
extern const u32 gUsePokeblockGraph_Tilemap[];
extern const u16 gUsePokeblockGraph_Pal[];
extern const u16 gUsePokeblockNatureWin_Pal[];


extern const u8 gBerryBlenderPlayerArrow_Gfx[];
extern const u8 gBerryBlenderStart_Gfx[];
extern const u8 gBerryBlenderScoreSymbols_Gfx[];
extern const u8 gBerryBlenderParticles_Gfx[];
extern const u8 gBerryBlenderCountdownNumbers_Gfx[];
extern const u16 gBerryBlenderMiscPalette[];
extern const u16 gBerryBlenderArrowPalette[];
extern const u32 gBerryBlenderCenter_Gfx[];
extern const u32 gBerryBlenderOuter_Gfx[];
extern const u32 gBerryBlenderOuter_Tilemap[];


extern const u32 gSlotMachineDigitalDisplay_Gfx[];
extern const u8 gSlotMachineReelTimeNumber0[];
extern const u8 gSlotMachineReelTimeNumber1[];
extern const u8 gSlotMachineReelTimeNumber2[];
extern const u8 gSlotMachineReelTimeNumber3[];
extern const u8 gSlotMachineReelTimeNumber4[];
extern const u8 gSlotMachineReelTimeNumber5[];
extern const u8 gSlotMachineReelTimeShadow[];
extern const u8 gSlotMachineReelTimeNumberGap_Gfx[];
extern const u8 gSlotMachineReelTimeBolt0[];
extern const u8 gSlotMachineReelTimeBolt1[];
extern const u8 gSlotMachineReelTimePikaAura[];
extern const u8 gSlotMachineReelTimeExplosion0[];
extern const u8 gSlotMachineReelTimeExplosion1[];
extern const u8 gSlotMachineReelTimeDuck[];
extern const u8 gSlotMachineReelTimeSmoke[];
extern const u8 gSlotMachinePikaPowerBolt[];
extern const u8 gSlotMachineReelSymbol1Tiles[];
extern const u8 gSlotMachineReelSymbol2Tiles[];
extern const u8 gSlotMachineReelSymbol3Tiles[];
extern const u8 gSlotMachineReelSymbol4Tiles[];
extern const u8 gSlotMachineReelSymbol5Tiles[];
extern const u8 gSlotMachineReelSymbol6Tiles[];
extern const u8 gSlotMachineReelSymbol7Tiles[];
extern const u8 gSlotMachineNumber0Tiles[];
extern const u8 gSlotMachineNumber1Tiles[];
extern const u8 gSlotMachineNumber2Tiles[];
extern const u8 gSlotMachineNumber3Tiles[];
extern const u8 gSlotMachineNumber4Tiles[];
extern const u8 gSlotMachineNumber5Tiles[];
extern const u8 gSlotMachineNumber6Tiles[];
extern const u8 gSlotMachineNumber7Tiles[];
extern const u8 gSlotMachineNumber8Tiles[];
extern const u8 gSlotMachineNumber9Tiles[];
extern const u8 gSlotMachineReelBackground_Tilemap[];
extern const u32 gSlotMachineMenu_Gfx[];
extern const u16 gSlotMachineMenu_Tilemap[];
extern const u16 gSlotMachineInfoBox_Tilemap[];
extern const u16 gSlotMachineMenu_Pal[];
extern const u16 gSlotMachineReelSymbols_Pal[];
extern const u16 gSlotMachineReelTimeMisc_Pal[];
extern const u16 gSlotMachineReelTimeMachine_Pal[];
extern const u16 gSlotMachineMisc_Pal[];
extern const u16 gSlotMachineReelTimeExplosion_Pal[];
extern const u16 gSlotMachineDigitalDisplay_Pal[];
extern const u16 gSlotMachineReelTimePikachu_Pal[];

extern const u32 gBattleAnimBgTilemap_Sandstorm[];
extern const u32 gBattleAnimBgImage_Sandstorm[];


extern const u32 gBattleAnimBgImage_Rainbow[];
extern const u16 gBattleAnimBGPalette_Rainbow[];
extern const u32 gBattleAnimBgTilemap_Rainbow[];


extern const u32 gBattleAnimBgImage_Swamp[];
extern const u16 gBattleAnimBGPalette_Swamp[];
extern const u32 gBattleAnimBgTilemap_Swamp[];


extern const u32 gPokedexAreaScreenAreaUnknown_Gfx[];
extern const u16 gPokedexAreaScreenAreaUnknown_Pal[];


extern const u32 gStorageSystemMenu_Gfx[];
extern const u16 gStorageSystemPartyMenu_Pal[];
extern const u32 gStorageSystemPartyMenu_Tilemap[];
extern const u32 gWallpaperIcon_Plusle[];
extern const u32 gWallpaperIcon_Cross[];
extern const u32 gWallpaperIcon_Bolt[];
extern const u32 gWallpaperTiles_Ribbon[];
extern const u32 gWallpaperTilemap_Ribbon[];
extern const u16 gWallpaperPalettes_Ribbon[][16];
extern const u32 gWallpaperTiles_Horizontal[];
extern const u32 gWallpaperTilemap_Horizontal[];
extern const u16 gWallpaperPalettes_Horizontal[][16];


extern const u32 gCableCarBg_Gfx[];
extern const u16 gCableCarBg_Pal[];
extern const u32 gCableCar_Gfx[];
extern const u32 gCableCarDoor_Gfx[];
extern const u32 gCableCarCable_Gfx[];
extern const u16 gCableCar_Pal[];


extern const u16 gTradeMenu_Pal[];
extern const u8 gTradeMenu_Gfx[];
extern const u16 gTradeMenu_Tilemap[];
extern const u16 gTradeGba2_Pal[];
extern const u8 gTradeGba_Gfx[];
extern const u16 gTradeMenuMonBox_Tilemap[];
extern const u8 gTradeCursor_Gfx[];
extern const u16 gTradeCursor_Pal[];


extern const u32 gPartyMenuPokeball_Gfx[];
extern const u32 gPartyMenuPokeballSmall_Gfx[];
extern const u16 gStatusPal_Icons[];
extern const u16 gPartyMenuPokeball_Pal[];
extern const u16 gStatusPal_Icons[];


extern const u32 gRouletteMenu_Gfx[];
extern const u32 gRouletteWheel_Gfx[];
extern const u32 gRouletteCenter_Gfx[];
extern const u32 gRouletteHeaders_Gfx[];
extern const u32 gRouletteCredit_Gfx[];
extern const u32 gRouletteNumbers_Gfx[];
extern const u32 gRouletteMultiplier_Gfx[];


extern const u32 gContestResults_Gfx[];
extern const u32 gContestResults_WinnerBanner_Tilemap[];
extern const u32 gContestResults_Interface_Tilemap[];
extern const u32 gContestResults_Bg_Tilemap[];
extern const u16 gContestResults_Pal[];
extern const u16 gContestResultsTitle_Link_Tilemap[];
extern const u16 gContestResultsTitle_Normal_Tilemap[];
extern const u16 gContestResultsTitle_Super_Tilemap[];
extern const u16 gContestResultsTitle_Hyper_Tilemap[];
extern const u16 gContestResultsTitle_Master_Tilemap[];
extern const u16 gContestResultsTitle_Cool_Tilemap[];
extern const u16 gContestResultsTitle_Beauty_Tilemap[];
extern const u16 gContestResultsTitle_Cute_Tilemap[];
extern const u16 gContestResultsTitle_Smart_Tilemap[];
extern const u16 gContestResultsTitle_Tough_Tilemap[];
extern const u16 gContestResultsTitle_Tilemap[];


extern const u16 gHoennTrainerCardGreen_Pal[];
extern const u32 gHoennTrainerCard_Gfx[];
extern const u16 gKantoTrainerCardBlue_Pal[];
extern const u32 gKantoTrainerCard_Gfx[];
extern const u32 gKantoTrainerCardBg_Tilemap[];
extern const u32 gHoennTrainerCardBack_Tilemap[];
extern const u32 gKantoTrainerCardBack_Tilemap[];
extern const u32 gHoennTrainerCardFront_Tilemap[];
extern const u32 gKantoTrainerCardFront_Tilemap[];
extern const u32 gHoennTrainerCardFrontLink_Tilemap[];
extern const u32 gKantoTrainerCardFrontLink_Tilemap[];
extern const u32 gHoennTrainerCardBg_Tilemap[];


extern const u32 gFrontierPassBg_Gfx[];
extern const u32 gFrontierPassBg_Tilemap[];
extern const u16 gFrontierPassBg_Pal[][16];
extern const u32 gFrontierPassMapAndCard_Gfx[];
extern const u32 gFrontierPassCancelButton_Tilemap[];
extern const u32 gFrontierPassCancelButtonHighlighted_Tilemap[];
extern const u32 gFrontierPassMedals_Gfx[];
extern const u16 gFrontierPassCursor_Pal[];
extern const u16 gFrontierPassMedalsGold_Pal[];
extern const u16 gFrontierPassMedalsSilver_Pal[];
extern const u16 gFrontierPassMapCursor_Pal[];


extern const u32 gEasyChatWindow_Gfx[];
extern const u32 gEasyChatWindow_Tilemap[];
extern const u32 gEasyChatMode_Gfx[];
extern const u16 gEasyChatMode_Pal[];
extern const u32 gEasyChatRectangleCursor_Gfx[];
extern const u16 gEasyChatRectangleCursor_Pal[];
extern const u32 gEasyChatButtonWindow_Gfx[];
extern const u16 gEasyChatButtonWindow_Pal[];


extern const u32 gUsePokeblockCondition_Gfx[];


extern const u16 gUnionRoomChat_Background_Pal[];
extern const u32 gUnionRoomChat_Background_Gfx[];
extern const u32 gUnionRoomChat_Background_Tilemap[];
extern const u16 gUnionRoomChat_InputText_Pal[];
extern const u16 gUnionRoomChat_Keyboard_Pal[];
extern const u32 gUnionRoomChat_Keyboard_Gfx[];
extern const u32 gUnionRoomChat_Keyboard_Tilemap[];
extern const u32 gUnionRoomChat_RButtonLabels[];


extern const u8 gPokenavConditionCancel_Gfx[];
extern const u16 gPokenavConditionCancel_Pal[];
extern const u8 gUsePokeblockUpDown_Gfx[];
extern const u16 gUsePokeblockUpDown_Pal[];
extern const u16 gUsePokeblockCondition_Pal[];


extern const u32 gBerryCrush_Crusher_Gfx[];
extern const u16 gBerryCrush_Crusher_Pal[];
extern const u32 gBerryCrush_TextWindows_Tilemap[];


extern const u32 gPokenavMessageBox_Gfx[];
extern const u32 gPokenavMessageBox_Tilemap[];
extern const u16 gPokenavMessageBox_Pal[];
extern const u32 gPokenavOptions_Gfx[];
extern const u16 gPokenavOptions_Pal[];


extern const u16 gFrontierFactoryMenu_Gfx[34 * ((4) * 8 * 8 / 8) / 2];
extern const u16 gFrontierFactoryMenu_Tilemap[];
extern const u16 gFrontierFactoryMenu_Pal[];


extern const u16 gObjectEventPal_Brendan[];
extern const u16 gObjectEventPal_May[];
extern const u16 gObjectEventPal_RubySapphireBrendan[];
extern const u16 gObjectEventPal_RubySapphireMay[];

extern const u16 gObjectEventPal_NpcBlue[];
extern const u16 gObjectEventPal_FatMan[];
extern const u16 gObjectEventPal_MartEmployee[];
extern const u16 gObjectEventPal_Youngster[];
extern const u16 gObjectEventPal_Barry[];
extern const u16 gObjectEventPal_Mom[];
extern const u16 gObjectEventPal_Prof_Rowan[];


extern const u16 gMailPalette_Orange[];
extern const u16 gMailPalette_Harbor[];
extern const u16 gMailPalette_Glitter[];
extern const u16 gMailPalette_Mech[];
extern const u16 gMailPalette_Wood[];
extern const u16 gMailPalette_Wave[];
extern const u16 gMailPalette_Bead[];
extern const u16 gMailPalette_Shadow[];
extern const u16 gMailPalette_Tropic[];
extern const u16 gMailPalette_Dream[];
extern const u16 gMailPalette_Fab[];
extern const u16 gMailPalette_Retro[];
extern const u32 gMailTiles_Orange[];
extern const u32 gMailTilemap_Orange[];
extern const u32 gMailTiles_Harbor[];
extern const u32 gMailTilemap_Harbor[];
extern const u32 gMailTiles_Glitter[];
extern const u32 gMailTilemap_Glitter[];
extern const u32 gMailTiles_Mech[];
extern const u32 gMailTilemap_Mech[];
extern const u32 gMailTiles_Wood[];
extern const u32 gMailTilemap_Wood[];
extern const u32 gMailTiles_Wave[];
extern const u32 gMailTilemap_Wave[];
extern const u32 gMailTiles_Bead[];
extern const u32 gMailTilemap_Bead[];
extern const u32 gMailTiles_Shadow[];
extern const u32 gMailTilemap_Shadow[];
extern const u32 gMailTiles_Tropic[];
extern const u32 gMailTilemap_Tropic[];
extern const u32 gMailTiles_Dream[];
extern const u32 gMailTilemap_Dream[];
extern const u32 gMailTiles_Fab[];
extern const u32 gMailTilemap_Fab[];
extern const u32 gMailTiles_Retro[];
extern const u32 gMailTilemap_Retro[];

extern const u8 gMonMarkingsMenu_Gfx[];
extern const u16 gMonMarkingsMenu_Pal[];

extern const u32 gBattleIcons_Gfx1[];
extern const u32 gBattleIcons_Gfx2[];
extern const u16 gBattleIcons_Pal1[];
extern const u16 gBattleIcons_Pal2[];


extern const u32 gItemIcon_Journal[];
extern const u16 gItemIconPalette_Journal[];
extern const u32 gItemIcon_VS_RECORDER[];
extern const u16 gItemIconPalette_VS_RECORDER[];
extern const u32 gItemIcon_Coupon_1[];
extern const u16 gItemIconPalette_Coupon_1[];
extern const u32 gItemIcon_Coupon_2[];
extern const u16 gItemIconPalette_Coupon_2[];
extern const u32 gItemIcon_Coupon_3[];
extern const u16 gItemIconPalette_Coupon_3[];
# 8 "src/map_name_popup.c" 2
# 1 "include/international_string_util.h" 1



# 1 "include/menu.h" 1



# 1 "include/task.h" 1
# 11 "include/task.h"
typedef void (*TaskFunc)(u8 taskId);

struct Task
{
    TaskFunc func;
    bool8 isActive;
    u8 prev;
    u8 next;
    u8 priority;
    s16 data[16];
};

extern struct Task gTasks[];

void ResetTasks(void);
u8 CreateTask(TaskFunc func, u8 priority);
void DestroyTask(u8 taskId);
void RunTasks(void);
void TaskDummy(u8 taskId);
void SetTaskFuncWithFollowupFunc(u8 taskId, TaskFunc func, TaskFunc followupFunc);
void SwitchTaskToFollowupFunc(u8 taskId);
bool8 FuncIsActiveTask(TaskFunc func);
u8 FindTaskIdByFunc(TaskFunc func);
u8 GetTaskCount(void);
void SetWordTaskArg(u8 taskId, u8 dataElem, u32 value);
u32 GetWordTaskArg(u8 taskId, u8 dataElem);
# 5 "include/menu.h" 2
# 1 "include/text.h" 1



# 1 "include/config/text.h" 1
# 5 "include/text.h" 2
# 1 "include/constants/characters.h" 1
# 6 "include/text.h" 2


typedef char TextSpeedModifiersCantGoPast31[(1 <= 31 && 1 <= 31 && 1 <= 31 && 12 <= 31) ? 1 : -1];
# 17 "include/text.h"
enum {
    FONT_SMALL,
    FONT_NORMAL,
    FONT_SHORT,
    FONT_SHORT_COPY_1,
    FONT_SHORT_COPY_2,
    FONT_SHORT_COPY_3,
    FONT_BRAILLE,
    FONT_NARROW,
    FONT_SMALL_NARROW,
    FONT_BOLD,
    FONT_NARROWER,
    FONT_SMALL_NARROWER,
    FONT_SHORT_NARROW,
    FONT_SHORT_NARROWER,
};


enum {
    RENDER_PRINT,
    RENDER_FINISH,
    RENDER_REPEAT,
    RENDER_UPDATE,
};


enum {
    RENDER_STATE_HANDLE_CHAR,
    RENDER_STATE_WAIT,
    RENDER_STATE_CLEAR,
    RENDER_STATE_SCROLL_START,
    RENDER_STATE_SCROLL,
    RENDER_STATE_WAIT_SE,
    RENDER_STATE_PAUSE,
};

enum {
    FONTATTR_MAX_LETTER_WIDTH,
    FONTATTR_MAX_LETTER_HEIGHT,
    FONTATTR_LETTER_SPACING,
    FONTATTR_LINE_SPACING,
    FONTATTR_UNKNOWN,
    FONTATTR_COLOR_FOREGROUND,
    FONTATTR_COLOR_BACKGROUND,
    FONTATTR_COLOR_SHADOW
};

struct TextPrinterSubStruct
{
    u8 fontId:4;
    bool8 hasPrintBeenSpedUp:1;
    u8 unk:3;
    u16 utilityCounter:13;
    u16 downArrowYPosIdx:2;
    bool16 hasFontIdBeenSet:1;
    u8 autoScrollDelay;
};

struct TextPrinterTemplate
{
    const u8 *currentChar;
    u8 windowId;
    u8 fontId;
    u8 x;
    u8 y;
    u8 currentX;
    u8 currentY;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 unk:4;
    u8 fgColor:4;
    u8 bgColor:4;
    u8 shadowColor:4;
};

struct TextPrinter
{
    struct TextPrinterTemplate printerTemplate;

    void (*callback)(struct TextPrinterTemplate *, u16);

    u8 subStructFields[7];
    u8 active;
    u8 state;
    u8 textSpeed;
    u8 delayCounter;
    u8 scrollDistance;
    u8 minLetterSpacing;
    u8 japanese;
};

struct FontInfo
{
    u16 (*fontFunction)(struct TextPrinter *x);
    u8 maxLetterWidth;
    u8 maxLetterHeight;
    u8 letterSpacing;
    u8 lineSpacing;
    u8 unk:4;
    u8 fgColor:4;
    u8 bgColor:4;
    u8 shadowColor:4;
};

extern const struct FontInfo *gFonts;

struct GlyphWidthFunc
{
    u32 fontId;
    u32 (*func)(u16 glyphId, bool32 isJapanese);
};

typedef struct {
    bool8 canABSpeedUpPrint:1;
    bool8 useAlternateDownArrow:1;
    bool8 autoScroll:1;
    bool8 forceMidTextSpeed:1;
} TextFlags;

struct TextGlyph
{
    u32 gfxBufferTop[16];
    u32 gfxBufferBottom[16];
    u8 width;
    u8 height;
};

extern TextFlags gTextFlags;
extern u8 gDisableTextPrinters;
extern struct TextGlyph gCurGlyph;

void DeactivateAllTextPrinters(void);
u16 AddTextPrinterParameterized(u8 windowId, u8 fontId, const u8 *str, u8 x, u8 y, u8 speed, void (*callback)(struct TextPrinterTemplate *, u16));
bool32 AddTextPrinter(struct TextPrinterTemplate *printerTemplate, u8 speed, void (*callback)(struct TextPrinterTemplate *, u16));
void RunTextPrinters(void);
bool32 IsTextPrinterActive(u8 id);
void GenerateFontHalfRowLookupTable(u8 fgColor, u8 bgColor, u8 shadowColor);
void SaveTextColors(u8 *fgColor, u8 *bgColor, u8 *shadowColor);
void RestoreTextColors(u8 *fgColor, u8 *bgColor, u8 *shadowColor);
void DecompressGlyphTile(const void *src_, void *dest_);
void CopyGlyphToWindow(struct TextPrinter *textPrinter);
void ClearTextSpan(struct TextPrinter *textPrinter, u32 width);

void TextPrinterInitDownArrowCounters(struct TextPrinter *textPrinter);
void TextPrinterDrawDownArrow(struct TextPrinter *textPrinter);
void TextPrinterClearDownArrow(struct TextPrinter *textPrinter);
bool32 TextPrinterWaitAutoMode(struct TextPrinter *textPrinter);
bool32 TextPrinterWaitWithDownArrow(struct TextPrinter *textPrinter);
bool32 TextPrinterWait(struct TextPrinter *textPrinter);
void DrawDownArrow(u8 windowId, u16 x, u16 y, u8 bgColor, bool32 drawArrow, u8 *counter, u8 *yCoordIndex);
s32 GetGlyphWidth(u16 glyphId, bool32 isJapanese, u8 fontId);
s32 GetStringWidth(u8 fontId, const u8 *str, s16 letterSpacing);
s32 GetStringLineWidth(u8 fontId, const u8 *str, s16 letterSpacing, u32 lineNum, u32 strSize);
u8 RenderTextHandleBold(u8 *pixels, u8 fontId, u8 *str);
u8 DrawKeypadIcon(u8 windowId, u8 keypadIconId, u16 x, u16 y);
u8 GetKeypadIconTileOffset(u8 keypadIconId);
u8 GetKeypadIconWidth(u8 keypadIconId);
u8 GetKeypadIconHeight(u8 keypadIconId);
void SetDefaultFontsPointer(void);
u8 GetFontAttribute(u8 fontId, u8 attributeId);
u8 GetMenuCursorDimensionByFont(u8 fontId, u8 whichDimension);


u16 FontFunc_Braille(struct TextPrinter *textPrinter);
u32 GetGlyphWidth_Braille(u16 glyphId, bool32 isJapanese);

u32 GetFontIdToFit(const u8 *string, u32 widestFontId, u32 letterSpacing, u32 widthPx);
u8 *PrependFontIdToFit(u8 *start, u8 *end, u32 fontId, u32 width);
u8 *WrapFontIdToFit(u8 *start, u8 *end, u32 fontId, u32 width);


u32 GetPlayerTextSpeed(void);
u32 GetPlayerTextSpeedDelay(void);
u32 GetPlayerTextSpeedModifier(void);
u32 GetPlayerTextScrollSpeed(void);
bool32 IsPlayerTextSpeedInstant(void);
# 6 "include/menu.h" 2
# 1 "include/window.h" 1







enum {
    WINDOW_BG,
    WINDOW_TILEMAP_LEFT,
    WINDOW_TILEMAP_TOP,
    WINDOW_WIDTH,
    WINDOW_HEIGHT,
    WINDOW_PALETTE_NUM,
    WINDOW_BASE_BLOCK,
    WINDOW_TILE_DATA
};


enum {
    COPYWIN_NONE,
    COPYWIN_MAP,
    COPYWIN_GFX,
    COPYWIN_FULL,
};

struct WindowTemplate
{
    u8 bg;
    u8 tilemapLeft;
    u8 tilemapTop;
    u8 width;
    u8 height;
    u8 paletteNum;
    u16 baseBlock;
};
# 45 "include/window.h"
struct Window
{
    struct WindowTemplate window;
    __attribute__((aligned(4))) u8 *tileData;
};

bool32 InitWindows(const struct WindowTemplate *templates);
u32 AddWindow(const struct WindowTemplate *template);
int AddWindowWithoutTileMap(const struct WindowTemplate *template);
void RemoveWindow(u32 windowId);
void RemoveAllWindowsOnBg(u32 bgId);
void FreeAllWindowBuffers(void);
void CopyWindowToVram(u32 windowId, u32 mode);
void CopyWindowRectToVram(u32 windowId, u32 mode, u32 x, u32 y, u32 w, u32 h);
void PutWindowTilemap(u32 windowId);
void PutWindowRectTilemapOverridePalette(u32 windowId, u8 x, u8 y, u8 width, u8 height, u8 palette);
void ClearWindowTilemap(u32 windowId);
void PutWindowRectTilemap(u32 windowId, u8 x, u8 y, u8 width, u8 height);
void BlitBitmapToWindow(u32 windowId, const u8 *pixels, u16 x, u16 y, u16 width, u16 height);
void BlitBitmapRectToWindow(u32 windowId, const u8 *pixels, u16 srcX, u16 srcY, u16 srcWidth, int srcHeight, u16 destX, u16 destY, u16 rectWidth, u16 rectHeight);
void FillWindowPixelRect(u32 windowId, u8 fillValue, u16 x, u16 y, u16 width, u16 height);
void CopyToWindowPixelBuffer(u32 windowId, const void *src, u16 size, u16 tileOffset);
void FillWindowPixelBuffer(u32 windowId, u8 fillValue);
void ScrollWindow(u32 windowId, u8 direction, u8 distance, u8 fillValue);
void CallWindowFunction(u32 windowId, void ( *func)(u8, u8, u8, u8, u8, u8));
bool32 SetWindowAttribute(u32 windowId, u32 attributeId, u32 value);
u32 GetWindowAttribute(u32 windowId, u32 attributeId);
u32 AddWindow8Bit(const struct WindowTemplate *template);
void FillWindowPixelBuffer8Bit(u32 windowId, u8 fillValue);
void FillWindowPixelRect8Bit(u32 windowId, u8 fillValue, u16 x, u16 y, u16 width, u16 height);
void BlitBitmapRectToWindow4BitTo8Bit(u32 windowId, const u8 *pixels, u16 srcX, u16 srcY, u16 srcWidth, int srcHeight, u16 destX, u16 destY, u16 rectWidth, u16 rectHeight, u8 paletteNum);
void CopyWindowToVram8Bit(u32 windowId, u8 mode);
u32 WindowWidthPx(u32 windowId);
u32 WindowTemplateWidthPx(const struct WindowTemplate *template);

extern struct Window gWindows[];
extern void *gWindowBgTilemapBuffers[];
# 7 "include/menu.h" 2
# 31 "include/menu.h"
enum
{
    SAVE_MENU_NAME,
    SAVE_MENU_CAUGHT,
    SAVE_MENU_PLAY_TIME,
    SAVE_MENU_LOCATION,
    SAVE_MENU_BADGES,
};

struct MenuAction
{
    const u8 *text;
    union {
        void (*void_u8)(u8);
        u8 (*u8_void)(void);
    } func;
};

extern const u16 gStandardMenuPalette[];
extern __attribute__((section(".sbss"))) u8 gPopupTaskId;

void FreeAllOverworldWindowBuffers(void);
void InitStandardTextBoxWindows(void);
void InitTextBoxGfxAndPrinters(void);
u16 RunTextPrintersAndIsPrinter0Active(void);
void LoadMessageBoxAndBorderGfx(void);
void DrawDialogueFrame(u8 windowId, bool8 copyToVram);
void ClearStdWindowAndFrame(u8 windowId, bool8 copyToVram);
u16 AddTextPrinterParameterized2(u8 windowId, u8 fontId, const u8 *str, u8 speed, void (*callback)(struct TextPrinterTemplate *, u16), u8 fgColor, u8 bgColor, u8 shadowColor);
void PrintPlayerNameOnWindow(u8 windowId, const u8 *src, u16 x, u16 y);
void ClearDialogWindowAndFrame(u8 windowId, bool8 copyToVram);
void SetStandardWindowBorderStyle(u8 windowId, bool8 copyToVram);
void DisplayYesNoMenuDefaultYes(void);
void Menu_LoadStdPalAt(u16 offset);
void AddTextPrinterWithCallbackForMessage(bool8 canSpeedUp, void (*callback)(struct TextPrinterTemplate *, u16));
void BgDmaFill(u32 bg, u8 value, int offset, int size);
void AddTextPrinterParameterized3(u8 windowId, u8 fontId, u8 left, u8 top, const u8 *color, s8 speed, const u8 *str);
void ClearStdWindowAndFrameToTransparent(u8 windowId, bool8 copyToVram);
void SetWindowTemplateFields(struct WindowTemplate *template, u8 bg, u8 left, u8 top, u8 width, u8 height, u8 paletteNum, u16 baseBlock);
void DrawStdFrameWithCustomTileAndPalette(u8 windowId, bool8 copyToVram, u16 baseTileNum, u8 paletteNum);
void ScheduleBgCopyTilemapToVram(u8 bgId);
void PrintMenuTable(u8 windowId, u8 itemCount, const struct MenuAction *menuActions);
u8 InitMenuInUpperLeftCornerNormal(u8 windowId, u8 itemCount, u8 initialCursorPos);
u8 Menu_GetCursorPos(void);
s8 Menu_ProcessInput(void);
s8 Menu_ProcessInputNoWrap(void);
void BlitMenuInfoIcon(u8 windowId, u8 iconId, u16 x, u16 y);
void ResetTempTileDataBuffers(void);
void *DecompressAndCopyTileDataToVram(u8 bgId, const void *src, u32 size, u16 offset, u8 mode);
bool8 FreeTempTileDataBuffersIfPossible(void);
struct WindowTemplate CreateWindowTemplate(u8 bg, u8 left, u8 top, u8 width, u8 height, u8 paletteNum, u16 baseBlock);
void CreateYesNoMenu(const struct WindowTemplate *window, u16 baseTileNum, u8 paletteNum, u8 initialCursorPos);
void DecompressAndLoadBgGfxUsingHeap(u8 bgId, const void *src, u32 size, u16 offset, u8 mode);
s8 Menu_ProcessInputNoWrapClearOnChoose(void);
s8 ProcessMenuInput_other(void);
void DoScheduledBgTilemapCopiesToVram(void);
void ClearScheduledBgCopiesToVram(void);
void AddTextPrinterParameterized4(u8 windowId, u8 fontId, u8 left, u8 top, u8 letterSpacing, u8 lineSpacing, const u8 *color, s8 speed, const u8 *str);
void DrawDialogFrameWithCustomTileAndPalette(u8 windowId, bool8 copyToVram, u16 tileNum, u8 paletteNum);
void PrintMenuActionTextsInUpperLeftCorner(u8 windowId, u8 itemCount, const struct MenuAction *menuActions, const u8 *actionIds);
void ClearDialogWindowAndFrameToTransparent(u8 windowId, bool8 copyToVram);
void *malloc_and_decompress(const void *src, u32 *size);
u16 copy_decompressed_tile_data_to_vram(u8 bgId, const void *src, u16 size, u16 offset, u8 mode);
void AddTextPrinterForMessage(bool8 allowSkippingDelayWithButtonPress);
void PrintMenuActionTexts(u8 windowId, u8 fontId, u8 left, u8 top, u8 letterSpacing, u8 lineHeight, u8 itemCount, const struct MenuAction *menuActions, const u8 *actionIds);
void PrintMenuActionGrid(u8 windowId, u8 fontId, u8 left, u8 top, u8 optionWidth, u8 horizontalCount, u8 verticalCount, const struct MenuAction *menuActions, const u8 *actionIds);
u8 InitMenuActionGrid(u8 windowId, u8 optionWidth, u8 columns, u8 rows, u8 initialCursorPos);
u8 ChangeMenuGridCursorPosition(s8 deltaX, s8 deltaY);
u8 GetStartMenuWindowId(void);
void ListMenuLoadStdPalAt(u8 palOffset, u8 palId);
u8 Menu_MoveCursor(s8 cursorDelta);
u8 Menu_MoveCursorNoWrapAround(s8 cursorDelta);
void DrawStdWindowFrame(u8 windowId, bool8 copyToVram);
u8 AddStartMenuWindow(u8 numActions);
u8 InitMenuNormal(u8 windowId, u8 fontId, u8 left, u8 top, u8 cursorHeight, u8 numChoices, u8 initialCursorPos);
void LoadMessageBoxAndFrameGfx(u8 windowId, bool8 copyToVram);
void RemoveStartMenuWindow(void);
void DisplayYesNoMenuWithDefault(u8 initialCursorPos);
void BufferSaveMenuText(u8 textId, u8 *dest, u8 color);
void RemoveMapNamePopUpWindow(void);
u8 GetMapNamePopUpWindowId(void);
u8 AddMapNamePopUpWindow(void);
u16 AddWindowParameterized(u8, u8, u8, u8, u8, u8, u16);
void AddTextPrinterParameterized5(u8 windowId, u8 fontId, const u8 *str, u8 left, u8 top, u8 speed, void (*callback)(struct TextPrinterTemplate *, u16), u8 letterSpacing, u8 lineSpacing);
void SetBgTilemapPalette(u8 bgId, u8 left, u8 top, u8 width, u8 height, u8 palette);
void AddValToTilemapBuffer(void *ptr, int delta, int width, int height, bool32 isAffine);
void EraseFieldMessageBox(bool8 copyToVram);
void PrintMenuGridTable(u8 windowId, u8 optionWidth, u8 columns, u8 rows, const struct MenuAction *menuActions);
s8 Menu_ProcessGridInput(void);
u8 InitMenuInUpperLeftCorner(u8 windowId, u8 itemCount, u8 initialCursorPos, bool8 APressMuted);
s8 Menu_ProcessInputNoWrapAround_other(void);
void CopyToBufferFromBgTilemap(u8 bgId, u16 *dest, u8 left, u8 top, u8 width, u8 height);
u8 HofPCTopBar_AddWindow(u8 bg, u8 xPos, u8 yPos, u8 palette, u16 baseTile);
void HofPCTopBar_RemoveWindow(void);
void HofPCTopBar_Print(const u8 *string, u8 left, bool8 copyToVram);
void HofPCTopBar_PrintPair(const u8 *string, const u8 *string2, bool8 noBg, u8 left, bool8 copyToVram);
void ResetBgPositions(void);
void AddTextPrinterWithCustomSpeedForMessage(bool8 allowSkippingDelayWithButtonPress, u8 speed);
void EraseYesNoWindow(void);
void PrintMenuActionTextsAtPos(u8 windowId, u8 fontId, u8 left, u8 top, u8 lineHeight, u8 itemCount, const struct MenuAction *menuActions);
void Menu_LoadStdPal(void);
u8 AddSecondaryPopUpWindow(void);
u8 GetSecondaryPopUpWindowId(void);
void RemoveSecondaryPopUpWindow(void);
void HBlankCB_DoublePopupWindow(void);
void RedrawDialogueFrame(void);
# 5 "include/international_string_util.h" 2
# 1 "include/list_menu.h" 1
# 10 "include/list_menu.h"
enum {
    LIST_NO_MULTIPLE_SCROLL,
    LIST_MULTIPLE_SCROLL_DPAD,
    LIST_MULTIPLE_SCROLL_L_R,
};

enum {
    CURSOR_BLACK_ARROW,
    CURSOR_INVISIBLE,
    CURSOR_RED_OUTLINE,
    CURSOR_RED_ARROW,
};

enum {
    SCROLL_ARROW_LEFT,
    SCROLL_ARROW_RIGHT,
    SCROLL_ARROW_UP,
    SCROLL_ARROW_DOWN
};


enum ListMenuFields
{
    LISTFIELD_MOVECURSORFUNC = 0,
    LISTFIELD_MOVECURSORFUNC2,
    LISTFIELD_TOTALITEMS,
    LISTFIELD_MAXSHOWED,
    LISTFIELD_WINDOWID,
    LISTFIELD_HEADERX,
    LISTFIELD_ITEMX,
    LISTFIELD_CURSORX,
    LISTFIELD_UPTEXTY,
    LISTFIELD_CURSORPAL,
    LISTFIELD_FILLVALUE,
    LISTFIELD_CURSORSHADOWPAL,
    LISTFIELD_LETTERSPACING,
    LISTFIELD_ITEMVERTICALPADDING,
    LISTFIELD_SCROLLMULTIPLE,
    LISTFIELD_FONTID,
    LISTFIELD_CURSORKIND,
};

struct ListMenu;

struct ListMenuItem
{
    const u8 *name;
    s32 id;
};

struct ListMenuTemplate
{
    const struct ListMenuItem *items;
    void (*moveCursorFunc)(s32 itemIndex, bool8 onInit, struct ListMenu *list);
    void (*itemPrintFunc)(u8 windowId, u32 itemId, u8 y);
    u32 totalItems:12;
    u32 maxShowed:12;
    u32 textNarrowWidth:8;
    u8 windowId;
    u8 header_X;
    u8 item_X;
    u8 cursor_X;
    u8 upText_Y:4;
    u8 cursorPal:4;
    u8 fillValue:4;
    u8 cursorShadowPal:4;
    u8 lettersSpacing:3;
    u8 itemVerticalPadding:3;
    u8 scrollMultiple:2;
    u8 fontId:5;
    u8 cursorKind:2;
    u8 isDynamic:1;
};

struct ListMenu
{
    struct ListMenuTemplate template;
    u16 scrollOffset;
    u16 selectedRow;
    u8 unk_1C;
    u8 unk_1D;
    u8 taskId;
    u8 unk_1F;
};

struct ListMenuWindowRect
{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    u8 palNum;
};

struct ScrollArrowsTemplate
{
    u8 firstArrowType;
    u8 firstX;
    u8 firstY;
    u8 secondArrowType;
    u8 secondX;
    u8 secondY;
    u16 fullyUpThreshold;
    u16 fullyDownThreshold;
    u16 tileTag;
    u16 palTag;
    u8 palNum;
};

struct CursorStruct
{
    u8 left;
    u8 top;
    u16 rowWidth;
    u16 rowHeight;
    u16 tileTag;
    u16 palTag;
    u8 palNum;
};

extern struct ScrollArrowsTemplate gTempScrollArrowTemplate;
extern struct ListMenuTemplate gMultiuseListMenuTemplate;

s32 DoMysteryGiftListMenu(const struct WindowTemplate *windowTemplate, const struct ListMenuTemplate *listMenuTemplate, u8 drawMode, u16 tileNum, u16 palOffset);
u8 ListMenuInit(struct ListMenuTemplate *listMenuTemplate, u16 scrollOffset, u16 selectedRow);
u8 ListMenuInitInRect(struct ListMenuTemplate *listMenuTemplate, struct ListMenuWindowRect *rect, u16 scrollOffset, u16 selectedRow);
s32 ListMenu_ProcessInput(u8 listTaskId);
void DestroyListMenuTask(u8 listTaskId, u16 *scrollOffset, u16 *selectedRow);
void RedrawListMenu(u8 listTaskId);
void ChangeListMenuPals(u8 listTaskId, u8 cursorPal, u8 fillValue, u8 cursorShadowPal);
void ChangeListMenuCoords(u8 listTaskId, u8 x, u8 y);
s32 ListMenuTestInput(struct ListMenuTemplate *template, u32 scrollOffset, u32 selectedRow, u16 keys, u16 *newScrollOffset, u16 *newSelectedRow);
void ListMenuGetCurrentItemArrayId(u8 listTaskId, u16 *arrayId);
void ListMenuGetScrollAndRow(u8 listTaskId, u16 *scrollOffset, u16 *selectedRow);
u16 ListMenuGetYCoordForPrintingArrowCursor(u8 listTaskId);
void ListMenuOverrideSetColors(u8 cursorPal, u8 fillValue, u8 cursorShadowPal);
void ListMenuDefaultCursorMoveFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);
s32 ListMenuGetTemplateField(u8 taskId, u8 field);
void ListMenuSetTemplateField(u8 taskId, u8 field, s32 value);
u8 AddScrollIndicatorArrowPair(const struct ScrollArrowsTemplate *arrowInfo, u16 *scrollOffset);
u8 AddScrollIndicatorArrowPairParameterized(u32 arrowType, s32 commonPos, s32 firstPos, s32 secondPos, s32 fullyDownThreshold, s32 tileTag, s32 palTag, u16 *scrollOffset);
void RemoveScrollIndicatorArrowPair(u8 taskId);
void Task_ScrollIndicatorArrowPairOnMainMenu(u8 taskId);
bool8 ListMenuChangeSelection(struct ListMenu *list, bool8 updateCursorAndCallCallback, u8 count, bool8 movingDown);
bool8 ListMenuChangeSelectionFull(struct ListMenu *list, bool32 updateCursor, bool32 callCallback, u8 count, bool8 movingDown);
# 6 "include/international_string_util.h" 2

void ConvertInternationalPlayerName(u8 *str);
void TVShowConvertInternationalString(u8 *dest, const u8 *src, int language);
int GetStringCenterAlignXOffset(int fontId, const u8 *str, int totalWidth);
int GetStringRightAlignXOffset(int fontId, const u8 *str, int totalWidth);
int GetStringCenterAlignXOffsetWithLetterSpacing(int fontId, const u8 *str, int totalWidth, int letterSpacing);
int GetStringWidthDifference(int fontId, const u8 *str, int totalWidth, int letterSpacing);
int GetMaxWidthInMenuTable(const struct MenuAction *actions, int numActions);
int GetMaxWidthInSubsetOfMenuTable(const struct MenuAction *actions, const u8 *actionIds, int numActions);
int Intl_GetListMenuWidth(const struct ListMenuTemplate *listMenu);
void CopyMonCategoryText(u16 species, u8 *dest);
u8 *GetStringClearToWidth(u8 *dest, int fontId, const u8 *str, int totalStringWidth);
void PadNameString(u8 *dest, u8 padChar);
void ConvertInternationalPlayerNameStripChar(u8 *str, u8 removeChar);
void ConvertInternationalContestantName(u8 *str);
int GetNicknameLanguage(u8 *str);
void FillWindowTilesByRow(int windowId, int columnStart, int rowStart, int numFillTiles, int numRows);
# 9 "src/map_name_popup.c" 2
# 1 "include/main.h" 1



typedef void (*MainCallback)(void);
typedef void (*IntrCallback)(void);
typedef void (*IntrFunc)(void);

struct Main
{
              MainCallback callback1;
              MainCallback callback2;

              MainCallback savedCallback;

              IntrCallback vblankCallback;
              IntrCallback hblankCallback;
              IntrCallback vcountCallback;
              IntrCallback serialCallback;

              vu16 intrCheck;

              u32 vblankCounter1;
              u32 vblankCounter2;

              u16 heldKeysRaw;
              u16 newKeysRaw;
              u16 heldKeys;
              u16 newKeys;
              u16 newAndRepeatedKeys;
              u16 keyRepeatCounter;
              bool16 watchedKeysPressed;
              u16 watchedKeysMask;

              struct OamData oamBuffer[128];

              u8 state;

              u8 oamLoadDisabled:1;
              u8 inBattle:1;
              u8 anyLinkBattlerHasFrontierPass:1;
};


extern const u8 gGameVersion;
extern const u8 gGameLanguage;
extern const u8 RomHeaderGameCode[4];
extern const u8 RomHeaderSoftwareVersion;

extern u16 gKeyRepeatStartDelay;
extern bool8 gLinkTransferringData;
extern struct Main gMain;
extern u16 gKeyRepeatContinueDelay;
extern bool8 gSoftResetDisabled;
extern IntrFunc gIntrTable[];
extern u8 gLinkVSyncDisabled;
extern s8 gPcmDmaCounter;

void AgbMain(void);
void AgbMainLoop(void);
void SetMainCallback2(MainCallback callback);
void InitKeys(void);
void SetVBlankCallback(IntrCallback callback);
void SetHBlankCallback(IntrCallback callback);
void SetVCountCallback(IntrCallback callback);
void SetSerialCallback(IntrCallback callback);
void InitFlashTimer(void);
void SetTrainerHillVBlankCounter(u32 *counter);
void ClearTrainerHillVBlankCounter(void);
void DoSoftReset(void);
void ClearPokemonCrySongs(void);
void RestoreSerialTimer3IntrHandlers(void);
void StartTimer1(void);
void SeedRngAndSetTrainerId(void);
u16 GetGeneratedTrainerIdLower(void);
# 10 "src/map_name_popup.c" 2
# 1 "include/menu.h" 1
# 11 "src/map_name_popup.c" 2
# 1 "include/map_name_popup.h" 1
# 9 "include/map_name_popup.h"
void HideMapNamePopUpWindow(void);
void ShowMapNamePopup(void);
# 12 "src/map_name_popup.c" 2
# 1 "include/palette.h" 1
# 33 "include/palette.h"
enum
{
    FAST_FADE_IN_FROM_WHITE,
    FAST_FADE_OUT_TO_WHITE,
    FAST_FADE_IN_FROM_BLACK,
    FAST_FADE_OUT_TO_BLACK,
};

struct BlendSettings
{
    u32 blendColor:24;
    u32 isTint:1;
    u32 coeff:5;
    u32 unused:2;
};

struct TimeBlendSettings
{
    struct BlendSettings startBlend;
    struct BlendSettings endBlend;
    u16 weight;
    u16 altWeight;
};

struct PaletteFadeControl
{
    u32 multipurpose1;

    struct BlendSettings *bld0;
    struct BlendSettings *bld1;
    u32 weight:9;
    u32 delayCounter:6;
    u32 y:5;
    u32 targetY:5;
    u32 multipurpose2:6;
    bool32 active:1;
    u32 blendColor:15;

    bool32 yDec:1;
    bool32 bufferTransferDisabled:1;
    u32 mode:2;
    bool32 shouldResetBlendRegisters:1;
    bool32 hardwareFadeFinishing:1;
    u32 softwareFadeFinishingCounter:5;
    bool32 softwareFadeFinishing:1;
    bool32 objPaletteToggle:1;
    u32 deltaY:4;
    u32 padding:15;
};

extern const struct BlendSettings gTimeOfDayBlend[];

extern struct PaletteFadeControl gPaletteFade;
extern u32 gPlttBufferTransferPending;
extern u16 __attribute__((aligned(4))) gPlttBufferUnfaded[((0x200 + 0x200) / sizeof(u16))];
extern u16 __attribute__((aligned(4))) gPlttBufferFaded[((0x200 + 0x200) / sizeof(u16))];

void LoadPalette(const void *src, u32 offset, u32 size);
void LoadPaletteFast(const void *src, u32 offset, u32 size);
void FillPalette(u32 value, u32 offset, u32 size);
void TransferPlttBuffer(void);
u32 UpdatePaletteFade(void);
void ResetPaletteFade(void);
bool32 BeginNormalPaletteFade(u32 selectedPalettes, s8 delay, u8 startY, u8 targetY, u32 blendColor);
bool32 BeginTimeOfDayPaletteFade(u32 selectedPalettes, s8 delay, u8 startY, u8 targetY, struct BlendSettings *bld0, struct BlendSettings *bld1, u32 weight, u32 color);
void ResetPaletteFadeControl(void);
void InvertPlttBuffer(u32 selectedPalettes);
void TintPlttBuffer(u32 selectedPalettes, s8 r, s8 g, s8 b);
void UnfadePlttBuffer(u32 selectedPalettes);
void BeginFastPaletteFade(u32 submode);
void BeginHardwarePaletteFade(u32 blendCnt, u32 delay, u32 y, u32 targetY, u32 shouldResetBlendRegisters);
void BlendPalettes(u32 selectedPalettes, u8 coeff, u32 color);
void BlendPalettesFine(u32 palettes, u16 *src, u16 *dst, u32 coeff, u32 color);
void BlendPalettesUnfaded(u32 selectedPalettes, u8 coeff, u32 color);
void BlendPalettesGradually(u32 selectedPalettes, s8 delay, u8 coeff, u8 coeffTarget, u16 color, u8 priority, u8 id);
void TimeBlendPalette(u16 palOffset, u32 coeff, u32 blendColor);
void TintPalette_RGB_Copy(u16 palOffset, u32 blendColor);
void TimeMixPalettes(u32 palettes, u16 *src, u16 *dst, struct BlendSettings *blend0, struct BlendSettings *blend1, u16 weight0);
void AvgPaletteWeighted(u16 *src0, u16 *src1, u16 *dst, u16 weight0);
void TintPalette_GrayScale(u16 *palette, u32 count);
void TintPalette_GrayScale2(u16 *palette, u32 count);
void TintPalette_SepiaTone(u16 *palette, u32 count);
void TintPalette_CustomTone(u16 *palette, u32 count, u16 rTone, u16 gTone, u16 bTone);

static inline void SetBackdropFromColor(u32 color)
{
    FillPalette(color, 0, ((1) * sizeof(u16)));
}

static inline void SetBackdropFromPalette(const u16 *palette)
{
    LoadPalette(palette, 0, ((1) * sizeof(u16)));
}
# 13 "src/map_name_popup.c" 2
# 1 "include/region_map.h" 1



# 1 "include/bg.h" 1
# 5 "include/region_map.h" 2




enum
{
    MAP_INPUT_NONE,
    MAP_INPUT_MOVE_START,
    MAP_INPUT_MOVE_CONT,
    MAP_INPUT_MOVE_END,
    MAP_INPUT_A_BUTTON,
    MAP_INPUT_B_BUTTON,
    MAP_INPUT_R_BUTTON
};

enum {
    MAPSECTYPE_NONE,
    MAPSECTYPE_ROUTE,
    MAPSECTYPE_CITY_CANFLY,
    MAPSECTYPE_CITY_CANTFLY,
    MAPSECTYPE_BATTLE_FRONTIER,
    NUM_MAPSEC_TYPES
};

struct RegionMap {
              mapsec_u16_t mapSecId;
              u8 mapSecType;
              u8 posWithinMapSec;
              u8 mapSecName[20];
              u8 (*inputCallback)(void);
              struct Sprite *cursorSprite;
              struct Sprite *playerIconSprite;
              s32 bg2x;
              s32 bg2y;
              u32 bg2pa;
              u32 bg2pc;
              u32 bg2pb;
              u32 bg2pd;
              s32 unk_03c;
              s32 unk_040;
              s32 unk_044;
              s32 unk_048;
              s32 unk_04c;
              s32 unk_050;
              u16 cursorPosX;
              u16 cursorPosY;
              u16 cursorTileTag;
              u16 cursorPaletteTag;
              s16 scrollX;
              s16 scrollY;
              s16 unk_060;
              s16 unk_062;
              u16 zoomedCursorPosX;
              u16 zoomedCursorPosY;
              s16 zoomedCursorDeltaY;
              s16 zoomedCursorDeltaX;
              u16 zoomedCursorMovementFrameCounter;
              u16 unk_06e;
              u16 playerIconTileTag;
              u16 playerIconPaletteTag;
              u16 playerIconSpritePosX;
              u16 playerIconSpritePosY;
              bool8 zoomed;
              u8 initStep;
              s8 cursorMovementFrameCounter;
              s8 cursorDeltaX;
              s8 cursorDeltaY;
              bool8 needUpdateVideoRegs;
              bool8 blinkPlayerIcon;
              bool8 playerIsInCave;
              u8 bgNum;
              u8 charBaseIdx;
              u8 mapBaseIdx;
              bool8 bgManaged;
              u8 filler_084[0x100];
              u8 cursorSmallImage[0x100];
              u8 cursorLargeImage[0x600];
};

struct RegionMapLocation
{
    u8 x;
    u8 y;
    u8 width;
    u8 height;
    const u8 *name;
};




void InitRegionMapData(struct RegionMap *regionMap, const struct BgTemplate *template, bool8 zoomed);
bool8 LoadRegionMapGfx(void);
void UpdateRegionMapVideoRegs(void);
void InitRegionMap(struct RegionMap *regionMap, bool8 zoomed);
u8 DoRegionMapInputCallback(void);
bool8 UpdateRegionMapZoom(void);
void FreeRegionMapIconResources(void);
mapsec_u16_t GetRegionMapSecIdAt(u16 x, u16 y);
void CreateRegionMapPlayerIcon(u16 tileTag, u16 paletteTag);
void CreateRegionMapCursor(u16 tileTag, u16 paletteTag);
bool32 IsEventIslandMapSecId(mapsec_u8_t mapSecId);
u8 *GetMapName(u8 *dest, mapsec_u16_t regionMapId, u16 padLength);
u8 *GetMapNameGeneric(u8 *dest, mapsec_u16_t mapSecId);
u8 *GetMapNameHandleAquaHideout(u8 *dest, mapsec_u16_t mapSecId);
mapsec_u16_t CorrectSpecialMapSecId(mapsec_u16_t mapSecId);
void ShowRegionMapForPokedexAreaScreen(struct RegionMap *regionMap);
void PokedexAreaScreen_UpdateRegionMapVariablesAndVideoRegs(s16 x, s16 y);
void CB2_OpenFlyMap(void);
bool8 IsRegionMapZoomed(void);
void TrySetPlayerIconBlink(void);
void BlendRegionMap(u16 color, u32 coeff);
void SetRegionMapDataForZoom(void);


u32 FilterFlyDestination(struct RegionMap* regionMap);
void SetFlyDestination(struct RegionMap* regionMap);

extern const struct RegionMapLocation gRegionMapEntries[];
# 14 "src/map_name_popup.c" 2
# 1 "include/rtc.h" 1



# 1 "include/global.h" 1
# 5 "include/rtc.h" 2

# 1 "include/config/overworld.h" 1
# 7 "include/rtc.h" 2
# 1 "include/constants/rtc.h" 1
# 85 "include/constants/rtc.h"
enum TimeOfDay
{
    TIME_MORNING,
    TIME_DAY,
    TIME_EVENING,
    TIME_NIGHT,
    TIMES_OF_DAY_COUNT,
};
# 8 "include/rtc.h" 2

extern struct Time gLocalTime;
extern const s32 sNumDaysInMonths[MONTH_COUNT];

void RtcDisableInterrupts(void);
void RtcRestoreInterrupts(void);
u32 ConvertBcdToBinary(u8 bcd);
bool8 IsLeapYear(u32 year);
u16 ConvertDateToDayCount(u8 year, u8 month, u8 day);
u16 RtcGetDayCount(struct SiiRtcInfo *rtc);
void RtcInit(void);
u16 RtcGetErrorStatus(void);
void RtcGetInfo(struct SiiRtcInfo *rtc);
void RtcGetDateTime(struct SiiRtcInfo *rtc);
void RtcGetStatus(struct SiiRtcInfo *rtc);
void RtcGetRawInfo(struct SiiRtcInfo *rtc);
u16 RtcCheckInfo(struct SiiRtcInfo *rtc);
void RtcReset(void);
void FormatDecimalTime(u8 *dest, s32 hour, s32 minute, s32 second);
void FormatHexTime(u8 *dest, s32 hour, s32 minute, s32 second);
void FormatHexRtcTime(u8 *dest);
void FormatDecimalDate(u8 *dest, s32 year, s32 month, s32 day);
void FormatHexDate(u8 *dest, s32 year, s32 month, s32 day);
void RtcCalcTimeDifference(struct SiiRtcInfo *rtc, struct Time *result, struct Time *t);
void RtcCalcLocalTime(void);
bool8 IsBetweenHours(s32 hours, s32 begin, s32 end);
enum TimeOfDay GetTimeOfDay(void);
enum TimeOfDay GetTimeOfDayForDex(void);
void RtcInitLocalTimeOffset(s32 hour, s32 minute);
void RtcCalcLocalTimeOffset(s32 days, s32 hours, s32 minutes, s32 seconds);
void CalcTimeDifference(struct Time *result, struct Time *t1, struct Time *t2);
u32 RtcGetMinuteCount(void);
u32 RtcGetLocalDayCount(void);
void FormatDecimalTimeWithoutSeconds(u8 *dest, s8 hour, s8 minute, bool32 is24Hour);
u16 GetFullYear(void);
enum Month GetMonth(void);
u8 GetDay(void);
enum Weekday GetDayOfWeek(void);
enum TimeOfDay GenConfigTimeOfDay(enum TimeOfDay timeOfDay);
enum TimeOfDay TryIncrementTimeOfDay(enum TimeOfDay timeOfDay);
enum TimeOfDay TryDecrementTimeOfDay(enum TimeOfDay timeOfDay);
# 15 "src/map_name_popup.c" 2
# 1 "include/start_menu.h" 1



extern bool8 (*gMenuCallback)(void);

void ShowReturnToFieldStartMenu(void);
void Task_ShowStartMenu(u8 taskId);
void ShowStartMenu(void);
void ShowBattlePyramidStartMenu(void);
void SaveGame(void);
void CB2_SetUpSaveAfterLinkBattle(void);
void SaveForBattleTowerLink(void);
void HideStartMenu(void);
void AppendToList(u8 *list, u8 *pos, u8 newEntry);
# 16 "src/map_name_popup.c" 2
# 1 "include/string_util.h" 1



extern u8 gStringVar1[0x100];
extern u8 gStringVar2[0x100];
extern u8 gStringVar3[0x100];
extern u8 gStringVar4[0x3E8];

enum StringConvertMode
{
    STR_CONV_MODE_LEFT_ALIGN,
    STR_CONV_MODE_RIGHT_ALIGN,
    STR_CONV_MODE_LEADING_ZEROS
};

u8 *StringCopy_Nickname(u8 *dest, const u8 *src);
u8 *StringGet_Nickname(u8 *str);
u8 *StringCopy_PlayerName(u8 *dest, const u8 *src);
u8 *StringCopy(u8 *dest, const u8 *src);
u8 *StringAppend(u8 *dest, const u8 *src);
u8 *StringCopyN(u8 *dest, const u8 *src, u8 n);
u8 *StringAppendN(u8 *dest, const u8 *src, u8 n);
u16 StringLength(const u8 *str);
u16 StringLineLength(const u8 *str);
s32 StringCompare(const u8 *str1, const u8 *str2);
s32 StringCompareN(const u8 *str1, const u8 *str2, u32 n);
bool8 IsStringLengthAtLeast(const u8 *str, s32 n);
u8 *ConvertIntToDecimalStringN(u8 *dest, s32 value, enum StringConvertMode mode, u8 n);
u8 *ConvertUIntToDecimalStringN(u8 *dest, u32 value, enum StringConvertMode mode, u8 n);
u8 *ConvertIntToHexStringN(u8 *dest, s32 value, enum StringConvertMode mode, u8 n);
u8 *StringExpandPlaceholders(u8 *dest, const u8 *src);
u8 *StringBraille(u8 *dest, const u8 *src);
const u8 *GetExpandedPlaceholder(u32 id);
u8 *StringFill(u8 *dest, u8 c, u16 n);
u8 *StringCopyPadded(u8 *dest, const u8 *src, u8 c, u16 n);
u8 *StringFillWithTerminator(u8 *dest, u16 n);
u8 *StringCopyN_Multibyte(u8 *dest, u8 *src, u32 n);
u32 StringLength_Multibyte(const u8 *str);
u8 *WriteColorChangeControlCode(u8 *dest, u32 colorType, u8 color);
bool32 IsStringJapanese(u8 *str);
bool32 IsStringNJapanese(u8 *str, s32 n);
u8 GetExtCtrlCodeLength(u8 code);
s32 StringCompareWithoutExtCtrlCodes(const u8 *str1, const u8 *str2);
void ConvertInternationalString(u8 *s, u8 language);
void StripExtCtrlCodes(u8 *str);
u8 *StringCopyUppercase(u8 *dest, const u8 *src);
# 17 "src/map_name_popup.c" 2
# 1 "include/task.h" 1
# 18 "src/map_name_popup.c" 2
# 1 "include/text.h" 1
# 19 "src/map_name_popup.c" 2
# 1 "include/constants/battle_frontier.h" 1



# 1 "include/constants/pokemon.h" 1
# 5 "include/constants/battle_frontier.h" 2
# 20 "src/map_name_popup.c" 2
# 1 "include/constants/layouts.h" 1
# 21 "src/map_name_popup.c" 2
# 1 "include/constants/region_map_sections.h" 1
# 22 "src/map_name_popup.c" 2
# 1 "include/constants/weather.h" 1
# 23 "src/map_name_popup.c" 2




enum MapPopUp_Themes
{
    MAPPOPUP_THEME_WOOD,
    MAPPOPUP_THEME_MARBLE,
    MAPPOPUP_THEME_STONE,
    MAPPOPUP_THEME_BRICK,
    MAPPOPUP_THEME_UNDERWATER,
    MAPPOPUP_THEME_STONE2,
};

enum MapPopUp_Themes_BW
{
    MAPPOPUP_THEME_BW_DEFAULT,
};


static void Task_MapNamePopUpWindow(u8 taskId);
static void UpdateSecondaryPopUpWindow(u8 secondaryPopUpWindowId);
static void ShowMapNamePopUpWindow(void);
static void LoadMapNamePopUpWindowBg(void);


__attribute__((section(".sbss"))) u8 gPopupTaskId = 0;


static const u8 sMapPopUp_Table[][960] =
{
    [MAPPOPUP_THEME_WOOD] = INCBIN_U8("graphics/map_popup/wood.4bpp"),
    [MAPPOPUP_THEME_MARBLE] = INCBIN_U8("graphics/map_popup/marble.4bpp"),
    [MAPPOPUP_THEME_STONE] = INCBIN_U8("graphics/map_popup/stone.4bpp"),
    [MAPPOPUP_THEME_BRICK] = INCBIN_U8("graphics/map_popup/brick.4bpp"),
    [MAPPOPUP_THEME_UNDERWATER] = INCBIN_U8("graphics/map_popup/underwater.4bpp"),
    [MAPPOPUP_THEME_STONE2] = INCBIN_U8("graphics/map_popup/stone2.4bpp"),
};

static const u8 sMapPopUp_OutlineTable[][960] =
{
    [MAPPOPUP_THEME_WOOD] = INCBIN_U8("graphics/map_popup/wood_outline.4bpp"),
    [MAPPOPUP_THEME_MARBLE] = INCBIN_U8("graphics/map_popup/marble_outline.4bpp"),
    [MAPPOPUP_THEME_STONE] = INCBIN_U8("graphics/map_popup/stone_outline.4bpp"),
    [MAPPOPUP_THEME_BRICK] = INCBIN_U8("graphics/map_popup/brick_outline.4bpp"),
    [MAPPOPUP_THEME_UNDERWATER] = INCBIN_U8("graphics/map_popup/underwater_outline.4bpp"),
    [MAPPOPUP_THEME_STONE2] = INCBIN_U8("graphics/map_popup/stone2_outline.4bpp"),
};

static const u16 sMapPopUp_PaletteTable[][16] =
{
    [MAPPOPUP_THEME_WOOD] = INCBIN_U16("graphics/map_popup/wood.gbapal"),
    [MAPPOPUP_THEME_MARBLE] = INCBIN_U16("graphics/map_popup/marble_outline.gbapal"),
    [MAPPOPUP_THEME_STONE] = INCBIN_U16("graphics/map_popup/stone_outline.gbapal"),
    [MAPPOPUP_THEME_BRICK] = INCBIN_U16("graphics/map_popup/brick_outline.gbapal"),
    [MAPPOPUP_THEME_UNDERWATER] = INCBIN_U16("graphics/map_popup/underwater_outline.gbapal"),
    [MAPPOPUP_THEME_STONE2] = INCBIN_U16("graphics/map_popup/stone2_outline.gbapal"),
};

static const u16 sMapPopUp_Palette_Underwater[16] = INCBIN_U16("graphics/map_popup/underwater.gbapal");




static const u8 sMapSectionToThemeId[MAPSEC_COUNT - (MAPSEC_SPECIAL_AREA - MAPSEC_PALLET_TOWN + 1) - 1] =
{
    [MAPSEC_LITTLEROOT_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_OLDALE_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_DEWFORD_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LAVARIDGE_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FALLARBOR_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VERDANTURF_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_PACIFIDLOG_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_PETALBURG_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_SLATEPORT_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_MAUVILLE_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_RUSTBORO_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_FORTREE_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_LILYCOVE_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_MOSSDEEP_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_SOOTOPOLIS_CITY] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_EVER_GRANDE_CITY] = MAPPOPUP_THEME_BRICK,
    [MAPSEC_ROUTE_101] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_102] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_103] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_104] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_105] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_106] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_107] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_108] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_109] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_110] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_111] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_112] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_113] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_114] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_115] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_116] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_117] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_118] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_119] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_120] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_121] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_122] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_123] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_124] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_125] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_126] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_127] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_128] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_129] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_130] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_131] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_132] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_133] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_ROUTE_134] = MAPPOPUP_THEME_UNDERWATER,
    [MAPSEC_UNDERWATER_124] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_126] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_127] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_128] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_SOOTOPOLIS] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_GRANITE_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MT_CHIMNEY] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SAFARI_ZONE] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_BATTLE_FRONTIER] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_PETALBURG_WOODS] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_RUSTURF_TUNNEL] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ABANDONED_SHIP] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_NEW_MAUVILLE] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_METEOR_FALLS] = MAPPOPUP_THEME_STONE,
    [MAPSEC_METEOR_FALLS2] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MT_PYRE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_AQUA_HIDEOUT_OLD] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SHOAL_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_VICTORY_ROAD] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MIRAGE_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_CAVE_OF_ORIGIN] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SOUTHERN_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FIERY_PATH] = MAPPOPUP_THEME_STONE,
    [MAPSEC_FIERY_PATH2] = MAPPOPUP_THEME_STONE,
    [MAPSEC_JAGGED_PASS] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_JAGGED_PASS2] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SEALED_CHAMBER] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_SEALED_CHAMBER] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_SCORCHED_SLAB] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ISLAND_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_DESERT_RUINS] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ANCIENT_TOMB] = MAPPOPUP_THEME_STONE,
    [MAPSEC_INSIDE_OF_TRUCK] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SKY_PILLAR] = MAPPOPUP_THEME_STONE,
    [MAPSEC_SECRET_BASE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_DYNAMIC] = MAPPOPUP_THEME_MARBLE,
    [MAPSEC_TWIN_LEAF_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SANDGEM_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_JUBILIFE_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_OREBURGH_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FLOROMA_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ETERNA_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_HEARTHOME_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SOLACEON_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VEILSTONE_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_PASTORIA_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_CELESTIC_TOWN] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_CANALAVE_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SUNYSHORE_CITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VALLEY_WINDWORKS] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FUEGO_IRONWORKS] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ETERNA_FOREST] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_SINNOH_POKEMON_LEAUGE] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VERITY_LAKEFRONT] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LAKE_VERITY] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_VALOR_LAKEFRONT] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_LAKE_VALOR] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_IRON_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_201] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_202] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_203] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_204] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_205] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_206] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_207] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_208] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_209] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_210] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_211] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_212] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_213] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_214] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_215] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_218] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_219] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_220] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_221] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_222] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ROUTE_223] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_OREBURGH_GATE] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_RAVAGED_PATH] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_OREBURGH_MINE] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_AQUA_HIDEOUT] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MAGMA_HIDEOUT ] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MIRAGE_TOWER] = MAPPOPUP_THEME_STONE,
    [MAPSEC_BIRTH_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_FARAWAY_ISLAND] = MAPPOPUP_THEME_WOOD,
    [MAPSEC_ARTISAN_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_MARINE_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_MARINE_CAVE] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_TERRA_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_UNDERWATER_105] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_125] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_UNDERWATER_129] = MAPPOPUP_THEME_STONE2,
    [MAPSEC_DESERT_UNDERPASS] = MAPPOPUP_THEME_STONE,
    [MAPSEC_ALTERING_CAVE] = MAPPOPUP_THEME_STONE,
    [MAPSEC_NAVEL_ROCK] = MAPPOPUP_THEME_STONE,
    [MAPSEC_TRAINER_HILL] = MAPPOPUP_THEME_MARBLE,
};
# 248 "src/map_name_popup.c"
static const u8 sMapPopUpTilesPrimary_BW[] = {0};
static const u8 sMapPopUpTilesSecondary_BW[] = {0};
static const u16 sMapPopUpTilesPalette_BW_Black[] = {0};
static const u16 sMapPopUpTilesPalette_BW_White[] = {0};


static const u8 sRegionMapSectionId_To_PopUpThemeIdMapping_BW[] =
{
    [MAPSEC_LITTLEROOT_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_OLDALE_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DEWFORD_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_LAVARIDGE_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FALLARBOR_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_VERDANTURF_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_PACIFIDLOG_TOWN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_PETALBURG_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SLATEPORT_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MAUVILLE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_RUSTBORO_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FORTREE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_LILYCOVE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MOSSDEEP_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SOOTOPOLIS_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_EVER_GRANDE_CITY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_101] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_102] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_103] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_104] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_105] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_106] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_107] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_108] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_109] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_110] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_111] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_112] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_113] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_114] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_115] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_116] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_117] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_118] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_119] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_120] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_121] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_122] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_123] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_124] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_125] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_126] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_127] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_128] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_129] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_130] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_131] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_132] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_133] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ROUTE_134] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_124] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_126] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_127] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_128] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_SOOTOPOLIS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_GRANITE_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MT_CHIMNEY] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SAFARI_ZONE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_BATTLE_FRONTIER] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_PETALBURG_WOODS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_RUSTURF_TUNNEL] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ABANDONED_SHIP] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_NEW_MAUVILLE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_METEOR_FALLS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_METEOR_FALLS2] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MT_PYRE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_AQUA_HIDEOUT_OLD] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SHOAL_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_SEAFLOOR_CAVERN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_VICTORY_ROAD] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MIRAGE_ISLAND] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_CAVE_OF_ORIGIN] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SOUTHERN_ISLAND] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FIERY_PATH] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FIERY_PATH2] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_JAGGED_PASS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_JAGGED_PASS2] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SEALED_CHAMBER] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_SEALED_CHAMBER] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SCORCHED_SLAB] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ISLAND_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DESERT_RUINS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ANCIENT_TOMB] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_INSIDE_OF_TRUCK] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SKY_PILLAR] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_SECRET_BASE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DYNAMIC] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_AQUA_HIDEOUT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MAGMA_HIDEOUT] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MIRAGE_TOWER] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_BIRTH_ISLAND] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_FARAWAY_ISLAND] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ARTISAN_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_MARINE_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_MARINE_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_TERRA_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_105] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_125] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_UNDERWATER_129] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_DESERT_UNDERPASS] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_ALTERING_CAVE] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_NAVEL_ROCK] = MAPPOPUP_THEME_BW_DEFAULT,
    [MAPSEC_TRAINER_HILL] = MAPPOPUP_THEME_BW_DEFAULT,
};

static const u8 sText_PyramidFloor1[] = _("PYRAMID FLOOR 1");
static const u8 sText_PyramidFloor2[] = _("PYRAMID FLOOR 2");
static const u8 sText_PyramidFloor3[] = _("PYRAMID FLOOR 3");
static const u8 sText_PyramidFloor4[] = _("PYRAMID FLOOR 4");
static const u8 sText_PyramidFloor5[] = _("PYRAMID FLOOR 5");
static const u8 sText_PyramidFloor6[] = _("PYRAMID FLOOR 6");
static const u8 sText_PyramidFloor7[] = _("PYRAMID FLOOR 7");
static const u8 sText_Pyramid[] = _("PYRAMID");

static const u8 *const sBattlePyramid_MapHeaderStrings[7 + 1] =
{
    sText_PyramidFloor1,
    sText_PyramidFloor2,
    sText_PyramidFloor3,
    sText_PyramidFloor4,
    sText_PyramidFloor5,
    sText_PyramidFloor6,
    sText_PyramidFloor7,
    sText_Pyramid,
};

static bool8 __attribute__((unused)) StartMenu_ShowMapNamePopup(void)
{
    HideStartMenu();
    ShowMapNamePopup();
    return 1;
}


enum {
    STATE_SLIDE_IN,
    STATE_WAIT,
    STATE_SLIDE_OUT,
    STATE_UNUSED,
    STATE_ERASE,
    STATE_END,
    STATE_PRINT,
};
# 410 "src/map_name_popup.c"
void ShowMapNamePopup(void)
{
    if (FlagGet((0x4000 + 0x0)) != 1)
    {
        if (!FuncIsActiveTask(Task_MapNamePopUpWindow))
        {

            if (2 == 4)
            {
                gPopupTaskId = CreateTask(Task_MapNamePopUpWindow, 100);

                if (0 && !IsWeatherAlphaBlend())
                    SetGpuReg(0x50, (1 << 0) | (((1 << 8) | (1 << 9) | (1 << 10) | (1 << 11)) | (1 << 12) | (1 << 13)) | (1 << 6));
            }
            else
            {
                gPopupTaskId = CreateTask(Task_MapNamePopUpWindow, 90);
                SetGpuReg(0x12, ((2 == 4) ? 24 : 40));
            }

            gTasks[gPopupTaskId].data[0] = STATE_PRINT;
            gTasks[gPopupTaskId].data[2] = ((2 == 4) ? 24 : 40);
        }
        else
        {


            if (gTasks[gPopupTaskId].data[0] != STATE_SLIDE_OUT)
                gTasks[gPopupTaskId].data[0] = STATE_SLIDE_OUT;
            gTasks[gPopupTaskId].data[3] = 1;
        }
    }
}

static void Task_MapNamePopUpWindow(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->data[0])
    {
    case STATE_PRINT:

        if (++task->data[4] > 30)
        {
            task->data[0] = STATE_SLIDE_IN;
            task->data[4] = 0;
            ShowMapNamePopUpWindow();
            if (2 == 4)
            {
                EnableInterrupts((1 << 1));
                SetHBlankCallback(HBlankCB_DoublePopupWindow);
            }
        }
        break;
    case STATE_SLIDE_IN:

        task->data[2] -= 2;
        if (task->data[2] <= 0 )
        {
            task->data[2] = 0;
            task->data[0] = STATE_WAIT;
            gTasks[gPopupTaskId].data[1] = 0;
        }
        break;
    case STATE_WAIT:

        if (++task->data[1] > 120)
        {
            task->data[1] = 0;
            task->data[0] = STATE_SLIDE_OUT;
        }
        break;
    case STATE_SLIDE_OUT:

        task->data[2] += 2;
        if (task->data[2] >= ((2 == 4) ? 24 : 40))
        {
            task->data[2] = ((2 == 4) ? 24 : 40);
            if (task->data[3])
            {


                task->data[0] = STATE_PRINT;
                task->data[4] = 0;
                task->data[3] = 0;
            }
            else
            {
                task->data[0] = STATE_ERASE;
                return;
            }
        }
        break;
    case STATE_ERASE:
        ClearStdWindowAndFrame(GetMapNamePopUpWindowId(), 1);
        if (2 == 4)
            ClearStdWindowAndFrame(GetSecondaryPopUpWindowId(), 1);
        task->data[0] = STATE_END;
        break;
    case STATE_END:
        HideMapNamePopUpWindow();
        return;
    }
    if (2 != 4)
        SetGpuReg(0x12, task->data[2]);
}

void HideMapNamePopUpWindow(void)
{
    if (FuncIsActiveTask(Task_MapNamePopUpWindow))
    {

        if (GetMapNamePopUpWindowId() != 0xFF)

        {
            ClearStdWindowAndFrame(GetMapNamePopUpWindowId(), 1);
            RemoveMapNamePopUpWindow();
        }

        if (2 == 4)
        {
            if (GetSecondaryPopUpWindowId() != 0xFF)
            {
                ClearStdWindowAndFrame(GetSecondaryPopUpWindowId(), 1);
                RemoveSecondaryPopUpWindow();
            }

            DisableInterrupts((1 << 1));
            SetHBlankCallback(
# 538 "src/map_name_popup.c" 3 4
                             ((void *)0)
# 538 "src/map_name_popup.c"
                                 );

            if (0 && !IsWeatherAlphaBlend())
            {
                SetGpuReg(0x48, ((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3)) | (1 << 4) | ((1 << 8) | (1 << 9) | (1 << 10) | (1 << 11)) | (1 << 12));
                SetGpuReg(0x50, (1 << 9) | (1 << 10) | (1 << 11) | (1 << 12) | (1 << 6));
                SetGpuReg(0x52, (((10) << 8) | (8)));
            }
        }

        SetGpuReg_ForcedBlank(0x12, 0);
        DestroyTask(gPopupTaskId);
    }
}

static void UpdateSecondaryPopUpWindow(u8 secondaryPopUpWindowId)
{
    u8 mapDisplayHeader[24];
    u8 *withoutPrefixPtr = &(mapDisplayHeader[0]);

    if (0 != 0)
    {
        RtcCalcLocalTime();
        FormatDecimalTimeWithoutSeconds(withoutPrefixPtr, gLocalTime.hours, gLocalTime.minutes, 0 == 2);
        AddTextPrinterParameterized(secondaryPopUpWindowId, FONT_SMALL, mapDisplayHeader, GetStringRightAlignXOffset(FONT_SMALL, mapDisplayHeader, 240) - 5, 8, 0xFF, 
# 562 "src/map_name_popup.c" 3 4
                                                                                                                                                                                         ((void *)0)
# 562 "src/map_name_popup.c"
                                                                                                                                                                                             );
    }
    CopyWindowToVram(secondaryPopUpWindowId, COPYWIN_FULL);
}

static void ShowMapNamePopUpWindow(void)
{
    u8 mapDisplayHeader[24];
    u8 *withoutPrefixPtr;
    u8 x;
    const u8 *mapDisplayHeaderSource;
    u8 mapNamePopUpWindowId, secondaryPopUpWindowId;

    if (CurrentBattlePyramidLocation() != 0)
    {
        if (gMapHeader.mapLayoutId == 378)
        {
            withoutPrefixPtr = &(mapDisplayHeader[3]);
            mapDisplayHeaderSource = sBattlePyramid_MapHeaderStrings[7];
        }
        else
        {
            withoutPrefixPtr = &(mapDisplayHeader[3]);
            mapDisplayHeaderSource = sBattlePyramid_MapHeaderStrings[gSaveBlock2Ptr->frontier.curChallengeBattleNum];
        }
        StringCopy(withoutPrefixPtr, mapDisplayHeaderSource);
    }
    else
    {
        withoutPrefixPtr = &(mapDisplayHeader[3]);
        GetMapName(withoutPrefixPtr, gMapHeader.regionMapSectionId, 0);
    }

    if (2 == 4)
    {
        if (0 && !IsWeatherAlphaBlend())
            SetGpuRegBits(0x48, (1 << 5));

        mapNamePopUpWindowId = AddMapNamePopUpWindow();
        secondaryPopUpWindowId = AddSecondaryPopUpWindow();
    }
    else
    {
        AddMapNamePopUpWindow();
    }

    LoadMapNamePopUpWindowBg();

    mapDisplayHeader[0] = 0xFC;
    mapDisplayHeader[1] = 0x02;
    mapDisplayHeader[2] = 0x0;

    if (2 == 4)
    {
        AddTextPrinterParameterized(mapNamePopUpWindowId, FONT_SHORT, mapDisplayHeader, 8, 2, 0xFF, 
# 616 "src/map_name_popup.c" 3 4
                                                                                                             ((void *)0)
# 616 "src/map_name_popup.c"
                                                                                                                 );
        CopyWindowToVram(mapNamePopUpWindowId, COPYWIN_FULL);
        UpdateSecondaryPopUpWindow(secondaryPopUpWindowId);
    }
    else
    {
        x = GetStringCenterAlignXOffset(FONT_NARROW, withoutPrefixPtr, 80);
        AddTextPrinterParameterized(GetMapNamePopUpWindowId(), FONT_NARROW, mapDisplayHeader, x, 3, 0xFF, 
# 623 "src/map_name_popup.c" 3 4
                                                                                                                   ((void *)0)
# 623 "src/map_name_popup.c"
                                                                                                                       );
        CopyWindowToVram(GetMapNamePopUpWindowId(), COPYWIN_FULL);
    }
}
# 639 "src/map_name_popup.c"
static void DrawMapNamePopUpFrame(u8 bg, u8 x, u8 y, u8 deltaX, u8 deltaY, u8 unused)
{
    s32 i;


    for (i = 0; i < 1 + 0x228 - 0x21D; i++)
        FillBgTilemapBufferRect(bg, 0x21D + i, i - 1 + x, y - 1, 1, 1, 14);


    FillBgTilemapBufferRect(bg, 0x229, x - 1, y, 1, 1, 14);
    FillBgTilemapBufferRect(bg, 0x22A, deltaX + x, y, 1, 1, 14);
    FillBgTilemapBufferRect(bg, 0x22B, x - 1, y + 1, 1, 1, 14);
    FillBgTilemapBufferRect(bg, 0x22C, deltaX + x, y + 1, 1, 1, 14);
    FillBgTilemapBufferRect(bg, 0x22D, x - 1, y + 2, 1, 1, 14);
    FillBgTilemapBufferRect(bg, 0x22E, deltaX + x, y + 2, 1, 1, 14);


    for (i = 0; i < 1 + 0x23A - 0x22F; i++)
        FillBgTilemapBufferRect(bg, 0x22F + i, i - 1 + x, y + deltaY, 1, 1, 14);
}

static void LoadMapNamePopUpWindowBg(void)
{
    u8 popUpThemeId;
    u8 popupWindowId = GetMapNamePopUpWindowId();
    mapsec_u16_t regionMapSectionId = gMapHeader.regionMapSectionId;
    u8 secondaryPopUpWindowId;

    if (2 == 4)
        secondaryPopUpWindowId = GetSecondaryPopUpWindowId();

    if (2 == 4)
    {
        popUpThemeId = sRegionMapSectionId_To_PopUpThemeIdMapping_BW[regionMapSectionId];
        switch (popUpThemeId)
        {

            default:
                if (0 == 1)
                    LoadPalette(sMapPopUpTilesPalette_BW_White, (0x000 + ((14) * 16)), sizeof(sMapPopUpTilesPalette_BW_White));
                else
                    LoadPalette(sMapPopUpTilesPalette_BW_Black, (0x000 + ((14) * 16)), sizeof(sMapPopUpTilesPalette_BW_Black));

                CopyToWindowPixelBuffer(popupWindowId, sMapPopUpTilesPrimary_BW, sizeof(sMapPopUpTilesPrimary_BW), 0);
                CopyToWindowPixelBuffer(secondaryPopUpWindowId, sMapPopUpTilesSecondary_BW, sizeof(sMapPopUpTilesSecondary_BW), 0);
                break;
        }

        PutWindowTilemap(popupWindowId);
        PutWindowTilemap(secondaryPopUpWindowId);
    }
    else
    {
        popUpThemeId = sMapSectionToThemeId[regionMapSectionId];
        LoadBgTiles(GetWindowAttribute(popupWindowId, WINDOW_BG), sMapPopUp_OutlineTable[popUpThemeId], 0x400, 0x21D);
        CallWindowFunction(popupWindowId, DrawMapNamePopUpFrame);
        PutWindowTilemap(popupWindowId);
        if (gMapHeader.weather == 14)
            LoadPalette(&sMapPopUp_Palette_Underwater, (0x000 + ((14) * 16)), sizeof(sMapPopUp_Palette_Underwater));
        else
            LoadPalette(sMapPopUp_PaletteTable[popUpThemeId], (0x000 + ((14) * 16)), sizeof(sMapPopUp_PaletteTable[0]));
        BlitBitmapToWindow(popupWindowId, sMapPopUp_Table[popUpThemeId], 0, 0, 80, 24);
    }
}
