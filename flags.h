//  auxiliary definitions
#define GET_MACRO(_1, _2, _3, _4, _5, _6, _7, _8, NAME, ...) NAME

#define MASK_BIT1(n) (1ULL << n)
#define MASK_BIT2(n1, n2) ((1ULL << n1) | (1ULL << n2))
#define MASK_BIT3(n1, n2, n3) ((1ULL << n1) | (1ULL << n2) | (1ULL << n3))
#define MASK_BIT4(n1, n2, n3, n4) \
  ((1ULL << n1) | (1ULL << n2) | (1ULL << n3) | (1ULL << n4))
#define MASK_BIT5(n1, n2, n3, n4, n5) \
  ((1ULL << n1) | (1ULL << n2) | (1ULL << n3) | (1ULL << n4) | (1ULL << n5))
#define MASK_BIT6(n1, n2, n3, n4, n5, n6)                                     \
  ((1ULL << n1) | (1ULL << n2) | (1ULL << n3) | (1ULL << n4) | (1ULL << n5) | \
   (1ULL << n6))
#define MASK_BIT7(n1, n2, n3, n4, n5, n6, n7)                                 \
  ((1ULL << n1) | (1ULL << n2) | (1ULL << n3) | (1ULL << n4) | (1ULL << n5) | \
   (1ULL << n6) | (1ULL << n7))
#define MASK_BIT8(n1, n2, n3, n4, n5, n6, n7, n8)                             \
  ((1ULL << n1) | (1ULL << n2) | (1ULL << n3) | (1ULL << n4) | (1ULL << n5) | \
   (1ULL << n6) | (1ULL << n7) | (1ULL << n8))
#define MERGE_MASK1(mask) (mask)
#define MERGE_MASK2(mask1, mask2) (mask1 | mask2)
#define MERGE_MASK3(mask1, mask2, mask3) (mask1 | mask2 | mask3)
#define MERGE_MASK4(mask1, mask2, mask3, mask4) (mask1 | mask2 | mask3 | mask4)
#define MERGE_MASK5(mask1, mask2, mask3, mask4, mask5) \
  (mask1 | mask2 | mask3 | mask4 | mask5)
#define MERGE_MASK6(mask1, mask2, mask3, mask4, mask5, mask6) \
  (mask1 | mask2 | mask3 | mask4 | mask5 | mask6)
#define MERGE_MASK7(mask1, mask2, mask3, mask4, mask5, mask6, mask7) \
  (mask1 | mask2 | mask3 | mask4 | mask5 | mask6 | mask7)
#define MERGE_MASK8(mask1, mask2, mask3, mask4, mask5, mask6, mask7, mask8) \
  (mask1 | mask2 | mask3 | mask4 | mask5 | mask6 | mask7 | mask8)
#define CROSS_MASK1(mask) (mask)
#define CROSS_MASK2(mask1, mask2) (mask1 & mask2)
#define CROSS_MASK3(mask1, mask2, mask3) (mask1 & mask2 & mask3)
#define CROSS_MASK4(mask1, mask2, mask3, mask4) (mask1 & mask2 & mask3 & mask4)
#define CROSS_MASK5(mask1, mask2, mask3, mask4, mask5) \
  (mask1 & mask2 & mask3 & mask4 & mask5)
#define CROSS_MASK6(mask1, mask2, mask3, mask4, mask5, mask6) \
  (mask1 & mask2 & mask3 & mask4 & mask5 & mask6)
#define CROSS_MASK7(mask1, mask2, mask3, mask4, mask5, mask6, mask7) \
  (mask1 & mask2 & mask3 & mask4 & mask5 & mask6 & mask7)
#define CROSS_MASK8(mask1, mask2, mask3, mask4, mask5, mask6, mask7, mask8) \
  (mask1 & mask2 & mask3 & mask4 & mask5 & mask6 & mask7 & mask8)

//  main functions
//  work with a single flag
#define GET_BIT(flags, n) (flags & (1ULL << n))
#define GET_BIT_BOOL(flags, n) ((flags & (1ULL << n)) >> n)
#define SET_BIT(flags, n) (flags |= (1ULL << n))
#define CLEAR_BIT(flags, n) (flags &= ~(1ULL << n))
#define TOGGLE_BIT(flags, n) (flags ^= (1ULL << n))
//  creating a mask
#define MASK_FROM_BITS(...)                                          \
  GET_MACRO(__VA_ARGS__, MASK_BIT8, MASK_BIT7, MASK_BIT6, MASK_BIT5, \
            MASK_BIT4, MASK_BIT3, MASK_BIT2, MASK_BIT1)              \
  (__VA_ARGS__)
#define MERGE_MASKS(...)                                                     \
  GET_MACRO(__VA_ARGS__, MERGE_MASK8, MERGE_MASK7, MERGE_MASK6, MERGE_MASK5, \
            MERGE_MASK4, MERGE_MASK3, MERGE_MASK2, MERGE_MASK1)              \
  (__VA_ARGS__)
#define CROSS_MASKS(...)                                                     \
  GET_MACRO(__VA_ARGS__, CROSS_MASK8, CROSS_MASK7, CROSS_MASK6, CROSS_MASK5, \
            CROSS_MASK4, CROSS_MASK3, CROSS_MASK2, CROSS_MASK1)              \
  (__VA_ARGS__)
#define INVERSE_BITS(flags) (~flags)
//  work with flags by mask
#define GET_BITMASK_OR(flags, mask) (flags & mask)
#define GET_BITMASK_OR_BOOL(flags, mask) ((flags & mask) != 0)
#define GET_BITMASK_AND(flags, mask) ((flags & mask) == mask)
#define SET_BITMASK(flags, mask) (flags |= mask)
#define CLEAR_BITMASK(flags, mask) (flags &= ~mask)
#define TOGGLE_BITMASK(flags, mask) (flags ^= mask)
