#include "a/function.h"
#include "b/function.h"
#include "mgos.h"

enum mgos_app_init_result mgos_app_init(void) {
  function_a();
  function_b();
  return MGOS_APP_INIT_SUCCESS;
}
