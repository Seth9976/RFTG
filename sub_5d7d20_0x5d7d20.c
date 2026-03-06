// 函数名称: sub_5d7d20
// 虚拟地址: 0x5d7d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5d7d20(int32_t* arg1, char arg2, char arg3, char arg4, char arg5)
{
    // 第一条实际指令: int32_t* edx = *arg1
    int32_t* edx = *arg1
    uint32_t result = 0
    char var_5 = 0
    int32_t var_10 = 0xffffffff
    int32_t var_c = 0
    
    if (edx s> 0)
        char* ebx_1 = arg1[1]
        int32_t ecx_8
        
        do
            uint32_t edx_2 = zx.d(*ebx_1) - zx.d(arg2)
            uint32_t esi_2 = zx.d(ebx_1[1]) - zx.d(arg3)
            uint32_t edi_2 = zx.d(ebx_1[2]) - zx.d(arg4)
            uint32_t ecx_2 = zx.d(ebx_1[3]) - zx.d(arg5)
            int32_t ecx_6 = ecx_2 * ecx_2 + edi_2 * edi_2 + esi_2 * esi_2 + edx_2 * edx_2
            
            if (ecx_6 u>= var_10)
                result.b = var_5
            else
                result.b = var_c.b
                var_5 = result.b
                
                if (ecx_6 == 0)
                    break
                
                var_10 = ecx_6
            
            ecx_8 = var_c + 1
            ebx_1 = &ebx_1[4]
            var_c = ecx_8
        while (ecx_8 s< edx)
    
    return result
}
