#include "common.h"

namespace bpftrace {
namespace test {
namespace codegen {

TEST(codegen, map_assign_int)
{
  test("kprobe:f { @x = 1; }",

       NAME);
}

} // namespace codegen
} // namespace test
} // namespace bpftrace
