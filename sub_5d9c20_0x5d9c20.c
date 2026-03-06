// 函数名称: sub_5d9c20
// 虚拟地址: 0x5d9c20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5d9c20(int32_t arg1, int32_t* arg2, int32_t* arg3, void* arg4 @ edi)
{
    // 第一条实际指令: int32_t* esi = *(arg4 + 0x24)
    int32_t* esi = *(arg4 + 0x24)
    int32_t* eax = *(arg4 + 0x28)
    int32_t* var_8 = esi
    sub_610630(eax, arg2, arg3, arg1)
    int32_t ecx = *(arg4 + 0xc)
    int32_t edx = *(arg4 + 0x10)
    bool cond:0 = *(arg4 + 8) != 1
    int32_t var_1c = 0
    int32_t var_18 = 0
    
    if (not(cond:0))
        int32_t var_c
        
        if (sub_5d9140(esi, &var_1c, &var_c, &var_8) s>= 0)
            sub_610960(*(arg4 + 0x28), &var_1c, esi[1], ecx, edx, var_c, var_8)
            sub_5d9330(esi)
            return 0
        
        return 0xffffffff
    
    int32_t eax_6 = esi[1]
    uint32_t eax_7
    
    if (eax_6 == 0 || (eax_6 & 0xf0000000) == 0x10000000)
        eax_7 = zx.d(eax_6.b)
    else if (eax_6 == 0x32595559 || eax_6 == 0x59565955 || eax_6 == 0x55595659)
        eax_7 = 2
    else
        eax_7 = 1
    
    int32_t ebx_1 = (eax_7 * ecx + 3) & 0xfffffffc
    int32_t var_28_3 = ebx_1 * edx
    int32_t* eax_11 = sub_5d0ac0()
    
    if (eax_11 == 0)
        sub_5cd050(eax_11)
        return 0xffffffff
    
    sub_610960(*(arg4 + 0x28), &var_1c, var_8[1], ecx, edx, eax_11, ebx_1)
    sub_5d9e80(var_8, &var_1c, eax_11, ebx_1)
    int32_t* var_54 = eax_11
    sub_5d0af0()
    return 0
}
