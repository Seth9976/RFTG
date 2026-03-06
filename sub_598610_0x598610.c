// 函数名称: sub_598610
// 虚拟地址: 0x598610
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_598610(char* arg1, char* arg2, char* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t esi = arg4
    
    if (esi == 1)
        char ecx_3 = ((zx.d(*arg2) * 3 + zx.d(*arg3) + 2) s>> 2).b
        arg1[1] = ecx_3
        *arg1 = ecx_3
        return arg1
    
    uint32_t ecx_6 = zx.d(*arg2) * 3 + zx.d(*arg3)
    *arg1 = ((ecx_6 + 2) s>> 2).b
    int32_t edx_4 = 1
    
    if (esi s> 1)
        void* edi_1 = &arg3[1]
        void* ebx_1 = arg2 - arg3
        void* var_8_1 = ebx_1
        
        while (true)
            uint32_t esi_1 = ecx_6
            ecx_6 = zx.d(*(ebx_1 + edi_1)) * 3 + zx.d(*edi_1)
            arg1[(edx_4 << 1) - 1] = ((esi_1 * 3 + ecx_6 + 8) s>> 4).b
            esi = arg4
            arg1[edx_4 << 1] = ((ecx_6 * 3 + esi_1 + 8) s>> 4).b
            edx_4 += 1
            edi_1 += 1
            
            if (edx_4 s>= esi)
                break
            
            ebx_1 = var_8_1
    
    arg1[(esi << 1) - 1] = ((ecx_6 + 2) s>> 2).b
    return arg1
}
