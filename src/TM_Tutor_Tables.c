#include "defines.h"
#include "../include/moves.h"

const u16 gTMHMMoves[NUM_TMSHMS] =
{
	MOVE_FOCUSPUNCH,	//1
	MOVE_DRAGONCLAW,	//2
	MOVE_WATERPULSE,	//3
	MOVE_CALMMIND,		//4
	MOVE_ROAR,			//5
	MOVE_TOXIC,			//6
	MOVE_HAIL,			//7
	MOVE_BULKUP,		//8
	MOVE_BULLETSEED,	//9
	MOVE_HIDDENPOWER,	//10
	MOVE_SUNNYDAY,		//11
	MOVE_TAUNT,			//12
	MOVE_ICEBEAM,		//13
	MOVE_BLIZZARD,		//14
	MOVE_HYPERBEAM,		//15
	MOVE_LIGHTSCREEN,	//16
	MOVE_PROTECT,		//17
	MOVE_RAINDANCE,		//18
	MOVE_GIGADRAIN,		//19
	MOVE_SAFEGUARD,		//20
	MOVE_FRUSTRATION,	//21
	MOVE_SOLARBEAM,		//22
	MOVE_IRONTAIL,		//23
	MOVE_THUNDERBOLT,	//24
	MOVE_THUNDER,		//25
	MOVE_EARTHQUAKE,	//26
	MOVE_RETURN,		//27
	MOVE_DIG,			//28
	MOVE_PSYCHIC,		//29
	MOVE_SHADOWBALL,	//30
	MOVE_BRICKBREAK,	//31
	MOVE_DOUBLETEAM,	//32
	MOVE_REFLECT,		//33
	MOVE_SHOCKWAVE,		//34
	MOVE_FLAMETHROWER,	//35
	MOVE_SLUDGEBOMB,	//36
	MOVE_SANDSTORM,		//37
	MOVE_FIREBLAST,		//38
	MOVE_ROCKTOMB,		//39
	MOVE_AERIALACE,		//40
	MOVE_TORMENT,		//41
	MOVE_FACADE,		//42
	MOVE_SECRETPOWER,	//43
	MOVE_REST,			//44
	MOVE_ATTRACT,		//45
	MOVE_THIEF,			//46
	MOVE_STEELWING,		//47
	MOVE_SKILLSWAP,		//48
	MOVE_LEECHFANG,		//49
	MOVE_OVERHEAT,		//50
	MOVE_ROOST,			//51
	MOVE_FOCUSBLAST,	//52
	MOVE_ENERGYBALL,	//53
	MOVE_FALSESWIPE,	//54
	MOVE_BRINE,			//55
	MOVE_HONECLAWS,		//56
	MOVE_CHARGEBEAM,	//57
	MOVE_ENDURE,		//58
	MOVE_DRAGONPULSE,	//59
	MOVE_DRAINPUNCH,	//60
	MOVE_WILLOWISP,		//61
	MOVE_SILVERWIND,	//62
	MOVE_VENOSHOCK,		//63
	MOVE_EXPLOSION,		//64
	MOVE_SHADOWCLAW,	//65
	MOVE_PAYBACK,		//66
	MOVE_RECYCLE,		//67
	MOVE_GIGAIMPACT,	//68
	MOVE_ROCKPOLISH,	//69
	MOVE_FLASH,			//70
	MOVE_STONEEDGE,		//71
	MOVE_AVALANCHE,		//72
	MOVE_THUNDERWAVE,	//73
	MOVE_GYROBALL,		//74
	MOVE_SWORDSDANCE,	//75
	MOVE_STEALTHROCK,	//76
	MOVE_FLAMECHARGE,	//77
	MOVE_LOWSWEEP,		//78
	MOVE_DARKPULSE,		//79
	MOVE_ROCKSLIDE,		//80
	MOVE_XSCISSOR,		//81
	MOVE_SLEEPTALK,		//82
	MOVE_SCALD,			//83
	MOVE_POISONJAB,		//84
	MOVE_DREAMEATER,	//85
	MOVE_GRASSKNOT,		//86
	MOVE_SWAGGER,		//87
	MOVE_PLUCK,			//88
	MOVE_UTURN,			//89
	MOVE_SUBSTITUTE,	//90
	MOVE_FLASHCANNON,	//91
	MOVE_VOLTSWITCH,	//92
	MOVE_DRAGONTAIL,	//93
	MOVE_INCINERATE,	//94
	MOVE_STRUGGLEBUG,	//95
	MOVE_BULLDOZE,		//96
	MOVE_FROSTBREATH,	//97
	MOVE_WORKUP,		//98
	MOVE_WILDCHARGE,	//99
	MOVE_INFESTATION,	//100
	MOVE_POWERUPPUNCH,	//101
	MOVE_DAZZLINGGLEAM,	//102
	MOVE_SLUDGEWAVE,	//103
	MOVE_PSYSHOCK,		//104
	MOVE_BRUTALSWING,	//105
	MOVE_SMARTSTRIKE,	//106
	MOVE_ACROBATICS,	//107
	MOVE_SNARL,			//108
	MOVE_DEFOG,			//109
	MOVE_CAPTIVATE,		//110
	MOVE_SMACKDOWN,		//111
	MOVE_ROUND,			//112
	MOVE_ECHOEDVOICE,	//113
	MOVE_NATURALGIFT,	//114
	MOVE_QUASH,			//115
	MOVE_TRICKROOM,		//116
	MOVE_FLING,			//117
	MOVE_AURORAVEIL,	//118
	MOVE_SKYDROP,		//119
	MOVE_NATUREPOWER,	//120
	MOVE_CUT,			//121
	MOVE_FLY,			//122
	MOVE_SURF,			//123
	MOVE_STRENGTH,		//124
	MOVE_DIVE,			//125
	MOVE_ROCKSMASH,		//126
	MOVE_WATERFALL,		//127
	MOVE_ROCKCLIMB,		//128
};

