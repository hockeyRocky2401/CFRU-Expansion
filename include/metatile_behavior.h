#pragma once

#include "global.h"

bool8 __attribute__((long_call)) MetatileBehavior_IsPokeGrass(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsSandOrShallowFlowingWater(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsSurfableWaterOrUnderwater(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsTallGrass(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsLongGrass(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsIndoorEncounter(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsMountain(u8 metatileBehavior);
//bool8 __attribute__((long_call)) MetatileBehavior_IsDeepOrOceanWater(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsRunningDisallowed(u8);
bool8 __attribute__((long_call)) MetatileBehavior_IsForcedMovementTile(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsWaterfall(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsFastCurrent(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsSlidingIce(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsSlideAround(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsSeafoamIsland(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsNonAnimDoor(u8);
bool8 __attribute__((long_call)) MetatileBehavior_IsCyclingRoadPullDownTile(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsFootprints(u8 metatileBehavior);
bool8 __attribute__((long_call)) MetatileBehavior_IsCounter(u8 metatileBehavior);

/*
bool8 MetatileBehavior_UnusedReturnTrue(u8 metatileBehavior);
bool8 MetatileBehavior_IsJumpEast(u8 metatileBehavior);
bool8 MetatileBehavior_IsJumpWest(u8 metatileBehavior);
bool8 MetatileBehavior_IsJumpNorth(u8 metatileBehavior);
bool8 MetatileBehavior_IsJumpSouth(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB21OrWaterfallBottom(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse(u8 metatileBehavior);
bool8 MetatileBehavior_IsReflective(u8 metatileBehavior);
bool8 MetatileBehavior_IsIce(u8 metatileBehavior);
bool8 MetatileBehavior_IsWarpDoor(u8 metatileBehavior);
bool8 MetatileBehavior_IsWarpDoor_2(u8 metatileBehavior);
bool8 MetatileBehavior_IsEscalator(u8 metatileBehavior);
bool8 MetatileBehavior_IsUnknownWarp6C(u8 metatileBehavior);
bool8 MetatileBehavior_IsUnknownWarp6D(u8 metatileBehavior);
bool8 MetatileBehavior_IsUnknownWarp6E(u8 metatileBehavior);
bool8 MetatileBehavior_IsUnknownWarp6F(u8 metatileBehavior);
bool8 MetatileBehavior_IsUnknownWarp6C_to_6F(u8 metatileBehavior);
bool8 MetatileBehavior_IsLadder(u8 metatileBehavior);
bool8 MetatileBehavior_IsCaveDoor(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_2(u8 metatileBehavior);
bool8 MetatileBehavior_IsEastArrowWarp(u8 metatileBehavior);
bool8 MetatileBehavior_IsWestArrowWarp(u8 metatileBehavior);
bool8 MetatileBehavior_IsNorthArrowWarp(u8 metatileBehavior);
bool8 MetatileBehavior_IsSouthArrowWarp(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedIsArrowWarp(u8 metatileBehavior);
bool8 MetatileBehavior_IsIce_2(u8 metatileBehavior);
bool8 MetatileBehavior_IsUnknownMovement48(u8 metatileBehavior);
bool8 MetatileBehavior_IsWalkNorth(u8 metatileBehavior);
bool8 MetatileBehavior_IsWalkSouth(u8 metatileBehavior);
bool8 MetatileBehavior_IsWalkWest(u8 metatileBehavior);
bool8 MetatileBehavior_IsWalkEast(u8 metatileBehavior);
bool8 MetatileBehavior_IsNorthwardCurrent(u8 metatileBehavior);
bool8 MetatileBehavior_IsSouthwardCurrent(u8 metatileBehavior);
bool8 MetatileBehavior_IsWestwardCurrent(u8 metatileBehavior);
bool8 MetatileBehavior_IsEastwardCurrent(u8 metatileBehavior);
bool8 MetatileBehavior_IsSlideNorth(u8 metatileBehavior);
bool8 MetatileBehavior_IsSlideSouth(u8 metatileBehavior);
bool8 MetatileBehavior_IsSlideWest(u8 metatileBehavior);
bool8 MetatileBehavior_IsSlideEast(u8 metatileBehavior);
bool8 MetatileBehavior_IsCounter(u8 metatileBehavior);
bool8 MetatileBehavior_IsPlayerFacingTVScreen(u8 tile, u8 playerDirection);
bool8 MetatileBehavior_IsPC(u8 metatileBehavior);
bool8 MetatileBehavior_IsPondWaterOrPuddle(u8 metatileBehavior);
bool8 MetatileBehavior_IsPuddle(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_3(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_4(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_5(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_6(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_7(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedIsMB_01(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedIsTallGrass(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB0B(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB0C(u8 metatileBehavior);
bool8 MetatileBehavior_IsDeepOrSemiDeepWater(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB19(u8 metatileBehavior);
bool8 MetatileBehavior_IsWaterfallBottom(u8 metatileBehavior);
bool8 MetatileBehavior_IsThinIce(u8 metatileBehavior);
bool8 MetatileBehavior_IsCrackedIce(u8 metatileBehavior);
bool8 MetatileBehavior_IsDeepSemiDeepOrSplashingWater(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB1A(u8 metatileBehavior);
bool8 MetatileBehavior_IsSurfableAndNotWaterfall(u8 metatileBehavior);
bool8 MetatileBehavior_IsEastBlocked(u8 metatileBehavior);
bool8 MetatileBehavior_IsWestBlocked(u8 metatileBehavior);
bool8 MetatileBehavior_IsNorthBlocked(u8 metatileBehavior);
bool8 MetatileBehavior_IsSouthBlocked(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_8(u8 metatileBehavior);
bool8 MetatileBehavior_IsHotSprings(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_9(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_2(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_3(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_4(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_10(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_11(u8 metatileBehavior);
bool8 MetatileBehavior_IsRegionMap(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_5(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_6(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_7(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_8(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_12(u8 metatileBehavior);
bool8 MetatileBheavior_IsMB_68(u8 metatileBehavior);
bool8 MetatileBehavior_IsRegularWarp(u8 metatileBehavior);
bool8 MetatileBehavior_IsUnionRoomWarp(u8 metatileBehavior);
bool8 MetatileBehavior_IsWater(u8 metatileBehavior);
bool8 MetatileBehavior_IsFallWarp(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_13(u8 metatileBehavior);
bool8 MetatileBehavior_IsCyclingRoadPullDownTile(u8 metatileBehavior);
bool8 MetatileBehavior_IsCyclingRoadPullDownTileGrass(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_14(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_15(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_16(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_17(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_18(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB22(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB0A(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_9(u8 metatileBehavior);
bool8 MetatileBehavior_IsBookshelf(u8 metatileBehavior);
bool8 MetatileBehavior_IsPokeMartShelf(u8 metatileBehavior);
bool8 MetatileBehavior_IsPlayerFacingPokemonCenterSign(u8 tile, u8 playerDirection);
bool8 MetatileBehavior_IsPlayerFacingPokeMartSign(u8 tile, u8 playerDirection);
bool8 MetatileBehavior_UnusedReturnFalse_10(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_11(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_12(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedReturnFalse_13(u8 metatileBehavior);
bool8 sub_805A2BC(u8 metatileBehavior, u8 playerDirection);
bool8 MetatileBehavior_UnusedIsSpinRight(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedIsSpinLeft(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedIsSpinUp(u8 metatileBehavior);
bool8 MetatileBehavior_UnusedIsSpinDown(u8 metatileBehavior);
bool8 MetatileBehavior_IsStopSpinning(u8 metatileBehavior);
bool8 MetatileBehavior_IsSpinTile(u8 metatileBehavior);
bool8 MetatileBehavior_IsSignpost(u8 metatileBehavior);
bool8 MetatileBehavior_IsCabinet(u8 metatileBehavior);
bool8 MetatileBehavior_IsKitchen(u8 metatileBehavior);
bool8 MetatileBehavior_IsDresser(u8 metatileBehavior);
bool8 MetatileBehavior_IsSnacks(u8 metatileBehavior);
bool8 MetatileBehavior_IsStrengthButton(u8 metatileBehavior);
bool8 MetatileBehavior_IsPlayerFacingMB_8D(u8 tile, u8 playerDirection);
bool8 MetatileBehavior_IsPlayerFacingBattleRecords(u8 tile, u8 playerDirection);
bool8 MetatileBehavior_IsQuestionnaire(u8 metatileBehavior);
bool8 MetatileBehavior_IsIndigoPlateauMark(u8 metatileBehavior);
bool8 MetatileBehavior_IsIndigoPlateauMark2(u8 metatileBehavior);
bool8 MetatileBehavior_IsFood(u8 metatileBehavior);
bool8 MetatileBehavior_IsRockStairs(u8 metatileBehavior);
bool8 MetatileBehavior_IsBlueprints(u8 metatileBehavior);
bool8 MetatileBehavior_IsPainting(u8 metatileBehavior);
bool8 MetatileBehavior_IsPowerPlantMachine(u8 metatileBehavior);
bool8 MetatileBehavior_IsTelephone(u8 metatileBehavior);
bool8 MetatileBehavior_IsComputer(u8 metatileBehavior);
bool8 MetatileBehavior_IsAdvertisingPoster(u8 metatileBehavior);
bool8 MetatileBehavior_IsTastyFood(u8 metatileBehavior);
bool8 MetatileBehavior_IsTrashBin(u8 metatileBehavior);
bool8 MetatileBehavior_IsCup(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_19(u8 metatileBehavior);
bool8 MetatileBehavior_ReturnFalse_20(u8 metatileBehavior);
bool8 MetatileBehavior_IsBlinkingLights(u8 metatileBehavior);
bool8 MetatileBehavior_IsMB9F(u8 metatileBehavior);
bool8 MetatileBehavior_IsImpressiveMachine(u8 metatileBehavior);
bool8 MetatileBehavior_IsVideoGame(u8 metatileBehavior);
bool8 MetatileBehavior_IsBurglary(u8 metatileBehavior);
bool8 MetatileBehavior_IsMBA3(u8 metatileBehavior);
extern u8 gUnknown_8353068[];
*/
