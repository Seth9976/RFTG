// 函数名称: sub_499390
// 虚拟地址: 0x499390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_499390(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int128_t* edx
    ecx, edx = __chkstk(0x1f2c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int128_t* edi = edx
    void* eax_3 = 0xffffffff
    int128_t* var_1f00 = edi
    int32_t var_1ef0 = 0xffffffff
    int32_t var_1edc = 0
    
    if (*(edi + 0x18) == 0)
        int32_t i_2 = sx.d(edi[0x46].w)
        
        if (i_2 s> 0)
            eax_3 = edi + 0x468
            int32_t i
            
            do
                if ((1 << ecx.b & zx.d(*eax_3)) == 0)
                    var_1edc += 1
                
                eax_3 += 0x14
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        double var_1f1c_1 = fconvert.d(sub_4904a0(eax_3, i_2.b, edi, ecx))
        int32_t var_1ed8_1 = 0
        
        if (arg2 s> 0)
            while (true)
                int32_t eax_6 = sx.d(edi[0x46].w)
                int32_t edx_2 = *(edi + *(arg1 + (var_1ed8_1 << 2)) * 0x14 + 0x46c)
                int32_t esi_2 = sx.d(*(edx_2 + 7))
                int32_t var_1ef8_1 = 0
                double var_1eec
                
                if (eax_6 s> 0)
                    edx_2 = 1 << ecx.b
                    var_1eec:4.d = eax_6
                    void* ecx_6 = edi + 0x46c
                    int32_t i_1
                    
                    do
                        if ((edx_2 & zx.d(*(ecx_6 - 4))) == 0 && sx.d(*(*ecx_6 + 7)) s> esi_2)
                            var_1ef8_1 += 1
                        
                        ecx_6 += 0x14
                        i_1 = var_1eec:4.d
                        var_1eec:4.d -= 1
                    while (i_1 != 1)
                
                int32_t var_14_2 = var_1edc - var_1ef8_1
                uint32_t eax_11
                int32_t edx_3
                eax_11, edx_3 = sub_499310(esi_2, edx_2)
                int32_t var_1f28_1 = edx_3 & 0x7fffffff
                int32_t var_1f10_1 = edx_3 & 0x80000000
                int32_t var_14_3 = var_1edc
                uint32_t eax_15
                int32_t edx_6
                eax_15, edx_6 = sub_499310(esi_2, var_1edc)
                int32_t edx_7 = edx_6 & 0x7fffffff
                int32_t var_1f20_1 = edx_7
                int32_t var_1f08_1 = edx_6 & 0x80000000
                int32_t var_14_4 = ecx
                void var_1ed4
                int128_t* esi_3 = &var_1ed4
                var_1eec = fconvert.d(fconvert.t(fconvert.d(float.t(eax_11.q) + fneg(float.t(0.q))))
                    / (float.t(eax_15.q) + fneg(float.t(0.q))))
                sub_48bb40(edi, esi_3, edx_7.b)
                int32_t var_14_5 = 1
                int32_t eax_21
                char edx_9
                eax_21, edx_9 =
                    sub_49cc30(&var_1ed4, *(arg1 + (var_1ed8_1 << 2)), var_1ed8_1, 0xffffffff)
                char edx_10
                long double st0_2
                st0_2, edx_10 = sub_4904a0(eax_21, edx_9, &var_1ed4, ecx)
                int32_t var_14_6 = ecx
                sub_48bb40(edi, esi_3, edx_10)
                int32_t eax_23
                char edx_11
                eax_23, edx_11 = sub_49cd90(&var_1ed4, 0)
                int32_t eax_24
                long double st0_3
                st0_3, eax_24 = sub_4904a0(eax_23, edx_11, &var_1ed4, ecx)
                long double x87_r7_11 = st0_3 * (float.t(1) - fconvert.t(var_1eec))
                    + fconvert.t(fconvert.d(st0_2 * fconvert.t(var_1eec)))
                long double x87_r6_8 = fconvert.t(var_1f1c_1) - fconvert.t(9.9999999999999995e-07)
                x87_r6_8 - x87_r7_11
                eax_24.w = (x87_r6_8 < x87_r7_11 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_8, x87_r7_11) ? 1 : 0) << 0xa
                    | (x87_r6_8 == x87_r7_11 ? 1 : 0) << 0xe | 0x3800
                bool p_1 = unimplemented  {test ah, 0x41}
                
                if (not(p_1))
                    var_1f1c_1 = fconvert.d(x87_r7_11)
                    var_1ef0 = *(arg1 + (var_1ed8_1 << 2))
                
                int32_t eax_27 = var_1ed8_1 + 1
                var_1ed8_1 = eax_27
                
                if (eax_27 s>= arg2)
                    break
                
                edi = var_1f00
    
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
}
