#include<bits/stdc++.h>
using namespace std;
/**/
int main() {
    int value; // conventional

    int Value; // unconventional (should start with lower case letter)
    int VALUE; // unconventional (should start with lower case letter and be in all lower case)
    int VaLuE; // unconventional (see your psychiatrist) ;)

    int my_variable_name;   // conventional (separated by underscores/snake_case)
    int my_function_name(); // conventional (separated by underscores/snake_case)

    int myVariableName;   // conventional (intercapped/camelCase)
    int myFunctionName(); // conventional (intercapped/camelCase)

    // int my variable name;   // invalid (whitespace not allowed)
    // int my function name(); // invalid (whitespace not allowed)

    int MyVariableName;   // unconventional (should start with lower case letter)
    int MyFunctionName(); // unconventional (should start with lower case letter)

    // Identifier names that start with a capital letter are typically used for user-defined types such as structs, classes, and enumerations
    // avoid naming your identifiers starting with an underscore, as these names are typically reserved for OS, library, and/or compiler use
    return 0;
}

/*
few rules that must be followed when naming identifiers:

- The identifier can not be a keyword. Keywords are reserved.
- The identifier can only be composed of letters (lower or upper case), numbers, and the underscore character.
  that means the name can not contain symbols (except the underscore) nor whitespace (spaces or tabs).
- The identifier must begin with a letter (lower or upper case) or an underscore. It can not start with a number.
- C++ is case sensitive, and thus distinguishes between lower and upper case letters. nvalue is different 
  than nValue is different than NVALUE.
*/

/*
Here is a list of all the C++ keywords (through C++23):

alignas
alignof
and
and_eq
asm
auto
bitand
bitor
bool
break
case
catch
char
char8_t (since C++20)
char16_t
char32_t
class
compl
concept (since C++20)
const
consteval (since C++20)
constexpr
constinit (since C++20)
const_cast
continue
co_await (since C++20)
co_return (since C++20)
co_yield (since C++20)
decltype
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
friend
goto
if
inline
int
long
mutable
namespace
new
noexcept
not
not_eq
nullptr
operator
or
or_eq
private
protected
public
register
reinterpret_cast
requires (since C++20)
return
short
signed
sizeof
static
static_assert
static_cast
struct
switch
template
this
thread_local
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
void
volatile
wchar_t
while
xor
xor_eq*/