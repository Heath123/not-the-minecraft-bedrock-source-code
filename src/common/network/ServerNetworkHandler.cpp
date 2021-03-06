ServerNetworkHandler::ServerNetworkHandler(GameCallbacks&, Level&, NetworkHandler&, PrivateKeyManager&, ServerLocator&, PacketSender&, Whitelist&, PermissionsFile*, mce::UUID const&, int, bool, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, MinecraftCommands&, IMinecraftApp&, std::unordered_map<PackIdVersion, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::hash<PackIdVersion>, std::equal_to<PackIdVersion>, std::allocator<std::pair<PackIdVersion const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > const&, Scheduler&, TextFilteringProcessor*, ServerMetrics*)
ServerNetworkHandler::disallowIncomingConnections()
ServerNetworkHandler::~ServerNetworkHandler()
ServerNetworkHandler::~ServerNetworkHandler()
ServerNetworkHandler::_displayGameMessage(Player const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::_getDisplayName(Certificate const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ServerNetworkHandler::_isValidThirdPartyName(Certificate const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
ServerNetworkHandler::_verifyThirdPartyTitleID(unsigned int) const
ServerNetworkHandler::onTransferRequest(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, int)
ServerNetworkHandler::disconnectClient(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
ServerNetworkHandler::handle(NetworkIdentifier const&, TextPacket const&)
ServerNetworkHandler::_getServerPlayer(NetworkIdentifier const&, unsigned char)
ServerNetworkHandler::handle(NetworkIdentifier const&, MultiplayerSettingsPacket const&)
ServerNetworkHandler::allowIncomingConnections(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool)
ServerNetworkHandler::handle(NetworkIdentifier const&, CommandRequestPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, CompletedUsingItemPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, CommandBlockUpdatePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SpawnExperienceOrbPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, RequestChunkRadiusPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, MapCreateLockedCopyPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, MapInfoRequestPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, AdventureSettingsPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ShowCreditsPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ResourcePackChunkRequestPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, BossEventPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, StructureBlockUpdatePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, BlockPickRequestPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ActorPickRequestPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SetDifficultyPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ModalFormResponsePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, NetworkStackLatencyPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SetLocalPlayerAsInitializedPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, StructureTemplateDataRequestPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SettingsCommandPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, EmotePacket const&)
ServerNetworkHandler::_getPlayer(NetworkIdentifier const&, unsigned char, ActorRuntimeID const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, RespawnPacket const&)
ServerNetworkHandler::onDisconnect(NetworkIdentifier const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::_onPlayerLeft(ServerPlayer*, bool)
ServerNetworkHandler::updateServerAnnouncement()
ServerNetworkHandler::onSubclientLogoff(NetworkIdentifier const&, unsigned char const&)
ServerNetworkHandler::Client::removeSubClientRequest(unsigned char)
ServerNetworkHandler::allowIncomingPacketId(NetworkIdentifier const&, MinecraftPacketIds)
ServerNetworkHandler::handle(NetworkIdentifier const&, LoginPacket const&)
ServerNetworkHandler::removeFromBlacklist(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::_onClientAuthenticated(NetworkIdentifier const&, Certificate const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SubClientLoginPacket const&)
ServerNetworkHandler::Client::addSubClientRequest(unsigned char, std::unique_ptr<SubClientConnectionRequest, std::default_delete<SubClientConnectionRequest> >)
ServerNetworkHandler::_onSubClientAuthenticated(NetworkIdentifier const&, Certificate const&, SubClientLoginPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, DisconnectPacket const&)
ServerNetworkHandler::onTick()
ServerNetworkHandler::handle(NetworkIdentifier const&, ClientCacheStatusPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ClientCacheBlobStatusPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ClientToServerHandshakePacket const&)
ServerNetworkHandler::Client::getPrimaryRequest() const
ServerNetworkHandler::_isServerFull(mce::UUID) const
ServerNetworkHandler::sendSubClientLoginMessageLocal(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char)
ServerNetworkHandler::handle(NetworkIdentifier const&, ResourcePackClientResponsePacket const&)
ServerNetworkHandler::sendLoginMessageLocal(NetworkIdentifier const&, ConnectionRequest const&)
ServerNetworkHandler::onReady_ClientGeneration(Player&, NetworkIdentifier const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, MovePlayerPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, RiderJumpPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, TickSyncPacket const&)
ServerNetworkHandler::activateWhitelist()
ServerNetworkHandler::addToBlacklist(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::addToBlacklist(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, Blacklist::Duration const&)
ServerNetworkHandler::onInvalidPlayerJoinedLobby(mce::UUID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::onXboxUserBlocked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::onXboxUserUnblocked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::onPlayerReady(Player&)
ServerNetworkHandler::handle(NetworkIdentifier const&, MobEquipmentPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, MoveActorAbsolutePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, MobArmorEquipmentPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, InteractPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, AnimatePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ActorEventPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, PlayerActionPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ActorFallPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ItemFrameDropItemPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, ContainerClosePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, InventoryTransactionPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, PlayerHotbarPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, CraftingEventPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, std::shared_ptr<BlockActorDataPacket>)
ServerNetworkHandler::handle(NetworkIdentifier const&, PlayerAuthInputPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, PlayerInputPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SetPlayerGameTypePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SetDefaultGameTypePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, LevelSoundEventPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, LevelSoundEventPacketV1 const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, LevelSoundEventPacketV2 const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, SimpleEventPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, PurchaseReceiptPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, PlayerSkinPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, LecternUpdatePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, BookEditPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, NpcRequestPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, PhotoTransferPacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, LabTablePacket const&)
ServerNetworkHandler::handle(NetworkIdentifier const&, AnvilDamagePacket const&)
ServerNetworkHandler::setIsTrial(bool)
ServerNetworkHandler::sendServerLegacyParticle(ParticleType, Vec3 const&, Vec3 const&, int)
ServerNetworkHandler::_getPlayer(NetworkIdentifier const&, unsigned char, ActorUniqueID const&)
ServerNetworkHandler::_tryGetEntity(EntityClientPacket const&)
ServerNetworkHandler::_sendLevelData(ServerPlayer&, NetworkIdentifier const&)
ServerNetworkHandler::_sendAdditionalLevelData(ServerPlayer&, NetworkIdentifier const&)
ServerNetworkHandler::_getActiveAndInProgressPlayerCount(mce::UUID) const
ServerNetworkHandler::Client::getSubClientRequests() const
ServerNetworkHandler::setMaxNumPlayers(int)
ServerNetworkHandler::_createNewPlayer(NetworkIdentifier const&, ConnectionRequest const&)
ServerNetworkHandler::_createNewPlayer(NetworkIdentifier const&, SubClientConnectionRequest const&, unsigned char)
ServerNetworkHandler::sendBehaviorTrees(NetworkIdentifier const&, unsigned char)
ServerNetworkHandler::_getOrCreateDimension(Player&)
ServerNetworkHandler::_loadNewPlayer(ServerPlayer&, bool)
ServerNetworkHandler::_setNewPlayerPermissions(ServerPlayer&)
ServerNetworkHandler::setAutomationClient(Automation::AutomationClient*)
ServerNetworkHandler::setTenantId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::setShareableIdentityToken(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
ServerNetworkHandler::onWebsocketRequest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::function<void ()>)
ServerNetworkHandler::Client::Client(std::unique_ptr<ConnectionRequest, std::default_delete<ConnectionRequest> >)
ServerNetworkHandler::setPermission(Player const&, PlayerPermissionLevel)
