// 函数名称: sub_682820
// 虚拟地址: 0x682820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char (* __convention("regparm")sub_682820(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5))[0x80]
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t edx_1 = *(*(arg3 + 0x1cc) + 0x18)
    int32_t eax_3 = arg5 s>> 2
    int32_t edi_1 = arg2 s>> 2
    int32_t esi_1 = arg4 s>> 3
    char var_188[0x100]
    char var_88[0x80]
    sub_682560(arg3, (edi_1 << 5) + 4, (esi_1 << 5) + 2, (eax_3 << 5) + 4, 
        sub_682350((eax_3 << 5) + 4, &var_188, (esi_1 << 5) + 2, arg3, (edi_1 << 5) + 4, 
            (eax_3 << 5) + 4), 
        &var_188, &var_88)
    char (* result)[0x80] = &var_88
    int32_t* esi_8 = edx_1 + edi_1 * 0x10
    int32_t i_1 = 4
    int32_t i
    
    do
        int32_t edx_7 = (esi_1 * 0x100 + eax_3 * 4) * 2
        int32_t j_1 = 2
        int32_t j
        
        do
            uint16_t* ecx_5 = *esi_8
            *(ecx_5 + edx_7) = zx.w(*result) + 1
            *(ecx_5 + edx_7 + 2) = zx.w((*result)[1]) + 1
            *(ecx_5 + edx_7 + 4) = zx.w((*result)[2]) + 1
            *(ecx_5 + edx_7 + 6) = zx.w((*result)[3]) + 1
            int32_t ecx_7 = *esi_8
            *(edx_7 + ecx_7 + 0x40) = zx.w((*result)[4]) + 1
            *(edx_7 + ecx_7 + 0x42) = zx.w((*result)[5]) + 1
            *(edx_7 + ecx_7 + 0x44) = zx.w((*result)[6]) + 1
            *(edx_7 + ecx_7 + 0x46) = zx.w((*result)[7]) + 1
            int32_t ecx_9 = *esi_8
            *(edx_7 + ecx_9 + 0x80) = zx.w((*result)[8]) + 1
            *(edx_7 + ecx_9 + 0x82) = zx.w((*result)[9]) + 1
            *(edx_7 + ecx_9 + 0x84) = zx.w((*result)[0xa]) + 1
            *(edx_7 + ecx_9 + 0x86) = zx.w((*result)[0xb]) + 1
            int32_t ecx_11 = *esi_8
            *(edx_7 + ecx_11 + 0xc0) = zx.w((*result)[0xc]) + 1
            void* ecx_12 = edx_7 + ecx_11 + 0xc0
            *(ecx_12 + 2) = zx.w((*result)[0xd]) + 1
            *(ecx_12 + 4) = zx.w((*result)[0xe]) + 1
            uint16_t ebx_18 = zx.w((*result)[0xf]) + 1
            result = &(*result)[0x10]
            edx_7 += 0x100
            j = j_1
            j_1 -= 1
            *(ecx_12 + 6) = ebx_18
        while (j != 1)
        esi_8 = &esi_8[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
