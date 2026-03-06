// 函数名称: sub_401210
// 虚拟地址: 0x401210
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

floatsub_401210()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = sub_401190(data_27e7a40)
    
    if (*(eax_2 + 0x2c4960) == 0)
        void* ecx_1 = *(eax_2 + 0x528)
        *(eax_2 + 0x318a1c) = 0
        *(eax_2 + 0x318a14) = 2
        *(eax_2 + 0x318a20) = 0
        *(eax_2 + 0x318a24) = 1
        *(eax_2 + 0x318a30) = 1
        *(eax_2 + 0x318a3c) = 0
        *(eax_2 + 0x318a48) = 0
        void* ecx_2 = *(ecx_1 + 4)
        
        if (ecx_2 != 0)
            int32_t** edx_1 = data_27e7bb8
            uint32_t eax_3 = zx.d(ecx_2.w)
            
            if (eax_3 u< edx_1[1])
                void* eax_5 = &(*edx_1)[eax_3 * 0x13]
                
                if (*(eax_5 + 0x48) == ecx_2)
                    int32_t var_14
                    int32_t* var_28_1 = &var_14
                    void* var_2c_1 = eax_5 + 0x3c
                    int32_t var_10_1 = 0x90
                    int32_t var_c_1 = 0xf425c
                    var_14 = 0xfeedface
                    void* ecx_3
                    int32_t** edx_2
                    ecx_3, edx_2 = sub_4c72b0(0xc, edx_1, ecx_2)
                    void* var_30_1 = eax_2 + 0x3189d4
                    void* var_34_1 = eax_5 + 0x3c
                    sub_4c72b0(0x90, edx_2, ecx_3)
    
    *eax_2 = 1
    float result = (sub_4c95c0() & 0x7fffff) | 0x3f800000
    long double x87_r6 = float.t(1)
    *(eax_2 + 4) = fconvert.s(x87_r6 + fconvert.t(fconvert.s(fconvert.t(result) - x87_r6)))
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
