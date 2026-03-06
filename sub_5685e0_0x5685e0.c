// 函数名称: sub_5685e0
// 虚拟地址: 0x5685e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_5685e0(void* arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x1c)
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
    __builtin_memset(result, 0, 0x1c)
    
    if (result != 0)
        *result = *arg2
        result[1] = arg2[1]
        result[2] = arg2[2]
        result[3] = arg2[3]
        result[4] = arg2[4]
    
    result[5] = arg1
    int32_t** entry_ebx
    
    if (arg1 == 0)
        result[6] = entry_ebx[1]
        void* ecx_7 = entry_ebx[1]
        
        if (ecx_7 == 0)
            entry_ebx[2] += 1
            *entry_ebx = result
            entry_ebx[1] = result
            return result
        
        *(ecx_7 + 0x14) = result
        entry_ebx[2] += 1
        entry_ebx[1] = result
        return result
    
    result[6] = *(arg1 + 0x18)
    void* ecx_5 = *(arg1 + 0x18)
    
    if (ecx_5 == 0)
        *entry_ebx = result
        *(arg1 + 0x18) = result
        entry_ebx[2] += 1
        return result
    
    *(ecx_5 + 0x14) = result
    *(arg1 + 0x18) = result
    entry_ebx[2] += 1
    return result
}
