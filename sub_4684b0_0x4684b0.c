// 函数名称: sub_4684b0
// 虚拟地址: 0x4684b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __fastcallsub_4684b0(float* arg1, float* arg2, float* arg3 @ esi)
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
            long double x87_r7_2 = fconvert.t(*arg1)
            long double x87_r6_2 = fconvert.t(*arg2)
            x87_r6_2 - x87_r7_2
            long double x87_r7_3
            
            if ((((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                x87_r7_3 = fconvert.t(*arg2)
            else
                x87_r7_3 = fconvert.t(*arg1)
            
            *arg3 = fconvert.s(fconvert.t(fconvert.s(x87_r7_3)))
            fconvert.t(arg2[2]) - fconvert.t(arg1[2])
            bool p = unimplemented  {test ah, 0x5}
            long double x87_r7_6
            
            if (p)
                x87_r7_6 = fconvert.t(arg2[2])
            else
                x87_r7_6 = fconvert.t(arg1[2])
            
            arg3[2] = fconvert.s(fconvert.t(fconvert.s(x87_r7_6)))
            long double x87_r7_8 = fconvert.t(arg1[1])
            long double x87_r6_4 = fconvert.t(arg2[1])
            x87_r6_4 - x87_r7_8
            long double x87_r7_9
            
            if ((((x87_r6_4 < x87_r7_8 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_4, x87_r7_8) ? 1 : 0) << 0xa
                    | (x87_r6_4 == x87_r7_8 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                x87_r7_9 = fconvert.t(arg2[1])
            else
                x87_r7_9 = fconvert.t(arg1[1])
            
            arg3[1] = fconvert.s(fconvert.t(fconvert.s(x87_r7_9)))
            fconvert.t(arg2[3]) - fconvert.t(arg1[3])
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (p_1)
                arg3[3] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg2[3]))))
                return arg3
            
            arg3[3] = fconvert.s(fconvert.t(fconvert.s(fconvert.t(arg1[3]))))
            return arg3
    
    sub_4c5870("RectIsNormalized(r0)", &data_83f3d3, "c:\ax2010\engine\Rect.cpp", 0xdb, "RectUnion")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
