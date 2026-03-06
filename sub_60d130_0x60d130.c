// 函数名称: sub_60d130
// 虚拟地址: 0x60d130
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60d130(void* arg1, int32_t* arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 0x44)
    int32_t* esi = *(arg1 + 0x44)
    
    if (esi[2] == 0)
        int32_t ecx_7 = *arg2
        int32_t edx_12 = arg2[2] + ecx_7
        int32_t var_1c = ecx_7
        int32_t ecx_8 = arg2[1]
        int32_t var_14 = edx_12
        int32_t var_10 = arg2[3] + ecx_8
        int32_t var_18 = ecx_8
        int32_t* esi_1 = *esi
        int32_t var_c
        int32_t eax_16
        int32_t edx_13
        eax_16, edx_13 = (*(*esi_1 + 0x4c))(esi_1, 0, &var_c, &var_1c, 0)
        
        if (eax_16 s>= 0)
            int32_t var_8
            *arg3 = var_8
            *arg4 = var_c
            return 0
        
        char const* const var_28_3 = "LockRect()"
        sub_60c740(eax_16, edx_13)
        return 0xffffffff
    
    if (esi[5] == 0)
        int32_t ecx_1 = *(arg1 + 0xc)
        esi[6] = ecx_1
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(*(arg1 + 0x10) * ecx_1 * 3)
        int32_t var_28_1 = (eax_4 - edx_1) s>> 1
        int32_t eax_7 = sub_5d0ac0()
        esi[5] = eax_7
        
        if (eax_7 == 0)
            sub_5cd050(eax_7)
            return 0xffffffff
    
    esi[7] = *arg2
    esi[8] = arg2[1]
    esi[9] = arg2[2]
    esi[0xa] = arg2[3]
    int32_t ecx_4 = *(arg1 + 4)
    uint32_t ecx_5
    
    if (ecx_4 == 0 || (ecx_4 & 0xf0000000) == 0x10000000)
        ecx_5 = zx.d(ecx_4.b)
    else if (ecx_4 == 0x32595559 || ecx_4 == 0x59565955 || ecx_4 == 0x55595659)
        ecx_5 = 2
    else
        ecx_5 = 1
    
    *arg3 = arg2[1] * esi[6] + *arg2 * ecx_5 + esi[5]
    *arg4 = esi[6]
    return 0
}
