// 函数名称: sub_658150
// 虚拟地址: 0x658150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_658150(void* arg1)
{
    // 第一条实际指令: void* edx = **(arg1 + 0x68)
    void* edx = **(arg1 + 0x68)
    int32_t ebx = *(arg1 + 0x30)
    int32_t* edi = *(*(arg1 + 4) + 0x1c)
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(edi[*(arg1 + 0x28)])
    int32_t eax_6 = (eax_4 + (edx_1 & 3)) s>> 2
    int32_t esi_1 = ebx - eax_6
    int32_t eax_16
    int32_t esi_2
    
    if (*(arg1 + 0x28) == 0)
        int32_t eax_18
        int32_t edx_8
        edx_8:eax_18 = sx.q(*edi)
        eax_16 = (eax_18 + (edx_8 & 3)) s>> 2
        esi_2 = esi_1 - eax_16
    else
        int32_t eax_8
        int32_t edx_4
        edx_4:eax_8 = sx.q(edi[*(arg1 + 0x24)])
        esi_2 = esi_1 + neg.d((eax_8 + (edx_4 & 3)) s>> 2)
        int32_t eax_14
        int32_t edx_6
        edx_6:eax_14 = sx.q(edi[*(arg1 + 0x2c)])
        eax_16 = (eax_14 + (edx_6 & 3)) s>> 2
    
    int32_t ebx_2 = ebx + eax_6 + eax_16
    int32_t eax_20 = *(edx + 0xac)
    
    if (eax_20 s>= esi_2 && eax_20 s< ebx_2)
        return 1
    
    int32_t ecx_1 = *(edx + 8)
    int32_t temp0_1 = divs.dp.d(sx.q(ebx_2), ecx_1)
    int32_t eax_27 = divs.dp.d(sx.q(esi_2), ecx_1)
    
    if (eax_27 s>= temp0_1)
        return 0
    
    int32_t* ecx_3 = *(edx + 0xa0) + (eax_27 << 2)
    
    while (true)
        if (*ecx_3 != 0)
            return 1
        
        eax_27 += 1
        ecx_3 = &ecx_3[1]
        
        if (eax_27 s>= temp0_1)
            return 0
}
