// 函数名称: sub_4fc7d0
// 虚拟地址: 0x4fc7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4fc7d0(float* arg1, float* arg2)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(arg2[2])
    long double x87_r7 = fconvert.t(arg2[2])
    long double x87_r6 = fconvert.t(*arg1)
    x87_r6 - x87_r7
    int16_t result
    
    if ((((x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
        fconvert.t(arg1[2]) - fconvert.t(*arg2)
        bool p_1 = unimplemented  {test ah, 0x5}
        
        if (p_1)
            long double x87_r7_2 = fconvert.t(arg2[3])
            long double x87_r6_2 = fconvert.t(arg1[1])
            x87_r6_2 - x87_r7_2
            
            if ((((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe):1.b & 0x41) != 0)
                fconvert.t(arg1[3]) - fconvert.t(arg2[1])
                bool p_2 = unimplemented  {test ah, 0x5}
                
                if (p_2)
                    result.b = 1
                    return result
    
    result.b = 0
    return result
}