const u16 gMoveTutorMoves[NUM_MOVE_TUTOR_MOVES] =
{
	MOVE_FIREPUNCH,			//1
	MOVE_ICEPUNCH,			//2
	MOVE_THUNDERPUNCH,		//3
	MOVE_SNORE,				//4
	MOVE_HEALBELL,			//5
	MOVE_ELECTROWEB,		//6
	MOVE_LOWKICK,			//7
	MOVE_UPROAR,			//8
	MOVE_BIND,				//9
	MOVE_HELPINGHAND,		//10
	MOVE_BLOCK,				//11
	MOVE_WORRYSEED,			//12
	MOVE_COVET,				//13
	MOVE_BUGBITE,			//14
	MOVE_SNATCH,			//15
	MOVE_SPITE,				//16
	MOVE_AFTERYOU,			//17
	MOVE_SYNTHESIS,			//18
	MOVE_SIGNALBEAM,		//19
	MOVE_GRAVITY,			//20
	MOVE_IRONDEFENSE,		//21
	MOVE_TELEKINESIS,		//22
	MOVE_MAGNETRISE,		//23
	MOVE_BOUNCE,			//24
	MOVE_ROLEPLAY,			//25
	MOVE_IRONHEAD,			//26
	MOVE_AQUATAIL,			//27
	MOVE_PAINSPLIT,			//28
	MOVE_TAILWIND,			//29
	MOVE_ENDEAVOR,			//30
	MOVE_ICYWIND,			//31
	MOVE_ZENHEADBUTT,		//32
	MOVE_SEEDBOMB,			//33
	MOVE_LASERFOCUS,		//34
	MOVE_TRICK,				//35
	MOVE_DRILLRUN,			//36
	MOVE_MAGICCOAT,			//37
	MOVE_MAGICROOM,			//38
	MOVE_WONDERROOM,		//39
	MOVE_LIQUIDATION,		//40
	MOVE_GASTROACID,		//41
	MOVE_FOULPLAY,			//42
	MOVE_SUPERFANG,			//43
	MOVE_OUTRAGE,			//44
	MOVE_SKYATTACK,			//45
	MOVE_THROATCHOP,		//46
	MOVE_STOMPINGTANTRUM,	//47
	MOVE_EARTHPOWER,		//48
	MOVE_GUNKSHOT,			//49
	MOVE_DUALCHOP,			//50
	MOVE_HEATWAVE,			//51
	MOVE_HYPERVOICE,		//52
	MOVE_SUPERPOWER,		//53
	MOVE_KNOCKOFF,			//54
	MOVE_PSYCHUP,			//55
	MOVE_VACUUMWAVE,		//56
	MOVE_LASTRESORT,		//57
	MOVE_CONFIDE,			//58
	MOVE_GRASSPLEDGE,		//59
	MOVE_FIREPLEDGE,		//60
	MOVE_WATERPLEDGE,		//61
	MOVE_FRENZYPLANT,		//62
	MOVE_BLASTBURN,			//63
	MOVE_HYDROCANNON,		//64
	MOVE_FOCUSENERGY,		//65
	MOVE_COSMICPOWER,		//66
	MOVE_BATONPASS,			//67
	MOVE_ENCORE,			//68
	MOVE_SCREECH,			//69
	MOVE_FAKETEARS,			//70
	MOVE_SCARYFACE,			//71
	MOVE_VENOMDRENCH,		//72
	MOVE_SPIKES,			//73
	MOVE_TOXICSPIKES,		//74
	MOVE_DRAGONDANCE,		//75
	MOVE_AGILITY,			//76
	MOVE_NASTYPLOT,			//77
	MOVE_GRASSYTERRAIN,		//78
	MOVE_MISTYTERRAIN,		//79
	MOVE_ELECTRICTERRAIN,	//80
	MOVE_PSYCHICTERRAIN,	//81
	MOVE_WHIRLPOOL,			//82
	MOVE_FIRESPIN,			//83
	MOVE_SANDTOMB,			//84
	MOVE_PINMISSILE,		//85
	MOVE_ICICLESPEAR,		//86
	MOVE_TAILSLAP,			//87
	MOVE_ROCKBLAST,			//88
	MOVE_THUNDERFANG,		//89
	MOVE_ICEFANG,			//90 
	MOVE_FIREFANG,			//91
	MOVE_BODYSLAM,			//92
	MOVE_BODYPRESS,			//93
	MOVE_HEATCRASH,			//94
	MOVE_HEAVYSLAM,			//95
	MOVE_REVERSAL,			//96
	MOVE_ELECTROBALL,		//97
	MOVE_STOREDPOWER,		//98
	MOVE_BREAKINGSWIPE,		//99
	MOVE_RAZORSHELL,		//100
	MOVE_HEX,				//101
	MOVE_WEATHERBALL,		//102
	MOVE_AIRSLASH,			//103
	MOVE_AURASPHERE,		//104
	MOVE_BLAZEKICK,			//105
	MOVE_BUGBUZZ,			//106
	MOVE_CROSSPOISON,		//107
	MOVE_CRUNCH,			//108
	MOVE_DARKESTLARIAT,		//109
	MOVE_HIGHHORSEPOWER,	//110
	MOVE_LEAFBLADE,			//111
	MOVE_MUDDYWATER,		//112
	MOVE_MYSTICALFIRE,		//113
	MOVE_PHANTOMFORCE,		//114
	MOVE_PLAYROUGH,			//115
	MOVE_POLLENPUFF,		//116
	MOVE_POWERGEM,			//117
	MOVE_PSYCHICFANGS,		//118
	MOVE_PSYCHOCUT,			//119
	MOVE_BRAVEBIRD,			//120
	MOVE_CLOSECOMBAT,		//121
	MOVE_FLAREBLITZ,		//122
	MOVE_HURRICANE,			//123
	MOVE_HYDROPUMP,			//124
	MOVE_LEAFSTORM,			//125
	MOVE_MEGAHORN,			//126
	MOVE_POWERWHIP,			//127
	MOVE_SOLARBLADE,		//128
	MOVE_EXPANDINGFORCE,	//129
	MOVE_STEELROLLER,		//130
	MOVE_SCALESHOT,			//131
	MOVE_METEORBEAM,		//131
	MOVE_MISTYEXPLOSION,	//132
	MOVE_GRASSYGLIDE,		//133
	MOVE_RISINGVOLTAGE,		//134
	MOVE_TERRAINPULSE,		//135
	MOVE_SKITTERSMACK,		//136
	MOVE_BURNINGJEALOUSY,	//137
	MOVE_LASHOUT,			//138
	MOVE_POLTERGEIST,		//139
	MOVE_CORROSIVEGAS,		//140
	MOVE_COACHING,			//141
	MOVE_FLIPTURN,			//142
	MOVE_TRIPLEAXEL,		//143
	MOVE_DUALWINGBEAT,		//144
	MOVE_SCORCHINGSANDS,	//145
	MOVE_SOFTBOILED,		//146
	MOVE_MOONBLAST, 		//147	
	MOVE_FLOATYFALL,		//148
	MOVE_SPLISHYSPLASH,		//149
	MOVE_ZIPPYZAP,			//150
	MOVE_BADDYBAD,			//151
	MOVE_BOUNCYBUBBLE,		//152
	MOVE_BUZZYBUZZ,			//153
	MOVE_FREEZYFROST,		//154
	MOVE_GLITZYGLOW,		//155
	MOVE_SAPPYSEED,			//156
	MOVE_SIZZLYSLIDE,		//157
	MOVE_SPARKLYSWIRL,		//158
};
