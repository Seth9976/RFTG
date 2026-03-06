// 函数名称: sub_64fea0
// 虚拟地址: 0x64fea0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_64fea0(long double arg1 @ st0, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t* ebx = arg2[1]
    int32_t i_1 = *arg2
    int32_t i_2 = i_1
    long double x87_r5 = float.t(1)
    int32_t mxcsr
    int16_t x87control
    int32_t result = sub_685f40(sub_686950(mxcsr, 
        sub_686c10(mxcsr, x87control, x87_r5 / x87_r5, float.t(ebx)), fconvert.d(arg1)))
    int32_t esi = result + 1
    int32_t* ebx_1 = ebx
    
    while (true)
        int32_t ecx_1 = 1
        int32_t edx_1 = 1
        
        if (i_1 s> 0)
            int32_t i
            
            do
                ecx_1 *= result
                edx_1 *= esi
                i = i_1
                i_1 -= 1
            while (i != 1)
            ebx_1 = ebx
            i_1 = i_2
        
        if (ecx_1 s> ebx_1)
            result -= 1
            esi -= 1
        else
            if (edx_1 s> ebx_1)
                break
            
            result += 1
            esi += 1
    
    return result
}
