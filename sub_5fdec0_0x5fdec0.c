// 函数名称: sub_5fdec0
// 虚拟地址: 0x5fdec0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fdec0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: float* i = *(arg1 + 0x10)
    float* i = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    int32_t eax_3 = (eax_1 - edx) s>> 1
    float* i_1 = i
    void* ebx = i + eax_3
    float var_14 = fconvert.s(fconvert.t(*i_1))
    long double result = fconvert.t(((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8
        | (var_14 << 0x10 | (var_14 & 0xff00)) << 8)
    float var_14_2 = fconvert.s(fconvert.t(i_1[1]))
    long double result_12 = fconvert.t(((var_14_2 & 0xff0000) | var_14_2 u>> 0x10) u>> 8
        | (var_14_2 << 0x10 | (var_14_2 & 0xff00)) << 8)
    float var_14_4 = fconvert.s(fconvert.t(i_1[2]))
    long double result_7 = fconvert.t(((var_14_4 & 0xff0000) | var_14_4 u>> 0x10) u>> 8
        | (var_14_4 << 0x10 | (var_14_4 & 0xff00)) << 8)
    double var_20 = fconvert.d(result_7)
    float var_14_6 = fconvert.s(fconvert.t(i_1[3]))
    int32_t var_14_7 = ((var_14_6 & 0xff0000) | var_14_6 u>> 0x10) u>> 8
        | (var_14_6 << 0x10 | (var_14_6 & 0xff00)) << 8
    long double result_6 = fconvert.t(var_14_7)
    double var_28 = fconvert.d(result_6)
    int32_t var_10
    int32_t var_c
    int32_t var_8
    
    if (i u< ebx)
        long double result_11 = fconvert.t(0.5)
        int32_t eax_15
        int32_t edx_21
        edx_21:eax_15 = sx.q(ebx - i + 0xf)
        
        if ((eax_15 + (edx_21 & 0xf)) s>> 4 s>= 4)
            result_12 = result_11
            long double result_10 = result_6
            long double result_8
            long double result_5
            
            do
                float var_8_1 = fconvert.s(fconvert.t(*i_1))
                long double x87_r4_2 = fconvert.t(((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8)
                float var_c_1 = fconvert.s(fconvert.t(i_1[1]))
                long double x87_r3_3 = fconvert.t(((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8)
                float var_10_1 = fconvert.s(fconvert.t(i_1[2]))
                long double x87_r2_2 = fconvert.t(((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                    | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8)
                float var_14_8 = fconvert.s(fconvert.t(i_1[3]))
                long double x87_r1_2 = fconvert.t(((var_14_8 & 0xff0000) | var_14_8 u>> 0x10) u>> 8
                    | (var_14_8 << 0x10 | (var_14_8 & 0xff00)) << 8)
                *i = fconvert.s((result + x87_r4_2) * result_10)
                i[1] = fconvert.s((result_12 + x87_r3_3) * result_10)
                i[2] = fconvert.s((x87_r2_2 + fconvert.t(var_20)) * result_10)
                i[3] = fconvert.s((x87_r1_2 + fconvert.t(var_28)) * result_10)
                float var_8_3 = fconvert.s(fconvert.t(i_1[8]))
                long double x87_r4_5 = fconvert.t(((var_8_3 & 0xff0000) | var_8_3 u>> 0x10) u>> 8
                    | (var_8_3 << 0x10 | (var_8_3 & 0xff00)) << 8)
                float var_c_3 = fconvert.s(fconvert.t(i_1[9]))
                long double x87_r3_6 = fconvert.t(((var_c_3 & 0xff0000) | var_c_3 u>> 0x10) u>> 8
                    | (var_c_3 << 0x10 | (var_c_3 & 0xff00)) << 8)
                float var_10_3 = fconvert.s(fconvert.t(i_1[0xa]))
                long double x87_r2_12 = fconvert.t(((var_10_3 & 0xff0000) | var_10_3 u>> 0x10) u>> 8
                    | (var_10_3 << 0x10 | (var_10_3 & 0xff00)) << 8)
                float var_14_10 = fconvert.s(fconvert.t(i_1[0xb]))
                long double x87_r1_7 = fconvert.t(((var_14_10 & 0xff0000) | var_14_10 u>> 0x10) u>> 8
                    | (var_14_10 << 0x10 | (var_14_10 & 0xff00)) << 8)
                i[4] = fconvert.s((x87_r4_2 + x87_r4_5) * result_10)
                i[5] = fconvert.s((x87_r3_3 + x87_r3_6) * result_10)
                i[6] = fconvert.s((x87_r2_12 + fconvert.t(fconvert.d(x87_r2_2))) * result_10)
                i[7] = fconvert.s((x87_r1_7 + fconvert.t(fconvert.d(x87_r1_2))) * result_10)
                float var_8_5 = fconvert.s(fconvert.t(i_1[0x10]))
                long double x87_r4_8 = fconvert.t(((var_8_5 & 0xff0000) | var_8_5 u>> 0x10) u>> 8
                    | (var_8_5 << 0x10 | (var_8_5 & 0xff00)) << 8)
                float var_c_5 = fconvert.s(fconvert.t(i_1[0x11]))
                long double x87_r3_9 = fconvert.t(((var_c_5 & 0xff0000) | var_c_5 u>> 0x10) u>> 8
                    | (var_c_5 << 0x10 | (var_c_5 & 0xff00)) << 8)
                float var_10_5 = fconvert.s(fconvert.t(i_1[0x12]))
                long double x87_r2_22 = fconvert.t(((var_10_5 & 0xff0000) | var_10_5 u>> 0x10) u>> 8
                    | (var_10_5 << 0x10 | (var_10_5 & 0xff00)) << 8)
                float var_14_12 = fconvert.s(fconvert.t(i_1[0x13]))
                long double x87_r1_12 = fconvert.t(((var_14_12 & 0xff0000) | var_14_12 u>> 0x10) u>> 8
                    | (var_14_12 << 0x10 | (var_14_12 & 0xff00)) << 8)
                i[8] = fconvert.s((x87_r4_5 + x87_r4_8) * result_10)
                i[9] = fconvert.s((x87_r3_6 + x87_r3_9) * result_10)
                i[0xa] = fconvert.s((x87_r2_22 + fconvert.t(fconvert.d(x87_r2_12))) * result_10)
                i[0xb] = fconvert.s((x87_r1_12 + fconvert.t(fconvert.d(x87_r1_7))) * result_10)
                float var_8_7 = fconvert.s(fconvert.t(i_1[0x18]))
                var_8 = ((var_8_7 & 0xff0000) | var_8_7 u>> 0x10) u>> 8
                    | (var_8_7 << 0x10 | (var_8_7 & 0xff00)) << 8
                result_5 = fconvert.t(var_8)
                float var_c_7 = fconvert.s(fconvert.t(i_1[0x19]))
                var_c = ((var_c_7 & 0xff0000) | var_c_7 u>> 0x10) u>> 8
                    | (var_c_7 << 0x10 | (var_c_7 & 0xff00)) << 8
                long double result_14 = fconvert.t(var_c)
                float var_10_7 = fconvert.s(fconvert.t(i_1[0x1a]))
                var_10 = ((var_10_7 & 0xff0000) | var_10_7 u>> 0x10) u>> 8
                    | (var_10_7 << 0x10 | (var_10_7 & 0xff00)) << 8
                long double result_1 = fconvert.t(var_10)
                float var_14_14 = fconvert.s(fconvert.t(i_1[0x1b]))
                var_14_7 = ((var_14_14 & 0xff0000) | var_14_14 u>> 0x10) u>> 8
                    | (var_14_14 << 0x10 | (var_14_14 & 0xff00)) << 8
                result_8 = fconvert.t(var_14_7)
                i = &i[0x10]
                i_1 -= 0xffffff80
                i[-4] = fconvert.s((x87_r4_8 + result_5) * result_10)
                i[-3] = fconvert.s((x87_r3_9 + result_14) * result_10)
                i[-2] = fconvert.s((result_1 + fconvert.t(fconvert.d(x87_r2_22))) * result_10)
                i[-1] = fconvert.s((result_8 + fconvert.t(fconvert.d(x87_r1_12))) * result_10)
                result_12 = result_14
                var_20 = fconvert.d(result_1)
                result = result_1
                var_28 = fconvert.d(result_8)
            while (i s< ebx - 0x30)
            
            result_6 = result_8
            long double result_3 = result
            result = result_5
            result_11 = result_10
            result_7 = result_3
        
        if (i u< ebx)
            void* edi_120 = &i[2]
            void* edx_103 = &i_1[2]
            int32_t ebx_4 = ((ebx - i - 1) u>> 4) + 1
            long double result_4
            
            while (true)
                float var_8_8 = fconvert.s(fconvert.t(*(edx_103 - 8)))
                var_8 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8
                long double result_2 = fconvert.t(var_8)
                float var_c_8 = fconvert.s(fconvert.t(*(edx_103 - 4)))
                var_c = ((var_c_8 & 0xff0000) | var_c_8 u>> 0x10) u>> 8
                    | (var_c_8 << 0x10 | (var_c_8 & 0xff00)) << 8
                long double result_13 = fconvert.t(var_c)
                float var_10_8 = fconvert.s(fconvert.t(*edx_103))
                var_10 = ((var_10_8 & 0xff0000) | var_10_8 u>> 0x10) u>> 8
                    | (var_10_8 << 0x10 | (var_10_8 & 0xff00)) << 8
                var_20 = fconvert.d(fconvert.t(var_10))
                float var_14_15 = fconvert.s(fconvert.t(*(edx_103 + 4)))
                var_14_7 = ((var_14_15 & 0xff0000) | var_14_15 u>> 0x10) u>> 8
                    | (var_14_15 << 0x10 | (var_14_15 & 0xff00)) << 8
                var_28 = fconvert.d(fconvert.t(var_14_7))
                *(edi_120 - 8) = fconvert.s((result + result_2) * result_11)
                *(edi_120 - 4) = fconvert.s((result_12 + result_13) * result_11)
                long double result_9 = fconvert.t(var_20)
                edx_103 += 0x20
                long double x87_r5_1 = result_7 + result_9
                edi_120 += 0x10
                int32_t temp1_1 = ebx_4
                ebx_4 -= 1
                result_7 = result_9
                *(edi_120 - 0x10) = fconvert.s(x87_r5_1 * result_11)
                *(edi_120 - 0xc) = fconvert.s((result_6 + fconvert.t(var_28)) * result_11)
                result_4 = fconvert.t(var_28)
                
                if (temp1_1 == 1)
                    break
                
                result = result_2
                result_12 = result_13
                result_6 = result_4
            
            result = result_4
    
    *(arg1 + 0x50) += 1
    int32_t ecx_21 = *(arg1 + 0x50)
    *(arg1 + 0x18) = eax_3
    
    if (*(arg1 + (ecx_21 << 2) + 0x28) != 0)
        (*(arg1 + (ecx_21 << 2) + 0x28))(arg1, arg2, var_28, var_20, eax_3, var_14_7, var_10, var_c, 
            var_8)
    
    return result
}
