// 函数名称: sub_4e3490
// 虚拟地址: 0x4e3490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4e3490(int32_t arg1, int32_t arg2 @ edi, int32_t arg3, int32_t* arg4, int32_t arg5)
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
            if (arg5(*(arg2 + (esi << 2)), *(arg2 + (esi << 2) - 4)) != 0)
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
        int32_t eax_13 = *arg4
        *(arg2 + (ebx << 2)) = eax_13
        return eax_13
    
    do
        char eax_7 = arg5(*(arg2 + (esi_2 << 2)), *arg4)
        
        if (eax_7 == 0)
            *(arg2 + (ebx << 2)) = *arg4
            return eax_7
        
        *(arg2 + (ebx << 2)) = *(arg2 + (esi_2 << 2))
        int32_t eax_9
        int32_t edx_5
        edx_5:eax_9 = sx.q(esi_2 - 1)
        ebx = esi_2
        esi_2 = (eax_9 - edx_5) s>> 1
    while (var_8_1 s< ebx)
    
    *(arg2 + (ebx << 2)) = *arg4
    return arg4
}
