ItemStackBase::ItemStackBase()
ItemStackBase::init(int, int, int)
ItemStackBase::ItemStackBase(BlockLegacy const&, int)
ItemStackBase::init(BlockLegacy const&, int)
ItemStackBase::ItemStackBase(Block const&, int, CompoundTag const*)
ItemStackBase::ItemStackBase(BlockLegacy const&, int, short)
ItemStackBase::ItemStackBase(Item const&)
ItemStackBase::init(Item const&, int, int, CompoundTag const*)
ItemStackBase::ItemStackBase(Item const&, int)
ItemStackBase::ItemStackBase(Item const&, int, int)
ItemStackBase::ItemStackBase(Item const&, int, int, CompoundTag const*)
ItemStackBase::ItemStackBase(ItemStackBase const&)
ItemStackBase::getId() const
ItemStackBase::_makeChargedItemFromUserData()
ItemStackBase::_cloneComponents(ItemStackBase const&)
ItemStackBase::ItemStackBase(RecipeIngredient const&)
ItemStackBase::getDescriptor() const
ItemStackBase::getDamageValue() const
ItemStackBase::_setItem(int)
ItemStackBase::setAuxValue(short)
ItemStackBase::setNull()
ItemStackBase::isNull() const
ItemStackBase::_hasComponents() const
ItemStackBase::clearChargedItem()
ItemStackBase::_initComponents()
ItemStackBase::add(int)
ItemStackBase::set(int)
ItemStackBase::remove(int)
ItemStackBase::getMaxStackSize() const
ItemStackBase::hasUserData() const
ItemStackBase::hasCompoundTextUserData() const
ItemStackBase::getUserData() const
ItemStackBase::hasSameUserData(ItemStackBase const&) const
ItemStackBase::hasSameUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> > const&) const
ItemStackBase::hasSameAuxValue(ItemStackBase const&) const
ItemStackBase::getLegacyBlock() const
ItemStackBase::getAuxValue() const
ItemStackBase::isDamageableItem() const
ItemStackBase::setUserData(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag> >)
ItemStackBase::getNetworkUserData() const
ItemStackBase::addCustomUserData(BlockActor&, BlockSource&)
ItemStackBase::isGlint() const
ItemStackBase::showsDurabilityInCreative() const
ItemStackBase::setJustBrewed(bool)
ItemStackBase::wasJustBrewed() const
ItemStackBase::startCoolDown(Player*) const
ItemStackBase::isEquivalentArmor(ItemStackBase const&) const
ItemStackBase::retrieveIDFromIDAux(int)
ItemStackBase::retrieveEnchantFromIDAux(int)
ItemStackBase::retrieveAuxValFromIDAux(int)
ItemStackBase::isValidAuxValue(int) const
ItemStackBase::isBlock() const
ItemStackBase::isThrowable() const
ItemStackBase::isExplodable() const
ItemStackBase::isPattern() const
ItemStackBase::refreshedInContainer(Level&)
ItemStackBase::isEnchanted() const
ItemStackBase::getEnchantsFromUserData() const
ItemStackBase::getEnchantSlot() const
ItemStackBase::saveEnchantsToUserData(ItemEnchants const&)
ItemStackBase::getEnchantValue() const
ItemStackBase::isEnchantingBook() const
ItemStackBase::isFullStack() const
ItemStackBase::isStackable() const
ItemStackBase::isDamaged() const
ItemStackBase::isStackable(ItemStackBase const&) const
ItemStackBase::isStackedByData() const
ItemStackBase::componentsMatch(ItemStackBase const&) const
ItemStackBase::setDamageValue(short)
ItemStackBase::getMaxDamage() const
ItemStackBase::hurtAndBreak(int, Actor*)
ItemStackBase::getAttackDamage() const
ItemStackBase::canDestroySpecial(Block const&) const
ItemStackBase::snap(Player*)
ItemStackBase::sameItem(ItemStackBase const&) const
ItemStackBase::sameItemAndAux(ItemStackBase const&) const
ItemStackBase::getDescriptionId[abi:cxx11]() const
ItemStackBase::getCategoryName[abi:cxx11]() const
ItemStackBase::getName[abi:cxx11]() const
ItemStackBase::hasCustomHoverName() const
ItemStackBase::getCustomName[abi:cxx11]() const
ItemStackBase::getRawNameId[abi:cxx11]() const
ItemStackBase::getRendererId() const
ItemStackBase::getEffectName[abi:cxx11]() const
ItemStackBase::getFormattedHovertext[abi:cxx11](Level&, bool) const
ItemStackBase::hasComponent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ItemStackBase::getBlock() const
ItemStackBase::setBlock(Block const*)
ItemStackBase::getIdAux() const
ItemStackBase::getIdAuxEnchanted() const
ItemStackBase::isInstance(BlockLegacy const&) const
ItemStackBase::toString[abi:cxx11]() const
ItemStackBase::matches(ItemStackBase const&) const
ItemStackBase::matchesItem(ItemStackBase const&) const
ItemStackBase::matchesChargedItem(ItemStackBase const&) const
ItemStackBase::hasChargedItem() const
ItemStackBase::getChargedItem() const
ItemStackBase::operator=(ItemStackBase const&)
ItemStackBase::getColor() const
ItemStackBase::save() const
ItemStackBase::_saveComponents(CompoundTag&) const
ItemStackBase::load(CompoundTag const&)
ItemStackBase::_loadItem(CompoundTag const&)
ItemStackBase::load(CompoundTag const&, Level&)
ItemStackBase::operator!=(ItemStackBase const&) const
ItemStackBase::operator==(ItemStackBase const&) const
ItemStackBase::getIcon(int, bool) const
ItemStackBase::getUseAnimation() const
ItemStackBase::isArmorItem() const
ItemStackBase::isHorseArmorItem() const
ItemStackBase::isWearableItem() const
ItemStackBase::isOffhandItem() const
ItemStackBase::isMusicDiscItem() const
ItemStackBase::isPotionItem() const
ItemStackBase::isLiquidClipItem() const
ItemStackBase::_getHoverFormattingPrefix[abi:cxx11]() const
ItemStackBase::getHoverName[abi:cxx11]() const
ItemStackBase::setCustomName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ItemStackBase::getCustomLore[abi:cxx11]() const
ItemStackBase::setCustomLore(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)
ItemStackBase::resetHoverName()
ItemStackBase::getBaseRepairCost() const
ItemStackBase::setRepairCost(int)
ItemStackBase::canPlaceOn(Block const*) const
ItemStackBase::canDestroy(Block const*) const
ItemStackBase::getBlockingTick() const
ItemStackBase::setBlockingTick(Tick)
ItemStackBase::getPickupPopPercentage() const
ItemStackBase::getIsValidPickupTime() const
ItemStackBase::getPickupTime() const
ItemStackBase::setPickupTime()
ItemStackBase::setPickupTime(std::chrono::time_point<std::chrono::_V2::steady_clock, std::chrono::duration<long, std::ratio<1l, 1000000000l> > >)
ItemStackBase::setShowPickUp(bool)
ItemStackBase::setChargedItem(ItemInstance const&, bool)
ItemStackBase::_setChargedItem(ItemInstance const&)
ItemStackBase::canBeCharged() const
ItemStackBase::_loadComponents(CompoundTag const&)
ItemStackBase::addComponents(Json::Value const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
ItemStackBase::isValidComponent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ItemStackBase::updateComponent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Json::Value const&)
ItemStackBase::_updateCompareHashes()
ItemStackBase::serializeComponents(IDataOutput&) const
ItemStackBase::deserializeComponents(IDataInput&)
_saveBlockList(std::vector<BlockLegacy const*, std::allocator<BlockLegacy const*> > const&)
ItemStackBase::isExperimental() const
ItemStackBase::getRequiredBaseGameVersion() const
