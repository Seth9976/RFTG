// 函数名称: sub_5f9d90
// 虚拟地址: 0x5f9d90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

long doublesub_5f9d90(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* eax = *(arg1 + 0x18)
    void* eax = *(arg1 + 0x18)
    int32_t edi = *(arg1 + 0x10)
    long double result = fconvert.t(*(edi + eax - 4))
    float* esi = edi + eax - 0x10
    long double x87_r6 = fconvert.t(esi[2])
    void* ecx = eax * 2
    long double result_6 = fconvert.t(esi[1])
    double var_c = fconvert.d(result_6)
    float* i = edi + ecx - 0x20
    long double x87_r4 = fconvert.t(*esi)
    double var_14 = fconvert.d(x87_r4)
    
    if (i u>= edi)
        long double x87_r3_1 = fconvert.t(0.5)
        int32_t eax_4
        int32_t edx_1
        edx_1:eax_4 = sx.q(i - edi + 0x20)
        
        if ((eax_4 + (edx_1 & 0x1f)) s>> 5 s>= 4)
            x87_r6 = x87_r3_1
            long double x87_r5 = x87_r4
            long double x87_r1_13
            long double result_5
            
            do
                long double x87_r4_2 = fconvert.t(esi[3])
                long double x87_r3_3 = fconvert.t(esi[2])
                long double x87_r2_1 = fconvert.t(esi[1])
                long double x87_r1_1 = fconvert.t(*esi)
                i[7] = fconvert.s((result + x87_r4_2) * x87_r5)
                i[6] = fconvert.s((x87_r6 + x87_r3_3) * x87_r5)
                i[5] = fconvert.s((x87_r2_1 + fconvert.t(var_c)) * x87_r5)
                i[4] = fconvert.s((x87_r1_1 + fconvert.t(var_14)) * x87_r5)
                i[3] = fconvert.s(x87_r4_2)
                i[2] = fconvert.s(x87_r3_3)
                i[1] = fconvert.s(x87_r2_1)
                *i = fconvert.s(x87_r1_1)
                long double x87_r4_6 = fconvert.t(esi[-1])
                long double x87_r3_9 = fconvert.t(esi[-2])
                long double x87_r2_10 = fconvert.t(esi[-3])
                long double x87_r1_5 = fconvert.t(esi[-4])
                i[-1] = fconvert.s((x87_r4_2 + x87_r4_6) * x87_r5)
                i[-2] = fconvert.s((x87_r3_3 + x87_r3_9) * x87_r5)
                i[-3] = fconvert.s((x87_r2_10 + fconvert.t(fconvert.d(x87_r2_1))) * x87_r5)
                i[-4] = fconvert.s((x87_r1_5 + fconvert.t(fconvert.d(x87_r1_1))) * x87_r5)
                i[-5] = fconvert.s(x87_r4_6)
                i[-6] = fconvert.s(x87_r3_9)
                i[-7] = fconvert.s(x87_r2_10)
                i[-8] = fconvert.s(x87_r1_5)
                long double x87_r4_10 = fconvert.t(esi[-5])
                long double x87_r3_15 = fconvert.t(esi[-6])
                long double x87_r2_19 = fconvert.t(esi[-7])
                long double x87_r1_9 = fconvert.t(esi[-8])
                i[-9] = fconvert.s((x87_r4_6 + x87_r4_10) * x87_r5)
                i[-0xa] = fconvert.s((x87_r3_9 + x87_r3_15) * x87_r5)
                i = &i[-0x20]
                esi -= 0x40
                i[0x15] = fconvert.s((x87_r2_19 + fconvert.t(fconvert.d(x87_r2_10))) * x87_r5)
                i[0x14] = fconvert.s((x87_r1_9 + fconvert.t(fconvert.d(x87_r1_5))) * x87_r5)
                i[0x13] = fconvert.s(x87_r4_10)
                i[0x12] = fconvert.s(x87_r3_15)
                i[0x11] = fconvert.s(x87_r2_19)
                i[0x10] = fconvert.s(x87_r1_9)
                result_5 = fconvert.t(esi[7])
                long double x87_r3_21 = fconvert.t(esi[6])
                long double result_1 = fconvert.t(esi[5])
                x87_r1_13 = fconvert.t(esi[4])
                i[0xf] = fconvert.s((x87_r4_10 + result_5) * x87_r5)
                i[0xe] = fconvert.s((x87_r3_15 + x87_r3_21) * x87_r5)
                i[0xd] = fconvert.s((result_1 + fconvert.t(fconvert.d(x87_r2_19))) * x87_r5)
                i[0xc] = fconvert.s((x87_r1_13 + fconvert.t(fconvert.d(x87_r1_9))) * x87_r5)
                i[0xb] = fconvert.s(result_5)
                i[0xa] = fconvert.s(x87_r3_21)
                x87_r6 = x87_r3_21
                i[9] = fconvert.s(result_1)
                i[8] = fconvert.s(x87_r1_13)
                var_c = fconvert.d(result_1)
                result = result_1
                var_14 = fconvert.d(x87_r1_13)
            while (i s>= edi + 0x60)
            
            x87_r4 = x87_r1_13
            long double result_4 = result
            result = result_5
            x87_r3_1 = x87_r5
            result_6 = result_4
        
        if (i u>= edi)
            void* eax_8 = &i[6]
            void* edx_3 = &esi[2]
            int32_t ecx_3 = ((i - edi) u>> 5) + 1
            long double result_3
            
            while (true)
                long double result_2 = fconvert.t(*(edx_3 + 4))
                edx_3 -= 0x10
                long double x87_r1_17 = fconvert.t(*(edx_3 + 0x10))
                eax_8 -= 0x20
                int32_t temp1_1 = ecx_3
                ecx_3 -= 1
                double var_c_4 = fconvert.d(fconvert.t(*(edx_3 + 0xc)))
                double var_14_4 = fconvert.d(fconvert.t(*(edx_3 + 8)))
                *(eax_8 + 0x24) = fconvert.s((result + result_2) * x87_r3_1)
                *(eax_8 + 0x20) = fconvert.s((x87_r6 + x87_r1_17) * x87_r3_1)
                result_3 = fconvert.t(var_c_4)
                *(eax_8 + 0x1c) = fconvert.s((result_6 + result_3) * x87_r3_1)
                long double x87_r2_40 = fconvert.t(var_14_4)
                *(eax_8 + 0x18) = fconvert.s((x87_r4 + x87_r2_40) * x87_r3_1)
                *(eax_8 + 0x14) = fconvert.s(result_2)
                result = result_2
                *(eax_8 + 0x10) = fconvert.s(x87_r1_17)
                *(eax_8 + 0xc) = fconvert.s(result_3)
                *(eax_8 + 8) = fconvert.s(x87_r2_40)
                
                if (temp1_1 == 1)
                    break
                
                x87_r6 = x87_r1_17
                result_6 = result_3
                x87_r4 = fconvert.t(var_14_4)
            
            result = result_3
    
    *(arg1 + 0x50) += 1
    *(arg1 + 0x18) = ecx
    int32_t eax_10 = *(arg1 + 0x50)
    
    if (*(arg1 + (eax_10 << 2) + 0x28) != 0)
        (*(arg1 + (eax_10 << 2) + 0x28))(arg1, arg2)
    
    return result
}
