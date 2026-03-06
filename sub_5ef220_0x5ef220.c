// 函数名称: sub_5ef220
// 虚拟地址: 0x5ef220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ef220(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ecx + 0x18))
    int16_t* esi = *(ecx + 0x10)
    uint32_t var_8 = zx.d(esi[1])
    uint32_t ebx = zx.d(*esi)
    uint32_t var_10 = zx.d(esi[2])
    uint32_t var_18 = zx.d(esi[3])
    uint32_t var_20 = zx.d(esi[4])
    uint32_t var_28 = zx.d(esi[5])
    int32_t edx_3 = ((edx & 3) + eax_1) s>> 2
    uint32_t var_30 = zx.d(esi[6])
    void* edi = esi + edx_3
    int32_t var_40 = edx_3
    uint32_t var_34 = zx.d(esi[7])
    uint32_t var_3c
    int32_t i_1
    uint32_t var_2c
    uint32_t var_24
    uint32_t var_1c
    uint32_t var_14
    uint32_t var_c
    
    if (esi u< edi)
        void* edx_4 = &esi[2]
        i_1 = ((edi - esi - 1) u>> 4) + 1
        void* ecx_2 = &esi[2]
        int32_t i
        
        do
            var_c = zx.d(*ecx_2)
            uint32_t esi_1 = zx.d(*(ecx_2 - 4))
            var_14 = zx.d(*(ecx_2 + 2))
            var_1c = zx.d(*(ecx_2 + 4))
            uint32_t edi_5 = zx.d(*(ecx_2 - 2))
            var_24 = zx.d(*(ecx_2 + 6))
            var_2c = zx.d(*(ecx_2 + 8))
            var_3c = zx.d(*(ecx_2 + 0xa))
            *(edx_4 - 4) = ((esi_1 + ebx) s>> 1).w
            *(edx_4 - 2) = ((var_8 + edi_5) s>> 1).w
            *edx_4 = ((var_c + var_10) s>> 1).w
            ecx_2 += 0x40
            *(edx_4 + 2) = ((var_14 + var_18) s>> 1).w
            edx_4 += 0x10
            *(edx_4 - 0xc) = ((var_1c + var_20) s>> 1).w
            var_8 = edi_5
            *(edx_4 - 0xa) = ((var_24 + var_28) s>> 1).w
            *(edx_4 - 8) = ((var_2c + var_30) s>> 1).w
            i = i_1
            i_1 -= 1
            *(edx_4 - 6) = ((var_34 + var_3c) s>> 1).w
            ebx = esi_1
            var_10 = var_c
            var_18 = var_14
            var_20 = var_1c
            var_28 = var_24
            var_30 = var_2c
            var_34 = var_3c
        while (i != 1)
        ecx = arg1
        edx_3 = var_40
    
    *(ecx + 0x50) += 1
    int32_t result = *(ecx + 0x50)
    *(ecx + 0x18) = edx_3
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg2, var_40, var_3c, i_1, var_34, var_30, var_2c, 
        var_28, var_24, var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
