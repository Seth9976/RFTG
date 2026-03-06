// 函数名称: sub_4d6b40
// 虚拟地址: 0x4d6b40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4d6b40()
{
    // 第一条实际指令: void* ecx
    void* ecx
    void* var_8 = ecx
    void* eax = data_27e7fd0
    int32_t* esi = data_27e7fd4
    int16_t top
    
    if (*(eax + 0x28) != 0)
        eax.b = *(eax + 0x27)
        long double x87_r7_5
        
        if (eax.b == 0 || data_27e7bc1 == 0)
            if (*(data_27e7bbc + 0x18) != 0 || eax.b != 0)
                long double x87_r7_16 = float.t(1)
                long double x87_r6_2 =
                    fconvert.t(fconvert.s(fconvert.t(esi[9]) + fconvert.t(0.039999999105930328)))
                x87_r6_2 - x87_r7_16
                eax.w = (x87_r6_2 < x87_r7_16 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_16) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_16 ? 1 : 0) << 0xe | 0x3000
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    x87_r7_16 = x87_r6_2
                
                x87_r7_5 = fconvert.t(fconvert.s(x87_r7_16))
            else
                long double x87_r7_12 = float.t(0)
                long double x87_r6_1 =
                    fconvert.t(fconvert.s(fconvert.t(esi[9]) - fconvert.t(0.039999999105930328)))
                x87_r6_1 - x87_r7_12
                eax.w = (x87_r6_1 < x87_r7_12 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_12) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_12 ? 1 : 0) << 0xe | 0x3000
                
                if ((eax:1.b & 0x41) != 0)
                    x87_r7_5 = fconvert.t(fconvert.s(x87_r6_1))
                else
                    x87_r7_5 = fconvert.t(fconvert.s(x87_r7_12))
        else if (data_26a45a4 != 0)
            x87_r7_5 = sub_4d7140(
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(esi[9])
                    + fconvert.t(0.039999999105930328)))), 
                fconvert.s(float.t(1)))
        else
            x87_r7_5 = sub_403000(
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(esi[9])
                    - fconvert.t(0.039999999105930328)))), 
                fconvert.s(float.t(0)))
        
        esi[9] = fconvert.s(x87_r7_5)
        top = 0
    
    void* edi = nullptr
    
    while (true)
        void* eax_1
        
        if (edi != 0)
            eax_1 = edi + 0x60
        else
            eax_1 = *esi
        
        int32_t ecx_5 = esi[1] * 0x60 + *esi
        
        if (eax_1 u>= ecx_5)
            break
        
        while ((*(eax_1 + 0x5c) & 0xffff0000) == 0)
            eax_1 += 0x60
            
            if (eax_1 u>= ecx_5)
                return (*(*data_27e7fd8 + 0x14))()
        
        edi = eax_1
        sub_4d69c0(eax_1)
        top -= 1
        unimplemented  {call 0x4d69c0}
        esi = data_27e7fd4
    
    return (*(*data_27e7fd8 + 0x14))()
}
