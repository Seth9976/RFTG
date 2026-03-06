// 函数名称: sub_56fec0
// 虚拟地址: 0x56fec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_56fec0(float arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t eax_2 = sub_50c140(data_26a6760)
    int32_t i = 0
    
    if (data_26a7764 s> 0)
        long double x87_r7_1 = fconvert.t(fconvert.s(fconvert.t(arg1)))
        void* edx_1 = &data_2731bc8
        
        do
            long double x87_r5_1 = fconvert.t(data_273abd4)
            float var_44_1 = fconvert.s(fconvert.t(*(edx_1 - 8)) - x87_r5_1)
            long double x87_r4_2 = fconvert.t(data_273abd8)
            void* ecx_3 = (&data_26a6764)[i] * 0xb8 + *eax_2
            long double x87_r5_4 = fconvert.t(*(edx_1 - 4)) - x87_r4_2
            i += 1
            edx_1 += 0x24
            long double x87_r3_2 = fconvert.t(data_273abdc)
            float var_14_1 =
                fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(edx_1 - 0x24)) - x87_r3_2)) * x87_r7_1)
            *(ecx_3 + 8) =
                fconvert.s(x87_r5_1 + fconvert.t(fconvert.s(x87_r7_1 * fconvert.t(var_44_1))))
            *(ecx_3 + 0xc) = fconvert.s(x87_r4_2
                + fconvert.t(fconvert.s(fconvert.t(fconvert.s(x87_r5_4)) * x87_r7_1)))
            *(ecx_3 + 0x10) = fconvert.s(x87_r3_2 + fconvert.t(var_14_1))
            float var_50_1 = fconvert.s(fconvert.t(*(edx_1 - 0x10)) * x87_r7_1)
            long double x87_r6_11 = fconvert.t(*(edx_1 - 0xc))
            *(ecx_3 + 0x20) = fconvert.s(fconvert.t(*(edx_1 - 0x14)) * x87_r7_1)
            *(ecx_3 + 0x24) = var_50_1
            *(ecx_3 + 0x28) = fconvert.s(x87_r6_11 * x87_r7_1)
        while (i s< data_26a7764)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
