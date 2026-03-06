// 函数名称: sub_568380
// 虚拟地址: 0x568380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t** __stdcallsub_568380(int32_t** arg1, int32_t arg2)
{
    // 第一条实际指令: void* edx = data_26a44e4
    void* edx = data_26a44e4
    int32_t edi
    int32_t var_14 = edi
    
    if (edx == 0)
        sub_4f4250()
        edx = data_26a44e4
    
    int32_t eax = 0
    int32_t* esi_2
    
    while (true)
        if (1 << (eax.b + 4) s>= 0x48)
            esi_2 = edx + eax * 0x14
            break
        
        eax += 1
        
        if (eax s>= 7)
            esi_2 = edx + 0x8c
            break
    
    esi_2[3] += 1
    
    if (*esi_2 == 0)
        sub_4f4170(esi_2)
    
    int32_t* ebx = *esi_2
    *esi_2 = *ebx
    sub_5abfc0(ebx, 0, 0x48)
    
    if (ebx != 0)
        __builtin_memcpy(ebx, arg2, 0x40)
    
    ebx[0x10] = 0
    ebx[0x11] = arg1[1]
    void* ecx_3 = arg1[1]
    
    if (ecx_3 == 0)
        arg1[2] += 1
        *arg1 = ebx
        arg1[1] = ebx
        return arg1
    
    *(ecx_3 + 0x40) = ebx
    arg1[2] += 1
    arg1[1] = ebx
    return arg1
}
