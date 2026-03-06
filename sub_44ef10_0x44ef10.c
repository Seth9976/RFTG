// 函数名称: sub_44ef10
// 虚拟地址: 0x44ef10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_44ef10()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(0)
    void* ebx = *(data_27e7a40 + 0x548)
    long double temp0 = fconvert.t(*(ebx + 0xbfcc))
    x87_r7 - temp0
    void* result
    result.w = (x87_r7 < temp0 ? 1 : 0) << 8 | (is_unordered.t(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x5}
    
    if (not(p))
        void var_8c
        int32_t eax_2
        int80_t st0_1
        st0_1, eax_2 = sub_40a930(&var_8c)
        float var_a0_2 = fconvert.s(fconvert.t(*(ebx + 0xbfcc)))
        int32_t* eax_3 = data_307c110
        void var_4c
        __builtin_memcpy(&var_4c, eax_2, 0x40)
        int80_t st0_2
        st0_2, result = sub_4f5f30(eax_3, &var_4c, 2, var_a0_2)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
