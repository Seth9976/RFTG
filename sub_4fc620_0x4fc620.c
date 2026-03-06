// 函数名称: sub_4fc620
// 虚拟地址: 0x4fc620
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_4fc620(float* arg1, float* arg2, int32_t* arg3 @ esi)
{
    // 第一条实际指令: float* var_8 = arg1
    float* var_8 = arg1
    long double x87_r7 = fconvert.t(*arg1)
    long double x87_r6 = fconvert.t(arg1[2])
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 1) == 0)
        long double x87_r7_1 = fconvert.t(arg1[1])
        long double x87_r6_1 = fconvert.t(arg1[3])
        x87_r6_1 - x87_r7_1
        
        if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 1) == 0)
            fconvert.t(*arg2) - fconvert.t(*arg1)
            bool p = unimplemented  {test ah, 0x5}
            long double x87_r7_3
            
            if (p)
                x87_r7_3 = fconvert.t(*arg2)
            else
                x87_r7_3 = fconvert.t(*arg1)
            
            long double x87_r7_4 = fconvert.t(fconvert.s(x87_r7_3))
            *arg3 = fconvert.s(x87_r7_4)
            long double x87_r6_3 = fconvert.t(arg1[2])
            long double x87_r5 = fconvert.t(arg2[2])
            x87_r5 - x87_r6_3
            long double x87_r6_4
            
            if ((((x87_r5 < x87_r6_3 ? 1 : 0) << 8 | (is_unordered.t(x87_r5, x87_r6_3) ? 1 : 0) << 0xa
                    | (x87_r5 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) != 0)
                x87_r6_4 = fconvert.t(arg2[2])
            else
                x87_r6_4 = fconvert.t(arg1[2])
            
            long double x87_r6_5 = fconvert.t(fconvert.s(x87_r6_4))
            arg3[2] = fconvert.s(x87_r6_5)
            fconvert.t(arg2[1]) - fconvert.t(arg1[1])
            bool p_1 = unimplemented  {test ah, 0x5}
            long double x87_r5_2
            
            if (p_1)
                x87_r5_2 = fconvert.t(arg2[1])
            else
                x87_r5_2 = fconvert.t(arg1[1])
            
            long double x87_r5_3 = fconvert.t(fconvert.s(x87_r5_2))
            arg3[1] = fconvert.s(x87_r5_3)
            long double x87_r4_1 = fconvert.t(arg1[3])
            long double x87_r3 = fconvert.t(arg2[3])
            x87_r3 - x87_r4_1
            long double x87_r4_2
            
            if ((((x87_r3 < x87_r4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r3, x87_r4_1) ? 1 : 0) << 0xa
                    | (x87_r3 == x87_r4_1 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) != 0)
                x87_r4_2 = fconvert.t(arg2[3])
            else
                x87_r4_2 = fconvert.t(arg1[3])
            
            arg3[3] = fconvert.s(fconvert.t(fconvert.s(x87_r4_2)))
            x87_r7_4 - x87_r6_5
            
            if ((((x87_r7_4 < x87_r6_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_4, x87_r6_5) ? 1 : 0) << 0xa
                    | (x87_r7_4 == x87_r6_5 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) != 0)
                x87_r6_5 - x87_r5_3
            
            if ((((x87_r7_4 < x87_r6_5 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r7_4, x87_r6_5) ? 1 : 0) << 0xa
                    | (x87_r7_4 == x87_r6_5 ? 1 : 0) << 0xe | 0x2800):1.b & 0x41) == 0 || ((
                    (x87_r6_5 < x87_r5_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_5, x87_r5_3) ? 1 : 0) << 0xa
                    | (x87_r6_5 == x87_r5_3 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
                *arg3 = 0
                arg3[1] = 0
                arg3[2] = 0
                arg3[3] = 0
            
            return 
    
    sub_4c5870("RectIsNormalized(r0)", &data_83f3d3, "c:\ax2010\engine\Rect.cpp", 0xe9, "RectIntersect")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
