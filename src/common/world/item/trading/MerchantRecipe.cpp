MerchantRecipe::MerchantRecipe(CompoundTag const*)
MerchantRecipe::load(CompoundTag const*)
MerchantRecipe::MerchantRecipe(ItemInstance const&, ItemInstance const&, ItemInstance const&)
MerchantRecipe::init(ItemInstance const&, ItemInstance const&, ItemInstance const&)
MerchantRecipe::MerchantRecipe(ItemInstance const&, ItemInstance const&)
MerchantRecipe::getBuyAItem() const
MerchantRecipe::getBuyBItem() const
MerchantRecipe::getSellItem() const
MerchantRecipe::hasSecondaryBuyItem() const
MerchantRecipe::isSame(MerchantRecipe&) const
MerchantRecipe::isSameButBetter(MerchantRecipe&) const
MerchantRecipe::getUses() const
MerchantRecipe::getMaxUses() const
MerchantRecipe::getTier() const
MerchantRecipe::getTraderExp() const
MerchantRecipe::getDemand() const
MerchantRecipe::getBaseCountA() const
MerchantRecipe::getBaseCountB() const
MerchantRecipe::increaseUses()
MerchantRecipe::increaseMaxUses(int)
MerchantRecipe::isOutOfUses() const
MerchantRecipe::shouldRewardExp() const
MerchantRecipe::setUses(int)
MerchantRecipe::setMaxUses(int)
MerchantRecipe::setRewardExp(bool)
MerchantRecipe::setTraderExp(unsigned int)
MerchantRecipe::setTier(int)
MerchantRecipe::setDemand(int)
MerchantRecipe::setPriceMultiplierA(float)
MerchantRecipe::setPriceMultiplierB(float)
MerchantRecipe::calculateDemandPrices(int)
MerchantRecipe::createTag() const
