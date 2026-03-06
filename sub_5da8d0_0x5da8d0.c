// 函数名称: sub_5da8d0
// 虚拟地址: 0x5da8d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_5da8d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, float arg6, float arg7, float arg8)
{
    // 第一条实际指令: void* eax_1 = sub_5da6a0(arg1, arg2)
    void* eax_1 = sub_5da6a0(arg1, arg2)
    
    if (eax_1 == 0)
        return 0xffffffff
    
    void* eax_3 = sub_5da720(eax_1, arg3, arg4)
    int32_t var_44
    
    if (arg5 == 0)
        if (eax_3 != 0)
            void* var_8 = nullptr
            
            if (sub_5c7830(0x701, 0xffffffff) == 1)
                float var_2c_2 = fconvert.s(fconvert.t(*(eax_3 + 8)))
                float var_28_2 = fconvert.s(fconvert.t(*(eax_3 + 0xc)))
                long double x87_r7_10 = float.t(0)
                var_44 = 0x701
                float var_24_2 = fconvert.s(x87_r7_10)
                int32_t var_3c_2 = arg1
                float var_20_2 = fconvert.s(x87_r7_10)
                int32_t var_38_2 = arg2
                int32_t var_34_2 = arg3
                float var_1c_2 = fconvert.s(fconvert.t(arg8))
                int32_t var_30_2 = arg4
                void* edx_3
                edx_3.b = sub_5c76a0(&var_44) s> 0
                var_8 = edx_3
            
            sub_5da890(eax_1, arg3, arg4)
            return var_8
    else if (eax_3 == 0 && sub_5da800(eax_1, arg3, arg4, fconvert.s(fconvert.t(arg6)), 
            fconvert.s(fconvert.t(arg7)), fconvert.s(fconvert.t(arg8))) s>= 0)
        if (sub_5c7830(0x700, 0xffffffff) != 1)
            return eax_3
        
        float var_2c_1 = fconvert.s(fconvert.t(arg6))
        float var_28_1 = fconvert.s(fconvert.t(arg7))
        int32_t var_3c_1 = arg1
        long double x87_r7_6 = float.t(0)
        float var_24_1 = fconvert.s(x87_r7_6)
        float var_20_1 = fconvert.s(x87_r7_6)
        var_44 = 0x700
        int32_t var_38_1 = arg2
        float var_1c_1 = fconvert.s(fconvert.t(arg8))
        int32_t var_34_1 = arg3
        int32_t var_30_1 = arg4
        int32_t ecx_2
        ecx_2.b = sub_5c76a0(&var_44) s> 0
        int32_t var_8_1 = ecx_2
        return ecx_2
    return 0
}
