#include "../config.h"
#include "../../include/global.h"
#include "../../include/constants/trainer_classes.h"
#include "../../include/constants/songs.h"
#include "../../include/constants/species.h"
/*
music_tables.c
	set up music for each trainer class

tables to edit:
	gClassBasedTrainerEncounterBGM
	gClassBasedBattleBGM
	gWildSpeciesBasedBattleBGM
	gRandomBattleMusicOptions

*/

//Finish Wild Songs for Unbound

#ifndef UNBOUND

//Modify These

#ifdef ENCOUNTER_MUSIC_BY_CLASS
const u16 gClassBasedTrainerEncounterBGM[NUM_TRAINER_CLASSES] =
{
	[CLASS_YOUNGSTER] = BGM_EYE_BOY,
	[CLASS_BUG_CATCHER] = BGM_EYE_BOY,
	[CLASS_LASS] =  BGM_EYE_GIRL,
	[CLASS_SAILOR] = BGM_EYE_BOY,
	[CLASS_CAMPER] = BGM_EYE_BOY,
	[CLASS_PICNICKER] =  BGM_EYE_GIRL,
	[CLASS_POKEMANIAC] = BGM_EYE_CREEPY,
	[CLASS_SUPER_NERD] = BGM_EYE_CREEPY,
	[CLASS_HIKER] = BGM_EYE_BOY,
	[CLASS_BIKER] = BGM_EYE_BOY,
	[CLASS_BURGLAR] = BGM_EYE_CREEPY,
	[CLASS_ENGINEER] = BGM_EYE_BOY,
	[CLASS_FISHERMAN] = BGM_EYE_BOY,
	[CLASS_SWIMMER_M] = BGM_EYE_BOY,
	[CLASS_CUE_BALL] = BGM_EYE_BOY,
	[CLASS_GAMBLER] = BGM_EYE_BOY,
	[CLASS_BEAUTY] =  BGM_EYE_GIRL,
	[CLASS_SWIMMER_F] =  BGM_EYE_GIRL,
	[CLASS_PSYCHIC] = BGM_EYE_BOY,
	[CLASS_ROCKER] = BGM_EYE_BOY,
	[CLASS_JUGGLER] = BGM_EYE_BOY,
	[CLASS_TAMER] = BGM_EYE_BOY,
	[CLASS_BIRD_KEEPER] = BGM_EYE_BOY,
	[CLASS_BLACK_BELT] = BGM_EYE_BOY,
	[CLASS_RIVAL] = BGM_EYE_BOY,
	[CLASS_SCIENTIST] = BGM_EYE_BOY,
	[CLASS_BOSS] = BGM_EYE_BOY,
	[CLASS_LEADER] = BGM_EYE_BOY,
	[CLASS_TEAM_ROCKET] = BGM_EYE_CREEPY,
	[CLASS_COOLTRAINER] = BGM_EYE_BOY,
	[CLASS_ELITE_4] = BGM_EYE_BOY,
	[CLASS_GENTLEMAN] = BGM_EYE_BOY,
	[CLASS_RIVAL_2] = BGM_EYE_BOY,
	[CLASS_CHAMPION] = BGM_EYE_BOY,
	[CLASS_CHANNELER] = BGM_EYE_CREEPY,
	[CLASS_TWINS] =  BGM_EYE_GIRL,
	[CLASS_COOL_COUPLE] = BGM_EYE_BOY,
	[CLASS_YOUNG_COUPLE] = BGM_EYE_BOY,
	[CLASS_CRUSH_KIN] = BGM_EYE_BOY,
	[CLASS_SIS_AND_BRO] =  BGM_EYE_GIRL,
	[CLASS_PKMN_PROF] = BGM_EYE_BOY,
	[CLASS_PLAYER] = BGM_EYE_BOY,
	[CLASS_CRUSH_GIRL] =  BGM_EYE_GIRL,
	[CLASS_TUBER] = BGM_EYE_BOY,
	[CLASS_PKMN_BREEDER] = BGM_EYE_BOY,
	[CLASS_PKMN_RANGER] = BGM_EYE_BOY,
	[CLASS_AROMA_LADY] =  BGM_EYE_GIRL,
	[CLASS_RUIN_MANIAC] = BGM_EYE_BOY,
	[CLASS_LADY] =  BGM_EYE_GIRL,
	[CLASS_PAINTER] =  BGM_EYE_GIRL,
};
#endif

