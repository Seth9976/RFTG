// 函数名称: sub_568510
// 虚拟地址: 0x568510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_568510(void* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x10)
            esi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* result = *esi_2
    *esi_2 = *result
    *result = 0
    result[1] = 0
    result[2] = 0
    result[3] = 0
    
    if (result != 0)
        *result = *arg2
        result[1] = arg2[1]
    
    result[2] = arg1
    int32_t** entry_ebx
    
    if (arg1 == 0)
        result[3] = entry_ebx[1]
        void* ecx_7 = entry_ebx[1]
        
        if (ecx_7 == 0)
            entry_ebx[2] += 1
            *entry_ebx = result
            entry_ebx[1] = result
            return result
        
        *(ecx_7 + 8) = result
        entry_ebx[2] += 1
        entry_ebx[1] = result
        return result
    
    result[3] = *(arg1 + 0xc)
    void* ecx_5 = *(arg1 + 0xc)
    
    if (ecx_5 == 0)
        *entry_ebx = result
        *(arg1 + 0xc) = result
        entry_ebx[2] += 1
        return result
    
    *(ecx_5 + 8) = result
    *(arg1 + 0xc) = result
    entry_ebx[2] += 1
    return result
}
