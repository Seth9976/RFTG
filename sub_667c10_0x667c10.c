// 函数名称: sub_667c10
// 虚拟地址: 0x667c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_667c10(char* arg1, int32_t* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_3 = *(arg1 + 0x6c)
    
    if ((eax_3.b & 1) != 0)
        sub_664320(arg1, "Out of place IHDR")
        noreturn
    
    if (arg3 != 0xd)
        sub_664320(arg1, "Invalid IHDR chunk")
        noreturn
    
    *(arg1 + 0x6c) = eax_3 | 1
    char var_18
    sub_664410(arg1, &var_18, 0xd)
    sub_662280(arg1, &var_18, 0xd)
    sub_667b40(arg1, 0)
    char var_17
    char var_16
    char var_15
    uint32_t ecx_6 = (((((zx.d(var_18) << 8) + zx.d(var_17)) << 8) + zx.d(var_16)) << 8) + zx.d(var_15)
    
    if (ecx_6 u> 0x7fffffff)
        sub_664320(arg1, "PNG unsigned integer out of range")
        noreturn
    
    char var_14
    char var_13
    char var_12
    char var_11
    uint32_t edi_6 = (((((zx.d(var_14) << 8) + zx.d(var_13)) << 8) + zx.d(var_12)) << 8) + zx.d(var_11)
    
    if (edi_6 u> 0x7fffffff)
        sub_664320(arg1, "PNG unsigned integer out of range")
        noreturn
    
    char var_f
    uint32_t edx_3 = zx.d(var_f)
    char var_c
    arg1[0x138] = var_c
    char var_d
    arg1[0x25c] = var_d
    char var_e
    arg1[0x27c] = var_e
    *(arg1 + 0xe4) = ecx_6
    *(arg1 + 0xe8) = edi_6
    char var_10
    arg1[0x13c] = var_10
    arg1[0x13b] = edx_3.b
    
    if (edx_3 == 2)
        arg1[0x13f] = 3
    else if (edx_3 == 4)
        arg1[0x13f] = 2
    else if (edx_3 == 6)
        arg1[0x13f] = 4
    else
        arg1[0x13f] = 1
    
    int32_t eax_14
    eax_14.b = arg1[0x13f]
    eax_14.w = muls.dp.b(eax_14.b, var_10)
    arg1[0x13e] = eax_14.b
    uint32_t eax_15 = zx.d(eax_14.b)
    uint32_t eax_17
    
    if (eax_14.b u< 8)
        eax_17 = (eax_15 * ecx_6 + 7) u>> 3
    else
        eax_17 = (eax_15 u>> 3) * ecx_6
    
    *(arg1 + 0xf4) = eax_17
    int32_t result = sub_6646a0(arg1, arg2, ecx_6, edi_6, var_10, edx_3.b, var_c, var_e, var_d)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
