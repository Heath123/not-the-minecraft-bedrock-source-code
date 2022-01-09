Core::Result::Result(bool, std::function<char const* (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*)>)
Core::Result::Result(Core::Result&&)
Core::Result::Result(Core::Result const&)
Core::Result::operator=(Core::Result&&)
Core::Result::peekFailed() const
Core::Result::peekSucceeded() const
Core::Result::throwFailed() const
Core::Result::_setHandled() const
Core::Result::succeeded() const
Core::Result::failed() const
Core::Result::architecturalProblem() const
Core::Result::succeededArchitecturalProblem() const
Core::Result::failedArchitecturalProblem() const
Core::Result::ignoreError() const
Core::Result::catastrophic() const
Core::Result::operator bool() const
Core::Result::otherMechanism()
Core::Result::message(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*) const
Core::Result::makeSuccess()
Core::Result::makeFailure()
Core::Result::makeFailure(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >&&)
Core::Result::makeFailure(std::function<char const* (std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >*)>&&)
Core::Result::makeFailureWithStringLiteral(char const*)
Core::Result::makeFailureNotImplemented()
Core::Result::~Result()
Core::Result::merge(Core::Result&&, Core::Result&&)
Core::Result::either(Core::Result&&, Core::Result&&)
