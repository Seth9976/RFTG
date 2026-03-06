// 函数名称: sub_5fd7b0
// 虚拟地址: 0x5fd7b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fd7b0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x18)
    int32_t eax = *(arg1 + 0x18)
    int32_t edx = eax * 2
    int32_t edi = *(arg1 + 0x10)
    float* i = edi + edx - 0x20
    float* esi = edi + eax - 0x10
    float var_14 = fconvert.s(fconvert.t(*(edi + eax - 4)))
    long double result = fconvert.t(((var_14 & 0xff0000) | var_14 u>> 0x10) u>> 8
        | (var_14 << 0x10 | (var_14 & 0xff00)) << 8)
    int32_t var_18 = edi
    float var_14_2 = fconvert.s(fconvert.t(esi[2]))
    long double result_12 = fconvert.t(((var_14_2 & 0xff0000) | var_14_2 u>> 0x10) u>> 8
        | (var_14_2 << 0x10 | (var_14_2 & 0xff00)) << 8)
    float var_14_4 = fconvert.s(fconvert.t(esi[1]))
    long double result_5 = fconvert.t(((var_14_4 & 0xff0000) | var_14_4 u>> 0x10) u>> 8
        | (var_14_4 << 0x10 | (var_14_4 & 0xff00)) << 8)
    double var_24 = fconvert.d(result_5)
    float var_14_6 = fconvert.s(fconvert.t(*esi))
    int32_t var_14_7 = ((var_14_6 & 0xff0000) | var_14_6 u>> 0x10) u>> 8
        | (var_14_6 << 0x10 | (var_14_6 & 0xff00)) << 8
    long double result_7 = fconvert.t(var_14_7)
    double var_2c = fconvert.d(result_7)
    int32_t var_10
    int32_t var_c
    int32_t var_8
    void* eax_48
    
    if (i u< edi)
        eax_48 = arg1
    else
        long double result_6 = fconvert.t(0.5)
        int32_t eax_12
        int32_t edx_21
        edx_21:eax_12 = sx.q(i - edi + 0x20)
        long double result_10
        long double result_8
        
        if ((eax_12 + (edx_21 & 0x1f)) s>> 5 s< 4)
            long double result_3 = result_5
            result_5 = result_6
            long double result_4 = result
            result = result_3
            result_10 = result_7
            result_8 = result_4
        else
            result_12 = result_6
            result_5 = result_7
            
            do
                float var_8_1 = fconvert.s(fconvert.t(esi[3]))
                long double x87_r4_2 = fconvert.t(((var_8_1 & 0xff0000) | var_8_1 u>> 0x10) u>> 8
                    | (var_8_1 << 0x10 | (var_8_1 & 0xff00)) << 8)
                float var_c_1 = fconvert.s(fconvert.t(esi[2]))
                long double x87_r3_2 = fconvert.t(((var_c_1 & 0xff0000) | var_c_1 u>> 0x10) u>> 8
                    | (var_c_1 << 0x10 | (var_c_1 & 0xff00)) << 8)
                float var_10_1 = fconvert.s(fconvert.t(esi[1]))
                long double x87_r2_2 = fconvert.t(((var_10_1 & 0xff0000) | var_10_1 u>> 0x10) u>> 8
                    | (var_10_1 << 0x10 | (var_10_1 & 0xff00)) << 8)
                float var_14_8 = fconvert.s(fconvert.t(*esi))
                long double x87_r1_2 = fconvert.t(((var_14_8 & 0xff0000) | var_14_8 u>> 0x10) u>> 8
                    | (var_14_8 << 0x10 | (var_14_8 & 0xff00)) << 8)
                i[7] = fconvert.s((result + x87_r4_2) * result_5)
                i[6] = fconvert.s((result_12 + x87_r3_2) * result_5)
                i[5] = fconvert.s((x87_r2_2 + fconvert.t(var_24)) * result_5)
                i[4] = fconvert.s((x87_r1_2 + fconvert.t(var_2c)) * result_5)
                i[3] = fconvert.s(x87_r4_2)
                i[2] = fconvert.s(x87_r3_2)
                i[1] = fconvert.s(x87_r2_2)
                *i = fconvert.s(x87_r1_2)
                float var_8_3 = fconvert.s(fconvert.t(esi[-1]))
                long double x87_r4_7 = fconvert.t(((var_8_3 & 0xff0000) | var_8_3 u>> 0x10) u>> 8
                    | (var_8_3 << 0x10 | (var_8_3 & 0xff00)) << 8)
                float var_c_3 = fconvert.s(fconvert.t(esi[-2]))
                long double x87_r3_9 = fconvert.t(((var_c_3 & 0xff0000) | var_c_3 u>> 0x10) u>> 8
                    | (var_c_3 << 0x10 | (var_c_3 & 0xff00)) << 8)
                float var_10_3 = fconvert.s(fconvert.t(esi[-3]))
                long double x87_r2_12 = fconvert.t(((var_10_3 & 0xff0000) | var_10_3 u>> 0x10) u>> 8
                    | (var_10_3 << 0x10 | (var_10_3 & 0xff00)) << 8)
                float var_14_10 = fconvert.s(fconvert.t(esi[-4]))
                long double x87_r1_7 = fconvert.t(((var_14_10 & 0xff0000) | var_14_10 u>> 0x10) u>> 8
                    | (var_14_10 << 0x10 | (var_14_10 & 0xff00)) << 8)
                i[-1] = fconvert.s((x87_r4_2 + x87_r4_7) * result_5)
                i[-2] = fconvert.s((x87_r3_2 + x87_r3_9) * result_5)
                i[-3] = fconvert.s((x87_r2_12 + fconvert.t(fconvert.d(x87_r2_2))) * result_5)
                i[-4] = fconvert.s((x87_r1_7 + fconvert.t(fconvert.d(x87_r1_2))) * result_5)
                i[-5] = fconvert.s(x87_r4_7)
                i[-6] = fconvert.s(x87_r3_9)
                i[-7] = fconvert.s(x87_r2_12)
                i[-8] = fconvert.s(x87_r1_7)
                float var_8_5 = fconvert.s(fconvert.t(esi[-5]))
                long double x87_r4_12 = fconvert.t(((var_8_5 & 0xff0000) | var_8_5 u>> 0x10) u>> 8
                    | (var_8_5 << 0x10 | (var_8_5 & 0xff00)) << 8)
                float var_c_5 = fconvert.s(fconvert.t(esi[-6]))
                long double x87_r3_16 = fconvert.t(((var_c_5 & 0xff0000) | var_c_5 u>> 0x10) u>> 8
                    | (var_c_5 << 0x10 | (var_c_5 & 0xff00)) << 8)
                float var_10_5 = fconvert.s(fconvert.t(esi[-7]))
                long double x87_r2_22 = fconvert.t(((var_10_5 & 0xff0000) | var_10_5 u>> 0x10) u>> 8
                    | (var_10_5 << 0x10 | (var_10_5 & 0xff00)) << 8)
                float var_14_12 = fconvert.s(fconvert.t(esi[-8]))
                long double x87_r1_12 = fconvert.t(((var_14_12 & 0xff0000) | var_14_12 u>> 0x10) u>> 8
                    | (var_14_12 << 0x10 | (var_14_12 & 0xff00)) << 8)
                i[-9] = fconvert.s((x87_r4_7 + x87_r4_12) * result_5)
                i[-0xa] = fconvert.s((x87_r3_9 + x87_r3_16) * result_5)
                i[-0xb] = fconvert.s((x87_r2_22 + fconvert.t(fconvert.d(x87_r2_12))) * result_5)
                i[-0xc] = fconvert.s((x87_r1_12 + fconvert.t(fconvert.d(x87_r1_7))) * result_5)
                i[-0xd] = fconvert.s(x87_r4_12)
                i[-0xe] = fconvert.s(x87_r3_16)
                i[-0xf] = fconvert.s(x87_r2_22)
                i[-0x10] = fconvert.s(x87_r1_12)
                float var_8_7 = fconvert.s(fconvert.t(esi[-9]))
                var_8 = ((var_8_7 & 0xff0000) | var_8_7 u>> 0x10) u>> 8
                    | (var_8_7 << 0x10 | (var_8_7 & 0xff00)) << 8
                long double result_11 = fconvert.t(var_8)
                float var_c_7 = fconvert.s(fconvert.t(esi[-0xa]))
                var_c = ((var_c_7 & 0xff0000) | var_c_7 u>> 0x10) u>> 8
                    | (var_c_7 << 0x10 | (var_c_7 & 0xff00)) << 8
                long double result_15 = fconvert.t(var_c)
                i = &i[-0x20]
                long double x87_r2_31 = fconvert.t(esi[-0xb])
                esi -= 0x40
                float var_10_7 = fconvert.s(x87_r2_31)
                var_10 = ((var_10_7 & 0xff0000) | var_10_7 u>> 0x10) u>> 8
                    | (var_10_7 << 0x10 | (var_10_7 & 0xff00)) << 8
                long double result_1 = fconvert.t(var_10)
                float var_14_14 = fconvert.s(fconvert.t(esi[4]))
                var_14_7 = ((var_14_14 & 0xff0000) | var_14_14 u>> 0x10) u>> 8
                    | (var_14_14 << 0x10 | (var_14_14 & 0xff00)) << 8
                long double result_13 = fconvert.t(var_14_7)
                i[0xf] = fconvert.s((x87_r4_12 + result_11) * result_5)
                i[0xe] = fconvert.s((x87_r3_16 + result_15) * result_5)
                i[0xd] = fconvert.s((result_1 + fconvert.t(fconvert.d(x87_r2_22))) * result_5)
                i[0xc] = fconvert.s((result_13 + fconvert.t(fconvert.d(x87_r1_12))) * result_5)
                i[0xb] = fconvert.s(result_11)
                result_8 = result_11
                i[0xa] = fconvert.s(result_15)
                result_12 = result_15
                i[9] = fconvert.s(result_1)
                i[8] = fconvert.s(result_13)
                var_24 = fconvert.d(result_1)
                result_10 = result_13
                result = result_1
                var_2c = fconvert.d(result_10)
            while (i s>= edi + 0x60)
            
            edi = var_18
        
        eax_48 = arg1
        
        if (i u>= edi)
            void* eax_47 = &i[6]
            void* esi_1 = &esi[2]
            int32_t ecx_3 = ((i - edi) u>> 5) + 1
            
            while (true)
                float var_8_8 = fconvert.s(fconvert.t(*(esi_1 + 4)))
                var_8 = ((var_8_8 & 0xff0000) | var_8_8 u>> 0x10) u>> 8
                    | (var_8_8 << 0x10 | (var_8_8 & 0xff00)) << 8
                long double result_9 = fconvert.t(var_8)
                float var_c_8 = fconvert.s(fconvert.t(*esi_1))
                var_c = ((var_c_8 & 0xff0000) | var_c_8 u>> 0x10) u>> 8
                    | (var_c_8 << 0x10 | (var_c_8 & 0xff00)) << 8
                long double result_14 = fconvert.t(var_c)
                float var_10_8 = fconvert.s(fconvert.t(*(esi_1 - 4)))
                var_10 = ((var_10_8 & 0xff0000) | var_10_8 u>> 0x10) u>> 8
                    | (var_10_8 << 0x10 | (var_10_8 & 0xff00)) << 8
                var_24 = fconvert.d(fconvert.t(var_10))
                float var_14_15 = fconvert.s(fconvert.t(*(esi_1 - 8)))
                var_14_7 = ((var_14_15 & 0xff0000) | var_14_15 u>> 0x10) u>> 8
                    | (var_14_15 << 0x10 | (var_14_15 & 0xff00)) << 8
                var_2c = fconvert.d(fconvert.t(var_14_7))
                *(eax_47 + 4) = fconvert.s((result_8 + result_9) * result_5)
                *eax_47 = fconvert.s((result_12 + result_14) * result_5)
                long double result_2 = fconvert.t(var_24)
                esi_1 -= 0x10
                eax_47 -= 0x20
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                *(eax_47 + 0x1c) = fconvert.s((result + result_2) * result_5)
                long double x87_r2_45 = fconvert.t(var_2c)
                *(eax_47 + 0x18) = fconvert.s((result_10 + x87_r2_45) * result_5)
                *(eax_47 + 0x14) = fconvert.s(result_9)
                result_8 = result_9
                *(eax_47 + 0x10) = fconvert.s(result_14)
                *(eax_47 + 0xc) = fconvert.s(result_2)
                *(eax_47 + 8) = fconvert.s(x87_r2_45)
                
                if (temp1_1 == 1)
                    break
                
                result = result_2
                result_10 = fconvert.t(var_2c)
                result_12 = result_14
            
            eax_48 = arg1
            result = result_5
    
    *(eax_48 + 0x50) += 1
    *(eax_48 + 0x18) = edx
    int32_t ecx_5 = *(eax_48 + 0x50)
    
    if (*(eax_48 + (ecx_5 << 2) + 0x28) != 0)
        (*(eax_48 + (ecx_5 << 2) + 0x28))(eax_48, arg2, var_2c, var_24, edx, var_18, var_14_7, var_10, 
            var_c, var_8)
    
    return result
}
