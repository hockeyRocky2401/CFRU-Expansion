#include "../../src/defines.h"
#include "../../src/defines_battle.h"
#include "../../include/new/battle_terrain.h"

#ifdef NEW_BATTLE_BACKGROUNDS
#define gBattleTerrainAnimTiles_TallGrass (void*) 0x8248c68
#define gBattleTerrainAnimTilemap_TallGrass (void*) 0x8248f58
#define gBattleTerrainAnimTiles_LongGrass (void*) 0x82498dc
#define gBattleTerrainAnimTilemap_LongGrass (void*) 0x8249e10
#define gBattleTerrainAnimTiles_Sand (void*) 0x824a618
#define gBattleTerrainAnimTilemap_Sand (void*) 0x824a844
#define gBattleTerrainAnimTiles_Underwater (void*) 0x824af70
#define gBattleTerrainAnimTilemap_Underwater (void*) 0x824b0dc
#define gBattleTerrainAnimTiles_Water (void*) 0x824b8a8
#define gBattleTerrainAnimTilemap_Water (void*) 0x824bbe0
#define gBattleTerrainAnimTiles_PondWater (void*) 0x824c314
#define gBattleTerrainAnimTilemap_PondWater (void*) 0x824c520
#define gBattleTerrainAnimTiles_Rock (void*) 0x824cbf8
#define gBattleTerrainAnimTilemap_Rock (void*) 0x824cec8
#define gBattleTerrainAnimTiles_Cave (void*) 0x824d6b8
#define gBattleTerrainAnimTilemap_Cave (void*) 0x824dc98
#define gBattleTerrainAnimTiles_Building (void*) 0x824e410
#define gBattleTerrainAnimTilemap_Building (void*) 0x824e490

// Note: entry tileset & map will use the palette of the background. It has 48 entries, 16*2 for the background and 16*1 for the entry 

//Day
extern const u8 BG_GrassTiles[];
extern const u8 BG_GrassMap[];
extern const u8 BG_GrassPal[];
extern const u8 BG_LongGrassTiles[];
extern const u8 BG_LongGrassMap[];
extern const u8 BG_LongGrassPal[];
extern const u8 BG_SandTiles[];
extern const u8 BG_SandMap[];
extern const u8 BG_SandPal[];
extern const u8 BG_SnowTiles[];
extern const u8 BG_SnowMap[];
extern const u8 BG_SnowPal[];
extern const u8 BG_WaterTiles[];
extern const u8 BG_WaterMap[];
extern const u8 BG_WaterPal[];
extern const u8 BG_PondTiles[];
extern const u8 BG_PondMap[];
extern const u8 BG_PondPal[];
extern const u8 BG_MountainTiles[];
extern const u8 BG_MountainMap[];
extern const u8 BG_MountainPal[];
extern const u8 BG_CaveTiles[];
extern const u8 BG_CaveMap[];
extern const u8 BG_CavePal[];
extern const u8 BG_IndoorTiles[];
extern const u8 BG_IndoorMap[];
extern const u8 BG_IndoorPal[];
extern const u8 BG_GymTiles[];
extern const u8 BG_GymMap[];
extern const u8 BG_GymPal[];
extern const u8 BG_SpookyTiles[];
extern const u8 BG_SpookyMap[];
extern const u8 BG_SpookyPal[];
extern const u8 BG_DesertTiles[];
extern const u8 BG_DesertMap[];
extern const u8 BG_DesertPal[];
extern const u8 BG_Cave_TormaTiles[];
extern const u8 BG_Cave_TormaMap[];
extern const u8 BG_Cave_TormaPal[];
extern const u8 BG_Cave_TormaDepthsTiles[];
extern const u8 BG_Cave_TormaDepthsMap[];
extern const u8 BG_Cave_TormaDepthsPal[];
extern const u8 BG_Cave_ScaldingTiles[];
extern const u8 BG_Cave_ScaldingMap[];
extern const u8 BG_Cave_ScaldingPal[];
extern const u8 BG_ForestTiles[];
extern const u8 BG_ForestMap[];
extern const u8 BG_ForestPal[];
extern const u8 BG_Forest_PeradonTiles[];
extern const u8 BG_Forest_PeradonMap[];
extern const u8 BG_Forest_PeradonPal[];

// Evening (just palettes)
extern const u8 BG_Grass_EveningPal[];
extern const u8 BG_LongGrass_EveningPal[];
extern const u8 BG_Sand_EveningPal[];
extern const u8 BG_Snow_EveningPal[];
extern const u8 BG_Water_EveningPal[];
extern const u8 BG_Pond_EveningPal[];
extern const u8 BG_Mountain_EveningPal[];
extern const u8 BG_Desert_EveningPal[];
extern const u8 BG_Forest_EveningPal[];
extern const u8 BG_Forest_Peradon_EveningPal[];

