#include "ViewmodelsSpecsJSI.h"
#include <memory>
#include <prism/prism.h>
#include <string>

namespace facebook::react
{

struct testprism
{

    int a = 1;
    int b = 2;
};

PRISM_FIELD(testprism, a, b);

class JSI_EXPORT NativeViewModelA : public NativeViewModelACxxSpec<NativeViewModelA>
{

  public:
    NativeViewModelA(std::shared_ptr<CallInvoker> jsInvoker);
    jsi::String getStr(jsi::Runtime &rt, jsi::String input);
};

} // namespace facebook::react
// namespace facebook::react
