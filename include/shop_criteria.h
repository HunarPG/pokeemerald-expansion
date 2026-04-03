#ifndef GUARD_SHOP_CRITERIA_H
#define GUARD_SHOP_CRITERIA_H

void TryBuildDynamicShopItemList(const u16 **ogItemList, u16 *resultingTotal);
void TryFreeDynamicShopItemList(const u16 **ogItemList);

bool32 ShopCriteriaByZeroBadges(enum Item item);
bool32 ShopCriteriaByOneBadge(enum Item item);
bool32 ShopCriteriaByThreeBadges(enum Item item);
bool32 ShopCriteriaByFiveBadges(enum Item item);
bool32 ShopCriteriaBySevenBadges(enum Item item);
bool32 ShopCriteriaByEightBadges(enum Item item);

// Add new Criterias below!

#endif // GUARD_SHOP_CRITERIA_H
