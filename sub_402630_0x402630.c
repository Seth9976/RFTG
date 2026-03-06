// 函数名称: sub_402630
// 虚拟地址: 0x402630
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_402630(char arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    long double x87_r7_2 = float.t(0)
    long double x87_r6 = fconvert.t(fconvert.s(fconvert.t(data_8c4d34) * fconvert.t(1000.0)))
    x87_r6 - x87_r7_2
    int32_t eax
    eax.w = (x87_r6 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    bool p = unimplemented  {test ah, 0x5}
    long double x87_r6_1
    
    if (p)
        x87_r6_1 = x87_r6 + fconvert.t(0.5)
    else
        x87_r6_1 = x87_r6 - fconvert.t(0.5)
    
    int32_t eax_1 = sub_685f40(x87_r6_1)
    int32_t edx_1 = data_27c05d8 + eax_1
    bool cond:0 = data_27e7a54[0x14].b != 0
    data_27c05d8 = edx_1
    
    if (cond:0)
        return 
    
    void* ecx_1 = data_27e7a40
    
    if (*(ecx_1 + 0x20) == 2 && *(ecx_1 + 0x28) == *(ecx_1 + 0x30) && edx_1 - *(ecx_1 + 0x34) s> 0x3a98)
        sub_402510(1)
        x87_r7_2 = float.t(0)
        ecx_1 = data_27e7a40
    
    long double x87_r6_4 = fconvert.t(fconvert.s(fconvert.t(data_8c873c) - fconvert.t(data_8c4d34)))
    x87_r6_4 - x87_r7_2
    int32_t* eax_2
    eax_2.w = (x87_r6_4 < x87_r7_2 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_4, x87_r7_2) ? 1 : 0) << 0xa
        | (x87_r6_4 == x87_r7_2 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_2:1.b & 0x41) == 0)
        data_8c873c = fconvert.s(x87_r7_2)
        return 
    
    data_8c873c = fconvert.s(x87_r6_4)
    int32_t eax_3 = *(ecx_1 + 0x20)
    
    if (eax_3 == 0)
        int32_t eax_4 = *(ecx_1 + 0x24)
        
        if (eax_4 u> 8)
            sub_4c5870("Halt", &data_83f3d3, "..\code\CardNet.cpp", 0x30b, "CClientKeepConnected")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        switch (eax_4)
            case 0, 1, 2, 3
                sub_4022e0()
                data_8c873c = fconvert.s(float.t(1))
            case 5
                sub_4c8da0(*(ecx_1 + 0x28))
            case 6, 7
                sub_4022e0()
                data_8c873c = fconvert.s(fconvert.t(15f))
            case 8
                sub_4c5870("Halt", &data_83f3d3, "..\code\CardNet.cpp", 0x2f4, "CClientKeepConnected")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
    else if (eax_3 == 2)
        sub_4023f0(arg1)
}
