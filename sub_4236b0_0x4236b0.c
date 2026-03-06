// 函数名称: sub_4236b0
// 虚拟地址: 0x4236b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4236b0(int32_t arg1 @ edi)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = *(data_27e7a40 + 0x548)
    int32_t eax_1 = *(esi + 0x2c0a4)
    float var_8_1 = fconvert.s(fconvert.t(data_8c4d34) * fconvert.t(5.0))
    
    if (eax_1 u> 0xc)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1194, "PhaseButtonsUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t entry_ebx
    long double x87_r7_4
    
    switch (eax_1)
        case 0, 4
            return 
        case 1
            x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(*(esi + 0x2c0a8)) + fconvert.t(var_8_1)))
            *(esi + 0x2c0a8) = fconvert.s(x87_r7_4)
            long double x87_r6_1 = float.t(1)
            x87_r6_1 - x87_r7_4
            eax_1.w = (x87_r6_1 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (p_1)
                return 
            
            *(esi + 0x2c0a8) = fconvert.s(x87_r7_4)
            *(esi + 0x2c0a4) = 2
            sub_4207a0()
            sub_422d40(entry_ebx, arg1)
            return 
        case 2
            *(esi + 0x2c0a4) = 3
            sub_420050(entry_ebx, arg1)
            return 
        case 3
            int32_t var_10_3 = ecx
            
            if (sub_4218c0(entry_ebx, arg1, fconvert.s(float.t(1))) == 0)
                return 
            
            *(esi + 0x2c0a4) = 4
            return 
        case 5
            if (*(sub_418a10() + 0x1ec0) == 0xff)
                return 
            
            sub_422670(entry_ebx, arg1)
            *(esi + 0x2c0a4) = 6
            return 
        case 6
            int32_t var_10_6 = ecx
            
            if (sub_423070(entry_ebx, arg1, fconvert.s(float.t(0))) == 0)
                return 
            
            *(esi + 0x2c0a4) = 7
            return 
        case 7
            x87_r7_4 = fconvert.t(fconvert.s(fconvert.t(*(esi + 0x2c0a8)) - fconvert.t(var_8_1)))
            *(esi + 0x2c0a8) = fconvert.s(x87_r7_4)
            long double x87_r6_2 = float.t(0)
            x87_r6_2 - x87_r7_4
            eax_1.w = (x87_r6_2 < x87_r7_4 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_1:1.b & 1) != 0)
                return 
            
            *(esi + 0x2c0a8) = fconvert.s(x87_r7_4)
            ecx.b = 0
            *(esi + 0x2c0a4) = 8
            sub_41f920(entry_ebx, arg1)
            return 
        case 8
            int32_t var_10_9 = ecx
            
            if (sub_4218c0(entry_ebx, arg1, fconvert.s(float.t(1))) == 0)
                return 
            
            *(esi + 0x2c0a4) = 9
            return 
        case 9
            sub_423440(entry_ebx, arg1)
            return 
        case 0xa
            int32_t var_10_12 = ecx
            
            if (sub_4218c0(entry_ebx, arg1, fconvert.s(float.t(0))) == 0)
                return 
            
            *(esi + 0x2c0a4) = 1
            return 
        case 0xb
            sub_422260()
            return 
        case 0xc
            sub_4222a0()
            return 
}
