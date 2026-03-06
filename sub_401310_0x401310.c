// 函数名称: sub_401310
// 虚拟地址: 0x401310
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_401310(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t result_1 = arg1[0xa]
    int32_t result_1 = arg1[0xa]
    int32_t result = result_1
    
    if (result_1 != 0)
        int32_t result_3 = result
        result -= 1
        
        if (result_3 != 1)
            if (result != 1)
                sub_4c5870("Halt", &data_83f3d3, "..\code\Bots.cpp", 0x154, "BotUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t result_2 = *arg1
            result = result_2
            
            if (result_2 != 0)
                if (result != 1)
                    sub_4c5870("Halt", &data_83f3d3, "..\code\Bots.cpp", 0x119, "BotUpdate")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                long double x87_r7_3 =
                    fconvert.t(fconvert.s(fconvert.t(arg1[1]) - fconvert.t(data_8c4d34)))
                arg1[1] = fconvert.s(x87_r7_3)
                long double x87_r6_1 = float.t(0)
                x87_r6_1 - x87_r7_3
                result.w = (x87_r6_1 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_1, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_1 == x87_r7_3 ? 1 : 0) << 0xe
                
                if ((result:1.b & 1) == 0)
                    if (arg1[0xb1258] s<= 0)
                        uint32_t eax_7
                        int32_t edx_2
                        long double st0_2
                        st0_2, eax_7, edx_2 =
                            sub_401d50(fconvert.s(float.t(1)), fconvert.s(fconvert.t(2f)))
                        arg1[1] = fconvert.s(st0_2)
                        return sub_4c75d0(eax_7, edx_2, arg1[0xc], 0x90, 0xf425c, &arg1[0xc6275])
                    
                    if (arg1[0x32f] == 2)
                        int32_t var_c = 0
                        int32_t var_8_2 = 0
                        int32_t var_8_3 = 2
                        var_c = 0
                        int32_t edx_1
                        long double st0_1
                        st0_1, edx_1 = sub_401d50(fconvert.s(float.t(1)), fconvert.s(fconvert.t(2f)))
                        arg1[1] = fconvert.s(st0_1)
                        uint32_t eax_4 = data_27e7a40 + 0xcac
                        sub_4c75d0(eax_4, edx_1, arg1[0xc], 4, 0xf4263, eax_4)
                        return sub_405420(&var_c)
    
    return result
}
