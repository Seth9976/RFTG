// 函数名称: sub_445c10
// 虚拟地址: 0x445c10
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __convention("regparm")sub_445c10(int32_t arg1, void* arg2 @ esi, int32_t* arg3)
{
    // 第一条实际指令: int32_t edi = *(arg2 + 0x58)
    int32_t edi = *(arg2 + 0x58)
    int32_t eax
    
    if (edi != 0xffffffff)
        eax = sub_46b360(edi)
    else
        eax = arg1 | edi
    
    void* ecx = data_27e7a40
    
    if (eax != *(ecx + 0x74) && eax != *(*(ecx + 0x548) + 0xbfb0) && eax != 0xffffffff)
        return 
    
    void var_30
    int32_t* eax_1 = sub_445ac0(&var_30, *(arg2 + 0x84))
    int32_t edx_2 = eax_1[1]
    long double x87_r7_2 = fconvert.t(1000.0) - float.t(*(arg2 + 0x84))
    float var_1c = *eax_1
    int32_t var_18_1 = edx_2
    float var_c_1 = fconvert.s(x87_r7_2)
    int32_t var_14_1 = eax_1[2]
    int32_t var_10_1 = eax_1[3]
    void arg_8
    
    if (sub_4057a0(&var_1c, &arg_8).b == 0)
        return 
    
    long double x87_r7_3 = fconvert.t(var_c_1)
    long double x87_r6_1
    
    if (*arg3 != 0)
        x87_r6_1 = fconvert.t(arg3[7])
        x87_r6_1 - x87_r7_3
    
    if (*arg3 != 0 && (((x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
        return 
    
    int32_t eax_3 = *(arg2 + 0xac)
    arg3[7] = fconvert.s(x87_r7_3)
    *arg3 = 0xe
    arg3[1] = eax_3
}
