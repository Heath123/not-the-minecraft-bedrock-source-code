BookEditPacket::BookEditPacket()
BookEditPacket::getId() const
BookEditPacket::getName[abi:cxx11]() const
BookEditPacket::write(BinaryStream&) const
BookEditPacket::_writePage(BinaryStream&) const
BookEditPacket::read(ReadOnlyBinaryStream&)
BookEditPacket::_readPage(ReadOnlyBinaryStream&)
BookEditPacket::setToReplacePage(int, int, PageContent const&)
BookEditPacket::_storePage(PageContent const&)
BookEditPacket::setToAddPage(int, int, PageContent const&)
BookEditPacket::setToDeletePage(int, int)
BookEditPacket::setToSwapPages(int, int, int)
BookEditPacket::setToFinalize(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
BookEditPacket::getPage() const
