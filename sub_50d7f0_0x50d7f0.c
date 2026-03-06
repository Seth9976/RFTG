// 函数名称: sub_50d7f0
// 虚拟地址: 0x50d7f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_50d7f0(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void var_90
    void var_58
    __builtin_memcpy(&var_58, sub_50c2d0(&var_90, arg2, arg3, &var_90, arg2), 0x28)
    float var_34
    float var_20 = fconvert.s(fconvert.t(var_34))
    float var_3c
    float var_14 = fconvert.s(fconvert.t(var_3c))
    float var_10 = var_20
    float var_68
    sub_405e30(&var_68, &var_14, &data_840a00)
    int32_t* ebx_1 = *(arg2 + 0x60)
    float var_2c = var_68
    int32_t var_64
    int32_t var_28 = var_64
    int32_t var_60
    int32_t var_24_1 = var_60
    int32_t var_5c
    int32_t var_20_1 = var_5c
    int32_t* esi_1
    
    if (ebx_1 == 0)
        esi_1 = arg3[0x1d]
    else
        esi_1 = ebx_1
    
    void* eax_6 = sub_4f4890(esi_1)
    int32_t edx_4 = *(eax_6 + 0xc)
    float var_1c = *(eax_6 + 8)
    int32_t var_18 = edx_4
    int32_t edx_5 = *(eax_6 + 0x14)
    var_14 = *(eax_6 + 0x10)
    int32_t var_10_1 = edx_5
    int32_t eax_7
    int80_t result
    result, eax_7 = sub_4fb1d0(&var_2c, &var_1c)
    __builtin_memcpy(arg4, eax_7, 0x40)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