const u16 gClassBasedBattleBGM[NUM_TRAINER_CLASSES] =
{
	[CLASS_CHAMPION] = BGM_BATTLE_CHAMPION,
	[CLASS_LEADER] = BGM_BATTLE_GYM_LEADER,
	[CLASS_ELITE_4] = BGM_BATTLE_GYM_LEADER,
	[CLASS_PKMN_TRAINER_RSE] = MUS_RS_VS_RIVAL,
};

const u16 gWildSpeciesBasedBattleBGM[] =
{
	[SPECIES_ARTICUNO] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_ZAPDOS] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_MOLTRES] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_MEWTWO] = BGM_BATTLE_MEWTWO,
	[SPECIES_MEW] = BGM_BATTLE_MEWTWO,
	[SPECIES_ENTEI] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_RAIKOU] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_SUICUNE] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_HO_OH] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_LUGIA] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_CELEBI] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_LATIOS] = BGM_BATTLE_RSE_GYM_LEADER,
	[SPECIES_LATIAS] = BGM_BATTLE_RSE_GYM_LEADER,
	[SPECIES_GROUDON] = BGM_BATTLE_RSE_GYM_LEADER,
	[SPECIES_KYOGRE] = BGM_BATTLE_RSE_GYM_LEADER,
	[SPECIES_RAYQUAZA] = BGM_BATTLE_RSE_GYM_LEADER,
	[SPECIES_JIRACHI] = BGM_BATTLE_RSE_GYM_LEADER,
	[SPECIES_DEOXYS] = BGM_BATTLE_DEOXYS,
};

const u16 gRandomBattleMusicOptions[] =
{
	BGM_BATTLE_WILD,
	BGM_BATTLE_TRAINER,
	BGM_BATTLE_GYM_LEADER,
	BGM_BATTLE_CHAMPION,
	BGM_BATTLE_LEGENDARY_BIRDS,
	BGM_BATTLE_MEWTWO,
	BGM_BATTLE_RSE_GYM_LEADER,
	BGM_BATTLE_DEOXYS,
};

#else //For Pokemon Unbound

