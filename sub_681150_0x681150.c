// 函数名称: sub_681150
// 虚拟地址: 0x681150
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_681150(uint32_t arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t temp0 = arg5
    int32_t temp0 = arg5
    arg5 -= 1
    void* eax = *(arg1 + 0x1c8)
    int32_t edx = *(arg1 + 0x144)
    int32_t ebx = *(arg1 + 0x70)
    int32_t ecx_1 = *(eax + 8)
    int32_t ecx_2 = *(eax + 0xc)
    int32_t ecx_3 = *(eax + 0x10)
    void* result = *(eax + 0x14)
    int32_t var_2c = ebx
    int32_t var_24 = edx
    void* result_1 = result
    
    if (temp0 - 1 s>= 0)
        int32_t* esi_1 = arg2
        int32_t* ecx_6 = arg3 * 4
        int32_t temp1_1
        
        do
            int32_t eax_2 = *(ecx_6 + *esi_1)
            char* edi_1 = *(ecx_6 + esi_1[1])
            int32_t eax_5 = *(ecx_6 + esi_1[2])
            result = *arg4
            arg4 = &arg4[1]
            ecx_6 = &ecx_6[1]
            char* var_10_1 = edi_1
            arg1 = result
            
            if (ebx != 0)
                void* esi_3 = eax_2 - edi_1
                char* ecx_7 = edi_1
                result += 2
                void* edi_3 = eax_5 - ecx_7
                void* var_14_1 = esi_3
                void* var_10_2 = edi_3
                int32_t var_8_2 = ebx
                
                while (true)
                    uint32_t ebx_1 = zx.d(*ecx_7)
                    uint32_t edi_4 = zx.d(*(edi_3 + ecx_7))
                    uint32_t esi_4 = zx.d(*(esi_3 + ecx_7))
                    edx.b = (*(ecx_1 + (edi_4 << 2)) + esi_4)[edx]
                    *(result - 2) = edx.b
                    edx = var_24
                    *(result - 1) = *(((*(result_1 + (ebx_1 << 2)) + *(ecx_3 + (edi_4 << 2))) s>> 0x10)
                        + esi_4 + edx)
                    *result = (*(ecx_2 + (ebx_1 << 2)) + esi_4)[edx]
                    result += 3
                    ecx_7 = &ecx_7[1]
                    int32_t temp2_1 = var_8_2
                    var_8_2 -= 1
                    
                    if (temp2_1 == 1)
                        break
                    
                    esi_3 = var_14_1
                    edi_3 = var_10_2
                
                ebx = var_2c
                esi_1 = arg2
            
            temp1_1 = arg5
            arg5 -= 1
        while (temp1_1 - 1 s>= 0)
    
    return result
}
