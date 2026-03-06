// 函数名称: sub_4057a0
// 虚拟地址: 0x4057a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4057a0(float* arg1, float* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg1)
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
            int16_t result
            
            if ((((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 1) == 0)
                long double x87_r7_3 = fconvert.t(arg1[1])
                long double x87_r6_3 = fconvert.t(arg2[1])
                x87_r6_3 - x87_r7_3
                
                if ((((x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe):1.b & 1) == 0)
                    fconvert.t(*arg2) - fconvert.t(arg1[2])
                    bool p_1 = unimplemented  {test ah, 0x41}
                    
                    if (not(p_1))
                        fconvert.t(arg2[1]) - fconvert.t(arg1[3])
                        bool p_2 = unimplemented  {test ah, 0x41}
                        
                        if (not(p_2))
                            result.b = 1
                            return result
            
            result.b = 0
            return result
    
    sub_4c5870("RectIsNormalized(r)", &data_83f3d3, "c:\ax2010\engine\Rect.cpp", 0xa4, "RectContains")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
