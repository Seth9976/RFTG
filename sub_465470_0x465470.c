// 函数名称: sub_465470
// 虚拟地址: 0x465470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_465470(int32_t arg1, int32_t arg2 @ esi, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ebx = arg1
    int32_t eax = arg3
    int32_t edi = ebx * 2 + 2
    int32_t var_8_1 = ebx
    bool cond:0 = edi != eax
    
    if (edi s< eax)
        do
            int32_t eax_1 = arg2 + (edi << 3)
            
            if (arg5(eax_1, eax_1 - 8) != 0)
                edi -= 1
            
            *(arg2 + (ebx << 3)) = *(arg2 + (edi << 3))
            *(arg2 + (ebx << 3) + 4) = *(arg2 + (edi << 3) + 4)
            ebx = edi
            edi = edi * 2 + 2
        while (edi s< arg3)
        
        eax = arg3
        cond:0 = edi != eax
    
    if (not(cond:0))
        *(arg2 + (ebx << 3)) = *(arg2 + (eax << 3) - 8)
        *(arg2 + (ebx << 3) + 4) = *(arg2 + (eax << 3) - 4)
        ebx = eax - 1
    
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = sx.q(ebx - 1)
    int32_t edi_2 = (eax_5 - edx_3) s>> 1
    
    while (var_8_1 s< ebx)
        if (arg5(arg2 + (edi_2 << 3), arg4) == 0)
            break
        
        *(arg2 + (ebx << 3)) = *(arg2 + (edi_2 << 3))
        *(arg2 + (ebx << 3) + 4) = *(arg2 + (edi_2 << 3) + 4)
        int32_t eax_11
        int32_t edx_5
        edx_5:eax_11 = sx.q(edi_2 - 1)
        ebx = edi_2
        edi_2 = (eax_11 - edx_5) s>> 1
    
    *(arg2 + (ebx << 3)) = *arg4
    *(arg2 + (ebx << 3) + 4) = arg4[1]
    return arg4
}
