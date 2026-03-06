// 函数名称: sub_5faa00
// 虚拟地址: 0x5faa00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5faa00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    float* i = *(edi + 0x10)
    float* i_1 = i
    long double x87_r7 = fconvert.t(*i_1)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = sx.q(*(edi + 0x18))
    long double x87_r6 = fconvert.t(i_1[1])
    double var_18 = fconvert.d(x87_r6)
    int32_t eax_3 = (eax_1 - edx) s>> 1
    long double result_4 = fconvert.t(i_1[2])
    void* ebx = i + eax_3
    double var_20 = fconvert.d(result_4)
    long double result_1 = fconvert.t(i_1[3])
    double var_28 = fconvert.d(result_1)
    long double x87_r3 = fconvert.t(i_1[4])
    double var_30 = fconvert.d(x87_r3)
    long double x87_r2 = fconvert.t(i_1[5])
    double var_38 = fconvert.d(x87_r2)
    long double result
    
    if (i u>= ebx)
        result = result_1
    else
        long double result_6 = fconvert.t(0.5)
        
        if ((ebx - i + 0x17) s/ 0x18 s>= 4)
            long double result_5 = result_6
            long double x87_r1_1
            long double x87_r1_56
            long double result_8
            long double x87_r4_7
            long double x87_r5_13
            
            do
                long double x87_r5_4 = fconvert.t(*i_1)
                long double x87_r4_1 = fconvert.t(i_1[1])
                long double x87_r3_2 = fconvert.t(i_1[2])
                long double x87_r2_2 = fconvert.t(i_1[3])
                long double x87_r1_2 = fconvert.t(i_1[4])
                double var_10_1 = fconvert.d(fconvert.t(i_1[5]))
                *i = fconvert.s((result_5 + x87_r5_4) * result_1)
                i[1] = fconvert.s((x87_r4_1 + fconvert.t(var_18)) * result_1)
                i[2] = fconvert.s((x87_r3_2 + fconvert.t(var_20)) * result_1)
                i[3] = fconvert.s((fconvert.t(var_28) + x87_r2_2) * result_1)
                i[4] = fconvert.s((x87_r1_2 + fconvert.t(var_30)) * result_1)
                i[5] = fconvert.s((fconvert.t(var_10_1) + fconvert.t(var_38)) * result_1)
                long double x87_r5_7 = fconvert.t(i_1[0xc])
                long double x87_r4_3 = fconvert.t(i_1[0xd])
                long double x87_r3_3 = fconvert.t(i_1[0xe])
                long double x87_r2_4 = fconvert.t(i_1[0xf])
                long double x87_r1_20 = fconvert.t(i_1[0x10])
                double var_10_2 = fconvert.d(fconvert.t(i_1[0x11]))
                i[6] = fconvert.s((x87_r5_4 + x87_r5_7) * result_1)
                i[7] = fconvert.s((x87_r4_3 + fconvert.t(fconvert.d(x87_r4_1))) * result_1)
                i[8] = fconvert.s((x87_r3_3 + fconvert.t(fconvert.d(x87_r3_2))) * result_1)
                i[9] = fconvert.s((fconvert.t(fconvert.d(x87_r2_2)) + x87_r2_4) * result_1)
                i[0xa] = fconvert.s((x87_r1_20 + fconvert.t(fconvert.d(x87_r1_2))) * result_1)
                i[0xb] = fconvert.s((fconvert.t(var_10_2)
                    + fconvert.t(fconvert.d(fconvert.t(var_10_1)))) * result_1)
                long double x87_r5_10 = fconvert.t(i_1[0x18])
                long double x87_r4_5 = fconvert.t(i_1[0x19])
                long double x87_r3_4 = fconvert.t(i_1[0x1a])
                long double x87_r2_6 = fconvert.t(i_1[0x1b])
                long double x87_r1_38 = fconvert.t(i_1[0x1c])
                double var_10_3 = fconvert.d(fconvert.t(i_1[0x1d]))
                i[0xc] = fconvert.s((x87_r5_7 + x87_r5_10) * result_1)
                i[0xd] = fconvert.s((x87_r4_5 + fconvert.t(fconvert.d(x87_r4_3))) * result_1)
                i[0xe] = fconvert.s((x87_r3_4 + fconvert.t(fconvert.d(x87_r3_3))) * result_1)
                i[0xf] = fconvert.s((fconvert.t(fconvert.d(x87_r2_4)) + x87_r2_6) * result_1)
                i[0x10] = fconvert.s((x87_r1_38 + fconvert.t(fconvert.d(x87_r1_20))) * result_1)
                i[0x11] = fconvert.s((fconvert.t(var_10_3)
                    + fconvert.t(fconvert.d(fconvert.t(var_10_2)))) * result_1)
                x87_r5_13 = fconvert.t(i_1[0x24])
                x87_r4_7 = fconvert.t(i_1[0x25])
                result_8 = fconvert.t(i_1[0x26])
                long double result_7 = fconvert.t(i_1[0x27])
                x87_r1_56 = fconvert.t(i_1[0x28])
                double var_10_4 = fconvert.d(fconvert.t(i_1[0x29]))
                i[0x12] = fconvert.s((x87_r5_10 + x87_r5_13) * result_1)
                i[0x13] = fconvert.s((x87_r4_7 + fconvert.t(fconvert.d(x87_r4_5))) * result_1)
                i[0x14] = fconvert.s((result_8 + fconvert.t(fconvert.d(x87_r3_4))) * result_1)
                i[0x15] = fconvert.s((fconvert.t(fconvert.d(x87_r2_6)) + result_7) * result_1)
                i[0x16] = fconvert.s((x87_r1_56 + fconvert.t(fconvert.d(x87_r1_38))) * result_1)
                i[0x17] = fconvert.s((fconvert.t(var_10_4)
                    + fconvert.t(fconvert.d(fconvert.t(var_10_3)))) * result_1)
                var_18 = fconvert.d(x87_r4_7)
                var_20 = fconvert.d(result_8)
                var_28 = fconvert.d(result_7)
                result_5 = result_7
                var_30 = fconvert.d(x87_r1_56)
                x87_r1_1 = fconvert.t(var_10_4)
                var_38 = fconvert.d(x87_r1_1)
                i = &i[0x18]
                i_1 = &i_1[0x30]
            while (i s< ebx - 0x48)
            
            x87_r7 = x87_r5_13
            x87_r6 = x87_r4_7
            result_4 = result_8
            long double result_3 = result_1
            result_1 = result_5
            x87_r3 = x87_r1_56
            result_6 = result_3
            x87_r2 = x87_r1_1
        
        if (i u>= ebx)
            result = result_1
        else
            void* esi = &i_1[2]
            void* edi_1 = &i[2]
            int32_t edx_8 = (ebx - i - 1) u/ 0x18 + 1
            long double result_2
            
            while (true)
                long double x87_r0_11 = fconvert.t(*(esi - 8))
                esi += 0x30
                double var_38_4 = fconvert.d(x87_r0_11)
                edi_1 += 0x18
                int32_t temp1_1 = edx_8
                edx_8 -= 1
                double var_18_4 = fconvert.d(fconvert.t(*(esi - 0x34)))
                double var_30_4 = fconvert.d(fconvert.t(*(esi - 0x30)))
                double var_28_4 = fconvert.d(fconvert.t(*(esi - 0x2c)))
                double var_20_4 = fconvert.d(fconvert.t(*(esi - 0x28)))
                double var_10_5 = fconvert.d(fconvert.t(*(esi - 0x24)))
                *(edi_1 - 0x20) = fconvert.s((x87_r7 + fconvert.t(var_38_4)) * result_6)
                long double x87_r1_92 = fconvert.t(var_18_4)
                long double x87_r6_3 = x87_r6 + x87_r1_92
                x87_r6 = x87_r1_92
                *(edi_1 - 0x1c) = fconvert.s(x87_r6_3 * result_6)
                *(edi_1 - 0x18) = fconvert.s((result_4 + fconvert.t(var_30_4)) * result_6)
                *(edi_1 - 0x14) = fconvert.s((result_1 + fconvert.t(var_28_4)) * result_6)
                *(edi_1 - 0x10) = fconvert.s((x87_r3 + fconvert.t(var_20_4)) * result_6)
                *(edi_1 - 0xc) = fconvert.s((x87_r2 + fconvert.t(var_10_5)) * result_6)
                result_2 = fconvert.t(var_30_4)
                
                if (temp1_1 == 1)
                    break
                
                x87_r7 = fconvert.t(var_38_4)
                result_4 = result_2
                result_1 = fconvert.t(var_28_4)
                x87_r3 = fconvert.t(var_20_4)
                x87_r2 = fconvert.t(var_10_5)
            
            edi = arg1
            result = result_2
    
    *(edi + 0x50) += 1
    *(edi + 0x18) = eax_3
    int32_t eax_10 = *(edi + 0x50)
    
    if (*(edi + (eax_10 << 2) + 0x28) != 0)
        (*(edi + (eax_10 << 2) + 0x28))(edi, arg2)
    
    return result
}
