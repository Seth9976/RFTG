// 函数名称: sub_5fa3b0
// 虚拟地址: 0x5fa3b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fa3b0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: float* i = *(arg1 + 0x10)
    float* i = *(arg1 + 0x10)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(arg1 + 0x18))
    float* i_1 = i
    long double result = fconvert.t(*i_1)
    long double result_12 = fconvert.t(i_1[1])
    int32_t eax_3 = (eax_1 + (edx & 3)) s>> 2
    long double result_7 = fconvert.t(i_1[2])
    double var_c = fconvert.d(result_7)
    void* edi = i + eax_3
    long double result_6 = fconvert.t(i_1[3])
    double var_14 = fconvert.d(result_6)
    
    if (i u< edi)
        long double result_11 = fconvert.t(0.5)
        int32_t eax_7
        int32_t edx_2
        edx_2:eax_7 = sx.q(edi - i + 0xf)
        
        if ((eax_7 + (edx_2 & 0xf)) s>> 4 s>= 4)
            result_12 = result_11
            long double result_10 = result_6
            long double result_8
            long double result_5
            
            do
                long double x87_r4 = fconvert.t(*i_1)
                long double x87_r3_2 = fconvert.t(i_1[1])
                long double x87_r2_1 = fconvert.t(i_1[2])
                long double x87_r1_1 = fconvert.t(i_1[3])
                *i = fconvert.s((result + x87_r4) * result_10)
                i[1] = fconvert.s((result_12 + x87_r3_2) * result_10)
                i[2] = fconvert.s((x87_r2_1 + fconvert.t(var_c)) * result_10)
                i[3] = fconvert.s((x87_r1_1 + fconvert.t(var_14)) * result_10)
                long double x87_r4_2 = fconvert.t(i_1[0x10])
                long double x87_r3_4 = fconvert.t(i_1[0x11])
                long double x87_r2_10 = fconvert.t(i_1[0x12])
                long double x87_r1_5 = fconvert.t(i_1[0x13])
                i[4] = fconvert.s((x87_r4 + x87_r4_2) * result_10)
                i[5] = fconvert.s((x87_r3_2 + x87_r3_4) * result_10)
                i[6] = fconvert.s((x87_r2_10 + fconvert.t(fconvert.d(x87_r2_1))) * result_10)
                i[7] = fconvert.s((x87_r1_5 + fconvert.t(fconvert.d(x87_r1_1))) * result_10)
                long double x87_r4_4 = fconvert.t(i_1[0x20])
                long double x87_r3_6 = fconvert.t(i_1[0x21])
                long double x87_r2_19 = fconvert.t(i_1[0x22])
                long double x87_r1_9 = fconvert.t(i_1[0x23])
                i[8] = fconvert.s((x87_r4_2 + x87_r4_4) * result_10)
                i[9] = fconvert.s((x87_r3_4 + x87_r3_6) * result_10)
                i[0xa] = fconvert.s((x87_r2_19 + fconvert.t(fconvert.d(x87_r2_10))) * result_10)
                i[0xb] = fconvert.s((x87_r1_9 + fconvert.t(fconvert.d(x87_r1_5))) * result_10)
                result_5 = fconvert.t(i_1[0x30])
                long double result_14 = fconvert.t(i_1[0x31])
                long double result_1 = fconvert.t(i_1[0x32])
                result_8 = fconvert.t(i_1[0x33])
                i = &i[0x10]
                i_1 = &i_1[0x40]
                i[-4] = fconvert.s((x87_r4_4 + result_5) * result_10)
                i[-3] = fconvert.s((x87_r3_6 + result_14) * result_10)
                i[-2] = fconvert.s((result_1 + fconvert.t(fconvert.d(x87_r2_19))) * result_10)
                i[-1] = fconvert.s((result_8 + fconvert.t(fconvert.d(x87_r1_9))) * result_10)
                result_12 = result_14
                var_c = fconvert.d(result_1)
                result = result_1
                var_14 = fconvert.d(result_8)
            while (i s< edi - 0x30)
            
            result_6 = result_8
            long double result_3 = result
            result = result_5
            result_11 = result_10
            result_7 = result_3
        
        if (i u< edi)
            void* edx_4 = &i[2]
            void* eax_11 = &i_1[2]
            int32_t edi_4 = ((edi - i - 1) u>> 4) + 1
            long double result_4
            
            while (true)
                long double result_2 = fconvert.t(*(eax_11 - 8))
                eax_11 += 0x40
                long double result_13 = fconvert.t(*(eax_11 - 0x44))
                edx_4 += 0x10
                int32_t temp1_1 = edi_4
                edi_4 -= 1
                double var_c_4 = fconvert.d(fconvert.t(*(eax_11 - 0x40)))
                double var_14_4 = fconvert.d(fconvert.t(*(eax_11 - 0x3c)))
                *(edx_4 - 0x18) = fconvert.s((result + result_2) * result_11)
                *(edx_4 - 0x14) = fconvert.s((result_12 + result_13) * result_11)
                long double result_9 = fconvert.t(var_c_4)
                long double x87_r5 = result_7 + result_9
                result_7 = result_9
                *(edx_4 - 0x10) = fconvert.s(x87_r5 * result_11)
                *(edx_4 - 0xc) = fconvert.s((result_6 + fconvert.t(var_14_4)) * result_11)
                result_4 = fconvert.t(var_14_4)
                
                if (temp1_1 == 1)
                    break
                
                result = result_2
                result_12 = result_13
                result_6 = result_4
            
            result = result_4
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = eax_3
    int32_t eax_12 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_12 << 2) + 0x28) != 0)
        (*(arg1 + (eax_12 << 2) + 0x28))(arg1, arg2)
    
    return result
}
