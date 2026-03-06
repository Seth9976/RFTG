// 函数名称: sub_4f3e80
// 虚拟地址: 0x4f3e80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_4f3e80(float* arg1)
{
    // 第一条实际指令: long double x87_r7 = fconvert.t(*arg1)
    long double x87_r7 = fconvert.t(*arg1)
    long double x87_r6 = fconvert.t(data_be4c5c)
    x87_r6 - x87_r7
    int32_t result
    result.w = (x87_r6 < x87_r7 ? 1 : 0) << 8 | (is_unordered.t(x87_r6, x87_r7) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7 ? 1 : 0) << 0xe
    bool p = unimplemented  {test ah, 0x44}
    
    if (not(p))
        long double x87_r7_1 = fconvert.t(arg1[5])
        long double x87_r6_1 = fconvert.t(data_be4c70)
        x87_r6_1 - x87_r7_1
        result.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
        bool p_1 = unimplemented  {test ah, 0x44}
        
        if (not(p_1))
            long double x87_r7_2 = fconvert.t(arg1[6])
            long double x87_r6_2 = fconvert.t(data_be4c74)
            x87_r6_2 - x87_r7_2
            result.w = (x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
                long double x87_r7_3 = fconvert.t(arg1[7])
                long double x87_r6_3 = fconvert.t(data_be4c78)
                x87_r6_3 - x87_r7_3
                result.w = (x87_r6_3 < x87_r7_3 ? 1 : 0) << 8
                    | (is_unordered.t(x87_r6_3, x87_r7_3) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_3 ? 1 : 0) << 0xe
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (not(p_3))
                    return sub_4e3b20(0xbe4c60, &arg1[1]) != 0
    
    result.b = 1
    return result
}
