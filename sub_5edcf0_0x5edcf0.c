// 函数名称: sub_5edcf0
// 虚拟地址: 0x5edcf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5edcf0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ecx + 0x18))
    char* esi = *(ecx + 0x10)
    uint32_t ebx = zx.d(sx.w(*esi))
    uint32_t var_8 = zx.d(sx.w(esi[1]))
    uint32_t var_10 = zx.d(sx.w(esi[2]))
    uint32_t var_18 = zx.d(sx.w(esi[3]))
    uint32_t var_20 = zx.d(sx.w(esi[4]))
    uint32_t var_28 = zx.d(sx.w(esi[5]))
    uint32_t var_30 = zx.d(sx.w(esi[6]))
    int32_t edx_3 = ((edx & 3) + eax_1) s>> 2
    void* edi = &esi[edx_3]
    int32_t var_40 = edx_3
    uint32_t var_34 = zx.d(sx.w(esi[7]))
    uint32_t var_3c
    int32_t i_1
    uint32_t var_2c
    uint32_t var_24
    uint32_t var_1c
    uint32_t var_14
    uint32_t var_c
    
    if (esi u< edi)
        void* edx_4 = &esi[2]
        void* ecx_1 = &esi[2]
        i_1 = ((edi - esi - 1) u>> 3) + 1
        int32_t i
        
        do
            uint32_t esi_1 = zx.d(sx.w(*(ecx_1 - 2)))
            uint32_t edi_5 = zx.d(sx.w(*(ecx_1 - 1)))
            var_c = zx.d(sx.w(*ecx_1))
            var_14 = zx.d(sx.w(*(ecx_1 + 1)))
            var_1c = zx.d(sx.w(*(ecx_1 + 2)))
            var_24 = zx.d(sx.w(*(ecx_1 + 3)))
            var_2c = zx.d(sx.w(*(ecx_1 + 4)))
            var_3c = zx.d(sx.w(*(ecx_1 + 5)))
            *(edx_4 - 2) = ((esi_1 + ebx) s>> 1).b
            *(edx_4 - 1) = ((var_8 + edi_5) s>> 1).b
            *edx_4 = ((var_c + var_10) s>> 1).b
            ecx_1 += 0x20
            *(edx_4 + 1) = ((var_14 + var_18) s>> 1).b
            edx_4 += 8
            *(edx_4 - 6) = ((var_1c + var_20) s>> 1).b
            *(edx_4 - 5) = ((var_24 + var_28) s>> 1).b
            *(edx_4 - 4) = ((var_2c + var_30) s>> 1).b
            i = i_1
            i_1 -= 1
            *(edx_4 - 3) = ((var_34 + var_3c) s>> 1).b
            ebx = esi_1
            var_8 = edi_5
            var_10 = zx.d(var_c.w)
            var_18 = zx.d(var_14.w)
            var_20 = zx.d(var_1c.w)
            var_28 = zx.d(var_24.w)
            var_30 = zx.d(var_2c.w)
            var_34 = zx.d(var_3c.w)
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
