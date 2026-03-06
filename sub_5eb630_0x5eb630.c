// 函数名称: sub_5eb630
// 虚拟地址: 0x5eb630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5eb630(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ecx + 0x18))
    char* esi = *(ecx + 0x10)
    uint32_t ebx = zx.d(*esi)
    uint32_t var_8 = zx.d(esi[1])
    int32_t edx_2 = (eax_1 - edx) s>> 1
    uint32_t var_10 = zx.d(esi[2])
    void* edi = &esi[edx_2]
    int32_t var_20 = edx_2
    uint32_t var_14 = zx.d(esi[3])
    uint32_t var_1c
    int32_t i_1
    uint32_t var_c
    
    if (esi u< edi)
        void* edx_3 = &esi[2]
        void* ecx_1 = &esi[2]
        i_1 = ((edi - esi - 1) u>> 2) + 1
        int32_t i
        
        do
            uint32_t esi_1 = zx.d(*(ecx_1 - 2))
            uint32_t edi_5 = zx.d(*(ecx_1 - 1))
            var_c = zx.d(*ecx_1)
            var_1c = zx.d(*(ecx_1 + 1))
            *(edx_3 - 2) = ((esi_1 + ebx) s>> 1).b
            *(edx_3 - 1) = ((var_8 + edi_5) s>> 1).b
            ecx_1 += 8
            *edx_3 = ((var_c + var_10) s>> 1).b
            *(edx_3 + 1) = ((var_14 + var_1c) s>> 1).b
            ebx = esi_1
            var_8 = edi_5
            edx_3 += 4
            i = i_1
            i_1 -= 1
            var_10 = zx.d(var_c.w)
            var_14 = zx.d(var_1c.w)
        while (i != 1)
        ecx = arg1
        edx_2 = var_20
    
    *(ecx + 0x50) += 1
    int32_t result = *(ecx + 0x50)
    *(ecx + 0x18) = edx_2
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg2, var_20, var_1c, i_1, var_14, var_10, var_c, var_8)
}
