
#include "org/apache/harmony/security/x509/CReasonFlagsHelper.h"
#include "org/apache/harmony/security/x509/CReasonFlags.h"

namespace Org {
namespace Apache {
namespace Harmony {
namespace Security {
namespace X509 {

CAR_SINGLETON_IMPL(CReasonFlagsHelper)

CAR_INTERFACE_IMPL(CReasonFlagsHelper, Singleton, IReasonFlagsHelper)

ECode CReasonFlagsHelper::GetASN1(
    /* [out] */ IASN1BitString** ppAsn1)
{
    VALIDATE_NOT_NULL(ppAsn1);
    *ppAsn1 = CReasonFlags::ASN1;
    REFCOUNT_ADD(*ppAsn1);
    return NOERROR;
}

} // namespace X509
} // namespace Security
} // namespace Harmony
} // namespace Apache
} // namespace Org