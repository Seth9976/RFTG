// 函数名称: sub_498cb0
// 虚拟地址: 0x498cb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_498cb0(int32_t arg1, int32_t arg2, char* arg3, int32_t* arg4, int32_t arg5, int32_t arg6, int32_t* arg7)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = arg5
    double var_44 = fconvert.d(fconvert.t(-1.0))
    int16_t top = 0
    int32_t var_48 = eax_2
    int32_t var_28 = 0
    char* ebx_1
    
    if (eax_2 s>= 0)
        eax_2 = arg4[eax_2 * 5 + 0x11b]
        ebx_1 = eax_2 + ((arg6 * 3 + 3) << 3)
    else
        char var_24 = 4
        int32_t var_1c_1 = 0x11000000
        int32_t var_18_1 = 0
        int16_t var_14_1 = 0x201
        ebx_1 = &var_24
    
    if (arg4[6].b != 0)
        int16_t edx_1 = arg4[arg3 * 0x2d + 0x2c].w
        int32_t eax_5 =
            sub_49c8f0(eax_2, arg4, arg3, 2) + sx.d(*(&arg4[arg3 * 0x2d] + 0xae)) - sx.d(edx_1)
        int32_t ecx_2 = sx.d(ebx_1[0x11])
        
        if (eax_5 s> ecx_2)
            eax_5 = ecx_2
        
        arg4[arg3 * 0x2d + 0x2c].w = edx_1 + eax_5.w
        int32_t edx_4 = *(ebx_1 + 8)
        int32_t var_48_1 = *(ebx_1 + 0xc)
        
        if ((edx_4 & 0x1000000) == 0)
            if ((edx_4 & 0x200000) != 0)
                eax_5 = sub_49cf20(arg4, arg3, eax_5, nullptr)
            
            *arg7 = 0
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return eax_5
        
        *(&arg4[arg3 * 0x2d] + 0xa6) += eax_5.w
        arg4[0x781].b -= eax_5.b
        *arg7 = 0
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_5
    
    if (*arg7 s> 0x1e)
        int32_t eax_6 = sx.d(ebx_1[0x11])
        *arg7 = eax_6
        sub_5a6aba(eax_1 ^ &__saved_ebp)
        return eax_6
    
    if (ebx_1[0x11] == 0)
        sub_5a79f4()
        noreturn
    
    int32_t i = 0
    int32_t var_3c
    
    if (ebx_1[0x11] s>= 0)
        do
            sub_498b00(arg4, arg3, var_48, arg6, arg2, *arg7, i, 0, &var_3c, &var_44)
            top -= 1
            unimplemented  {call 0x498b00}
            i += 1
        while (i s<= sx.d(ebx_1[0x11]))
    
    unimplemented  {fld st0, qword [ebp-0x40]}
    unimplemented  {fld st0, qword [0x8a54b8]}
    unimplemented  {fucompp } f- unimplemented  {fucompp }
    bool c0 = unimplemented  {fucompp } f< unimplemented  {fucompp }
    bool c2 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
    bool c3 = unimplemented  {fucompp } f== unimplemented  {fucompp }
    unimplemented  {fucompp }
    unimplemented  {fucompp }
    eax_2.w = (c0 ? 1 : 0) << 8 | (c2 ? 1 : 0) << 0xa | (c3 ? 1 : 0) << 0xe | (top & 7) << 0xb
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        char const* const var_60_2 = "Failed to find good discard set!\n"
        sub_4c5680("error %s")
        sub_5a79f4()
        noreturn
    
    int32_t esi_1 = var_3c
    int32_t ecx_17 = 0
    
    if (esi_1 s>= 1)
        eax_2 = 1
        
        do
            if ((esi_1 & eax_2) != 0)
                *(arg2 + (var_28 << 2)) = *(arg2 + (ecx_17 << 2))
                var_28 += 1
            
            ecx_17 += 1
            eax_2 = 1 << ecx_17.b
        while (eax_2 s<= esi_1)
    
    *arg7 = var_28
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return eax_2
}
