 #ifndef GUARD_TRADE_H
#define GUARD_TRADE_H

#include "global.h"
//#include "link_rfu.h"
#include "constants/trade.h"

extern struct MailStruct gLinkPartnerMail[6];
extern u8 gSelectedTradeMonPositions[2];

extern const u8 gText_MaleSymbol4[];
extern const u8 gText_FemaleSymbol4[];
extern const u8 gText_GenderlessSymbol[];

extern const u16 gTradeOrHatchMonShadowTilemap[];
/*
void __attribute__((long_call)) CB2_ReturnFromLinkTrade(void);
s32 __attribute__((long_call)) Trade_CalcLinkPlayerCompatibilityParam(void);
s32 __attribute__((long_call)) CanRegisterMonForTradingBoard(struct GFtgtGnameSub rfuPlayer, u16 species2, u16 species, u8 isEventLegal);
s32 __attribute__((long_call)) GetUnionRoomTradeMessageId(struct GFtgtGnameSub rfuPlayer, struct GFtgtGnameSub rfuPartner, u16 playerSpecies2, u16 partnerSpecies, u8 requestedType, u16 playerSpecies, u8 isEventLegal);
*/

void __attribute__((long_call)) CB2_ReturnToTradeMenuFromSummary(void);

#endif //GUARD_TRADE_H
