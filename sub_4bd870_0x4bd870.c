// 函数名称: sub_4bd870
// 虚拟地址: 0x4bd870
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bd870()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    long double x87_r7 = fconvert.t(entry_ebx[5])
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    int32_t result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t* eax_1 = data_307c62c
        void var_94
        int32_t eax_2
        int80_t st0_1
        st0_1, eax_2 = sub_40a930(&var_94)
        float var_a0_2 = fconvert.s(fconvert.t(entry_ebx[5]))
        void var_4c
        __builtin_memcpy(&var_4c, eax_2, 0x40)
        int32_t edx_1
        int80_t st0_2
        st0_2, edx_1 = sub_4f5f30(eax_1, &var_4c, 0, var_a0_2)
        int16_t top_1 = 0xfffe
        void* eax_4 = data_27e7a58
        int32_t i = 0
        
        if (*(eax_4 + 4) s> 0)
            do
                edx_1 = sub_4bd270(i, entry_ebx)
                top_1 -= 1
                unimplemented  {call 0x4bd270}
                eax_4 = data_27e7a58
                i += 1
            while (i s< *(eax_4 + 4))
        
        result = *(eax_4 + 4)
        
        if (result s< 4)
            result = sub_4bd0e0(result, edx_1, result, entry_ebx)
            unimplemented  {call 0x4bd0e0}
        
        unimplemented  {fld st0, dword [ebx+0x14]}
        int32_t ecx_3 = entry_ebx[0xf5]
        float var_50_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x4c], st0})
        unimplemented  {fstp dword [ebp-0x4c], st0}
        
        if (*(entry_ebx + 0x3d9) == 0)
            float eax_5
            
            if (*(entry_ebx + 0x3db) != 0 || entry_ebx[0xf7].b != 0)
                eax_5 = 4.20389539e-45f
            else
                result.b = *(entry_ebx + 0x3e1)
                
                if (result.b == 0)
                    eax_5 = 0f
                else if (*(entry_ebx + 0x3e3) != 0 && entry_ebx[0xf9].b != 0)
                    eax_5 = 2.80259693e-45f
                else if (result.b == 0 || *(entry_ebx + 0x3e3) != 0)
                    eax_5 = 0f
                else
                    eax_5 = 1.40129846e-45f
            
            unimplemented  {fld st0, dword [ebp-0x4c]}
            int32_t var_a0_4 = 0
            int32_t var_a4_1 = ecx_3
            float var_a4_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            result = sub_4f6100(entry_ebx[0xf4], ecx_3, eax_5, var_a4_2)
            unimplemented  {call 0x4f6100}
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return result
}
