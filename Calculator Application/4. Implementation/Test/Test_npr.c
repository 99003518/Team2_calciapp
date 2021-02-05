void test_npr(void);
CU_npr_test(suite, "npr", test_npr);

void test_npr(void)
{
    CU_ASSERT(210 ==npr(7,3));
    CU_ASSERT(1 ==npr(4,0));
    CU_ASSERT(720 ==npr(6,6));
}