const u16 gClassBasedTrainerEncounterBGM[NUM_TRAINER_CLASSES] =
{
	[CLASS_WAITER] = BGM_EYE_ARTIST,
	[CLASS_WAITRESS] = BGM_EYE_ARTIST,
	[CLASS_CYCLIST] = BGM_EYE_BIRD_KEEPER,
	[CLASS_IDOL] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_NURSE] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_POKEFAN] = BGM_EYE_BOY,
	[CLASS_POKE_KID] = BGM_EYE_BOY,
	[CLASS_TERROR_GRANBULL] = BGM_EYE_TERROR_GRANBULL,
	[CLASS_CAMPING_DUO] = BGM_EYE_BOY,
	[CLASS_SKIIER] = BGM_EYE_BIRD_KEEPER,
	[CLASS_GUITARIST] = BGM_EYE_BLACK_BELT,
	[CLASS_KINDLER] = BGM_EYE_BIRD_KEEPER,
	[CLASS_SHOCKER] = BGM_EYE_BLACK_BELT,
	[CLASS_BUG_MANIAC] = BGM_EYE_MYSTERIOUS,
	[CLASS_POLICEMAN] = BGM_EYE_BLACK_BELT,
	[CLASS_BLACK_FERROTHORN] = BGM_EYE_BLACK_FERROTHORN,
	[CLASS_BLACK_HORIZON] = BGM_EYE_BLACK_BELT,
	[CLASS_RICH_BOY] = BGM_EYE_ARTIST,
	[CLASS_RICH_GIRL] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_SCHOOL_KID] = BGM_EYE_BOY,
	[CLASS_EXPERT] = BGM_EYE_ACE,
	[CLASS_RANCHER] = BGM_EYE_HIKER,
	[CLASS_JOGGER] = BGM_EYE_BIRD_KEEPER,
	[CLASS_DRAGON_TAMER] = BGM_EYE_ACE,
	[CLASS_NINJA_BOY] = BGM_EYE_BOY,
	[CLASS_PARASOL_LADY] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_MEGA_TRAINER] = BGM_EYE_ACE,
	[CLASS_BOARDER] = BGM_EYE_BIRD_KEEPER,
	[CLASS_COLLECTOR] = BGM_EYE_MYSTERIOUS,
	[CLASS_BLACK_EMBOAR] = BGM_EYE_BLACK_EMBOAR,
	[CLASS_LOR]	= BGM_EYE_GALACTIC,

	[CLASS_YOUNGSTER] = BGM_EYE_BOY,
	[CLASS_BUG_CATCHER] = BGM_EYE_BOY,
	[CLASS_LASS] = BGM_EYE_GIRL,
	[CLASS_SAILOR] = BGM_EYE_SAILOR,
	[CLASS_CAMPER] = BGM_EYE_BOY,
	[CLASS_PICNICKER] = BGM_EYE_GIRL,
	[CLASS_POKEMANIAC] = BGM_EYE_MYSTERIOUS,
	[CLASS_SUPER_NERD] = BGM_EYE_MYSTERIOUS,
	[CLASS_HIKER] = BGM_EYE_HIKER,
	[CLASS_BIKER] = BGM_EYE_BLACK_BELT,
	[CLASS_BURGLAR] = BGM_EYE_MYSTERIOUS,
	[CLASS_WORKER] = BGM_EYE_ARTIST,
	[CLASS_FISHERMAN] = BGM_EYE_SAILOR,
	[CLASS_SWIMMER_M] = BGM_EYE_SAILOR,
	[CLASS_ROUGHNECK] = BGM_EYE_BLACK_BELT,
	[CLASS_GAMBLER] = BGM_EYE_GAMBLER,
	[CLASS_BEAUTY] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_SWIMMER_F] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_PSYCHIC] = BGM_EYE_PSYCHIC,
	[CLASS_ROCKER] = BGM_EYE_BLACK_BELT,
	[CLASS_JUGGLER] = BGM_EYE_MYSTERIOUS,
	[CLASS_TAMER] = BGM_EYE_ACE,
	[CLASS_BIRD_KEEPER] = BGM_EYE_BIRD_KEEPER,
	[CLASS_BLACK_BELT] = BGM_EYE_BLACK_BELT,
	//[CLASS_RIVAL] =
	[CLASS_SCIENTIST] = BGM_EYE_MYSTERIOUS,
	[CLASS_SCIENCE_SOCIETY] = BGM_EYE_SCIENCE_SOCIETY,
	//[CLASS_BOSS] =
	//[CLASS_LEADER] =
	[CLASS_SHADOW] = BGM_EYE_NEO_PLASMA,
	[CLASS_ACE_TRAINER] = BGM_EYE_ACE,
	[CLASS_ELITE_4] = BGM_EYE_ELITE_4,
	[CLASS_GENTLEMAN] = BGM_EYE_GAMBLER,
	//[CLASS_RIVAL_2] =
	//[CLASS_CHAMPION] =
	[CLASS_MEDIUM] = BGM_EYE_MYSTERIOUS,
	[CLASS_TWINS] = BGM_EYE_TWINS,
	[CLASS_COOL_COUPLE] = BGM_EYE_ACE,
	[CLASS_YOUNG_COUPLE] = BGM_EYE_ARTIST,
	[CLASS_CRUSH_KIN] = BGM_EYE_BLACK_BELT,
	[CLASS_SIS_AND_BRO] = BGM_EYE_AROMA_LADY_BEAUTY,
	//[CLASS_SPECIES_PROF] =
	//[CLASS_PLAYER] =
	[CLASS_CRUSH_GIRL] = BGM_EYE_BLACK_BELT,
	[CLASS_TUBER] = BGM_EYE_TWINS,
	[CLASS_PKMN_BREEDER] = BGM_EYE_AROMA_LADY_BEAUTY, //Just for F?
	[CLASS_PKMN_RANGER] = BGM_EYE_ACE,
	[CLASS_AROMA_LADY] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_RUIN_MANIAC] = BGM_EYE_HIKER,
	[CLASS_LADY] = BGM_EYE_AROMA_LADY_BEAUTY,
	[CLASS_PAINTER] = BGM_EYE_ARTIST,
};

