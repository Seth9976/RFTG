// 函数名称: sub_600b20
// 虚拟地址: 0x600b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_600b20(void* arg1, int32_t arg2)
{
    // 第一条实际指令: float* esi = *(arg1 + 0x10)
    float* esi = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    float var_8 = fconvert.s(fconvert.t(*esi))
    int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
    long double result = fconvert.t(((var_8 & 0xff0000) | var_8 u>> 0x10) u>> 8
        | (var_8 << 0x10 | (var_8 & 0xff00)) << 8)
    void* edi = esi + eax_3
    float var_8_2 = fconvert.s(fconvert.t(esi[1]))
    double var_30 = fconvert.d(fconvert.t(((var_8_2 & 0xff0000) | var_8_2 u>> 0x10) u>> 8
        | (var_8_2 << 0x10 | (var_8_2 & 0xff00)) << 8))
    float var_8_4 = fconvert.s(fconvert.t(esi[2]))
    double var_38 = fconvert.d(fconvert.t(((var_8_4 & 0xff0000) | var_8_4 u>> 0x10) u>> 8
        | (var_8_4 << 0x10 | (var_8_4 & 0xff00)) << 8))
    float var_8_6 = fconvert.s(fconvert.t(esi[3]))
    double var_40 = fconvert.d(fconvert.t(((var_8_6 & 0xff0000) | var_8_6 u>> 0x10) u>> 8
        | (var_8_6 << 0x10 | (var_8_6 & 0xff00)) << 8))
    float var_8_8 = fconvert.s(fconvert.t(esi[4]))
    double var_48 = fconvert.d(fconvert.t(((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
        | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8))
    float var_8_10 = fconvert.s(fconvert.t(esi[5]))
    double var_58 = fconvert.d(fconvert.t(((var_8_10 & 0xff0000) | var_8_10 u>> 0x10) u>> 8
        | (var_8_10 << 0x10 | (var_8_10 & 0xff00)) << 8))
    float var_8_12 = fconvert.s(fconvert.t(esi[6]))
    double var_68 = fconvert.d(fconvert.t(((var_8_12 & 0xff0000) | var_8_12 u>> 0x10) u>> 8
        | (var_8_12 << 0x10 | (var_8_12 & 0xff00)) << 8))
    float var_8_14 = fconvert.s(fconvert.t(esi[7]))
    int32_t var_8_15 = ((var_8_14 & 0xff0000) | var_8_14 u>> 0x10) u>> 8
        | (var_8_14 << 0x10 | (var_8_14 & 0xff00)) << 8
    double var_78 = fconvert.d(fconvert.t(var_8_15))
    double var_70
    double var_60
    double var_50
    int32_t i_1
    int32_t var_24
    int32_t var_20
    int32_t var_1c
    int32_t var_18
    int32_t var_14
    int32_t var_10
    int32_t var_c
    
    if (esi u< edi)
        long double result_2 = fconvert.t(0.5)
        void* edx_24 = &esi[2]
        void* ecx_35 = &esi[2]
        i_1 = ((edi - esi - 1) u>> 5) + 1
        int32_t i
        
        do
            float var_8_16 = fconvert.s(fconvert.t(*(ecx_35 - 8)))
            var_8_15 = ((var_8_16 & 0xff0000) | var_8_16 u>> 0x10) u>> 8
                | (var_8_16 << 0x10 | (var_8_16 & 0xff00)) << 8
            long double result_1 = fconvert.t(var_8_15)
            float var_c_1 = fconvert.s(fconvert.t(*(ecx_35 - 4)))
            var_c = ((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8
            long double x87_r4_2 = fconvert.t(var_c)
            float var_10_1 = fconvert.s(fconvert.t(*ecx_35))
            var_10 = ((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8
            long double x87_r3_2 = fconvert.t(var_10)
            float var_14_1 = fconvert.s(fconvert.t(*(ecx_35 + 4)))
            var_14 = ((var_14_1 & 0xff0000) | var_14_1 u>> 0x10) u>> 8
                | (var_14_1 << 0x10 | (var_14_1 & 0xff00)) << 8
            long double x87_r2_2 = fconvert.t(var_14)
            float var_18_1 = fconvert.s(fconvert.t(*(ecx_35 + 8)))
            var_18 = ((var_18_1 & 0xff0000) | var_18_1 u>> 0x10) u>> 8
                | (var_18_1 << 0x10 | (var_18_1 & 0xff00)) << 8
            long double x87_r1_2 = fconvert.t(var_18)
            float var_1c_1 = fconvert.s(fconvert.t(*(ecx_35 + 0xc)))
            var_1c = ((var_1c_1 & 0xff0000) | var_1c_1 u>> 0x10) u>> 8
                | (var_1c_1 << 0x10 | (var_1c_1 & 0xff00)) << 8
            var_50 = fconvert.d(fconvert.t(var_1c))
            float var_20_1 = fconvert.s(fconvert.t(*(ecx_35 + 0x10)))
            var_20 = ((var_20_1 & 0xff0000) | var_20_1 u>> 0x10) u>> 8
                | (var_20_1 << 0x10 | (var_20_1 & 0xff00)) << 8
            var_60 = fconvert.d(fconvert.t(var_20))
            float var_24_1 = fconvert.s(fconvert.t(*(ecx_35 + 0x14)))
            var_24 = ((var_24_1 & 0xff0000) | var_24_1 u>> 0x10) u>> 8
                | (var_24_1 << 0x10 | (var_24_1 & 0xff00)) << 8
            ecx_35 -= 0xffffff80
            var_70 = fconvert.d(fconvert.t(var_24))
            *(edx_24 - 8) = fconvert.s((result + result_1) * result_2)
            *(edx_24 - 4) = fconvert.s((x87_r4_2 + fconvert.t(var_30)) * result_2)
            *edx_24 = fconvert.s((x87_r3_2 + fconvert.t(var_38)) * result_2)
            *(edx_24 + 4) = fconvert.s((fconvert.t(var_40) + x87_r2_2) * result_2)
            *(edx_24 + 8) = fconvert.s((x87_r1_2 + fconvert.t(var_48)) * result_2)
            edx_24 += 0x20
            i = i_1
            i_1 -= 1
            *(edx_24 - 0x14) = fconvert.s((fconvert.t(var_50) + fconvert.t(var_58)) * result_2)
            *(edx_24 - 0x10) = fconvert.s((fconvert.t(var_60) + fconvert.t(var_68)) * result_2)
            *(edx_24 - 0xc) = fconvert.s((fconvert.t(var_70) + fconvert.t(var_78)) * result_2)
            var_30 = fconvert.d(x87_r4_2)
            var_38 = fconvert.d(x87_r3_2)
            var_40 = fconvert.d(x87_r2_2)
            result = result_1
            var_48 = fconvert.d(x87_r1_2)
            var_58 = fconvert.d(fconvert.t(var_50))
            var_68 = fconvert.d(fconvert.t(var_60))
            var_78 = fconvert.d(fconvert.t(var_70))
        while (i != 1)
        result = result_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t eax_4 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_4 << 2) + 0x28) != 0)
        (*(arg1 + (eax_4 << 2) + 0x28))(arg1, arg2, var_78, var_70, var_68, var_60, var_58, var_50, 
            var_48, var_40, var_38, var_30, i_1, var_24, var_20, var_1c, var_18, var_14, var_10, var_c, 
            var_8_15)
    
    return result
}
