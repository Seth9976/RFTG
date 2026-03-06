// 函数名称: sub_443a00
// 虚拟地址: 0x443a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_443a00(float arg1, void* arg2)
{
    // 第一条实际指令: void var_ec
    void var_ec
    int32_t eax_1 = __security_cookie ^ &var_ec
    sub_4075c0()
    void* ebx = *(data_27e7a40 + 0x548)
    int32_t ecx = *(ebx + 0x43880)
    
    if (ecx s> 0)
        int32_t var_d8 = ecx
        int32_t* var_fc_1 = nullptr
        int32_t var_dc_1 = 0
        int32_t* var_100_1 = &var_d8
        int32_t var_e0
        int32_t* var_104_1 = &var_e0
        int32_t var_d4_1 = 1
        void* var_10c_1 = &data_be1ae0
        var_e0 = 0
        void* var_110 = arg2
        float var_90
        int32_t eax_3
        int80_t st0_1
        st0_1, eax_3 = sub_4f56d0(&var_90, var_110, var_10c_1, arg1, var_104_1, var_100_1, var_fc_1)
        int32_t eax_4 = *(ebx + 0x43880)
        float var_d0
        __builtin_memcpy(&var_d0, eax_3, 0x40)
        int32_t* var_fc_2 = nullptr
        int32_t var_dc_2 = 0
        int32_t* var_100_2 = &var_d8
        int32_t* var_104_2 = &var_e0
        var_e0 = eax_4 - 1
        void* var_10c_2 = &data_be1ae0
        var_110 = arg2
        int32_t var_50
        int32_t eax_7
        int80_t st0_2
        st0_2, eax_7 = sub_4f56d0(&var_50, var_110, var_10c_2, arg1, var_104_2, var_100_2, var_fc_2)
        float eax_8 = *(ebx + 0x43880)
        __builtin_memcpy(&var_90, eax_7, 0x40)
        int32_t var_e8_1 = 0
        
        if (eax_8 s> 0)
            void* var_e4_1 = ebx + 0x43360
            int32_t ecx_6
            
            do
                float var_cc
                long double x87_r5_2 = fconvert.t(var_cc)
                long double x87_r4_1 = fconvert.t(var_d0)
                int32_t ecx_3 = __builtin_memcpy(&var_50, &var_d0, 0x40)
                
                if (eax_8 s> 1)
                    var_d8 = eax_8 i- 1
                    var_d8 = fconvert.s(float.t(var_e8_1) / float.t(var_d8))
                    long double x87_r2_1 = fconvert.t(var_d8)
                    var_e0 = fconvert.s(x87_r4_1 + (fconvert.t(var_90) - x87_r4_1) * x87_r2_1)
                    var_50 = var_e0
                    float var_8c
                    eax_8 = fconvert.s(x87_r5_2 + x87_r2_1 * (fconvert.t(var_8c) - x87_r5_2))
                    float var_4c_1 = eax_8
                
                int32_t var_108_3 = ecx_3
                sub_4294a0(eax_8, *var_e4_1, &var_50, fconvert.s(float.t(1)), 0, 0, 0xffffffff)
                eax_8 = *(ebx + 0x43880)
                var_e4_1 += 4
                ecx_6 = var_e8_1 + 1
                var_e8_1 = ecx_6
            while (ecx_6 s< eax_8)
    
    sub_407670()
    sub_5a6aba(eax_1 ^ &var_ec)
    return 0
}
