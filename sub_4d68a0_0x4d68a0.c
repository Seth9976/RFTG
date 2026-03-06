// 函数名称: sub_4d68a0
// 虚拟地址: 0x4d68a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d68a0(float arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx
    sub_4d6480(ecx)
    float var_34 = fconvert.s(float.t(0))
    int16_t var_28 = 0x101
    void var_3c
    int32_t result = sub_4d66f0(&var_3c)
    uint32_t ecx_1
    void* edx_1
    
    if (result != 0)
        edx_1 = data_27e7fd4
        ecx_1 = zx.d(result.w)
    
    void* ecx_5
    
    if (result == 0 || ecx_1 u>= *(edx_1 + 4))
        ecx_5 = nullptr
    else
        void* ecx_4 = ecx_1 * 0x60 + *edx_1
        int32_t edx_2
        edx_2.b = *(ecx_4 + 0x5c) != result
        ecx_5 = ecx_4 & (edx_2 - 1)
    
    long double x87_r7_1 = fconvert.t(*(data_27e7fcc + 0x4c))
    *(ecx_5 + 0x24) = 2
    *(ecx_5 + 0x28) = fconvert.s(x87_r7_1)
    *(ecx_5 + 0x2c) = fconvert.s(fconvert.t(arg1))
    long double x87_r7_3 = float.t(0)
    *(ecx_5 + 0x38) = fconvert.s(x87_r7_3)
    *(ecx_5 + 0x30) = fconvert.s(x87_r7_3)
    *(ecx_5 + 0x34) = fconvert.s(float.t(1))
    *(ecx_5 + 0x40) = fconvert.s(fconvert.t(0.600000024f))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
