// 函数名称: sub_499050
// 虚拟地址: 0x499050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_499050(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7)
{
    // 第一条实际指令: data_c021f8 += 1
    data_c021f8 += 1
    double var_14 = fconvert.d(fconvert.t(-1.0))
    int16_t top = 0
    int128_t* edi = arg1
    int32_t var_8 = 0
    int32_t entry_ebx
    
    if (*(edi + 0x18) != 0)
        arg1 = sx.d(*(edi + 0x19))
        
        if (arg2 != arg1)
            *arg6 = entry_ebx
            return arg1
    
    if (entry_ebx == 1)
        int32_t edx_1 = *arg6
        *arg6 = sub_497d90(arg1, edx_1, arg5, edi, edx_1)
    
    int32_t* eax_3 = *arg6
    int32_t i = arg7
    
    if (eax_3 != i || eax_3 != entry_ebx)
        int32_t var_c
        
        for (; i s<= entry_ebx; i += 1)
            sub_498ec0(edi, arg2, arg5, *arg6, i, 0, arg3, arg4, &var_c, &var_14)
            top -= 1
            unimplemented  {call 0x498ec0}
        
        unimplemented  {fld st0, qword [ebp-0x10]}
        unimplemented  {fld st0, qword [0x8a54b8]}
        unimplemented  {fucompp } f- unimplemented  {fucompp }
        bool c0_1 = unimplemented  {fucompp } f< unimplemented  {fucompp }
        bool c2_1 = is_unordered.t(unimplemented  {fucompp }, unimplemented  {fucompp })
        bool c3_1 = unimplemented  {fucompp } f== unimplemented  {fucompp }
        unimplemented  {fucompp }
        unimplemented  {fucompp }
        eax_3.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe | (top & 7) << 0xb
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            char const* const var_20_3 = "Failed to find consume set!\n"
            sub_4c5680("error %s")
            sub_5a79f4()
            noreturn
        
        int32_t esi_1 = var_c
        int32_t ecx_5 = 0
        
        if (esi_1 s>= 1)
            int32_t eax_4 = 1
            
            do
                if ((esi_1 & eax_4) != 0)
                    *(arg5 + (var_8 << 2)) = *(arg5 + (ecx_5 << 2))
                    var_8 += 1
                
                ecx_5 += 1
                eax_4 = 1 << ecx_5.b
            while (eax_4 s<= esi_1)
        
        eax_3 = arg6
        *eax_3 = var_8
    
    return eax_3
}
