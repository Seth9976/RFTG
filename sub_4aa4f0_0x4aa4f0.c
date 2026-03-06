// 函数名称: sub_4aa4f0
// 虚拟地址: 0x4aa4f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4aa4f0(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    int32_t* eax_5 = entry_ebx[arg4 * 5 + 0x11b]
    int32_t ecx = arg3 * 3 + 3
    void* edx_1 = &eax_5[ecx * 2]
    
    if (entry_ebx[6].b == 0)
        int32_t var_42c_1 = *eax_5
        int32_t var_430_1 = entry_ebx[arg2 * 0x2d + 8]
        char var_410[0x404]
        sub_5a733b(&var_410, "%s consumes prestige using %s.\n")
        int32_t eax_7
        int32_t edx_2
        eax_7, edx_2 = sub_4c5680(&var_410)
        char (* var_42c_2)[0x404] = &var_410
        ecx = sub_4591b0(eax_7, edx_2, entry_ebx, arg2)
    
    *(&entry_ebx[arg2 * 0x2d] + 0xa3) -= 1
    int32_t edx_4 = sub_4ae7d0(ecx, arg2, 0x12, entry_ebx)
    
    if (entry_ebx[6].b == 0)
        int32_t var_42c_3 = 1
        sub_49ba20(arg2, edx_4)
    
    void* ecx_3 = edx_1
    int32_t* esi_2
    
    if ((*(ecx_3 + 8) & 0x200000) == 0)
        esi_2 = &entry_ebx[arg2 * 0x2d + 8]
    else
        sub_49cf20(entry_ebx, arg2, sx.d(*(ecx_3 + 0x10)), nullptr)
        esi_2 = &entry_ebx[arg2 * 0x2d + 8]
        esi_2[0x26].w += sx.w(*(edx_1 + 0x10))
        ecx_3 = edx_1
    
    int32_t result = *(ecx_3 + 8) & 0x1000000
    
    if (result != 0)
        int16_t edx_6 = sx.w(*(ecx_3 + 0x10))
        int16_t ecx_5 = 1
        
        if (((esi_2[3]).b & 0x7f) == 8 || ((esi_2[4]).b & 0x7f) == 8 || esi_2[3] == 0x87
                || esi_2[4] == 0x87)
            ecx_5 = 2
        
        if (esi_2[3] == 0x88 || esi_2[4] == 0x88)
            ecx_5 = 3
        
        int16_t edi_4 = ecx_5 * edx_6
        *(esi_2 + 0x86) += edi_4
        result.b = ecx_5.b
        result.w = muls.dp.b(result.b, edx_6.b)
        entry_ebx[0x781].b -= result.b
        
        if (entry_ebx[6].b == 0)
            int32_t edx_7 = sx.d(edx_6)
            int32_t var_42c_4 = sx.d(ecx_5) * edx_7
            result = sub_49bab0(arg2, edx_7)
        
        *(esi_2 + 0x9a) += edi_4
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