// Night (just palettes)
extern const u8 BG_Grass_NightPal[];
extern const u8 BG_LongGrass_NightPal[];
extern const u8 BG_Sand_NightPal[];
extern const u8 BG_Snow_NightPal[];
extern const u8 BG_Water_NightPal[];
extern const u8 BG_Pond_NightPal[];
extern const u8 BG_Mountain_NightPal[];
extern const u8 BG_Desert_NightPal[];
extern const u8 BG_Forest_NightPal[];
extern const u8 BG_Forest_Peradon_NightPal[];

const struct BattleBackground gBattleTerrainTable[] =
{
	[BATTLE_TERRAIN_GRASS] =
	{
		.tileset = BG_GrassTiles,
		.tilemap = BG_GrassMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_GrassPal,
	},
    [BATTLE_TERRAIN_LONG_GRASS] =
    {
        .tileset = BG_LongGrassTiles,
		.tilemap = BG_LongGrassMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_LongGrassPal,
    },
	[BATTLE_TERRAIN_SAND] =
	{
		.tileset = BG_SandTiles,
		.tilemap = BG_SandMap,
		.entryTileset = gBattleTerrainAnimTiles_Sand,
		.entryTilemap = gBattleTerrainAnimTilemap_Sand,
		.palette = BG_SandPal,
	},	
	[BATTLE_TERRAIN_SNOWY] =
	{
		.tileset = BG_SnowTiles,
		.tilemap = BG_SnowMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_SnowPal,
	},
	[BATTLE_TERRAIN_WATER] =
	{
		.tileset = BG_WaterTiles,
		.tilemap = BG_WaterMap,
		.entryTileset = gBattleTerrainAnimTiles_Water,
		.entryTilemap = gBattleTerrainAnimTilemap_Water,
		.palette = BG_WaterPal,
	},
	[BATTLE_TERRAIN_POND] =
	{
		.tileset = BG_PondTiles,
		.tilemap = BG_PondMap,
		.entryTileset = gBattleTerrainAnimTiles_PondWater,
		.entryTilemap = gBattleTerrainAnimTilemap_PondWater,
		.palette = BG_PondPal,
	},
	// TODO: Looks kind of funky when battle intro animation is playing, and could have a more unique image
	[BATTLE_TERRAIN_MOUNTAIN] =
	{
		.tileset = BG_MountainTiles,
		.tilemap = BG_MountainMap,
		.entryTileset = gBattleTerrainAnimTiles_Rock,
		.entryTilemap = gBattleTerrainAnimTilemap_Rock,
		.palette = BG_MountainPal,
	},
	// TODO: Looks kind of funky when battle intro animation is playing
	[BATTLE_TERRAIN_CAVE] =
	{
		.tileset = BG_CaveTiles,
		.tilemap = BG_CaveMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_CavePal,
	},
    [BATTLE_TERRAIN_INSIDE] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_PLAIN] =
	{
		.tileset = BG_GrassTiles,
		.tilemap = BG_GrassMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_GrassPal,
	},
	[BATTLE_TERRAIN_INSIDE_2] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_3] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_4] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_5] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_6] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},	
	[BATTLE_TERRAIN_SPOOKY] =
	{
		.tileset = BG_SpookyTiles,
		.tilemap = BG_SpookyMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_SpookyPal,
	},
	[BATTLE_TERRAIN_DESERT] =
	{
		.tileset = BG_DesertTiles,
		.tilemap = BG_DesertMap,
		.entryTileset = gBattleTerrainAnimTiles_Sand,
		.entryTilemap = gBattleTerrainAnimTilemap_Sand,
		.palette = BG_DesertPal,
	},	
	[BATTLE_TERRAIN_TORMA] =
	{
		.tileset = BG_Cave_TormaTiles,
		.tilemap = BG_Cave_TormaMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_TormaPal,
	},
	[BATTLE_TERRAIN_TORMA_DEPTHS] =
	{
		.tileset = BG_Cave_TormaDepthsTiles,
		.tilemap = BG_Cave_TormaDepthsMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_TormaDepthsPal,
	},
	[BATTLE_TERRAIN_SCALDING_SPA] =
	{
		.tileset = BG_Cave_ScaldingTiles,
		.tilemap = BG_Cave_ScaldingMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_ScaldingPal,
	},	
	[BATTLE_TERRAIN_GYM] =
	{
		.tileset = BG_GymTiles,
		.tilemap = BG_GymMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_GymPal,
	},	
	[BATTLE_TERRAIN_FOREST] =
	{
		.tileset = BG_ForestTiles,
		.tilemap = BG_ForestMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_ForestPal,
	},
	[BATTLE_TERRAIN_FOREST_PERADON] =
	{
		.tileset = BG_Forest_PeradonTiles,
		.tilemap = BG_Forest_PeradonMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_Forest_PeradonPal,
	},	
};

