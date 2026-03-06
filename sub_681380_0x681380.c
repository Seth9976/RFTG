// 函数名称: sub_681380
// 虚拟地址: 0x681380
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_681380(void* arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t temp0 = arg5
    int32_t temp0 = arg5
    arg5 -= 1
    void* eax = *(arg1 + 0x1c8)
    void* edx = *(arg1 + 0x70)
    int32_t ecx_1 = *(arg1 + 0x144)
    int32_t edx_1 = *(eax + 8)
    int32_t ecx_2 = *(eax + 0xc)
    int32_t edx_2 = *(eax + 0x10)
    void* result = *(eax + 0x14)
    void* result_1 = result
    
    if (temp0 - 1 s>= 0)
        int32_t* esi_1 = arg2
        int32_t* edx_5 = arg3 * 4
        int32_t temp1_1
        
        do
            int32_t edi_1 = *(edx_5 + *esi_1)
            char* ecx_4 = *(edx_5 + esi_1[1])
            int32_t ebx_1 = *(edx_5 + esi_1[2])
            int32_t eax_4 = *(edx_5 + esi_1[3])
            result = *arg4
            arg4 = &arg4[1]
            edx_5 = &edx_5[1]
            void* result_2 = result
            
            if (edx u> 0)
                void* edx_7 = edi_1 - ecx_4
                void* edi_3 = ebx_1 - ecx_4
                result += 2
                char* esi_3 = eax_4 - ecx_4
                void* var_14_1 = edx_7
                void* var_18_1 = edi_3
                void* var_10_1 = edx
                
                while (true)
                    uint32_t esi_5 = zx.d(*(edx_7 + ecx_4))
                    uint32_t edx_8 = zx.d(*ecx_4)
                    uint32_t edi_4 = zx.d(*(edi_3 + ecx_4))
                    *(result - 2) = *(ecx_1 - *(edx_1 + (edi_4 << 2)) - esi_5 + 0xff)
                    *(result - 1) = *(ecx_1
                        - ((*(result_1 + (edx_8 << 2)) + *(edx_2 + (edi_4 << 2))) s>> 0x10) - esi_5
                        + 0xff)
                    result += 4
                    *(result - 4) = *(ecx_1 - *(ecx_2 + (edx_8 << 2)) - esi_5 + 0xff)
                    *(result - 3) = *(esi_3 + ecx_4)
                    ecx_4 = &ecx_4[1]
                    void* temp2_1 = var_10_1
                    var_10_1 -= 1
                    
                    if (temp2_1 == 1)
                        break
                    
                    edx_7 = var_14_1
                    edi_3 = var_18_1
                
                esi_1 = arg2
            
            temp1_1 = arg5
            arg5 -= 1
        while (temp1_1 - 1 s>= 0)
    
    return result
}
