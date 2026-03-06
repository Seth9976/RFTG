// 函数名称: sub_4bd760
// 虚拟地址: 0x4bd760
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4bd760()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    void* entry_ebx
    long double x87_r7 = fconvert.t(*(entry_ebx + 0xc))
    long double x87_r6 = float.t(0)
    x87_r6 - x87_r7
    int32_t result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        int32_t* eax_1 = data_307c624
        void var_94
        int32_t eax_2
        int80_t st0_1
        st0_1, eax_2 = sub_40a930(&var_94)
        float var_a0_2 = fconvert.s(fconvert.t(*(entry_ebx + 0xc)))
        void var_4c
        __builtin_memcpy(&var_4c, eax_2, 0x40)
        int32_t edx_1
        int80_t st0_2
        st0_2, result, edx_1 = sub_4f5f30(eax_1, &var_4c, 0, var_a0_2)
        int16_t top_1 = 0xfffe
        
        for (int32_t i = 0; i s<= 7; i += 1)
            result, edx_1 = sub_4bd5e0(result, edx_1, i, entry_ebx)
            top_1 -= 2
            unimplemented  {call 0x4bd5e0}
        
        unimplemented  {fld st0, dword [ebx+0xc]}
        int32_t ecx_2 = *(entry_ebx + 0x4d0)
        float var_50_2 = fconvert.s(unimplemented  {fstp dword [ebp-0x4c], st0})
        unimplemented  {fstp dword [ebp-0x4c], st0}
        
        if (*(entry_ebx + 0x4d5) == 0)
            float eax_4
            
            if (*(entry_ebx + 0x4d7) != 0 || *(entry_ebx + 0x4d8) != 0)
                eax_4 = 4.20389539e-45f
            else
                result.b = *(entry_ebx + 0x4dd)
                
                if (result.b == 0)
                    eax_4 = 0f
                else if (*(entry_ebx + 0x4df) != 0 && *(entry_ebx + 0x4e0) != 0)
                    eax_4 = 2.80259693e-45f
                else if (result.b == 0 || *(entry_ebx + 0x4df) != 0)
                    eax_4 = 0f
                else
                    eax_4 = 1.40129846e-45f
            
            unimplemented  {fld st0, dword [ebp-0x4c]}
            int32_t var_a0_4 = 0
            int32_t var_a4_1 = ecx_2
            float var_a4_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
            unimplemented  {fstp dword [esp], st0}
            result = sub_4f6100(*(entry_ebx + 0x4cc), ecx_2, eax_4, var_a4_2)
            unimplemented  {call 0x4f6100}
    
    sub_5a6aba(var_8 ^ &__saved_ebp)
    return result
}
