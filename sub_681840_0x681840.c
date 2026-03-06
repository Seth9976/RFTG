// 函数名称: sub_681840
// 虚拟地址: 0x681840
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_681840(uint32_t arg1, int32_t* arg2, uint32_t arg3, uint32_t arg4)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x1c4)
    void* eax = *(arg1 + 0x1c4)
    int32_t edx = *(eax + 0x10)
    int32_t ecx = *(arg1 + 0x144)
    int32_t edx_1 = *(eax + 0x14)
    int32_t edx_2 = *(eax + 0x18)
    int32_t eax_1 = *(eax + 0x1c)
    char* edi = *(*arg2 + (arg3 << 2))
    char* edx_5 = *(arg2[1] + (arg3 << 2))
    char* esi_2 = *(arg2[2] + (arg3 << 2))
    char* result = *arg4
    uint32_t ebx_2 = *(arg1 + 0x70) u>> 1
    arg4 = ebx_2
    
    if (ebx_2 != 0)
        uint32_t i
        
        do
            uint32_t ebx_4 = zx.d(*edx_5)
            uint32_t edx_7 = zx.d(*esi_2)
            int32_t* esi_5 = *(edx + (edx_7 << 2))
            int32_t esi_8 = *(eax_1 + (ebx_4 << 2)) + *(edx_2 + (edx_7 << 2))
            uint32_t edx_9 = *(edx_1 + (ebx_4 << 2))
            uint32_t edx_10 = zx.d(*edi)
            *result = *(esi_5 + edx_10 + ecx)
            int32_t esi_9 = esi_8 s>> 0x10
            result[1] = *(edx_10 + esi_9 + ecx)
            result[2] = *(edx_10 + edx_9 + ecx)
            uint32_t edx_13 = zx.d(edi[1])
            result[3] = *(esi_5 + edx_13 + ecx)
            esi_2 = &esi_2[1]
            result[4] = *(esi_9 + edx_13 + ecx)
            result[5] = *(edx_13 + edx_9 + ecx)
            edx_5 = &edx_5[1]
            edi = &edi[2]
            result = &result[6]
            i = arg4
            arg4 -= 1
        while (i != 1)
    
    if ((*(arg1 + 0x70) & 1) != 0)
        uint32_t edx_16 = zx.d(*edx_5)
        uint32_t ebx_17 = zx.d(*esi_2)
        uint32_t edi_1 = zx.d(*edi)
        uint32_t edx_19 = *(edx_1 + (edx_16 << 2))
        int32_t esi_14 = (*(eax_1 + (edx_16 << 2)) + *(edx_2 + (ebx_17 << 2))) s>> 0x10
        *result = (*(edx + (ebx_17 << 2)) + edi_1)[ecx]
        result[1] = *(edi_1 + esi_14 + ecx)
        ecx.b = *(edi_1 + edx_19 + ecx)
        result[2] = ecx.b
    
    return result
}
