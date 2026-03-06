// 函数名称: sub_4fc740
// 虚拟地址: 0x4fc740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

float* __fastcallsub_4fc740(float* arg1, float* arg2, float* arg3 @ esi)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg2)
    long double x87_r7 = fconvert.t(*arg2)
    long double x87_r6 = fconvert.t(arg2[2])
    x87_r6 - x87_r7
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 1) == 0)
        long double x87_r7_1 = fconvert.t(arg2[1])
        long double x87_r6_1 = fconvert.t(arg2[3])
        x87_r6_1 - x87_r7_1
        
        if ((((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 1) == 0)
            *arg1 = *arg2
            arg1[1] = arg2[1]
            int32_t edx = arg2[3]
            arg1[2] = arg2[2]
            arg1[3] = edx
            *arg1 = fconvert.s(fconvert.t(*arg1) + fconvert.t(*arg3))
            arg1[2] = fconvert.s(fconvert.t(arg3[2]) + fconvert.t(arg1[2]))
            arg1[1] = fconvert.s(fconvert.t(arg3[1]) + fconvert.t(arg1[1]))
            arg1[3] = fconvert.s(fconvert.t(arg3[3]) + fconvert.t(arg1[3]))
            return arg1
    
    sub_4c5870("RectIsNormalized(r)", &data_83f3d3, "c:\ax2010\engine\Rect.cpp", 0xb3, "RectInflate")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_4c5a30() __tailcall
    
    breakpoint
}
