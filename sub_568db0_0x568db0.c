// 函数名称: sub_568db0
// 虚拟地址: 0x568db0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_568db0(int32_t arg1, int32_t arg2 @ edi, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx = arg1
    int32_t eax = arg3
    int32_t esi = ebx * 2 + 2
    int32_t var_8_1 = ebx
    bool cond:0 = esi != eax
    
    if (esi s< eax)
        do
            int32_t eax_1 = arg2 + (esi << 2)
            
            if (arg5(eax_1, eax_1 - 4) != 0)
                esi -= 1
            
            *(arg2 + (ebx << 2)) = *(arg2 + (esi << 2))
            ebx = esi
            esi = esi * 2 + 2
        while (esi s< arg3)
        
        eax = arg3
        cond:0 = esi != eax
    
    if (not(cond:0))
        *(arg2 + (ebx << 2)) = *(arg2 + (eax << 2) - 4)
        ebx = eax - 1
    
    int32_t eax_4
    int32_t edx_2
    edx_2:eax_4 = sx.q(ebx - 1)
    int32_t esi_2 = (eax_4 - edx_2) s>> 1
    
    if (var_8_1 s>= ebx)
        *(arg2 + (ebx << 2)) = *arg4
        return arg4
    
    int32_t ebx_1 = ebx
    int32_t eax_12
    
    do
        if (arg5(arg2 + (esi_2 << 2), arg4) == 0)
            int32_t eax_14 = *arg4
            *(arg2 + (ebx_1 << 2)) = eax_14
            return eax_14
        
        *(arg2 + (ebx_1 << 2)) = *(arg2 + (esi_2 << 2))
        int32_t eax_10
        int32_t edx_4
        edx_4:eax_10 = sx.q(esi_2 - 1)
        ebx_1 = esi_2
        eax_12 = (eax_10 - edx_4) s>> 1
        esi_2 = eax_12
    while (var_8_1 s< ebx_1)
    
    *(arg2 + (ebx_1 << 2)) = *arg4
    return eax_12
}
