// 函数名称: sub_5ef8d0
// 虚拟地址: 0x5ef8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ef8d0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(ecx + 0x18))
    int16_t* esi = *(ecx + 0x10)
    int32_t ebx = sx.d(*esi)
    int32_t var_8 = sx.d(esi[1])
    int32_t edx_2 = (eax_1 - edx) s>> 1
    int32_t var_10 = sx.d(esi[2])
    void* edi = esi + edx_2
    int32_t var_20 = edx_2
    int32_t var_14 = sx.d(esi[3])
    int32_t var_1c
    int32_t i_1
    int32_t var_c
    
    if (esi u< edi)
        void* edx_3 = &esi[2]
        void* ecx_1 = &esi[2]
        i_1 = ((edi - esi - 1) u>> 3) + 1
        int32_t i
        
        do
            int32_t esi_1 = sx.d(*(ecx_1 - 4))
            int32_t edi_5 = sx.d(*(ecx_1 - 2))
            var_c = sx.d(*ecx_1)
            var_1c = sx.d(*(ecx_1 + 2))
            *(edx_3 - 4) = ((esi_1 + ebx) s>> 1).w
            *(edx_3 - 2) = ((var_8 + edi_5) s>> 1).w
            ecx_1 += 0x10
            *edx_3 = ((var_c + var_10) s>> 1).w
            *(edx_3 + 2) = ((var_14 + var_1c) s>> 1).w
            ebx = esi_1
            edx_3 += 8
            i = i_1
            i_1 -= 1
            var_8 = edi_5
            var_10 = var_c
            var_14 = var_1c
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
