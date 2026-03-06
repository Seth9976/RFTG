// 函数名称: sub_5c7340
// 虚拟地址: 0x5c7340
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5c7340(int32_t* arg1)
{
    // 第一条实际指令: if (data_8b95d4 s>= 0xffff)
    if (data_8b95d4 s>= 0xffff)
        int32_t __saved_esi_1 = data_8b95d4
        sub_5cce60("Event queue is full (%d events)")
        return 0
    
    void* result = data_8b95e0
    
    if (result != 0)
        data_8b95e0 = *(result + 0x54)
    else
        int32_t __saved_esi_2 = 0x58
        result = sub_5d0ac0()
        
        if (result == 0)
            return result
    
    __builtin_memcpy(result, arg1, 0x38)
    
    if (*arg1 == 0x201)
        int32_t* edx_2 = arg1[2]
        *(result + 0x38) = *edx_2
        *(result + 0x3c) = edx_2[1]
        *(result + 0x40) = edx_2[2]
        *(result + 0x44) = edx_2[3]
        *(result + 0x48) = edx_2[4]
        *(result + 0x4c) = edx_2[5]
        *(result + 8) = result + 0x38
    
    void* ecx_3 = data_8b95dc
    data_8b95dc = result
    
    if (ecx_3 == 0)
        data_8b95d8 = result
        *(result + 0x50) = 0
        *(result + 0x54) = 0
        data_8b95d4 += 1
        return 1
    
    *(ecx_3 + 0x54) = result
    *(result + 0x50) = ecx_3
    *(result + 0x54) = 0
    data_8b95d4 += 1
    return 1
}
