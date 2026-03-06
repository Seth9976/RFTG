// 函数名称: sub_5fa600
// 虚拟地址: 0x5fa600
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5fa600(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* edi = arg1
    void* edi = arg1
    int32_t ebx = *(edi + 0x10)
    int32_t eax = *(edi + 0x18)
    long double x87_r7 = fconvert.t(*(ebx + eax - 4))
    float* esi = ebx + eax - 0x18
    long double result_10 = fconvert.t(esi[4])
    int32_t ecx = eax * 2
    double var_18 = fconvert.d(result_10)
    long double result_9 = fconvert.t(esi[3])
    float* i = ebx + ecx - 0x30
    double var_20 = fconvert.d(result_9)
    long double result_2 = fconvert.t(esi[2])
    double var_28 = fconvert.d(result_2)
    long double x87_r3 = fconvert.t(esi[1])
    double var_30 = fconvert.d(x87_r3)
    long double x87_r2 = fconvert.t(*esi)
    double var_38 = fconvert.d(x87_r2)
    long double result
    
    if (i u< ebx)
        result = result_2
    else
        long double result_1 = fconvert.t(0.5)
        
        if ((i - ebx + 0x30) s/ 0x30 s>= 4)
            long double result_6 = result_1
            long double result_4 = result_2
            long double x87_r1_80
            long double result_3
            long double x87_r5_19
            long double result_5
            
            do
                result_5 = result_4
                long double x87_r5_1 = fconvert.t(esi[5])
                long double x87_r4_1 = fconvert.t(esi[4])
                long double x87_r3_1 = fconvert.t(esi[3])
                long double x87_r2_2 = fconvert.t(esi[2])
                long double x87_r1_2 = fconvert.t(esi[1])
                double var_10_1 = fconvert.d(fconvert.t(*esi))
                i[0xb] = fconvert.s((result_6 + x87_r5_1) * result_5)
                i[0xa] = fconvert.s((x87_r4_1 + fconvert.t(var_18)) * result_5)
                i[9] = fconvert.s((x87_r3_1 + fconvert.t(var_20)) * result_5)
                i[8] = fconvert.s((fconvert.t(var_28) + x87_r2_2) * result_5)
                i[7] = fconvert.s((x87_r1_2 + fconvert.t(var_30)) * result_5)
                i[6] = fconvert.s((fconvert.t(var_10_1) + fconvert.t(var_38)) * result_5)
                i[5] = fconvert.s(x87_r5_1)
                i[4] = fconvert.s(x87_r4_1)
                i[3] = fconvert.s(x87_r3_1)
                i[2] = fconvert.s(x87_r2_2)
                i[1] = fconvert.s(x87_r1_2)
                long double x87_r1_20 = fconvert.t(var_10_1)
                *i = fconvert.s(x87_r1_20)
                long double x87_r5_7 = fconvert.t(esi[-1])
                long double x87_r4_4 = fconvert.t(esi[-2])
                long double x87_r3_5 = fconvert.t(esi[-3])
                long double x87_r2_9 = fconvert.t(esi[-4])
                long double x87_r1_22 = fconvert.t(esi[-5])
                double var_10_2 = fconvert.d(fconvert.t(esi[-6]))
                i[-1] = fconvert.s((x87_r5_1 + x87_r5_7) * result_5)
                i[-2] = fconvert.s((x87_r4_4 + fconvert.t(fconvert.d(x87_r4_1))) * result_5)
                i[-3] = fconvert.s((x87_r3_5 + fconvert.t(fconvert.d(x87_r3_1))) * result_5)
                i[-4] = fconvert.s((fconvert.t(fconvert.d(x87_r2_2)) + x87_r2_9) * result_5)
                i[-5] = fconvert.s((x87_r1_22 + fconvert.t(fconvert.d(x87_r1_2))) * result_5)
                i[-6] =
                    fconvert.s((fconvert.t(var_10_2) + fconvert.t(fconvert.d(x87_r1_20))) * result_5)
                i[-7] = fconvert.s(x87_r5_7)
                i[-8] = fconvert.s(x87_r4_4)
                i[-9] = fconvert.s(x87_r3_5)
                i[-0xa] = fconvert.s(x87_r2_9)
                i[-0xb] = fconvert.s(x87_r1_22)
                long double x87_r1_40 = fconvert.t(var_10_2)
                i[-0xc] = fconvert.s(x87_r1_40)
                long double x87_r5_13 = fconvert.t(esi[-7])
                long double x87_r4_7 = fconvert.t(esi[-8])
                long double x87_r3_9 = fconvert.t(esi[-9])
                long double x87_r2_16 = fconvert.t(esi[-0xa])
                long double x87_r1_42 = fconvert.t(esi[-0xb])
                double var_10_3 = fconvert.d(fconvert.t(esi[-0xc]))
                i[-0xd] = fconvert.s((x87_r5_7 + x87_r5_13) * result_5)
                i[-0xe] = fconvert.s((x87_r4_7 + fconvert.t(fconvert.d(x87_r4_4))) * result_5)
                i[-0xf] = fconvert.s((x87_r3_9 + fconvert.t(fconvert.d(x87_r3_5))) * result_5)
                i[-0x10] = fconvert.s((fconvert.t(fconvert.d(x87_r2_9)) + x87_r2_16) * result_5)
                i[-0x11] = fconvert.s((x87_r1_42 + fconvert.t(fconvert.d(x87_r1_22))) * result_5)
                i[-0x12] =
                    fconvert.s((fconvert.t(var_10_3) + fconvert.t(fconvert.d(x87_r1_40))) * result_5)
                i[-0x13] = fconvert.s(x87_r5_13)
                i[-0x14] = fconvert.s(x87_r4_7)
                i[-0x15] = fconvert.s(x87_r3_9)
                i[-0x16] = fconvert.s(x87_r2_16)
                i[-0x17] = fconvert.s(x87_r1_42)
                long double x87_r1_60 = fconvert.t(var_10_3)
                i[-0x18] = fconvert.s(x87_r1_60)
                i -= 0xc0
                x87_r5_19 = fconvert.t(esi[-0xd])
                esi -= 0x60
                long double result_8 = fconvert.t(esi[0xa])
                long double result_7 = fconvert.t(esi[9])
                result_3 = fconvert.t(esi[8])
                long double x87_r1_62 = fconvert.t(esi[7])
                double var_10_4 = fconvert.d(fconvert.t(esi[6]))
                i[0x17] = fconvert.s((x87_r5_13 + x87_r5_19) * result_5)
                i[0x16] = fconvert.s((result_8 + fconvert.t(fconvert.d(x87_r4_7))) * result_5)
                i[0x15] = fconvert.s((result_7 + fconvert.t(fconvert.d(x87_r3_9))) * result_5)
                i[0x14] = fconvert.s((fconvert.t(fconvert.d(x87_r2_16)) + result_3) * result_5)
                i[0x13] = fconvert.s((x87_r1_62 + fconvert.t(fconvert.d(x87_r1_42))) * result_5)
                i[0x12] =
                    fconvert.s((fconvert.t(var_10_4) + fconvert.t(fconvert.d(x87_r1_60))) * result_5)
                i[0x11] = fconvert.s(x87_r5_19)
                i[0x10] = fconvert.s(result_8)
                i[0xf] = fconvert.s(result_7)
                i[0xe] = fconvert.s(result_3)
                i[0xd] = fconvert.s(x87_r1_62)
                x87_r1_80 = fconvert.t(var_10_4)
                i[0xc] = fconvert.s(x87_r1_80)
                var_18 = fconvert.d(result_8)
                result_4 = result_8
                var_20 = fconvert.d(result_7)
                result_6 = result_7
                var_28 = fconvert.d(result_3)
                var_30 = fconvert.d(x87_r1_62)
                x87_r3 = x87_r1_62
                var_38 = fconvert.d(x87_r1_80)
            while (i s>= ebx + 0x90)
            
            x87_r7 = x87_r5_19
            result_9 = result_6
            result_10 = result_4
            result_2 = result_3
            result_1 = result_5
            x87_r2 = x87_r1_80
        
        if (i u< ebx)
            result = result_2
        else
            void* edi_1 = &i[0xa]
            void* esi_1 = &esi[4]
            int32_t edx_8 = (i - ebx) u/ 0x30 + 1
            
            while (true)
                long double x87_r0_12 = fconvert.t(*(esi_1 + 4))
                esi_1 -= 0x18
                double var_38_4 = fconvert.d(x87_r0_12)
                edi_1 -= 0x30
                int32_t temp1_1 = edx_8
                edx_8 -= 1
                double var_18_4 = fconvert.d(fconvert.t(*(esi_1 + 0x18)))
                double var_30_4 = fconvert.d(fconvert.t(*(esi_1 + 0x14)))
                double var_28_4 = fconvert.d(fconvert.t(*(esi_1 + 0x10)))
                double var_20_4 = fconvert.d(fconvert.t(*(esi_1 + 0xc)))
                double var_10_5 = fconvert.d(fconvert.t(*(esi_1 + 8)))
                result = result_1
                *(edi_1 + 0x34) = fconvert.s((x87_r7 + fconvert.t(var_38_4)) * result_1)
                long double result_11 = fconvert.t(var_18_4)
                *(edi_1 + 0x30) = fconvert.s((result_10 + result_11) * result)
                long double x87_r1_103 = fconvert.t(var_30_4)
                *(edi_1 + 0x2c) = fconvert.s((result_9 + x87_r1_103) * result)
                long double x87_r1_106 = fconvert.t(var_28_4)
                *(edi_1 + 0x28) = fconvert.s((result_2 + x87_r1_106) * result)
                long double x87_r1_109 = fconvert.t(var_20_4)
                *(edi_1 + 0x24) = fconvert.s((x87_r3 + x87_r1_109) * result)
                long double x87_r1_112 = fconvert.t(var_10_5)
                *(edi_1 + 0x20) = fconvert.s((x87_r2 + x87_r1_112) * result)
                long double x87_r1_115 = fconvert.t(var_38_4)
                *(edi_1 + 0x1c) = fconvert.s(x87_r1_115)
                *(edi_1 + 0x18) = fconvert.s(result_11)
                *(edi_1 + 0x14) = fconvert.s(x87_r1_103)
                *(edi_1 + 0x10) = fconvert.s(x87_r1_106)
                *(edi_1 + 0xc) = fconvert.s(x87_r1_109)
                *(edi_1 + 8) = fconvert.s(x87_r1_112)
                
                if (temp1_1 == 1)
                    break
                
                x87_r7 = x87_r1_115
                result_10 = result_11
                result_9 = fconvert.t(var_30_4)
                result_2 = fconvert.t(var_28_4)
                x87_r2 = fconvert.t(var_10_5)
                result_1 = result
                x87_r3 = fconvert.t(var_20_4)
            
            edi = arg1
    
    *(edi + 0x50) += 1
    int32_t eax_7 = *(edi + 0x50)
    *(edi + 0x18) = ecx
    
    if (*(edi + (eax_7 << 2) + 0x28) != 0)
        (*(edi + (eax_7 << 2) + 0x28))(edi, arg2)
    
    return result
}
