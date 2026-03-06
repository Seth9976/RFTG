// 函数名称: sub_67ee40
// 虚拟地址: 0x67ee40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_67ee40(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax = arg3
    int32_t var_8_1 = arg5
    int32_t edx
    
    if (eax s>= arg5)
        edx = arg2
    else
        if (sub_67ed20(arg1, arg2, eax, arg5) == 0)
            return 0xffffffff
        
        edx = arg1[2]
        eax = arg1[3]
    
    int32_t eax_4 = eax - arg5
    int32_t ecx_2 = arg5
    int32_t i = edx s>> eax_4.b & ((1 << ecx_2.b) - 1)
    int32_t ebx_3 = arg4
    
    while (i s> *(ebx_3 + (ecx_2 << 2)))
        if (eax_4 s< 1)
            if (sub_67ed20(arg1, edx, eax_4, 1) == 0)
                return 0xffffffff
            
            edx = arg1[2]
            eax_4 = arg1[3]
        
        eax_4 -= 1
        ecx_2 = var_8_1 + 1
        var_8_1 = ecx_2
        i = (i * 2) | (edx s>> eax_4.b & 1)
        ebx_3 = arg4
    
    arg1[2] = edx
    arg1[3] = eax_4
    
    if (ecx_2 s<= 0x10)
        return zx.d(*(*(ebx_3 + (ecx_2 << 2) + 0x48) + *(ebx_3 + 0x8c) + i + 0x11))
    
    *(*arg1[4] + 0x14) = 0x76
    int32_t* edi_1 = arg1[4]
    (*(*edi_1 + 4))(edi_1, 0xffffffff)
    return 0
}