const u16 gClassBasedBattleBGM[NUM_TRAINER_CLASSES] =
{
	[CLASS_RIVAL] = BGM_BATTLE_RIVAL,
	[CLASS_RIVAL_2] = BGM_BATTLE_RIVAL,
	[CLASS_CHAMPION] = BGM_BATTLE_JAX,
	[CLASS_LEADER] = BGM_BATTLE_GYM_LEADER,
	[CLASS_ELITE_4] = BGM_BATTLE_ELITE_4,
	[CLASS_SHADOW] = BGM_BATTLE_SHADOW_GRUNT,
	[CLASS_SHADOW_ADMIN] = BGM_BATTLE_SHADOW_ADMIN,
	[CLASS_BOSS] = BGM_BATTLE_SHADOW_BOSS,
	[CLASS_LOR] = BGM_BATTLE_LOR_GRUNT,
	[CLASS_LOR_ADMIN] = BGM_BATTLE_LOR_ADMIN,
	[CLASS_LOR_LEADER] = BGM_BATTLE_LOR_LEADER,
	[CLASS_AGENT] = BGM_BATTLE_SCIENCE_SOCIETY_GOON,
	[CLASS_SUCCESSOR] = BGM_BATTLE_SUCCESSOR,
	[CLASS_MEGA_TRAINER] = BGM_BATTLE_SUCCESSOR,
	[CLASS_BLACK_EMBOAR] = BGM_BATTLE_BLACK_EMBOAR_GOON,
	[CLASS_TERROR_GRANBULL] = BGM_BATTLE_TERROR_GRANBULL_GOON,
	[CLASS_BLACK_FERROTHORN] = BGM_BATTLE_BLACK_FERROTHORN_GOON,
	[CLASS_BLACK_FERROTHORN_BOSS] = BGM_BATTLE_BLACK_FERROTHORN_BOSS,
	[CLASS_BLACK_HORIZON] = BGM_BATTLE_BLACK_HORIZON_GOON,
	[CLASS_SCIENCE_SOCIETY] = BGM_BATTLE_SCIENCE_SOCIETY_GOON,
	[CLASS_FRONTIER_BRAIN] = BGM_BATTLE_FRONTIER_BRAIN,
	[CLASS_SINNOH_LEADER] = BGM_BATTLE_SINNOH_GYM_LEADER,
};

