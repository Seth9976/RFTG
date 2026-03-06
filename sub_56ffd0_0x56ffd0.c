// 函数名称: sub_56ffd0
// 虚拟地址: 0x56ffd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_56ffd0(float arg1, float arg2, float arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* eax_3 = sub_50c140(data_26a6760)
    int32_t i = 0
    
    if (data_26a7764 s> 0)
        void* edx_1 = &data_2731bc8
        
        do
            float var_18_1 = fconvert.s(fconvert.t(*(edx_1 - 4)) + fconvert.t(arg2))
            float* ecx_3 = (&data_26a6764)[i] * 0xb8 + *eax_3 + 8
            long double x87_r4_6 = fconvert.t(*edx_1) + fconvert.t(arg3)
            *ecx_3 = fconvert.s(fconvert.t(*(edx_1 - 8)) + fconvert.t(arg1))
            ecx_3[1] = var_18_1
            i += 1
            ecx_3[2] = fconvert.s(x87_r4_6)
            edx_1 += 0x24
        while (i s< data_26a7764)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
}
