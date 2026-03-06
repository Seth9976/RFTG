// 函数名称: sub_4f5f30
// 虚拟地址: 0x4f5f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4f5f30(int32_t* arg1, int32_t arg2, int32_t arg3, float arg4)
{
    // 第一条实际指令: int32_t* eax
    int32_t* eax
    int32_t edx
    eax, edx = sub_4f4890(arg1)
    int32_t* ecx = nullptr
    int32_t* var_10 = eax
    int32_t var_8 = 0
    
    if (eax[1] s<= 0)
        return 
    
    int32_t var_c_1 = 0
    
    while (true)
        float* eax_2 = *eax + var_c_1
        int32_t var_a8_1 = arg2
        int32_t* var_ac_1 = ecx
        int32_t eax_5
        eax_5, edx = sub_4f62d0(var_8, fconvert.s(fconvert.t(arg4)), edx)
        void var_54
        __builtin_memcpy(&var_54, eax_5, 0x40)
        
        if (eax_2[0xc].b == 0)
            if (eax_2[1] == 1)
                int32_t eax_6 = eax_2[0xb]
                int80_t st0_1
                
                if (eax_6 == 0 || (arg3 & eax_6) != 0)
                    st0_1, edx = sub_4f67d0(eax_6, nullptr, nullptr, eax_2, &data_be1ae0, &var_54, 
                        nullptr, nullptr)
            
            if (eax_2[1] == 3)
                int32_t eax_7
                
                if (arg3 != 0xffffffff)
                    eax_7 = eax_2[0xb]
                
                if (arg3 == 0xffffffff || (arg3 & eax_7) != 0 || eax_7 == 0xffffffff)
                    edx = sub_4f5010(&var_54, eax_2, eax_2[0x2c], 0)
        
        ecx = var_10
        var_c_1 += 0x118
        int32_t eax_9 = var_8 + 1
        var_8 = eax_9
        
        if (eax_9 s>= ecx[1])
            break
        
        eax = ecx
}
