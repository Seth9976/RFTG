// 函数名称: sub_465640
// 虚拟地址: 0x465640
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_465640(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t ecx_1 = arg3
    int32_t edi = arg1
    int32_t esi = edi * 2 + 2
    int32_t var_8_1 = edi
    int32_t ebx_1
    
    if (esi s>= ecx_1)
        ebx_1 = arg2
    else
        do
            ebx_1 = arg2
            int32_t eax_1 = ebx_1 + esi * 0x14
            
            if (arg5(eax_1, eax_1 - 0x14) != 0)
                esi -= 1
            
            int32_t* eax_3 = ebx_1 + esi * 0x14
            int32_t ecx_3 = edi * 5
            *(ebx_1 + (ecx_3 << 2)) = *eax_3
            void* ecx_4 = ebx_1 + (ecx_3 << 2)
            *(ecx_4 + 4) = eax_3[1]
            *(ecx_4 + 8) = eax_3[2]
            *(ecx_4 + 0xc) = eax_3[3]
            edi = esi
            esi = esi * 2 + 2
            *(ecx_4 + 0x10) = eax_3[4]
        while (esi s< arg3)
        
        ecx_1 = arg3
    
    if (esi == ecx_1)
        int32_t* ebx_2 = ebx_1 + edi * 0x14
        *ebx_2 = *(ebx_1 + ecx_1 * 0x14 - 0x14)
        ebx_2[1] = *(ebx_1 + ecx_1 * 0x14 - 0x10)
        ebx_2[2] = *(ebx_1 + ecx_1 * 0x14 - 0xc)
        ebx_2[3] = *(ebx_1 + ecx_1 * 0x14 - 8)
        ebx_2[4] = *(ebx_1 + ecx_1 * 0x14 - 4)
        edi = ecx_1 - 1
    
    int32_t eax_8
    int32_t edx_12
    edx_12:eax_8 = sx.q(edi - 1)
    int32_t ebx_4 = (eax_8 - edx_12) s>> 1
    
    while (var_8_1 s< edi)
        int32_t* esi_1 = arg2 + ebx_4 * 0x14
        
        if (arg5(esi_1, arg4) == 0)
            break
        
        int32_t* eax_12 = arg2 + edi * 0x14
        *eax_12 = *esi_1
        eax_12[1] = esi_1[1]
        eax_12[2] = esi_1[2]
        eax_12[3] = esi_1[3]
        eax_12[4] = esi_1[4]
        int32_t eax_14
        int32_t edx_17
        edx_17:eax_14 = sx.q(ebx_4 - 1)
        edi = ebx_4
        ebx_4 = (eax_14 - edx_17) s>> 1
    
    int32_t* result = arg2 + edi * 0x14
    *result = *arg4
    result[1] = arg4[1]
    result[2] = arg4[2]
    result[3] = arg4[3]
    result[4] = arg4[4]
    return result
}
