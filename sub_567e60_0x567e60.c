// 函数名称: sub_567e60
// 虚拟地址: 0x567e60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __stdcallsub_567e60(int32_t** arg1 @ edi, int32_t* arg2)
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
    
    result[2] = *arg1
    result[3] = 0
    int32_t* ecx_5 = *arg1
    
    if (ecx_5 == 0)
        arg1[2] += 1
        arg1[1] = result
        *arg1 = result
        return result
    
    ecx_5[3] = result
    arg1[2] += 1
    *arg1 = result
    return result
}
