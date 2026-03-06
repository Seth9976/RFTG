// 函数名称: sub_5ef9b0
// 虚拟地址: 0x5ef9b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ef9b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = arg1
    void* ecx = arg1
    int32_t edx = *(ecx + 0x18)
    int32_t esi = *(ecx + 0x10)
    int32_t ebx = edx << 2
    int16_t* edi = esi + edx - 8
    int32_t var_8 = sx.d(edi[3])
    int32_t var_c = sx.d(edi[2])
    int32_t var_10 = sx.d(edi[1])
    int16_t* eax = esi + ebx - 0x20
    int32_t var_24 = ebx
    int32_t var_14 = sx.d(*edi)
    void* var_1c
    int32_t var_18
    
    if (eax u>= esi)
        while (true)
            int32_t ecx_1 = sx.d(edi[3])
            int32_t edx_5 = sx.d(edi[2])
            int32_t esi_1 = sx.d(edi[1])
            var_18 = sx.d(*edi)
            var_1c = edi - 8
            eax[0xf] = ((var_8 * 3 + ecx_1) s>> 2).w
            eax[0xe] = ((var_c * 3 + edx_5) s>> 2).w
            eax[0xd] = ((var_10 * 3 + esi_1) s>> 2).w
            eax[0xc] = ((var_14 * 3 + var_18) s>> 2).w
            eax[0xb] = ((var_8 + ecx_1) s>> 1).w
            eax[0xa] = ((var_c + edx_5) s>> 1).w
            eax[9] = ((var_10 + esi_1) s>> 1).w
            eax[8] = ((var_14 + var_18) s>> 1).w
            eax[7] = ((ecx_1 * 3 + var_8) s>> 2).w
            eax[6] = ((edx_5 * 3 + var_c) s>> 2).w
            eax[5] = ((esi_1 * 3 + var_10) s>> 2).w
            eax[4] = ((var_18 * 3 + var_14) s>> 2).w
            eax[3] = ecx_1.w
            eax[2] = edx_5.w
            eax[1] = esi_1.w
            *eax = var_18.w
            eax -= 0x20
            var_8 = ecx_1
            var_c = edx_5
            var_10 = esi_1
            var_14 = var_18
            
            if (eax u< esi)
                break
            
            edi = var_1c
        
        ebx = var_24
        ecx = arg1
    
    *(ecx + 0x50) += 1
    int32_t result = *(ecx + 0x50)
    *(ecx + 0x18) = ebx
    
    if (*(ecx + (result << 2) + 0x28) == 0)
        return result
    
    return (*(ecx + (result << 2) + 0x28))(ecx, arg2, var_24, esi, var_1c, var_18, var_14, var_10, 
        var_c, var_8)
}
