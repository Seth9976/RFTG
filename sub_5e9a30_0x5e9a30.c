// 函数名称: sub_5e9a30
// 虚拟地址: 0x5e9a30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5e9a30(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* ebx = arg1
    void* ebx = arg1
    int32_t eax = *(ebx + 0x18)
    int32_t eax_2 = sub_685f40(float.t(eax) * fconvert.t(*(ebx + 8)))
    float* ecx = *(ebx + 0x10)
    void* i = eax_2 + ecx
    float var_24 = fconvert.s(fconvert.t(*ecx))
    float var_24_1 = fconvert.s(fconvert.t(ecx[1]))
    float var_24_2 = fconvert.s(fconvert.t(ecx[2]))
    int32_t var_18 =
        ((var_24 & 0xff0000) | var_24 u>> 0x10) u>> 8 | (var_24 << 0x10 | (var_24 & 0xff00)) << 8
    float var_24_3 = fconvert.s(fconvert.t(ecx[3]))
    int32_t var_1c = ((var_24_1 & 0xff0000) | var_24_1 u>> 0x10) u>> 8
        | (var_24_1 << 0x10 | (var_24_1 & 0xff00)) << 8
    int32_t var_20 = ((var_24_2 & 0xff0000) | var_24_2 u>> 0x10) u>> 8
        | (var_24_2 << 0x10 | (var_24_2 & 0xff00)) << 8
    int32_t edi = 0
    int32_t var_24_4 = ((var_24_3 & 0xff0000) | var_24_3 u>> 0x10) u>> 8
        | (var_24_3 << 0x10 | (var_24_3 & 0xff00)) << 8
    
    if (ecx u< i)
        long double x87_r7_6 = fconvert.t(0.5)
        void* esi_24 = &ecx[2]
        void* edx_8 = &ecx[2]
        
        do
            edi += eax_2
            esi_24 += 0x10
            
            if (edi * 2 s>= eax - 0x100)
                long double x87_r6_1 = fconvert.t(var_18)
                edx_8 += 0x10
                float var_34_1 = fconvert.s(x87_r6_1)
                long double x87_r5_1 = fconvert.t(var_1c)
                float var_38_1 = fconvert.s(x87_r5_1)
                long double x87_r4_1 = fconvert.t(var_20)
                float var_3c_1 = fconvert.s(x87_r4_1)
                long double x87_r3_1 = fconvert.t(var_24_4)
                float var_40_1 = fconvert.s(x87_r3_1)
                *(edx_8 - 0x18) = ((var_34_1 & 0xff0000) | var_34_1 u>> 0x10) u>> 8
                    | (var_34_1 << 0x10 | (var_34_1 & 0xff00)) << 8
                *(edx_8 - 0x14) = ((var_38_1 & 0xff0000) | var_38_1 u>> 0x10) u>> 8
                    | (var_38_1 << 0x10 | (var_38_1 & 0xff00)) << 8
                *(edx_8 - 0x10) = ((var_3c_1 & 0xff0000) | var_3c_1 u>> 0x10) u>> 8
                    | (var_3c_1 << 0x10 | (var_3c_1 & 0xff00)) << 8
                *(edx_8 - 0xc) = ((var_40_1 & 0xff0000) | var_40_1 u>> 0x10) u>> 8
                    | (var_40_1 << 0x10 | (var_40_1 & 0xff00)) << 8
                float var_8_1 = fconvert.s(fconvert.t(*(esi_24 - 8)))
                var_18 = fconvert.s((x87_r6_1 + fconvert.t(
                    ((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8)) * x87_r7_6)
                float var_c_1 = fconvert.s(fconvert.t(*(esi_24 - 4)))
                var_1c = fconvert.s((x87_r5_1 + fconvert.t(
                    ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8)) * x87_r7_6)
                float var_10_1 = fconvert.s(fconvert.t(*esi_24))
                var_20 = fconvert.s((x87_r4_1 + fconvert.t(
                    ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                    | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8)) * x87_r7_6)
                float var_14_1 = fconvert.s(fconvert.t(*(esi_24 + 4)))
                edi -= eax - 0x100
                ebx = arg1
                var_24_4 = fconvert.s((x87_r3_1 + fconvert.t(
                    ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                    | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8)) * x87_r7_6)
        while (edx_8 - 8 u< i)
    
    *(ebx + 0x50) += 1
    int32_t eax_63 = *(ebx + 0x50)
    *(ebx + 0x18) = eax_2
    
    if (*(ebx + (eax_63 << 2) + 0x28) != 0)
        (*(ebx + (eax_63 << 2) + 0x28))(ebx, arg2)
}
