// 函数名称: sub_5fb430
// 虚拟地址: 0x5fb430
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fb430(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: float* i = *(arg1 + 0x10)
    float* i = *(arg1 + 0x10)
    float* i_1 = i
    long double x87_r7 = fconvert.t(*i_1)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    long double x87_r6 = fconvert.t(i_1[1])
    double var_34 = fconvert.d(x87_r6)
    int32_t eax_3 = (eax_1 - edx) s>> 1
    long double result_4 = fconvert.t(i_1[2])
    double var_3c = fconvert.d(result_4)
    void* edi = i + eax_3
    long double result_1 = fconvert.t(i_1[3])
    double var_44 = fconvert.d(result_1)
    long double x87_r3 = fconvert.t(i_1[4])
    double var_4c = fconvert.d(x87_r3)
    long double x87_r2 = fconvert.t(i_1[5])
    double var_54 = fconvert.d(x87_r2)
    double var_24 = fconvert.d(fconvert.t(i_1[6]))
    double var_2c = fconvert.d(fconvert.t(i_1[7]))
    long double result
    
    if (i u>= edi)
        result = result_1
    else
        long double result_6 = fconvert.t(0.5)
        int32_t eax_7
        int32_t edx_1
        edx_1:eax_7 = sx.q(edi - i + 0x1f)
        
        if ((eax_7 + (edx_1 & 0x1f)) s>> 5 s>= 4)
            long double result_5 = result_6
            long double x87_r1_2
            long double x87_r1_75
            long double result_8
            long double x87_r4_7
            long double x87_r5_19
            
            do
                long double x87_r5_4 = fconvert.t(*i_1)
                long double x87_r4_1 = fconvert.t(i_1[1])
                long double x87_r3_2 = fconvert.t(i_1[2])
                long double x87_r2_2 = fconvert.t(i_1[3])
                long double x87_r1_3 = fconvert.t(i_1[4])
                double var_c_1 = fconvert.d(fconvert.t(i_1[5]))
                double var_14_1 = fconvert.d(fconvert.t(i_1[6]))
                double var_1c_1 = fconvert.d(fconvert.t(i_1[7]))
                *i = fconvert.s((result_5 + x87_r5_4) * result_1)
                i[1] = fconvert.s((x87_r4_1 + fconvert.t(var_34)) * result_1)
                i[2] = fconvert.s((x87_r3_2 + fconvert.t(var_3c)) * result_1)
                i[3] = fconvert.s((fconvert.t(var_44) + x87_r2_2) * result_1)
                i[4] = fconvert.s((x87_r1_3 + fconvert.t(var_4c)) * result_1)
                i[5] = fconvert.s((fconvert.t(var_c_1) + fconvert.t(var_54)) * result_1)
                i[6] = fconvert.s((fconvert.t(var_14_1) + fconvert.t(var_24)) * result_1)
                i[7] = fconvert.s((fconvert.t(var_1c_1) + fconvert.t(var_2c)) * result_1)
                long double x87_r5_9 = fconvert.t(i_1[0x10])
                long double x87_r4_3 = fconvert.t(i_1[0x11])
                long double x87_r3_3 = fconvert.t(i_1[0x12])
                long double x87_r2_4 = fconvert.t(i_1[0x13])
                long double x87_r1_27 = fconvert.t(i_1[0x14])
                double var_c_2 = fconvert.d(fconvert.t(i_1[0x15]))
                double var_14_2 = fconvert.d(fconvert.t(i_1[0x16]))
                double var_1c_2 = fconvert.d(fconvert.t(i_1[0x17]))
                i[8] = fconvert.s((x87_r5_4 + x87_r5_9) * result_1)
                i[9] = fconvert.s((x87_r4_3 + fconvert.t(fconvert.d(x87_r4_1))) * result_1)
                i[0xa] = fconvert.s((x87_r3_3 + fconvert.t(fconvert.d(x87_r3_2))) * result_1)
                i[0xb] = fconvert.s((fconvert.t(fconvert.d(x87_r2_2)) + x87_r2_4) * result_1)
                i[0xc] = fconvert.s((x87_r1_27 + fconvert.t(fconvert.d(x87_r1_3))) * result_1)
                i[0xd] = fconvert.s((fconvert.t(var_c_2) + fconvert.t(fconvert.d(fconvert.t(var_c_1))))
                    * result_1)
                i[0xe] = fconvert.s((fconvert.t(var_14_2)
                    + fconvert.t(fconvert.d(fconvert.t(var_14_1)))) * result_1)
                i[0xf] = fconvert.s((fconvert.t(var_1c_2)
                    + fconvert.t(fconvert.d(fconvert.t(var_1c_1)))) * result_1)
                long double x87_r5_14 = fconvert.t(i_1[0x20])
                long double x87_r4_5 = fconvert.t(i_1[0x21])
                long double x87_r3_4 = fconvert.t(i_1[0x22])
                long double x87_r2_6 = fconvert.t(i_1[0x23])
                long double x87_r1_51 = fconvert.t(i_1[0x24])
                double var_c_3 = fconvert.d(fconvert.t(i_1[0x25]))
                double var_14_3 = fconvert.d(fconvert.t(i_1[0x26]))
                double var_1c_3 = fconvert.d(fconvert.t(i_1[0x27]))
                i[0x10] = fconvert.s((x87_r5_9 + x87_r5_14) * result_1)
                i[0x11] = fconvert.s((x87_r4_5 + fconvert.t(fconvert.d(x87_r4_3))) * result_1)
                i[0x12] = fconvert.s((x87_r3_4 + fconvert.t(fconvert.d(x87_r3_3))) * result_1)
                i[0x13] = fconvert.s((fconvert.t(fconvert.d(x87_r2_4)) + x87_r2_6) * result_1)
                i[0x14] = fconvert.s((x87_r1_51 + fconvert.t(fconvert.d(x87_r1_27))) * result_1)
                i[0x15] = fconvert.s((fconvert.t(var_c_3) + fconvert.t(fconvert.d(fconvert.t(var_c_2))))
                    * result_1)
                i[0x16] = fconvert.s((fconvert.t(var_14_3)
                    + fconvert.t(fconvert.d(fconvert.t(var_14_2)))) * result_1)
                i[0x17] = fconvert.s((fconvert.t(var_1c_3)
                    + fconvert.t(fconvert.d(fconvert.t(var_1c_2)))) * result_1)
                i -= 0xffffff80
                i_1 = &i_1[0x40]
                x87_r5_19 = fconvert.t(i_1[-0x10])
                x87_r4_7 = fconvert.t(i_1[-0xf])
                result_8 = fconvert.t(i_1[-0xe])
                long double result_7 = fconvert.t(i_1[-0xd])
                x87_r1_75 = fconvert.t(i_1[-0xc])
                double var_c_4 = fconvert.d(fconvert.t(i_1[-0xb]))
                double var_14_4 = fconvert.d(fconvert.t(i_1[-0xa]))
                double var_1c_4 = fconvert.d(fconvert.t(i_1[-9]))
                i[-8] = fconvert.s((x87_r5_14 + x87_r5_19) * result_1)
                i[-7] = fconvert.s((x87_r4_7 + fconvert.t(fconvert.d(x87_r4_5))) * result_1)
                i[-6] = fconvert.s((result_8 + fconvert.t(fconvert.d(x87_r3_4))) * result_1)
                i[-5] = fconvert.s((fconvert.t(fconvert.d(x87_r2_6)) + result_7) * result_1)
                i[-4] = fconvert.s((x87_r1_75 + fconvert.t(fconvert.d(x87_r1_51))) * result_1)
                i[-3] = fconvert.s((fconvert.t(var_c_4) + fconvert.t(fconvert.d(fconvert.t(var_c_3))))
                    * result_1)
                i[-2] = fconvert.s((fconvert.t(var_14_4) + fconvert.t(fconvert.d(fconvert.t(var_14_3))))
                    * result_1)
                i[-1] = fconvert.s((fconvert.t(var_1c_4) + fconvert.t(fconvert.d(fconvert.t(var_1c_3))))
                    * result_1)
                var_34 = fconvert.d(x87_r4_7)
                var_3c = fconvert.d(result_8)
                var_44 = fconvert.d(result_7)
                result_5 = result_7
                var_4c = fconvert.d(x87_r1_75)
                x87_r1_2 = fconvert.t(var_c_4)
                var_54 = fconvert.d(x87_r1_2)
                var_24 = fconvert.d(fconvert.t(var_14_4))
                var_2c = fconvert.d(fconvert.t(var_1c_4))
            while (i s< edi - 0x60)
            
            x87_r7 = x87_r5_19
            x87_r6 = x87_r4_7
            result_4 = result_8
            long double result_3 = result_1
            result_1 = result_5
            x87_r3 = x87_r1_75
            result_6 = result_3
            x87_r2 = x87_r1_2
        
        if (i u>= edi)
            result = result_1
        else
            void* edx_3 = &i[2]
            void* eax_11 = &i_1[2]
            int32_t edi_4 = ((edi - i - 1) u>> 5) + 1
            long double result_2
            
            while (true)
                long double x87_r0_21 = fconvert.t(*(eax_11 - 8))
                eax_11 += 0x40
                double var_54_4 = fconvert.d(x87_r0_21)
                edx_3 += 0x20
                int32_t temp1_1 = edi_4
                edi_4 -= 1
                double var_34_4 = fconvert.d(fconvert.t(*(eax_11 - 0x44)))
                double var_4c_4 = fconvert.d(fconvert.t(*(eax_11 - 0x40)))
                double var_44_4 = fconvert.d(fconvert.t(*(eax_11 - 0x3c)))
                double var_3c_4 = fconvert.d(fconvert.t(*(eax_11 - 0x38)))
                double var_c_5 = fconvert.d(fconvert.t(*(eax_11 - 0x34)))
                double var_14_5 = fconvert.d(fconvert.t(*(eax_11 - 0x30)))
                double var_1c_5 = fconvert.d(fconvert.t(*(eax_11 - 0x2c)))
                *(edx_3 - 0x28) = fconvert.s((x87_r7 + fconvert.t(var_54_4)) * result_6)
                long double x87_r1_117 = fconvert.t(var_34_4)
                long double x87_r6_3 = x87_r6 + x87_r1_117
                x87_r6 = x87_r1_117
                *(edx_3 - 0x24) = fconvert.s(x87_r6_3 * result_6)
                *(edx_3 - 0x20) = fconvert.s((result_4 + fconvert.t(var_4c_4)) * result_6)
                *(edx_3 - 0x1c) = fconvert.s((result_1 + fconvert.t(var_44_4)) * result_6)
                *(edx_3 - 0x18) = fconvert.s((x87_r3 + fconvert.t(var_3c_4)) * result_6)
                *(edx_3 - 0x14) = fconvert.s((x87_r2 + fconvert.t(var_c_5)) * result_6)
                *(edx_3 - 0x10) = fconvert.s((fconvert.t(var_14_5) + fconvert.t(var_24)) * result_6)
                *(edx_3 - 0xc) = fconvert.s((fconvert.t(var_1c_5) + fconvert.t(var_2c)) * result_6)
                result_2 = fconvert.t(var_4c_4)
                var_24 = fconvert.d(fconvert.t(var_14_5))
                var_2c = fconvert.d(fconvert.t(var_1c_5))
                
                if (temp1_1 == 1)
                    break
                
                x87_r7 = fconvert.t(var_54_4)
                result_4 = result_2
                result_1 = fconvert.t(var_44_4)
                x87_r3 = fconvert.t(var_3c_4)
                x87_r2 = fconvert.t(var_c_5)
            
            result = result_2
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t eax_12 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_12 << 2) + 0x28) != 0)
        (*(arg1 + (eax_12 << 2) + 0x28))(arg1, arg2)
    
    return result
}
