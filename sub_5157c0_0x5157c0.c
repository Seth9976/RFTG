// 函数名称: sub_5157c0
// 虚拟地址: 0x5157c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_5157c0(float* arg1)
{
    // 第一条实际指令: float* var_8 = arg1
    float* var_8 = arg1
    float var_8_1 = fconvert.s(fconvert.t(*arg1) * fconvert.t(data_8c4d34))
    arg1[2] = fconvert.s(fconvert.t(arg1[1]))
    long double x87_r6 = fconvert.t(var_8_1)
    long double x87_r7_5 = x87_r6
    long double x87_r6_2 = fconvert.t(fconvert.s(fconvert.t(arg1[1]) + x87_r6))
    arg1[1] = fconvert.s(x87_r6_2)
    long double x87_r5_1 = float.t(0)
    x87_r5_1 - x87_r7_5
    int32_t eax
    eax.w = (x87_r5_1 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, x87_r7_5) ? 1 : 0) << 0xa
        | (x87_r5_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x2800
    bool p = unimplemented  {test ah, 0x5}
    
    if (p)
        x87_r7_5 - x87_r5_1
        eax.w = (x87_r7_5 < x87_r5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, x87_r5_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == x87_r5_1 ? 1 : 0) << 0xe | 0x2800
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            x87_r7_5 = x87_r5_1
        else
            eax = arg1[7]
            
            if (eax != 1)
                if (eax != 0)
                    sub_4c5870("Halt", &data_83f3d3, "Animation.cpp", 0x11c, "AnimSetUpdateTime")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                x87_r5_1 - x87_r6_2
                eax.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                    | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
                x87_r7_5 = x87_r5_1
                
                if ((eax:1.b & 0x41) == 0)
                    long double x87_r5_5 = float.t(1)
                    long double x87_r4_3 = fconvert.t(arg1[1])
                    bool p_2
                    
                    do
                        x87_r4_3 = x87_r4_3 + x87_r5_5
                        x87_r4_3 - x87_r6_2
                        eax.w = (x87_r4_3 < x87_r6_2 ? 1 : 0) << 8
                            | (is_unordered.t(x87_r4_3, x87_r6_2) ? 1 : 0) << 0xa
                            | (x87_r4_3 == x87_r6_2 ? 1 : 0) << 0xe | 0x2000
                        p_2 = unimplemented  {test ah, 0x5}
                    while (not(p_2))
                    x87_r6_2 = x87_r4_3
                    arg1[1] = fconvert.s(x87_r5_5)
            else
                x87_r5_1 - x87_r6_2
                eax.w = (x87_r5_1 < x87_r6_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r5_1, x87_r6_2) ? 1 : 0) << 0xa
                    | (x87_r5_1 == x87_r6_2 ? 1 : 0) << 0xe | 0x2800
                x87_r7_5 = x87_r5_1
                
                if ((eax:1.b & 1) == 0)
                    arg1[1] = fconvert.s(x87_r6_2)
    else
        eax = arg1[7]
        
        if (eax != 1)
            if (eax != 0)
                sub_4c5870("Halt", &data_83f3d3, "Animation.cpp", 0x107, "AnimSetUpdateTime")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            long double x87_r5_3 = x87_r6_2
            x87_r6_2 = x87_r5_1
            x87_r5_3 - x87_r7_5
            eax.w = (x87_r5_3 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_3, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r5_3 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax:1.b & 0x41) == 0)
                long double x87_r5_4 = float.t(1)
                long double x87_r4_1 = fconvert.t(arg1[1])
                
                do
                    x87_r4_1 = x87_r4_1 - x87_r5_4
                    x87_r4_1 - x87_r7_5
                    eax.w = (x87_r4_1 < x87_r7_5 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r4_1, x87_r7_5) ? 1 : 0) << 0xa
                        | (x87_r4_1 == x87_r7_5 ? 1 : 0) << 0xe | 0x2000
                while ((eax:1.b & 0x41) == 0)
                
                x87_r6_2 = x87_r4_1
                arg1[1] = fconvert.s(x87_r5_4)
        else
            long double x87_r5_2 = x87_r6_2
            x87_r6_2 = x87_r5_1
            x87_r5_2 - x87_r7_5
            eax.w = (x87_r5_2 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_2, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r5_2 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax:1.b & 1) == 0)
                arg1[1] = fconvert.s(x87_r7_5)
    
    long double temp1 = fconvert.t(arg1[6])
    x87_r6_2 - temp1
    eax.w = (x87_r6_2 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_2, temp1) ? 1 : 0) << 0xa
        | (x87_r6_2 == temp1 ? 1 : 0) << 0xe | 0x3000
    bool p_3 = unimplemented  {test ah, 0x5}
    
    if (p_3)
        long double temp2_1 = fconvert.t(arg1[6])
        x87_r7_5 - temp2_1
        eax.w = (x87_r7_5 < temp2_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_5, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe | 0x3800
        
        if ((eax:1.b & 0x41) != 0)
            long double temp3_1 = fconvert.t(arg1[5])
            x87_r7_5 - temp3_1
            eax.w = (x87_r7_5 < temp3_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r7_5, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe
            
            if ((eax:1.b & 1) == 0)
                eax.b = 0
                return 
        else
            long double x87_r6_9 = fconvert.t(fconvert.s(fconvert.t(arg1[5]) + fconvert.t(arg1[6])))
            arg1[5] = fconvert.s(x87_r6_9)
            x87_r6_9 - x87_r7_5
            eax.w = (x87_r6_9 < x87_r7_5 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_9, x87_r7_5) ? 1 : 0) << 0xa
                | (x87_r6_9 == x87_r7_5 ? 1 : 0) << 0xe
            bool p_4 = unimplemented  {test ah, 0x41}
            
            if (not(p_4))
                eax.b = 0
                return 
    else
        long double x87_r5_8 = fconvert.t(fconvert.s(fconvert.t(arg1[5]) + fconvert.t(arg1[6])))
        arg1[5] = fconvert.s(x87_r5_8)
        x87_r5_8 - x87_r7_5
        eax.w = (x87_r5_8 < x87_r7_5 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_8, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r5_8 == x87_r7_5 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax:1.b & 0x41) == 0)
            eax.b = 1
            arg1[5] = fconvert.s(x87_r7_5)
            arg1[6] = fconvert.s(x87_r6_2)
            return 
    
    eax.b = 1
}
