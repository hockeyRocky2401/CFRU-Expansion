#pragma once

#include "../battle.h"

u8*  __attribute__((long_call)) StringGetEnd10(u8 *str);
u8*  __attribute__((long_call)) GetExpandedPlaceholder(u32 id);
u8   __attribute__((long_call)) GetMultiplayerId(void);
u8 __attribute__((long_call)) GetBattleTerrainByMapScene(u8 mapType);
void __attribute__((long_call)) SpriteCb_HideAsMoveTarget(struct Sprite *sprite);
void __attribute__((long_call)) DoBounceEffect(u8 battlerId, u8 b, s8 c, s8 d);
void __attribute__((long_call)) EndBounceEffect(u8 battlerId, bool8 b);
void __attribute__((long_call)) SpriteCb_ShowAsMoveTarget(struct Sprite *sprite);
void __attribute__((long_call)) SwitchInClearSetData(void);
void __attribute__((long_call)) UndoEffectsAfterFainting(void);
void __attribute__((long_call))  BattleIntroRecordMonsToDex(void);
void __attribute__((long_call)) SwitchPartyOrder(u8 bank);
void __attribute__((long_call)) SwapTurnOrder(u8 a, u8 b);
void __attribute__((long_call)) TurnValuesCleanUp(u8);
void __attribute__((long_call)) SpecialStatusesClear(void);
void __attribute__((long_call)) CheckFocusPunch_ClearVarsBeforeTurnStarts(void);
void __attribute__((long_call)) HandleEndTurn_FinishBattle(void);
//bank_t __attribute__((long_call)) GetBattleBank(u8 caseID);
void __attribute__((long_call)) MarkBufferBankForExecution(u8 bank);
//void __attribute__((long_call)) CancelMultiTurnMoves(u8 bank);
bool8 __attribute__((long_call)) WasUnableToUseMove(u8 bank);
void __attribute__((long_call)) ResetSentPokesToOpponentValue(void);
void __attribute__((long_call)) OpponentSwitchInResetSentPokesToOpponentValue(u8 bank);
void __attribute__((long_call)) UpdateSentPokesToOpponentValue(bank_t);
void __attribute__((long_call)) BattleScriptPush(const u8* BS_ptr);
void __attribute__((long_call)) BattleScriptPushCursor(void);
void __attribute__((long_call)) BattleScriptPop(void);
u8 __attribute__((long_call)) IsImprisoned(u8 bank, u16 move);
u8 __attribute__((long_call)) GetBattlerTurnOrderNum(u8 battlerId);
//bool8 __attribute__((long_call)) HasNoMonsToSwitch(u8 battler, u8 partyIdBattlerOn1, u8 partyIdBattlerOn2);
//u8 __attribute__((long_call)) AbilityBattleEffects(u8 caseID, u8 bank, u8 ability, u8 special, u16 move);
void __attribute__((long_call)) BattleScriptExecute(const u8* BS_ptr);
void __attribute__((long_call)) BattleScriptPushCursorAndCallback(const u8* BS_ptr);
//u8 __attribute__((long_call)) ItemBattleEffects(u8 caseID, u8 bank, bool8 moveTurn);
void __attribute__((long_call)) CheckWonderGuardAndLevitate(void);
void __attribute__((long_call)) SetMoveEffect(bool8 primary, u8 certain);
void __attribute__((long_call)) MoveValuesCleanUp(void);
bool8 __attribute__((long_call)) IsTwoTurnsMove(u16 move);
u8  __attribute__((long_call)) AttacksThisTurn(u8 bank, u16 move);
void __attribute__((long_call)) TrySetDestinyBondToHappen(void);
void __attribute__((long_call)) AdjustFriendshipOnBattleFaint(u8 bank);
void __attribute__((long_call)) SetControllerToPlayer(void);
void __attribute__((long_call)) PlayerBufferExecCompleted(void);
void __attribute__((long_call)) CompleteOnBankSpritePosX_0(void);
//void __attribute__((long_call)) HandleInputChooseTarget(void);
void __attribute__((long_call)) HandleMoveSwitching(void);
void __attribute__((long_call)) Player_CompleteOnBattlerSpriteCallbackDummy(void);
void __attribute__((long_call)) Player_CompleteOnBattlerSpriteCallbackDummy2(void);
void __attribute__((long_call)) CompleteOnInactiveTextPrinter(void);
void __attribute__((long_call)) Task_LaunchLvlUpAnim(u8);
void __attribute__((long_call)) DestroyExpTaskAndCompleteOnInactiveTextPrinter(u8);
//void __attribute__((long_call)) MoveSelectionDisplayMoveNames(void);
void __attribute__((long_call)) MoveSelectionDisplayPpString(void);
void __attribute__((long_call)) MoveSelectionDisplayPpNumber(void);
/*void __attribute__((long_call)) MoveSelectionDisplayMoveType(void);*/
void __attribute__((long_call)) MoveSelectionCreateCursorAt(u8 cursorPos, u8 arg1);
void __attribute__((long_call)) MoveSelectionDestroyCursorAt(u8 cursorPos);
void __attribute__((long_call)) ActionSelectionCreateCursorAt(u8 cursorPos, u8 arg1);
void __attribute__((long_call)) ActionSelectionDestroyCursorAt(u8 cursorPosition);
void __attribute__((long_call)) HandleChooseActionAfterDma3(void);
void __attribute__((long_call)) BattleLoadOpponentMonSpriteGfx(struct Pokemon* mon, u8 bank);
void __attribute__((long_call)) BattleLoadPlayerMonSpriteGfx(struct Pokemon* mon, u8 bank);
void __attribute__((long_call)) DecompressTrainerFrontPic(u16 frontPicId, u8 battlerId);
void __attribute__((long_call)) DecompressTrainerBackPalette(u16 backPicId, u8 battlerId);
void __attribute__((long_call)) load_gfxc_health_bar(u8);
void __attribute__((long_call)) LoadBattleMonGfxAndAnimate(u8 battlerId, bool8 loadMonSprite, u8 spriteId);
void __attribute__((long_call)) HandleLowHpMusicChange(struct Pokemon *mon, u8 battlerId);
void __attribute__((long_call)) BattleStopLowHpSound(void);
void __attribute__((long_call)) SetControllerToOpponent(void);
void __attribute__((long_call)) CompleteOnBattlerSpriteCallbackDummy(void);
void __attribute__((long_call)) CompleteOnBankSpriteCallbackDummy2(void);
void __attribute__((long_call)) OpponentIntro_DelayAndEnd(void);
void __attribute__((long_call)) OpponentBufferExecCompleted(void);
void __attribute__((long_call)) PlayerIntro_DelayAndEnd(void);
bool8 __attribute__((long_call)) ShouldSwitchIfPerishSong(void);
bool8 __attribute__((long_call)) AreStatsRaised(void);
//void __attribute__((long_call)) AI_TrySwitchOrUseItem(void);
//void __attribute__((long_call)) ModulateByTypeEffectiveness(u8 atkType, u8 defType1, u8 defType2, u8 *var);
void __attribute__((long_call)) LinkOpponentBufferExecCompleted(void);
bool8 __attribute__((long_call)) ShouldUseItem(void);
u8 __attribute__((long_call)) CountAliveMons(u8 caseId);
u8 __attribute__((long_call)) GetDefaultMoveTarget(u8 battlerId);
void __attribute__((long_call)) SetMultiuseSpriteTemplateToTrainerBack(u16 trainerSpriteId, u8 battlerPosition);
u8 __attribute__((long_call)) GetSecretBaseTrainerPicIndex(void);
u8 __attribute__((long_call)) GetSecretBaseTrainerNameIndex(void);
u8 __attribute__((long_call)) GetUnionRoomTrainerClass(void); //Something Trainer Related
u8 __attribute__((long_call)) GetLinkTrainerFlankId(u8 a);
u8 __attribute__((long_call)) GetBattlerMultiplayerId(u8 bank);
//void __attribute__((long_call)) SetBattleBarStruct(u8, u8, u32, u32, u32);
void __attribute__((long_call)) SwapHpBarsWithHpText(void);
void __attribute__((long_call)) SetHealthboxSpriteVisible(u8 healthboxSpriteId);
void __attribute__((long_call)) UpdateHealthboxAttribute(u8 healthboxSpriteId, struct Pokemon* mon, u8 elementId);
s32 __attribute__((long_call)) MoveBattleBar(u8 battler, u8 healthboxSpriteId, u8 whichBar, u8 arg3);
void __attribute__((long_call)) SpriteCB_ReleaseMonFromBall(struct Sprite* sprite);
bool8 __attribute__((long_call)) IsCryPlayingOrClearCrySongs(void);
void __attribute__((long_call)) DestroyAnimSprite(struct Sprite *sprite);
void __attribute__((long_call)) DestroyAnimVisualTask(u8 taskId);
void __attribute__((long_call)) AddSpriteIndex(u16 index);
void __attribute__((long_call)) WaitAnimFrameCount(void);
void __attribute__((long_call)) sub_807331C(u8 taskId);
void __attribute__((long_call)) CreateBattleStartTask(u8 transition, u16 song);
void __attribute__((long_call)) StoreSpriteCallbackInData6(struct Sprite *sprite, void (*callback)(struct Sprite*));
u8 __attribute__((long_call)) GetBattlerSide(u8 bank);
u8 __attribute__((long_call)) GetBattlerPosition(u8 slot);
u8 __attribute__((long_call)) GetBattlerAtPosition(u8);
bool8 __attribute__((long_call)) IsDoubleBattle(void);
void __attribute__((long_call)) InitSpriteDataForLinearTranslation(struct Sprite *sprite);
u8 __attribute__((long_call)) GetBattlerSpriteSubpriority(u8 bank);
void __attribute__((long_call)) BattleSetup_StartWildBattle(void);
void __attribute__((long_call)) StartTheBattle(void);
void CB2_EndWildBattle(void);
void CB2_EndScriptedWildBattle_2(void);
void __attribute__((long_call)) CB2_EndScriptedWildBattle(void);
u8 __attribute__((long_call)) GetWildBattleTransition(void);
u8* __attribute__((long_call)) GetTrainerALoseText(void);
u8* __attribute__((long_call)) GetTrainerAWinText(void);
u32 __attribute__((long_call)) UnpackSelectedBattleAnimPalettes(s16);
void __attribute__((long_call)) StartBlendAnimSpriteColor(u8, u32);
void __attribute__((long_call)) BattleIntroSlide2(u8 taskId);
void __attribute__((long_call)) BattleIntroSlide3(u8 taskId);
void __attribute__((long_call)) BattleIntroSlideLink(u8 taskId);
//void __attribute__((long_call)) BattleAI_SetupAIData(u8 defaultScoreMoves);
//u8 __attribute__((long_call)) BattleAI_ChooseMoveOrAction(void);
//void __attribute__((long_call)) RecordAbilityBattle(u8 bank, u8 ability);
//void __attribute__((long_call)) RecordItemBattle(u8 bank, u8 item_effect);
//void __attribute__((long_call)) BattleStringExpandPlaceholdersToDisplayedString(const u8* textPtr);
u8* __attribute__((long_call)) TryGetStatusString(u8 *src);
void __attribute__((long_call)) ExpandBattleTextBuffPlaceholders(const u8 *src, u8 *dst);
void __attribute__((long_call)) ChooseMoveUsedParticle(u8* textPtr);
void  __attribute__((long_call)) ChooseTypeOfMoveUsedString(u8* dst);
void __attribute__((long_call)) BattlePutTextOnWindow(const u8* text, u8 arg1);
void __attribute__((long_call)) SetPpNumbersPaletteInMoveSelection(void);
//u8 __attribute__((long_call)) GetBattleTowerTrainerPicIndex(void); //Ruby Leftover
//u8 __attribute__((long_call)) GetBattleTowerTrainerClassId(void); //Ruby Leftover
//void __attribute__((long_call)) GetBattleTowerTrainerName(u8* dst); //Ruby Leftover
u8 __attribute__((long_call)) GetEreaderTrainerFrontSpriteId(void);
u8 __attribute__((long_call)) GetEreaderTrainerClassId(void);
void __attribute__((long_call)) GetEreaderTrainerName(u8* dst);
bool8 __attribute__((long_call)) BtlCtrl_OakOldMan_TestState2Flag(u32 a);
//bool8 __attribute__((long_call)) IsLinkDoubleBattle(void);
void __attribute__((long_call)) SwitchPartyOrderLinkMulti(u8 bank, u8 partyID, u8 r2);
void __attribute__((long_call)) SwitchPartyMonSlots(u8 slot, u8 slot2);
u8 __attribute__((long_call)) GetTrainerTowerTrainerClassId(void);
void __attribute__((long_call)) GetTrainerTowerTrainerName(u8* dst);
u8 __attribute__((long_call)) GetTrainerTowerTrainerPicIndex(void);
void __attribute__((long_call)) CopyTrainerTowerPlayerLostText(u8* dst, u8 varset);
void __attribute__((long_call)) CopyTrainerTowerPlayerWonText(u8* dst, u8 varset);
