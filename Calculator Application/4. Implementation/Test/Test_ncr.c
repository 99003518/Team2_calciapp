void test_ncr(void);
CU_ncr_test(suite, "ncr", test_ncr);

void test_ncr(void)
{
    CU_ASSERT(35 ==ncr(7,3));
    CU_ASSERT(1 ==ncr(4,0));
    CU_ASSERT(1 ==ncr(6,6));
}
