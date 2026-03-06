// 函数名称: sub_683980
// 虚拟地址: 0x683980
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_683980(void* arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: void* edx = *(arg1 + 0x1cc)
    void* edx = *(arg1 + 0x1cc)
    int32_t* eax = *(edx + 0x18)
    int32_t ecx_1 = *(arg1 + 0x70)
    int32_t esi = *eax
    int32_t esi_1 = eax[1]
    int32_t eax_1 = eax[2]
    int32_t result = arg4
    void* var_2c = edx
    
    if (result s> 0)
        int32_t* esi_2 = arg3
        int32_t* edi_2 = arg2 - arg3
        int32_t* var_8_1 = esi_2
        int32_t* var_10_1 = edi_2
        int32_t result_1 = result
        
        while (true)
            char* eax_2 = *(edi_2 + esi_2)
            int32_t ecx_3 = *(edx + 0x30)
            int32_t ecx_4 = ecx_3 << 6
            int32_t ebx_2 = *(edx + 0x3c) + ecx_4
            arg1 = *esi_2
            int32_t edi_4 = *(edx + 0x38) + ecx_4
            int32_t esi_5 = *(edx + 0x34) + ecx_4
            int32_t ecx_5 = 0
            int32_t var_18_1 = edi_4
            arg4 = ecx_1
            
            if (ecx_1 != 0)
                while (true)
                    char edx_5 = (*(esi_5 + (ecx_5 << 2)) + zx.d(*eax_2))[esi]
                        + (*(edi_4 + (ecx_5 << 2)) + zx.d(eax_2[1]))[esi_1]
                        + (*(ebx_2 + (ecx_5 << 2)) + zx.d(eax_2[2]))[eax_1]
                    *arg1 = edx_5
                    eax_2 = &eax_2[3]
                    ecx_5 = (ecx_5 + 1) & 0xf
                    int32_t temp1_1 = arg4
                    arg4 -= 1
                    arg1 += 1
                    
                    if (temp1_1 == 1)
                        break
                    
                    edi_4 = var_18_1
                
                edx = var_2c
            
            result = (ecx_3 + 1) & 0xf
            esi_2 = &var_8_1[1]
            int32_t result_2 = result_1
            result_1 -= 1
            *(edx + 0x30) = result
            var_8_1 = esi_2
            
            if (result_2 == 1)
                break
            
            edi_2 = var_10_1
    
    return result
}
