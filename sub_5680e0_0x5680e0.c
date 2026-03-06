// 函数名称: sub_5680e0
// 虚拟地址: 0x5680e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5680e0(int32_t** arg1 @ edi)
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
        int32_t* entry_ebx
        *result = *entry_ebx
        result[1] = entry_ebx[1]
        result[2] = entry_ebx[2]
        result[3] = entry_ebx[3]
        result[4] = entry_ebx[4]
    
    result[5] = 0
    result[6] = arg1[1]
    void* ecx_6 = arg1[1]
    
    if (ecx_6 == 0)
        arg1[2] += 1
        *arg1 = result
        arg1[1] = result
        return result
    
    *(ecx_6 + 0x14) = result
    arg1[2] += 1
    arg1[1] = result
    return result
}
