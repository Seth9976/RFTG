// 函数名称: sub_5775c0
// 虚拟地址: 0x5775c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_5775c0()
{
    // 第一条实际指令: if (data_273bc2c != 1 || (0x8000 & GetKeyState(0x11)) != 0 || (0x8000 & GetKeyState(0x12)) != 0)
    if (data_273bc2c != 1 || (0x8000 & GetKeyState(0x11)) != 0 || (0x8000 & GetKeyState(0x12)) != 0)
        return 
    
    int32_t* eax_3 = sub_4f4890(data_273ac20)
    float var_14
    sub_4c6230(&var_14)
    data_27bc43c
    long double x87_r6_1 = float.t(1)
    int32_t edi_2 = data_273ac2c
    long double x87_r6_2 = fconvert.t(fconvert.s(x87_r6_1 / x87_r6_1))
    float var_c = fconvert.s(fconvert.t(var_14) * x87_r6_2)
    float var_10
    float var_8_2 = fconvert.s(x87_r6_2 * fconvert.t(var_10))
    var_14 = fconvert.s(fconvert.t(data_27bc440) + fconvert.t(var_c))
    long double x87_r7_9 = fconvert.t(data_27bc444)
    var_c = var_14
    float var_8_3 = fconvert.s(x87_r7_9 + fconvert.t(var_8_2))
    int32_t eax_5 = sub_575bb0(edi_2)
    int32_t esi_3 = eax_5 - 1
    
    if (eax_5 - 1 s>= 0)
        int32_t edi_4 = esi_3 * 0x118
        int32_t temp2_1
        
        do
            int32_t eax_6 = *eax_3
            
            if (*(eax_6 + edi_4 + 0x30) == 0 && *(eax_6 + edi_4 + 0x31) == 0
                    && sub_4057a0(eax_6 + edi_4 + 0xc, &var_c) != 0)
                if (esi_3 == 0xffffffff)
                    break
                
                data_273ac2c = *(esi_3 * 0x118 + *eax_3)
                sub_57c6a0()
                return 
            
            edi_4 -= 0x118
            temp2_1 = esi_3
            esi_3 -= 1
        while (temp2_1 - 1 s>= 0)
    
    data_273bc2c = 0
    sub_57c6a0()
    sub_57c6a0()
}
