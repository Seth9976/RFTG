// 函数名称: sub_4bb6f0
// 虚拟地址: 0x4bb6f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4bb6f0(void* arg1, float* arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    fconvert.t(*(arg1 + 0x2a0)) - fconvert.t(*arg2)
    bool p = unimplemented  {test ah, 0x41}
    
    if (not(p))
        long double x87_r7_1 = fconvert.t(*arg2)
        long double x87_r6_3 =
            fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x2a8)) + fconvert.t(*(arg1 + 0x2a0))))
        x87_r6_3 - x87_r7_1
        
        if ((((x87_r6_3 < x87_r7_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_3, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_3 == x87_r7_1 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
            fconvert.t(*(arg1 + 0x2a4)) - fconvert.t(arg2[1])
            bool p_1 = unimplemented  {test ah, 0x41}
            
            if (not(p_1))
                long double x87_r7_3 = fconvert.t(arg2[1])
                long double x87_r6_7 =
                    fconvert.t(fconvert.s(fconvert.t(*(arg1 + 0x2ac)) + fconvert.t(*(arg1 + 0x2a4))))
                x87_r6_7 - x87_r7_3
                
                if ((((x87_r6_7 < x87_r7_3 ? 1 : 0) << 8
                        | (is_unordered.t(x87_r6_7, x87_r7_3) ? 1 : 0) << 0xa
                        | (x87_r6_7 == x87_r7_3 ? 1 : 0) << 0xe):1.b & 0x41) == 0)
                    return 2
    
    return 0
}
