// 函数名称: sub_681270
// 虚拟地址: 0x681270
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_681270(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t temp0 = arg5
    arg5 -= 1
    int32_t result = arg1
    int32_t i_2 = *(result + 0x70)
    int32_t ebx = *(result + 0x24)
    int32_t var_8_1 = ebx
    
    if (temp0 - 1 s>= 0)
        arg1 = arg3 << 2
        int32_t temp1_1
        
        do
            int32_t esi_1 = 0
            
            if (ebx s> 0)
                do
                    char* ecx_3 = *(arg1 + *(arg2 + (esi_1 << 2)))
                    char* eax_5 = *arg4 + esi_1
                    int32_t i_1 = i_2
                    
                    if (i_2 != 0)
                        int32_t i
                        
                        do
                            ebx.b = *ecx_3
                            *eax_5 = ebx.b
                            ebx = var_8_1
                            ecx_3 = &ecx_3[1]
                            eax_5 = &eax_5[ebx]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    esi_1 += 1
                while (esi_1 s< ebx)
            
            result = 4
            arg1 += 4
            arg4 = &arg4[1]
            temp1_1 = arg5
            arg5 -= 1
        while (temp1_1 - 1 s>= 0)
    
    return result
}
