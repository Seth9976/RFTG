// 函数名称: sub_567c80
// 虚拟地址: 0x567c80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_567c80(int32_t** arg1 @ edi, int32_t* arg2)
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x18)
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
    __builtin_memset(result, 0, 0x18)
    
    if (result != 0)
        *result = *arg2
        result[1] = arg2[1]
        int32_t ecx_4 = arg2[3]
        result[2] = arg2[2]
        result[3] = ecx_4
    
    result[4] = 0
    result[5] = arg1[1]
    void* ecx_5 = arg1[1]
    
    if (ecx_5 == 0)
        arg1[2] += 1
        *arg1 = result
        arg1[1] = result
        return result
    
    *(ecx_5 + 0x10) = result
    arg1[2] += 1
    arg1[1] = result
    return result
}
