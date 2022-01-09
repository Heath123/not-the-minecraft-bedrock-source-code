ItemStack::ItemStack()
ItemStack::ItemStack(BlockLegacy const&, int)
ItemStack::ItemStack(Block const&, int, CompoundTag const*)
ItemStack::ItemStack(Item const&)
ItemStack::ItemStack(Item const&, int)
ItemStack::ItemStack(Item const&, int, int)
ItemStack::ItemStack(Item const&, int, int, CompoundTag const*)
ItemStack::ItemStack(ItemInstance const&)
ItemStack::ItemStack(RecipeIngredient const&)
ItemStack::ItemStack(ItemStack const&)
ItemStack::reinit(BlockLegacy const&, int)
ItemStack::operator=(ItemStack const&)
ItemStack::reinit(Item const&, int, int)
ItemStack::getStrippedNetworkItem() const
ItemStack::useOn(Actor&, int, int, int, unsigned char, float, float, float)
ItemStack::getDestroySpeed(Block const&) const
ItemStack::use(Player&)
ItemStack::inventoryTick(Level&, Actor&, int, bool)
ItemStack::useAsFuel()
ItemStack::removeEnchants()
ItemStack::mineBlock(Block const&, int, int, int, Mob*)
ItemStack::sameItemAndAuxAndBlockData(ItemStack const&) const
ItemStack::clone() const
ItemStack::fromTag(CompoundTag const&)
ItemStack::fromTag(CompoundTag const&, Level&)
ItemStack::releaseUsing(Player*, int)
ItemStack::getMaxUseDuration() const
ItemStack::useTimeDepleted(Level*, Player*)
ItemStack::playSoundIncrementally(Mob&) const