const u16 gWildSpeciesBasedBattleBGM[] =
{
	[SPECIES_ARTICUNO] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_ZAPDOS] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_MOLTRES] = BGM_BATTLE_LEGENDARY_BIRDS,
	[SPECIES_MEWTWO] = BGM_BATTLE_MEWTWO,
	[SPECIES_MEWTWO_MEGA_X] = BGM_BATTLE_MEWTWO,
	[SPECIES_MEWTWO_MEGA_Y] = BGM_BATTLE_MEWTWO,
	[SPECIES_MEW] = BGM_BATTLE_MEWTWO,
	[SPECIES_ENTEI] = BGM_BATTLE_ENTEI,
	[SPECIES_RAIKOU] = BGM_BATTLE_RAIKOU,
	[SPECIES_SUICUNE] = BGM_BATTLE_SUICUNE,
	[SPECIES_HO_OH] = BGM_BATTLE_HOOH,
	[SPECIES_LUGIA] = BGM_BATTLE_LUGIA,
	[SPECIES_CELEBI] = BGM_BATTLE_MEWTWO,
	[SPECIES_REGIROCK] = BGM_BATTLE_REGI_TRIO,
	[SPECIES_REGICE] = BGM_BATTLE_REGI_TRIO,
	[SPECIES_REGISTEEL] = BGM_BATTLE_REGI_TRIO,
	[SPECIES_LATIOS] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_LATIOS_MEGA] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_LATIAS] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_LATIAS_MEGA] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_GROUDON] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_GROUDON_PRIMAL] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_KYOGRE] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_KYOGRE_PRIMAL] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_RAYQUAZA] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_RAYQUAZA_MEGA] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_JIRACHI] = BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	[SPECIES_DEOXYS] = BGM_BATTLE_DEOXYS,
	[SPECIES_DEOXYS_ATTACK] = BGM_BATTLE_DEOXYS,
	[SPECIES_DEOXYS_DEFENSE] = BGM_BATTLE_DEOXYS,
	[SPECIES_DEOXYS_SPEED] = BGM_BATTLE_DEOXYS,
	[SPECIES_UXIE] = BGM_BATTLE_LAKE_TRIO,
	[SPECIES_MESPRIT] = BGM_BATTLE_LAKE_TRIO,
	[SPECIES_AZELF] = BGM_BATTLE_LAKE_TRIO,
	[SPECIES_DIALGA] = BGM_BATTLE_DIALGA_PALKIA,
	[SPECIES_PALKIA] = BGM_BATTLE_DIALGA_PALKIA,
	[SPECIES_GIRATINA] = BGM_BATTLE_GIRATINA,
	[SPECIES_GIRATINA_ORIGIN] = BGM_BATTLE_GIRATINA,
	[SPECIES_HEATRAN] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_REGIGIGAS] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_CRESSELIA] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_MANAPHY] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_PHIONE] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_SHAYMIN] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_SHAYMIN_SKY] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_DARKRAI] = BGM_BATTLE_SINNOH_LEGENDARY,
	[SPECIES_ARCEUS] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_FIGHT] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_FLYING] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_POISON] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_GROUND] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_ROCK] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_BUG] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_GHOST] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_STEEL] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_FIRE] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_WATER] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_GRASS] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_ELECTRIC] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_PSYCHIC] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_ICE] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_DRAGON] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_DARK] = BGM_BATTLE_ARCEUS,
	[SPECIES_ARCEUS_FAIRY] = BGM_BATTLE_ARCEUS,
	[SPECIES_VICTINI] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_VIRIZION] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_TERRAKION] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_COBALION] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_TORNADUS] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_THUNDURUS] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_LANDORUS] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_TORNADUS_THERIAN] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_THUNDURUS_THERIAN] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_LANDORUS_THERIAN] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_RESHIRAM] = BGM_BATTLE_RESHIRAM_ZEKROM,
	[SPECIES_ZEKROM] = BGM_BATTLE_RESHIRAM_ZEKROM,
	[SPECIES_KYUREM] = BGM_BATTLE_KYUREM,
	[SPECIES_KYUREM_BLACK] = BGM_BATTLE_KYUREM,
	[SPECIES_KYUREM_WHITE] = BGM_BATTLE_KYUREM,
	[SPECIES_KELDEO] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_KELDEO_RESOLUTE] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_MELOETTA] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_GENESECT] = BGM_BATTLE_UNOVA_LEGENDARY,
	[SPECIES_XERNEAS] = BGM_BATTLE_KALOS_LEGENDARY,
	[SPECIES_YVELTAL] = BGM_BATTLE_KALOS_LEGENDARY,
	[SPECIES_ZYGARDE] = BGM_BATTLE_KALOS_LEGENDARY,
	[SPECIES_ZYGARDE_10] = BGM_BATTLE_KALOS_LEGENDARY,
	[SPECIES_HOOPA] = BGM_BATTLE_HOOPA,
	[SPECIES_HOOPA_UNBOUND] = BGM_BATTLE_HOOPA,
	[SPECIES_VOLCANION] = BGM_BATTLE_KALOS_LEGENDARY,
	[SPECIES_DIANCIE] = BGM_BATTLE_KALOS_LEGENDARY,
	[SPECIES_DIANCIE_MEGA] = BGM_BATTLE_KALOS_LEGENDARY,
	[SPECIES_TAPU_KOKO] = BGM_BATTLE_TAPU,
	[SPECIES_TAPU_BULU] = BGM_BATTLE_TAPU,
	[SPECIES_TAPU_LELE] = BGM_BATTLE_TAPU,
	[SPECIES_TAPU_FINI] = BGM_BATTLE_TAPU,
	[SPECIES_SOLGALEO] = BGM_BATTLE_SOLGALEO_LUNALA,
	[SPECIES_LUNALA] = BGM_BATTLE_SOLGALEO_LUNALA,
	[SPECIES_NECROZMA] = BGM_BATTLE_NECROZMA,
	[SPECIES_NECROZMA_DAWN_WINGS] = BGM_BATTLE_NECROZMA,
	[SPECIES_NECROZMA_DUSK_MANE] = BGM_BATTLE_NECROZMA,
	[SPECIES_NECROZMA_ULTRA] = BGM_BATTLE_NECROZMA,
	[SPECIES_NIHILEGO] = BGM_BATTLE_UB,
	[SPECIES_BUZZWOLE] = BGM_BATTLE_UB,
	[SPECIES_PHEROMOSA] = BGM_BATTLE_UB,
	[SPECIES_XURKITREE] = BGM_BATTLE_UB,
	[SPECIES_CELESTEELA] = BGM_BATTLE_UB,
	[SPECIES_KARTANA] = BGM_BATTLE_UB,
	[SPECIES_GUZZLORD] = BGM_BATTLE_UB,
	[SPECIES_MAGEARNA] = BGM_BATTLE_SOLGALEO_LUNALA,
	[SPECIES_MARSHADOW] = BGM_BATTLE_SOLGALEO_LUNALA,
	[SPECIES_POIPOLE] = BGM_BATTLE_UB,
	[SPECIES_NAGANADEL] = BGM_BATTLE_UB,
	[SPECIES_STAKATAKA] = BGM_BATTLE_UB,
	[SPECIES_BLACEPHALON] = BGM_BATTLE_UB,
	[SPECIES_ZERAORA] = BGM_BATTLE_SOLGALEO_LUNALA,
	[SPECIES_REGIELEKI] = BGM_BATTLE_REGI_TRIO,
	[SPECIES_REGIDRAGO] = BGM_BATTLE_REGI_TRIO,
	[SPECIES_SHADOW_WARRIOR] = BGM_BATTLE_SHADOW_GRUNT,
};

