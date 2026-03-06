// 函数名称: sub_67bee0
// 虚拟地址: 0x67bee0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_67bee0(int32_t* arg1, int32_t arg2, void* arg3, uint32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* eax = arg1[1]
    uint32_t i_2 = divu.dp.d(0:0x3b9ac9f0, arg3)
    
    if (i_2 s<= 0)
        *(*arg1 + 0x14) = 0x46
        (**arg1)(arg1)
    
    if (i_2 s>= arg4)
        i_2 = arg4
    
    *(eax + 0x50) = i_2
    void* result = sub_67bcc0(arg1, arg2, arg4 << 2)
    int32_t esi_1 = 0
    
    if (arg4 u<= 0)
        return result
    
    do
        uint32_t i_3 = arg4 - esi_1
        
        if (i_2 u>= i_3)
            i_2 = i_3
        
        void* eax_8 = sub_67be10(arg1, arg2, i_2 * arg3)
        uint32_t i_1 = i_2
        
        if (i_2 != 0)
            uint32_t i
            
            do
                *(result + (esi_1 << 2)) = eax_8
                esi_1 += 1
                eax_8 += arg3
                i = i_1
                i_1 -= 1
            while (i != 1)
    while (esi_1 u< arg4)
    
    return result
}
