// 函数名称: sub_5f34f0
// 虚拟地址: 0x5f34f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5f34f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ecx + 0x18))
    int32_t edx_2 = (eax_1 - edx) s>> 1
    int16_t* esi = *(ecx + 0x10)
    int32_t ebx = sx.d(rol.w(*esi, 8))
    int32_t var_8 = sx.d(rol.w(esi[1], 8))
    int32_t var_10 = sx.d(rol.w(esi[2], 8))
    int32_t var_18 = sx.d(rol.w(esi[3], 8))
    int32_t var_20 = sx.d(rol.w(esi[4], 8))
    int32_t var_28 = sx.d(rol.w(esi[5], 8))
    int32_t var_30 = sx.d(rol.w(esi[6], 8))
    void* edi = esi + edx_2
    int32_t var_40 = edx_2
    int32_t var_34 = sx.d(rol.w(esi[7], 8))
    int32_t var_3c
    int32_t i_1
    int32_t var_2c
    int32_t var_24
    int32_t var_1c
    int32_t var_14
    int32_t var_c
    
    if (esi u< edi)
        void* edx_3 = &esi[2]
        void* ecx_1 = &esi[2]
        i_1 = ((edi - esi - 1) u>> 4) + 1
        int32_t i
        
        do
            int32_t esi_1 = sx.d(rol.w(*(ecx_1 - 4), 8))
            int32_t edi_5 = sx.d(rol.w(*(ecx_1 - 2), 8))
            var_c = sx.d(rol.w(*ecx_1, 8))
            var_14 = sx.d(rol.w(*(ecx_1 + 2), 8))
            var_1c = sx.d(rol.w(*(ecx_1 + 4), 8))
            var_24 = sx.d(rol.w(*(ecx_1 + 6), 8))
            var_2c = sx.d(rol.w(*(ecx_1 + 8), 8))
            var_3c = sx.d(rol.w(*(ecx_1 + 0xa), 8))
            *(edx_3 - 4) = ((esi_1 + ebx) s>> 1).w
            *(edx_3 - 2) = ((var_8 + edi_5) s>> 1).w
            *edx_3 = ((var_c + var_10) s>> 1).w
            ecx_1 += 0x20
            *(edx_3 + 2) = ((var_14 + var_18) s>> 1).w
            edx_3 += 0x10
            *(edx_3 - 0xc) = ((var_1c + var_20) s>> 1).w
            var_8 = edi_5
            *(edx_3 - 0xa) = ((var_24 + var_28) s>> 1).w
            *(edx_3 - 8) = ((var_2c + var_30) s>> 1).w
            i = i_1
            i_1 -= 1
            *(edx_3 - 6) = ((var_34 + var_3c) s>> 1).w
            ebx = esi_1
            var_10 = var_c
            var_18 = var_14
            var_20 = var_1c
            var_28 = var_24
            var_30 = var_2c
            var_34 = var_3c
        while (i != 1)
        ecx = arg1
        edx_2 = var_40
    
    *(ecx + 0x50) += 1
    int32_t result = *(ecx + 0x50)
    *(ecx + 0x18) = edx_2
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg2, var_40, var_3c, i_1, var_34, var_30, var_2c, 
        var_28, var_24, var_20, var_1c, var_18, var_14, var_10, var_c, var_8)
}