const struct BattleBackground gBattleTerrainTableEvening[] =
{
	[BATTLE_TERRAIN_GRASS] =
	{
		.tileset = BG_GrassTiles,
		.tilemap = BG_GrassMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_Grass_EveningPal,
	},
	[BATTLE_TERRAIN_LONG_GRASS] =
    {
        .tileset = BG_LongGrassTiles,
		.tilemap = BG_LongGrassMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_LongGrass_EveningPal,
    },
	[BATTLE_TERRAIN_SAND] =
	{
		.tileset = BG_SandTiles,
		.tilemap = BG_SandMap,
		.entryTileset = gBattleTerrainAnimTiles_Sand,
		.entryTilemap = gBattleTerrainAnimTilemap_Sand,
		.palette = BG_Sand_EveningPal,
	},
    [BATTLE_TERRAIN_SNOWY] =
	{
		.tileset = BG_SnowTiles,
		.tilemap = BG_SnowMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_Snow_EveningPal,
	},
	[BATTLE_TERRAIN_WATER] =
	{
		.tileset = BG_WaterTiles,
		.tilemap = BG_WaterMap,
		.entryTileset = gBattleTerrainAnimTiles_Water,
		.entryTilemap = gBattleTerrainAnimTilemap_Water,
		.palette = BG_Water_EveningPal,
	},
	[BATTLE_TERRAIN_POND] =
	{
		.tileset = BG_PondTiles,
		.tilemap = BG_PondMap,
		.entryTileset = gBattleTerrainAnimTiles_PondWater,
		.entryTilemap = gBattleTerrainAnimTilemap_PondWater,
		.palette = BG_Pond_EveningPal,
	},
	[BATTLE_TERRAIN_MOUNTAIN] =
	{
		.tileset = BG_MountainTiles,
		.tilemap = BG_MountainMap,
		.entryTileset = gBattleTerrainAnimTiles_Rock,
		.entryTilemap = gBattleTerrainAnimTilemap_Rock,
		.palette = BG_Mountain_EveningPal,
	},
	[BATTLE_TERRAIN_CAVE] =
	{
		.tileset = BG_CaveTiles,
		.tilemap = BG_CaveMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_CavePal,
	},
	[BATTLE_TERRAIN_INSIDE] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_PLAIN] =
	{
		.tileset = BG_GrassTiles,
		.tilemap = BG_GrassMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_Grass_EveningPal,
	},
	[BATTLE_TERRAIN_INSIDE_2] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_3] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_4] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_5] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_6] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},	
	[BATTLE_TERRAIN_SPOOKY] =
	{
		.tileset = BG_SpookyTiles,
		.tilemap = BG_SpookyMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_SpookyPal,
	},
	[BATTLE_TERRAIN_DESERT] =
	{
		.tileset = BG_DesertTiles,
		.tilemap = BG_DesertMap,
		.entryTileset = gBattleTerrainAnimTiles_Sand,
		.entryTilemap = gBattleTerrainAnimTilemap_Sand,
		.palette = BG_Desert_EveningPal,
	},	
	[BATTLE_TERRAIN_TORMA] =
	{
		.tileset = BG_Cave_TormaTiles,
		.tilemap = BG_Cave_TormaMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_TormaPal,
	},
	[BATTLE_TERRAIN_TORMA_DEPTHS] =
	{
		.tileset = BG_Cave_TormaDepthsTiles,
		.tilemap = BG_Cave_TormaDepthsMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_TormaDepthsPal,
	},
	[BATTLE_TERRAIN_SCALDING_SPA] =
	{
		.tileset = BG_Cave_ScaldingTiles,
		.tilemap = BG_Cave_ScaldingMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_ScaldingPal,
	},	
	[BATTLE_TERRAIN_GYM] =
	{
		.tileset = BG_GymTiles,
		.tilemap = BG_GymMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_GymPal,
	},	
	[BATTLE_TERRAIN_FOREST] =
	{
		.tileset = BG_ForestTiles,
		.tilemap = BG_ForestMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_Forest_EveningPal,
	},
	[BATTLE_TERRAIN_FOREST_PERADON] =
	{
		.tileset = BG_Forest_PeradonTiles,
		.tilemap = BG_Forest_PeradonMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_Forest_Peradon_EveningPal,
	},	
};

