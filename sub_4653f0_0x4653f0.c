// 函数名称: sub_4653f0
// 虚拟地址: 0x4653f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4653f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t* ebx = arg4
    int32_t* ebx = arg4
    int32_t esi = arg1
    int32_t eax = esi * 2 + 2
    int32_t edi = esi
    bool cond:0 = eax != arg2
    
    if (eax s< arg2)
        do
            if (*(arg3 + (eax << 2)) s< *(arg3 + (eax << 2) - 4))
                eax -= 1
            
            *(arg3 + (esi << 2)) = *(arg3 + (eax << 2))
            esi = eax
            eax = eax * 2 + 2
            cond:0 = eax != arg2
        while (eax s< arg2)
        
        ebx = arg4
    
    if (not(cond:0))
        *(arg3 + (esi << 2)) = *(arg3 + (arg2 << 2) - 4)
        esi = arg2 - 1
    
    int32_t eax_3
    int32_t edx
    edx:eax_3 = sx.q(esi - 1)
    int32_t eax_5 = (eax_3 - edx) s>> 1
    
    if (edi s>= esi)
        int32_t eax_9 = *ebx
        *(arg3 + (esi << 2)) = eax_9
        return eax_9
    
    do
        int32_t edx_1 = *(arg3 + (eax_5 << 2))
        
        if (edx_1 s>= *ebx)
            break
        
        *(arg3 + (esi << 2)) = edx_1
        esi = eax_5
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(eax_5 - 1)
        eax_5 = (eax_7 - edx_2) s>> 1
    while (edi s< esi)
    
    *(arg3 + (esi << 2)) = *ebx
    return eax_5
}