const u16 gRandomBattleMusicOptions[] =
{
	BGM_BATTLE_BORRIUS_TRAINER,
	BGM_BATTLE_KANTO_TRAINER,
	BGM_BATTLE_JOHTO_TRAINER,
	BGM_BATTLE_HOENN_TRAINER,
	BGM_BATTLE_SINNOH_TRAINER,
	BGM_BATTLE_UNOVA_TRAINER,
	BGM_BATTLE_KALOS_TRAINER,
	BGM_BATTLE_ALOLA_TRAINER,
	BGM_BATTLE_RIVAL,
	BGM_BATTLE_GYM_LEADER,
	BGM_BATTLE_SINNOH_GYM_LEADER,
	BGM_BATTLE_SUCCESSOR,
	BGM_BATTLE_ELITE_4,
	BGM_BATTLE_JAX,
	BGM_BATTLE_SHADOW_GRUNT,
	BGM_BATTLE_SHADOW_ADMIN,
	BGM_BATTLE_SHADOW_BOSS,
	BGM_BATTLE_LOR_GRUNT,
	BGM_BATTLE_LOR_ADMIN,
	BGM_BATTLE_LOR_LEADER,
	BGM_BATTLE_BLACK_EMBOAR_GOON,
	BGM_BATTLE_BLACK_EMBOAR_BOSS,
	BGM_BATTLE_TERROR_GRANBULL_GOON,
	BGM_BATTLE_TERROR_GRANBULL_BOSS,
	BGM_BATTLE_BLACK_FERROTHORN_GOON,
	BGM_BATTLE_BLACK_FERROTHORN_BOSS,
	BGM_BATTLE_SCIENCE_SOCIETY_GOON,
	BGM_BATTLE_SCIENCE_SOCIETY_BOSS,
	BGM_BATTLE_BLACK_HORIZON_GOON,
	BGM_BATTLE_BLACK_HORIZON_BOSS,
	BGM_BATTLE_MEWTWO,
	BGM_BATTLE_RAIKOU,
	BGM_BATTLE_ENTEI,
	BGM_BATTLE_SUICUNE,
	BGM_BATTLE_HOOH,
	BGM_BATTLE_LUGIA,
	BGM_BATTLE_REGI_TRIO,
	BGM_BATTLE_GROUDON_KYOGRE_RAYQUAZA,
	BGM_BATTLE_DEOXYS,
	BGM_BATTLE_LAKE_TRIO,
	BGM_BATTLE_DIALGA_PALKIA,
	BGM_BATTLE_GIRATINA,
	BGM_BATTLE_SINNOH_LEGENDARY,
	BGM_BATTLE_ARCEUS,
	BGM_BATTLE_UNOVA_LEGENDARY,
	BGM_BATTLE_RESHIRAM_ZEKROM,
	BGM_BATTLE_KYUREM,
	BGM_BATTLE_KALOS_LEGENDARY,
	BGM_BATTLE_SOLGALEO_LUNALA,
	BGM_BATTLE_TAPU,
	BGM_BATTLE_UB,
	BGM_BATTLE_NECROZMA,
	BGM_BATTLE_GALAR_WILD,
	BGM_BATTLE_RAID_BOSS,
};

#endif

const u8 gRandomBattleMusicOptionsLength = ARRAY_COUNT(gRandomBattleMusicOptions);
const u16 gWildSpeciesBasedBattleBGMLength = ARRAY_COUNT(gWildSpeciesBasedBattleBGM);