const struct BattleBackground gBattleTerrainTableNight[] =
{
	[BATTLE_TERRAIN_GRASS] =
	{
		.tileset = BG_GrassTiles,
		.tilemap = BG_GrassMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_Grass_NightPal,
	},
	[BATTLE_TERRAIN_LONG_GRASS] =
    {
        .tileset = BG_LongGrassTiles,
		.tilemap = BG_LongGrassMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_LongGrass_NightPal,
    },
	[BATTLE_TERRAIN_SAND] =
	{
		.tileset = BG_SandTiles,
		.tilemap = BG_SandMap,
		.entryTileset = gBattleTerrainAnimTiles_Sand,
		.entryTilemap = gBattleTerrainAnimTilemap_Sand,
		.palette = BG_Sand_NightPal,
	},
    [BATTLE_TERRAIN_SNOWY] =
	{
		.tileset = BG_SnowTiles,
		.tilemap = BG_SnowMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_Snow_NightPal,
	},
	[BATTLE_TERRAIN_WATER] =
	{
		.tileset = BG_WaterTiles,
		.tilemap = BG_WaterMap,
		.entryTileset = gBattleTerrainAnimTiles_Water,
		.entryTilemap = gBattleTerrainAnimTilemap_Water,
		.palette = BG_Water_EveningPal,
	},
	[BATTLE_TERRAIN_POND] =
	{
		.tileset = BG_PondTiles,
		.tilemap = BG_PondMap,
		.entryTileset = gBattleTerrainAnimTiles_PondWater,
		.entryTilemap = gBattleTerrainAnimTilemap_PondWater,
		.palette = BG_Pond_EveningPal,
	},
	[BATTLE_TERRAIN_CAVE] =
	{
		.tileset = BG_CaveTiles,
		.tilemap = BG_CaveMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_CavePal,
	},
	[BATTLE_TERRAIN_MOUNTAIN] =
	{
		.tileset = BG_MountainTiles,
		.tilemap = BG_MountainMap,
		.entryTileset = gBattleTerrainAnimTiles_Rock,
		.entryTilemap = gBattleTerrainAnimTilemap_Rock,
		.palette = BG_Mountain_NightPal,
	},
	[BATTLE_TERRAIN_INSIDE] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_PLAIN] =
	{
		.tileset = BG_GrassTiles,
		.tilemap = BG_GrassMap,
		.entryTileset = gBattleTerrainAnimTiles_TallGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_TallGrass,
		.palette = BG_Grass_EveningPal,
	},
	[BATTLE_TERRAIN_INSIDE_2] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},	
	[BATTLE_TERRAIN_INSIDE_3] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_4] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_5] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},
	[BATTLE_TERRAIN_INSIDE_6] =
	{
		.tileset = BG_IndoorTiles,
		.tilemap = BG_IndoorMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_IndoorPal,
	},	
	[BATTLE_TERRAIN_SPOOKY] =
	{
		.tileset = BG_SpookyTiles,
		.tilemap = BG_SpookyMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_SpookyPal,
	},
	[BATTLE_TERRAIN_DESERT] =
	{
		.tileset = BG_DesertTiles,
		.tilemap = BG_DesertMap,
		.entryTileset = gBattleTerrainAnimTiles_Sand,
		.entryTilemap = gBattleTerrainAnimTilemap_Sand,
		.palette = BG_Desert_NightPal,
	},	
	[BATTLE_TERRAIN_TORMA] =
	{
		.tileset = BG_Cave_TormaTiles,
		.tilemap = BG_Cave_TormaMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_TormaPal,
	},
	[BATTLE_TERRAIN_TORMA_DEPTHS] =
	{
		.tileset = BG_Cave_TormaDepthsTiles,
		.tilemap = BG_Cave_TormaDepthsMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_TormaDepthsPal,
	},
	[BATTLE_TERRAIN_SCALDING_SPA] =
	{
		.tileset = BG_Cave_ScaldingTiles,
		.tilemap = BG_Cave_ScaldingMap,
		.entryTileset = gBattleTerrainAnimTiles_Cave,
		.entryTilemap = gBattleTerrainAnimTilemap_Cave,
		.palette = BG_Cave_ScaldingPal,
	},	
	[BATTLE_TERRAIN_GYM] =
	{
		.tileset = BG_GymTiles,
		.tilemap = BG_GymMap,
		.entryTileset = gBattleTerrainAnimTiles_Building,
		.entryTilemap = gBattleTerrainAnimTilemap_Building,
		.palette = BG_GymPal,
	},	
	[BATTLE_TERRAIN_FOREST] =
	{
		.tileset = BG_ForestTiles,
		.tilemap = BG_ForestMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_Forest_NightPal,
	},
	[BATTLE_TERRAIN_FOREST_PERADON] =
	{
		.tileset = BG_Forest_PeradonTiles,
		.tilemap = BG_Forest_PeradonMap,
		.entryTileset = gBattleTerrainAnimTiles_LongGrass,
		.entryTilemap = gBattleTerrainAnimTilemap_LongGrass,
		.palette = BG_Forest_Peradon_NightPal,
	},	
};
#endif	