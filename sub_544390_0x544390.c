// 函数名称: sub_544390
// 虚拟地址: 0x544390
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_544390(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: void* ecx = __chkstk(0x405c)
    void* ecx = __chkstk(0x405c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t edx = arg2
    int32_t esi
    int32_t var_c = esi
    int32_t esi_1 = 0
    int32_t edi
    int32_t var_10 = edi
    float var_404c
    
    if (edx s>= 4)
        int32_t i_2 = ((edx - 4) u>> 2) + 1
        float* eax_2 = ecx + 0x60
        int32_t ecx_1 = i_2 << 2
        void var_3fcc
        void* ebx = &var_3fcc
        int32_t i
        
        do
            var_404c = fconvert.s(fconvert.t(eax_2[-0x18]))
            float var_4048_1 = fconvert.s(fconvert.t(eax_2[-0x14]))
            float var_4044_1 = fconvert.s(fconvert.t(eax_2[-0x10]))
            float var_4040_1 = fconvert.s(fconvert.t(eax_2[-0xc]))
            float var_403c_1 = fconvert.s(fconvert.t(eax_2[-0x17]))
            float var_4038_1 = fconvert.s(fconvert.t(eax_2[-0x13]))
            float var_4034_1 = fconvert.s(fconvert.t(eax_2[-0xf]))
            float var_4030_1 = fconvert.s(fconvert.t(eax_2[-0xb]))
            float var_402c_1 = fconvert.s(fconvert.t(eax_2[-0x16]))
            float var_4028_1 = fconvert.s(fconvert.t(eax_2[-0x12]))
            float var_4024_1 = fconvert.s(fconvert.t(eax_2[-0xe]))
            float var_4020_1 = fconvert.s(fconvert.t(eax_2[-0xa]))
            float var_401c_1 = fconvert.s(fconvert.t(eax_2[-0x15]))
            float var_4018_1 = fconvert.s(fconvert.t(eax_2[-0x11]))
            float var_4014_1 = fconvert.s(fconvert.t(eax_2[-0xd]))
            float var_4010_1 = fconvert.s(fconvert.t(eax_2[-9]))
            __builtin_memcpy(ebx - 0x40, &var_404c, 0x40)
            var_404c = fconvert.s(fconvert.t(eax_2[-8]))
            float var_4048_2 = fconvert.s(fconvert.t(eax_2[-4]))
            float var_4044_2 = fconvert.s(fconvert.t(*eax_2))
            float var_4040_2 = fconvert.s(fconvert.t(eax_2[4]))
            float var_403c_2 = fconvert.s(fconvert.t(eax_2[-7]))
            float var_4038_2 = fconvert.s(fconvert.t(eax_2[-3]))
            float var_4034_2 = fconvert.s(fconvert.t(eax_2[1]))
            float var_4030_2 = fconvert.s(fconvert.t(eax_2[5]))
            float var_402c_2 = fconvert.s(fconvert.t(eax_2[-6]))
            float var_4028_2 = fconvert.s(fconvert.t(eax_2[-2]))
            float var_4024_2 = fconvert.s(fconvert.t(eax_2[2]))
            float var_4020_2 = fconvert.s(fconvert.t(eax_2[6]))
            float var_401c_2 = fconvert.s(fconvert.t(eax_2[-5]))
            float var_4018_2 = fconvert.s(fconvert.t(eax_2[-1]))
            float var_4014_2 = fconvert.s(fconvert.t(eax_2[3]))
            float var_4010_2 = fconvert.s(fconvert.t(eax_2[7]))
            __builtin_memcpy(ebx, &var_404c, 0x40)
            var_404c = fconvert.s(fconvert.t(eax_2[8]))
            float var_4048_3 = fconvert.s(fconvert.t(eax_2[0xc]))
            float var_4044_3 = fconvert.s(fconvert.t(eax_2[0x10]))
            float var_4040_3 = fconvert.s(fconvert.t(eax_2[0x14]))
            float var_403c_3 = fconvert.s(fconvert.t(eax_2[9]))
            float var_4038_3 = fconvert.s(fconvert.t(eax_2[0xd]))
            float var_4034_3 = fconvert.s(fconvert.t(eax_2[0x11]))
            ebx += 0x100
            float var_4030_3 = fconvert.s(fconvert.t(eax_2[0x15]))
            float var_402c_3 = fconvert.s(fconvert.t(eax_2[0xa]))
            float var_4028_3 = fconvert.s(fconvert.t(eax_2[0xe]))
            float var_4024_3 = fconvert.s(fconvert.t(eax_2[0x12]))
            float var_4020_3 = fconvert.s(fconvert.t(eax_2[0x16]))
            float var_401c_3 = fconvert.s(fconvert.t(eax_2[0xb]))
            float var_4018_3 = fconvert.s(fconvert.t(eax_2[0xf]))
            float var_4014_3 = fconvert.s(fconvert.t(eax_2[0x13]))
            float var_4010_3 = fconvert.s(fconvert.t(eax_2[0x17]))
            void var_3fec
            __builtin_memcpy(&var_3fec - ecx + eax_2, &var_404c, 0x40)
            var_404c = fconvert.s(fconvert.t(eax_2[0x18]))
            float var_4048_4 = fconvert.s(fconvert.t(eax_2[0x1c]))
            float var_4044_4 = fconvert.s(fconvert.t(eax_2[0x20]))
            float var_4040_4 = fconvert.s(fconvert.t(eax_2[0x24]))
            float var_403c_4 = fconvert.s(fconvert.t(eax_2[0x19]))
            float var_4038_4 = fconvert.s(fconvert.t(eax_2[0x1d]))
            void var_3fac
            int32_t edi_6 = &var_3fac - ecx + eax_2
            float var_4034_4 = fconvert.s(fconvert.t(eax_2[0x21]))
            long double x87_r7_56 = fconvert.t(eax_2[0x25])
            eax_2 = &eax_2[0x40]
            i = i_2
            i_2 -= 1
            float var_4030_4 = fconvert.s(x87_r7_56)
            float var_402c_4 = fconvert.s(fconvert.t(eax_2[-0x26]))
            float var_4028_4 = fconvert.s(fconvert.t(eax_2[-0x22]))
            float var_4024_4 = fconvert.s(fconvert.t(eax_2[-0x1e]))
            float var_4020_4 = fconvert.s(fconvert.t(eax_2[-0x1a]))
            float var_401c_4 = fconvert.s(fconvert.t(eax_2[-0x25]))
            float var_4018_4 = fconvert.s(fconvert.t(eax_2[-0x21]))
            float var_4014_4 = fconvert.s(fconvert.t(eax_2[-0x1d]))
            float var_4010_4 = fconvert.s(fconvert.t(eax_2[-0x19]))
            __builtin_memcpy(edi_6, &var_404c, 0x40)
        while (i != 1)
        edx = arg2
        esi_1 = ecx_1
    
    if (esi_1 s< edx)
        void* ebx_1 = &(&__saved_ebp)[esi_1 * 0x10 - 0x1002]
        void* eax_5 = (esi_1 << 6) + ecx + 0x20
        int32_t i_3 = edx - esi_1
        int32_t i_1
        
        do
            void* edi_7 = ebx_1
            var_404c = fconvert.s(fconvert.t(*(eax_5 - 0x20)))
            float var_4048_5 = fconvert.s(fconvert.t(*(eax_5 - 0x10)))
            eax_5 += 0x40
            ebx_1 += 0x40
            i_1 = i_3
            i_3 -= 1
            float var_4044_5 = fconvert.s(fconvert.t(*(eax_5 - 0x40)))
            float var_4040_5 = fconvert.s(fconvert.t(*(eax_5 - 0x30)))
            float var_403c_5 = fconvert.s(fconvert.t(*(eax_5 - 0x5c)))
            float var_4038_5 = fconvert.s(fconvert.t(*(eax_5 - 0x4c)))
            float var_4034_5 = fconvert.s(fconvert.t(*(eax_5 - 0x3c)))
            float var_4030_5 = fconvert.s(fconvert.t(*(eax_5 - 0x2c)))
            float var_402c_5 = fconvert.s(fconvert.t(*(eax_5 - 0x58)))
            float var_4028_5 = fconvert.s(fconvert.t(*(eax_5 - 0x48)))
            float var_4024_5 = fconvert.s(fconvert.t(*(eax_5 - 0x38)))
            float var_4020_5 = fconvert.s(fconvert.t(*(eax_5 - 0x28)))
            float var_401c_5 = fconvert.s(fconvert.t(*(eax_5 - 0x54)))
            float var_4018_5 = fconvert.s(fconvert.t(*(eax_5 - 0x44)))
            float var_4014_5 = fconvert.s(fconvert.t(*(eax_5 - 0x34)))
            float var_4010_5 = fconvert.s(fconvert.t(*(eax_5 - 0x24)))
            __builtin_memcpy(edi_7, &var_404c, 0x40)
        while (i_1 != 1)
        edx = arg2
    
    void var_400c
    int32_t result = data_3079558(arg1, edx, 0, &var_400c)
    int32_t entry_ebx
    sub_5a6aba(entry_ebx ^ &__saved_ebp)
    return result
}
