// 函数名称: sub_681990
// 虚拟地址: 0x681990
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_681990(void* arg1, int32_t* arg2, uint32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: void* ecx = *(arg1 + 0x1c4)
    void* ecx = *(arg1 + 0x1c4)
    int32_t edx = *(ecx + 0x10)
    int32_t result = *(arg1 + 0x144)
    int32_t edx_1 = *(ecx + 0x14)
    int32_t edx_2 = *(ecx + 0x18)
    int32_t ecx_1 = *(ecx + 0x1c)
    int32_t* edx_4 = *arg2 + (arg3 << 3)
    void* var_c = edx_4[1]
    char* edx_7 = *(arg2[1] + (arg3 << 2))
    void* var_8 = *edx_4
    char* edi_1 = *(arg2[2] + (arg3 << 2))
    int32_t* esi_1 = arg4
    char* ecx_4 = *esi_1
    char* esi_2 = esi_1[1]
    uint32_t ebx_2 = *(arg1 + 0x70) u>> 1
    arg4 = ebx_2
    
    if (ebx_2 != 0)
        uint32_t i
        
        do
            uint32_t ebx_3 = zx.d(*edx_7)
            uint32_t edx_9 = zx.d(*edi_1)
            int32_t* edi_4 = *(edx + (edx_9 << 2))
            int32_t edi_7 = *(ecx_1 + (ebx_3 << 2)) + *(edx_2 + (edx_9 << 2))
            uint32_t edx_11 = *(edx_1 + (ebx_3 << 2))
            uint32_t edx_12 = zx.d(*var_8)
            *ecx_4 = *(edi_4 + edx_12 + result)
            int32_t edi_8 = edi_7 s>> 0x10
            ecx_4[1] = *(edx_12 + edi_8 + result)
            ecx_4[2] = *(edx_12 + edx_11 + result)
            uint32_t edx_15 = zx.d(*(var_8 + 1))
            var_8 += 2
            ecx_4[3] = *(edi_4 + edx_15 + result)
            ecx_4[4] = *(edx_15 + edi_8 + result)
            char* ebx_20 = var_c
            ecx_4[5] = *(edx_15 + edx_11 + result)
            uint32_t edx_18 = zx.d(*ebx_20)
            *esi_2 = *(edi_4 + edx_18 + result)
            esi_2[1] = *(edx_18 + edi_8 + result)
            esi_2[2] = *(edx_18 + edx_11 + result)
            uint32_t edx_21 = zx.d(ebx_20[1])
            var_c = &ebx_20[2]
            esi_2[3] = *(edi_4 + edx_21 + result)
            edi_1 = &edi_1[1]
            esi_2[4] = *(edi_8 + edx_21 + result)
            esi_2[5] = *(edx_21 + edx_11 + result)
            edx_7 = &edx_7[1]
            ecx_4 = &ecx_4[6]
            esi_2 = &esi_2[6]
            i = arg4
            arg4 -= 1
        while (i != 1)
    
    if ((*(arg1 + 0x70) & 1) != 0)
        uint32_t ebx_34 = zx.d(*edx_7)
        uint32_t edx_24 = zx.d(*edi_1)
        int32_t* edi_11 = *(edx + (edx_24 << 2))
        int32_t edi_14 = *(ecx_1 + (ebx_34 << 2)) + *(edx_2 + (edx_24 << 2))
        uint32_t edx_26 = *(edx_1 + (ebx_34 << 2))
        uint32_t edx_28 = zx.d(*var_8)
        *ecx_4 = *(edi_11 + edx_28 + result)
        int32_t edi_15 = edi_14 s>> 0x10
        ecx_4[1] = *(edx_28 + edi_15 + result)
        ecx_4[2] = *(edx_28 + edx_26 + result)
        uint32_t ecx_6 = zx.d(*var_c)
        *esi_2 = *(edi_11 + ecx_6 + result)
        esi_2[1] = *(ecx_6 + edi_15 + result)
        result.b = *(ecx_6 + edx_26 + result)
        esi_2[2] = result.b
    
    return result
}
