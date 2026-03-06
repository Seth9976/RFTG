// 函数名称: sub_5796e0
// 虚拟地址: 0x5796e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_5796e0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* esi_1 = sub_4f4890(data_273ac20)
    int32_t* esi_1 = sub_4f4890(data_273ac20)
    int32_t* var_14 = esi_1
    float var_20
    sub_4c6230(&var_20)
    data_27bc43c
    long double x87_r6 = float.t(1)
    int32_t edi_1 = esi_1[1]
    int32_t edi_2 = edi_1 - 1
    long double x87_r6_1 = fconvert.t(fconvert.s(x87_r6 / x87_r6))
    float var_1c
    float var_c_1 = fconvert.s(x87_r6_1 * fconvert.t(var_1c))
    var_20 =
        fconvert.s(fconvert.t(data_27bc440) + fconvert.t(fconvert.s(fconvert.t(var_20) * x87_r6_1)))
    long double x87_r7_8 = fconvert.t(data_27bc444)
    float var_30 = var_20
    float var_2c = fconvert.s(x87_r7_8 + fconvert.t(var_c_1))
    
    if (edi_1 - 1 s>= 0)
        int32_t ebx_2 = edi_2 * 0x118
        
        while (true)
            int32_t* esi_3 = *esi_1 + ebx_2
            
            if (esi_3[0xc].b == 0 && *(esi_3 + 0x31) == 0)
                long double x87_r6_3 = fconvert.t(fconvert.s(fconvert.t(esi_3[3])))
                long double x87_r7_15 = fconvert.t(esi_3[3])
                float var_40 =
                    fconvert.s((fconvert.t(esi_3[5]) - x87_r6_3) * fconvert.t(esi_3[0x1d]) + x87_r6_3)
                long double x87_r6_4 = fconvert.t(fconvert.s(x87_r7_15))
                var_20 =
                    fconvert.s((fconvert.t(esi_3[5]) - x87_r6_4) * fconvert.t(esi_3[0x1f]) + x87_r6_4)
                float var_38_1 = var_20
                long double x87_r6_5 = fconvert.t(fconvert.s(fconvert.t(esi_3[4])))
                float var_3c_1 =
                    fconvert.s((fconvert.t(esi_3[6]) - x87_r6_5) * fconvert.t(esi_3[0x1e]) + x87_r6_5)
                long double x87_r6_6 = fconvert.t(fconvert.s(fconvert.t(esi_3[4])))
                float var_34_1 =
                    fconvert.s((fconvert.t(esi_3[6]) - x87_r6_6) * fconvert.t(esi_3[0x20]) + x87_r6_6)
                
                if (sub_4057a0(&var_40, &var_30).b != 0)
                    *arg1 = *esi_3
                    int32_t eax_3
                    eax_3.b = 1
                    return eax_3
            
            ebx_2 -= 0x118
            int32_t temp2_1 = edi_2
            edi_2 -= 1
            
            if (temp2_1 - 1 s< 0)
                break
            
            esi_1 = var_14
    
    float eax_1
    eax_1.b = 0
    return eax_1
}
