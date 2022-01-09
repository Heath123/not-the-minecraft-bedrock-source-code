ITextObject::~ITextObject()
ITextObject::~ITextObject()
TextObjectRoot::TextObjectRoot()
TextObjectRoot::TextObjectRoot(TextObjectRoot&&)
TextObjectRoot::~TextObjectRoot()
TextObjectRoot::~TextObjectRoot()
TextObjectRoot::operator=(TextObjectRoot&&)
TextObjectRoot::addChild(std::unique_ptr<ITextObject, std::default_delete<ITextObject> >)
TextObjectRoot::asString[abi:cxx11]() const
TextObjectRoot::asJsonValue() const
TextObjectRoot::clear()
TextObjectRoot::isEmpty() const
TextObjectText::TextObjectText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
TextObjectText::asString[abi:cxx11]() const
TextObjectText::asJsonValue() const
TextObjectLocalizedText::TextObjectLocalizedText(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >)
TextObjectLocalizedText::asString[abi:cxx11]() const
TextObjectLocalizedText::asJsonValue() const
TextObjectLocalizedTextWithParams::TextObjectLocalizedTextWithParams(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > const&)
TextObjectLocalizedTextWithParams::asString[abi:cxx11]() const
TextObjectLocalizedTextWithParams::asJsonValue() const
